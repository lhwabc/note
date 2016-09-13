#ifndef LAYERLISTVIEW_H
#define LAYERLISTVIEW_H

#include <QTableView>
#include <QMouseEvent>
#include <QDebug>
#include <QHeaderView>
#include <QStandardItemModel>
#include <QContextMenuEvent>
#include <QMenu>
#include "layertablemodel.h"
#include "layeritemdelegate.h"
#include<layeritem.h>
#include<QTimer>
#include<QDate>
#include<QSystemTrayIcon>
#include<QSettings>
#include<QDesktopWidget>

class LayerTableView : public QTableView
{
    Q_OBJECT

public:
    LayerTableView(QWidget *parent = 0);
    ~LayerTableView();
    void setLayerSize(QSize s);

public slots:
    void addNewLayer();
    void deleteLayer();


protected:
    void contextMenuEvent(QContextMenuEvent * event);
    void closeEvent(QCloseEvent *event);
private slots:
    void itemClicked(const QModelIndex&);
    void timeout();
    void activate(QSystemTrayIcon::ActivationReason);
    void show_hide(bool sh);

private:
    LayerItemDelegate *delegate;
    LayerTableModel *model;
    QSize layerSize;
    QTimer timer;
    bool readlist();
    QSystemTrayIcon* trayIcon;
     QMenu*  trayIconMenu;
    QAction  *quitAction;
    void creattrayicon();
    void savepos();
    void readpos();
};

#endif // LAYERLISTVIEW_H

