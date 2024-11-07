// Copyright (C) 2024 UnionTech Software Technology Co., Ltd.
// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
#include "mainwindow.h"

MainWindow::MainWindow()
    : QQuickWindow()
    , m_subWindow(new QQuickWindow(this))
{
    m_subWindow->setColor(Qt::red);
    m_subWindow->setVisible(true);
}
