#include "field.h"
#include "item.h"
#include <QJsonArray>

Field::Field()
{
}

void Field::Read(QJsonObject &json)
{
   this->Id = json["id"].toString();
   this->FieldRight = json["right"].toString();
   this->FieldLeft = json["left"].toString();
   this->FieldForward = json["forward"].toString();
   this->FieldBackward = json["backward"].toString();
   this->Description = json["description"].toString();
   this->IsDiscovered = json["discovered"].toBool();

   if(!json["savePoint"].isNull()) {
       this->HasSavePoint = true;
       this->mSavePoint.fieldId = this->Id;
       this->mSavePoint.Name = json["savePoint"].toString();
       qDebug() << "read savepoint";
   }

   QJsonArray itemArray = json["items"].toArray();
   for(int i=0; i<itemArray.size(); i++)
   {
           QJsonObject itemObject = itemArray[i].toObject();
           Item item; //TODO: Muss die Instanz hier wieder zerstört werden?
           item.Read(itemObject);
           Items.append(item);
   }
}

void Field::Write(QJsonObject &json)
{
    json["id"] = this->Id;
    json["forward"] = this->FieldForward;
    json["backward"] = this->FieldBackward;
    json["left"] = this->FieldLeft;
    json["right"] = this->FieldRight;
    json["description"] = this->Description;
    json["savePoint"] = this->mSavePoint.Name;

    QJsonArray itemArray;

    for(Item &item : this->Items) // TODO: implement this elegant way into your other methods as well
    {
       QJsonObject itemObject;
       item.Write(itemObject);
       itemArray.append(itemObject);
    }

    json["items"] = itemArray;
}

bool Field::HasItem(QString itemName)
{
    for(int i=0; i<Items.length(); i++) {
        if(Items[i].Name == itemName)
            return true;
    }
    return false;
}
