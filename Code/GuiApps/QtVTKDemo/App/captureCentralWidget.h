/*=============================================================================

  IMAGECAPTURE: A software package for capturing images from input devices and rendering to vide outputs.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef captureCentralWidget_h
#define captureCentralWidget_h

#include "ui_captureCentralWidget.h"
#include <captureVTKViewWidget.h>
#include <QWidget>

namespace capture
{

/**
* \class CentralWidget
* \brief Demo widget to group a VTKViewWidget with ControlPanelWidget.
*/
class CentralWidget : public QWidget, public Ui_CentralWidget
{
  Q_OBJECT

public:

  CentralWidget(QWidget* parent);
  virtual ~CentralWidget();

  VTKViewWidget* GetVTKViewWidget() const;

public slots:

  void SetIntensityRange(int low, int high);

signals:

  void WindowValuesChanged(int low, int high);
  void DoSomethingPressed();

}; // end class

} // end namespace

#endif
