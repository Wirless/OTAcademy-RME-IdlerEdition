//////////////////////////////////////////////////////////////////////
// This file is part of Remere's Map Editor
//////////////////////////////////////////////////////////////////////
// Remere's Map Editor is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Remere's Map Editor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.
//////////////////////////////////////////////////////////////////////

#ifndef RME_RESULT_WINDOW_H_
#define RME_RESULT_WINDOW_H_

#include "main.h"

class SearchResultWindow : public wxPanel {
public:
	SearchResultWindow(wxWindow* parent);
	virtual ~SearchResultWindow();

	void Clear();
	void AddPosition(wxString description, Position pos);
	void SetIgnoredIds(const wxString& ignored_ids_str, bool enable);

	void OnClickResult(wxCommandEvent&);
	void OnClickExport(wxCommandEvent&);
	void OnClickClear(wxCommandEvent&);

protected:
	wxListBox* result_list;
	std::vector<uint16_t> ignored_ids;
	std::vector<std::pair<uint16_t, uint16_t>> ignored_ranges;
	bool use_ignored_ids;

	DECLARE_EVENT_TABLE()
};

#endif
