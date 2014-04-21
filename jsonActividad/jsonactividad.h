#ifndef JSONACTIVIDAD_H
#define JSONACTIVIDAD_H

#include "jsonactividad_global.h"
#include <QObject>
#include <QDate>
#include <QTime>
#include <QJsonArray>
#include <QJsonObject>
#include <QVariant>

/*!
 * Actividad generada a partir de una entrada JSON
 */

class JSONACTIVIDADSHARED_EXPORT JSONActividad : public QObject
{
    Q_OBJECT
public:
    JSONActividad(QObject *parent=0);

    //Getter
    int getUID() const
    { return _uid; }

    QString getActividad() const
    { return _actividad; }

    QString getResponsabe() const
    { return _responsable; }

    QString getAsociacion() const
    { return _asociacion; }

    QString getCorreo() const
    { return _correo; }

    QString getCoorganizador() const
    { return _coorganizador; }

    QString getMaterialPropio() const
    { return _matPropio; }

    QString _getMaterialOrganizacion() const
    { return _matOrganizacion; }

    QString getNecesidadesEspacio() const
    { return _nEspacio; }

    bool todasJornadas() const
    { return _todaJornadas; }

    QDate getDiaActividad() const
    { return _dia; }

    QTime getHoraInicio() const
    { return _horaInicio; }

    QTime getHoraFin() const
    { return _horaFin; }

    int getMaximoParticipantes() const
    { return _maximoParticipantes; }

    int getMinimoParticipantes() const
    { return _minimoParticipantes; }

    QString getTipoActividad() const
    { return _tipoAct; }

    QString getDescripcion() const
    { return _descripcion; }

    QString getRequisitos() const
    { return _requisitos; }

    QString getObservaciones() const
    { return _observaciones; }

    QString getLugar() const
    { return _lugar; }

    /*!
      Devuelve una representacion del objeto en formato JSON
      */

    QJsonObject toJsonObject();

    /*!
      Genera un objeto JsonActividad a partir de un objeto JSON
      */

    static JSONActividad *fromJsonObject(QJsonObject obj);

public slots:

    //Setters

    void setUID(int uid)
    { _uid=uid; }

    void setActividad(QString a)
    { _actividad=a; }

    void setAsociacion(QString a)
    { _asociacion=a; }

    void setResponsable(QString r)
    { _responsable=r; }

    void setCorreo(QString correo)
    { _correo=correo; }

    void setCoorganizador(QString c)
    { _coorganizador=c; }

    void setMaterialPropio(QString m)
    { _matPropio=m; }

    void setMaterialOrganizacion(QString m)
    { _matOrganizacion=m; }

    void setNecesidadesEspacio(QString n)
    { _nEspacio=n; }

    void setTodasJornadas(bool state)
    { _todaJornadas=state; }

    void setDia(QDate d)
    { _dia=d; }

    void setHoraInicio(QTime hInic)
    { _horaInicio=hInic; }

    void setHoraFin(QTime hFin)
    { _horaFin=hFin; }

    void setMaximoParticipantes(int num)
    { _maximoParticipantes=num; }

    void setMinimoParticipantes(int num)
    { _minimoParticipantes=num; }

    void setTipoActividad(QString tipo)
    { _tipoAct=tipo; }

    void setDescripcion(QString desc)
    { _descripcion=desc; }

    void setRequisitos(QString req)
    { _requisitos=req; }

    void setObservaciones(QString ob)
    { _observaciones=ob; }

    void setLugar(QString l)
    { _lugar=l; }

private:
    unsigned int _uid;
    QString _actividad;
    QString _asociacion;
    QString _responsable;
    QString _correo;
    QString _coorganizador;
    QString _matPropio;
    QString _matOrganizacion;
    QString _nEspacio;
    bool _todaJornadas;
    QDate _dia;
    QTime _horaInicio;
    QTime _horaFin;
    int _maximoParticipantes;
    int _minimoParticipantes;
    QString _tipoAct;
    QString _descripcion;
    QString _requisitos;
    QString _observaciones;
    QString _lugar;

};

#endif // JSONACTIVIDAD_H
