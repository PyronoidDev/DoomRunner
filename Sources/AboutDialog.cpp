//======================================================================================================================
// Project: DoomRunner
//----------------------------------------------------------------------------------------------------------------------
// Author:      Jan Broz (Youda008)
// Created on:  15.2.2020
// Description:
//======================================================================================================================

#include "AboutDialog.hpp"
#include "ui_AboutDialog.h"

#include "Version.hpp"


//======================================================================================================================

AboutDialog::AboutDialog( QWidget * parent )
	: QDialog( parent )
	, ui( new Ui::AboutDialog )
{
	ui->setupUi(this);

	ui->appLabel->setText( ui->appLabel->text().arg( appVersion ) );
	ui->qtLabel->setText( ui->qtLabel->text().arg( qtVersion ) );
}

AboutDialog::~AboutDialog()
{
	delete ui;
}
