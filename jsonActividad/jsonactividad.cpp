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
    JSONActividad *res=new JSONActividad;

    res->setActividad(obj.value("nombre").toString());
    res->setAsociacion(obj.value("asociacion").toString());
    res->setResponsable(obj.value("responsable").toString());
    res->setCoorganizador(obj.value("coorganizadores").toString());
    res->setCorreo(obj.value("correo").toString());
    res->setRequisitos(obj.value("requisitos").toString());
    res->setMaterialPropio(obj.value("mpropio").toString());
    res->setMaterialOrganizacion(obj.value("morg").toString());
    res->setTipoActividad(obj.value("tipoActividad").toString());
    res->setDia(obj.value("fecha").toVariant().toDate());
    res->setNecesidadesEspacio(obj.value("espacio").toString());
    res->setHoraInicio(obj.value("inicio").toVariant().toTime());
    res->setHoraFin(obj.value("fin").toVariant().toTime());
    res->setTodasJornadas(obj.value("allJornada").toBool());
    res->setObservaciones(obj.value("observaciones").toString());
    res->setMaximoParticipantes(obj.value("maxParticipantes").toInt());
    res->setMinimoParticipantes(obj.value("minParticipantes").toInt());
    res->setDescripcion(obj.value("descripcion").toString());
    res->setLugar(obj.value("lugar").toString());

    return res;
}

QJsonObject JSONActividad::toJsonObject()
{
    QJsonObject res;
    res.insert("nombre",_actividad);
    res.insert("asociacion",_asociacion);
    res.insert("responsable",_responsable);
    res.insert("coorganizadores",_coorganizador);
    res.insert("correo",_correo);
    res.insert("requisitos",_requisitos);
    res.insert("mpropio",_matPropio);
    res.insert("morg",_matOrganizacion);
    res.insert("tipoActividad",_tipoAct);
    res.insert("fecha",_dia.toString("dd/MM/yyyy"));
    res.insert("espacio",_nEspacio);
    res.insert("inicio",_horaInicio.toString("hh:mm"));
    res.insert("fin",_horaFin.toString("hh:mm"));
    res.insert("allJornada",_todaJornadas);
    res.insert("observaciones",_observaciones);
    res.insert("maxParticipantes",_maximoParticipantes);
    res.insert("minParticipante",_minimoParticipantes);
    res.insert("descripcion",_descripcion);
    res.insert("lugar",_lugar);

    return res;
}
