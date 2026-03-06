/*select.h*/

#ifndef SELECT_H
#define SELECT_H

namespace _selectable {

class Select : public Component {
public:
  Select();
  ~Select() = default;

constexpr const char* const SELECTION_MODULE("Sender::Selection");

// *selection*
virtual void* CreateSelectionEvent( Select& pSelect ) = 0;
virtual void* DestroySelectionEvent( Select& pSelect ) = 0;
const virtual void QueueSelection( const Select& pSelect ) = 0;
virtual void SelectMesh( Select& pSelect, void* pMesh ) = 0;
virtual void SelectObject( Select& pSelect, void* pObject ) = 0;
virtual void SelectionEventMouse( Select& pSelect, const int& x, const int& y ) = 0;

// get selection
Select& get() {
  return *this;
}

protected:
int x;
int y;
};

}

#endif
