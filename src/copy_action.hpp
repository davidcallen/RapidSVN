/*
 * ====================================================================
 * Copyright (c) 2002, 2003 The RapidSvn Group.  All rights reserved.
 *
 * This software is licensed as described in the file LICENSE.txt,
 * which you should have received as part of this distribution.
 *
 * This software consists of voluntary contributions made by many
 * individuals.  For exact contribution history, see the revision
 * history and logs, available at http://rapidsvn.tigris.org/.
 * ====================================================================
 */
#ifndef _COPY_ACTION_H_INCLUDED_
#define _COPY_ACTION_H_INCLUDED_

// svncpp
#include "svncpp/targets.hpp"

// app
#include "action_thread.hpp"

class CopyAction:public ActionThread
{
private:
  wxString m_dest;
  wxString m_src;
  wxString m_logMsg;
  svn::Targets m_targets;
  wxString DestinationPath (wxString src);

public:
  CopyAction (wxFrame * frame, Tracer * tr, 
              const svn::Targets & targets);

  void Perform ();
  void *Entry ();
};

#endif
/* -----------------------------------------------------------------
 * local variables:
 * eval: (load-file "../rapidsvn-dev.el")
 * end:
 */
