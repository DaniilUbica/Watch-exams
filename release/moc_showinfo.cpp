/****************************************************************************
** Meta object code from reading C++ file 'showinfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../showinfo.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_ShowInfo_t {
    uint offsetsAndSizes[22];
    char stringdata0[9];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[34];
    char stringdata5[29];
    char stringdata6[10];
    char stringdata7[30];
    char stringdata8[9];
    char stringdata9[7];
    char stringdata10[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ShowInfo_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ShowInfo_t qt_meta_stringdata_ShowInfo = {
    {
        QT_MOC_LITERAL(0, 8),  // "ShowInfo"
        QT_MOC_LITERAL(9, 25),  // "on_pushLookButton_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 31),  // "on_pushWatchMarksButton_clicked"
        QT_MOC_LITERAL(68, 33),  // "on_pushWatchSubjectButton_cli..."
        QT_MOC_LITERAL(102, 28),  // "on_pushWatchIDButton_clicked"
        QT_MOC_LITERAL(131, 9),  // "printInfo"
        QT_MOC_LITERAL(141, 29),  // "QList<std::shared_ptr<Exams>>"
        QT_MOC_LITERAL(171, 8),  // "readFile"
        QT_MOC_LITERAL(180, 6),  // "QFile*"
        QT_MOC_LITERAL(187, 4)   // "file"
    },
    "ShowInfo",
    "on_pushLookButton_clicked",
    "",
    "on_pushWatchMarksButton_clicked",
    "on_pushWatchSubjectButton_clicked",
    "on_pushWatchIDButton_clicked",
    "printInfo",
    "QList<std::shared_ptr<Exams>>",
    "readFile",
    "QFile*",
    "file"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ShowInfo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    1,   54,    2, 0x08,    5 /* Private */,
       8,    1,   57,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject ShowInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ShowInfo.offsetsAndSizes,
    qt_meta_data_ShowInfo,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ShowInfo_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShowInfo, std::true_type>,
        // method 'on_pushLookButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushWatchMarksButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushWatchSubjectButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushWatchIDButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'printInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<std::shared_ptr<Exams>>, std::false_type>,
        // method 'readFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFile *, std::false_type>
    >,
    nullptr
} };

void ShowInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShowInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushLookButton_clicked(); break;
        case 1: _t->on_pushWatchMarksButton_clicked(); break;
        case 2: _t->on_pushWatchSubjectButton_clicked(); break;
        case 3: _t->on_pushWatchIDButton_clicked(); break;
        case 4: _t->printInfo((*reinterpret_cast< std::add_pointer_t<QList<std::shared_ptr<Exams>>>>(_a[1]))); break;
        case 5: _t->readFile((*reinterpret_cast< std::add_pointer_t<QFile*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QFile* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ShowInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShowInfo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ShowInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
