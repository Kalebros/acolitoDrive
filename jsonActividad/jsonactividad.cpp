/***************************************************************/
//AcolitoDrive, Programa para pre-procesar listas de datos
//antes de incluirlos en MyAcolito
//
//Copyright (C) 2014,  Antonio Ramírez Marti (morgulero@gmail.com)
//
//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.
/***************************************************************/

#include "jsonactividad.h"

JSONActividad::JSONActividad(QObject *parent)
    : QObject(parent)
{
}

JSONActividad *JSONActividad::fromJsonObject(QJsonObject obj)
{
    return 0;
}

QJsonObject JSONActividad::toJsonObject()
{
    return QJsonObject();
}
