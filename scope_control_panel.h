/*
 *  scope_control_panel.h.h
 *  PHD Guiding
 *
 *  Created by Oleg Kutkov
 *  Copyright (c) 2017 Crimean Astrophysical observatory
 *  All rights reserved.
 *
 *  This source code is distributed under the following "BSD" license
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *    Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *    Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *    Neither the name of Bret McKee, Dad Dog Development Ltd, nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 *
 */

#ifndef SCOPE_CONTROL_PANEL_H
#define SCOPE_CONTROL_PANEL_H

class ScopeControlPanel : public wxWindow {
public:
    ScopeControlPanel(wxWindow *parent);
    ~ScopeControlPanel(void);

    void OnPaint(wxPaintEvent& evt);
    void SetState(bool is_active);

	void KeyNorthDown();
	void KeyNorthUp();

	void KeySouthDown();
	void KeySouthUp();

	void KeyWestDown();
	void KeyWestUp();

	void KeyEastDown();
	void KeyEastUp();

	void SetMountConnected(bool connected);

	void SetCameraAngle(double ang);

private:
    bool visible;
	bool mount_connected;
	bool ha_enabled;

	double cam_deg;

	wxBitmapButton* northButton;
	wxBitmapButton* southButton;
	wxBitmapButton* westButton;
	wxBitmapButton* eastButton;

	void OnStartStopButton(wxCommandEvent& evt);
	void OnCalibrateButton(wxCommandEvent& evt);
	void OnSpeedEditButton(wxCommandEvent& evt);

	void OnNorthDown(wxCommandEvent &event);
	void OnNorthUp(wxCommandEvent &event);

	void OnSouthDown(wxCommandEvent &event);
	void OnSouthUp(wxCommandEvent &event);

	void OnEastDown(wxCommandEvent &event);
	void OnEastUp(wxCommandEvent &event);

	void OnWestDown(wxCommandEvent &event);
	void OnWestUp(wxCommandEvent &event);

    DECLARE_EVENT_TABLE()
};

#endif

