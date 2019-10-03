// This file is part of TON Desktop Wallet,
// a desktop application for the TON Blockchain project.
//
// For license and copyright information please follow this link:
// https://github.com/ton-blockchain/wallet/blob/master/LEGAL
//
#pragma once

class QEvent;
class QKeyEvent;

namespace Ui {
class Window;
} // namespace Ui

namespace Wallet {

class Application final {
public:
	Application();
	Application(const Application &other) = delete;
	Application &operator=(const Application &other) = delete;
	~Application();

	void run();

private:
	void initWindow();
	void updateWindowPalette();
	void handleWindowEvent(not_null<QEvent*> e);
	void handleWindowKeyPress(not_null<QKeyEvent*> e);

	const std::unique_ptr<Ui::Window> _window;

	rpl::lifetime _lifetime;

};

} // namespace Wallet