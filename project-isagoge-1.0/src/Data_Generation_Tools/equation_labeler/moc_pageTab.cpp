/****************************************************************************
** Meta object code from reading C++ file 'pageTab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/pageTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pageTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      26,    8,    8,    8, 0x0a,
      42,    8,    8,    8, 0x0a,
      54,    8,    8,    8, 0x0a,
      65,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pageTab[] = {
    "pageTab\0\0setImage(string)\0setText(string)\0"
    "viewImage()\0viewText()\0viewDual()\0"
};

void pageTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pageTab *_t = static_cast<pageTab *>(_o);
        switch (_id) {
        case 0: _t->setImage((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: _t->setText((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 2: _t->viewImage(); break;
        case 3: _t->viewText(); break;
        case 4: _t->viewDual(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pageTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pageTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pageTab,
      qt_meta_data_pageTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pageTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pageTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pageTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pageTab))
        return static_cast<void*>(const_cast< pageTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int pageTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
