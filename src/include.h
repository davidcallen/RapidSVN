// Precompiled header
// For compilers that support precompilation, includes "wx/wx.h".
//#include "wx/wxprec.h"
#include "wx/wx.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif


// include subversion stuff
#include "apr_general.h"

#include "svn_pools.h"
#include "svn_client.h"
#include "svn_path.h"
#include "svn_delta.h"

// wxWindows stuff
#include "wx/config.h"
#include "wx/thread.h"
#include "wx/frame.h"
