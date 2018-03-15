// Copyright (c) 2015-2017, The Kaiser developers
//
// This file is part of Kaiser.
//
// Kaiser is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Kaiser is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Kaiser.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <QTreeView>

namespace WalletGui {

class OverviewTransactionPoolTreeView : public QTreeView {
  Q_OBJECT
  Q_DISABLE_COPY(OverviewTransactionPoolTreeView)

public:
  explicit OverviewTransactionPoolTreeView(QWidget* _parent);
  ~OverviewTransactionPoolTreeView();

protected:
  virtual void mouseMoveEvent(QMouseEvent* _event) override;

private:
  void itemClicked(const QModelIndex& _index);
};

}