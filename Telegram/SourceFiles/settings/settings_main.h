/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "settings/settings_common.h"

namespace Window {
class Controller;
} // namespace Window

namespace Ui {
class VerticalLayout;
} // namespace Ui

namespace Settings {

class Main : public Section {
public:
	Main(
		QWidget *parent,
		not_null<Window::Controller*> controller,
		not_null<UserData*> self);

	rpl::producer<Type> sectionShowOther() override;

private:
	void setupContent(not_null<Window::Controller*> controller);
	void setupSections(not_null<Ui::VerticalLayout*> container);

	not_null<UserData*> _self;
	rpl::event_stream<Type> _showOther;

};

} // namespace Settings