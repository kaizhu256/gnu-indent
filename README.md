README for GNU indent 2.2.13
============================

  GNU indent changes the appearance of a C program by inserting or
  deleting whitespace according to a plethora of options.  Some
  canned styles of formatting are supported as well.  GNU indent is
  a descendant of BSD indent.  This file is part of the GNU indent
  distribution.

  GNU indent does NOT work for C++, if it does for you then you're
  just lucky.  Don't expect support for C++.

  Read the file NEWS for more information, especially to see what's
  different from the last version, and what future versions may do.

  To install indent, please read the file INSTALL included with the
  distribution.

  For license and copying information, see the file COPYING.

Documentation
-------------

  For complete documentation on the Web, please visit:

     http://www.gnu.org/software/indent/

  GNU uses a language called "texinfo" for its documentation source
  which produces both an on-line, interactive version and a hardcopy
  version for printing.  An HTML version is now produced as well.

  The on-line versions, `indent.info` and `indent.1`, are installed
  along with the executable by typing "make install".
  Refer to the Texinfo manual for more information on the `info` system.

  The hardcopy version is produced from the source file `indent.texinfo`
  in a pdf or Postscript format file.  To produce the pdf
  version type:

    make pdf

  To produce the Postscript version, type:

    make ps

  Note that you must have the TeX typographical system installed for
  this to work.

  The HTML version is included along with the distribution, and
  consists of the file:

     doc/indent.html

  This file can also be accessed at the URL 
        http://www.gnu.org/software/indent/manual/

  To create the HTML version from the texinfo version, type:

     make html

  Obviously you will need the texi2html tool.

Bug reports
-----------

  Please address bug-reports and suggestions or comments to:

    bug-indent@gnu.org

  How to report bugs:

  Please begin your bug report with a concise and factual description
  of the behaviour you consider to be abberant.  If you have narrowed
  the problem down to the use of a particular option, please mention
  that.  In general, also be sure to mention the command line options
  used to invoke indent, as well as the contents of your .indent.pro
  if you are using one.

  Then include the *smallest possible* piece of code which generates
  the described symptom.  It is very helpful if you can manage to
  reduce the size of the sample code.

  Finally, if you have investigated the problem further, include
  debugger stack traces, modifications, or speculation you have.

Sending code
------------

  If you send a patch as part of your bug fix, or send us code for new
  features, please send them as diffs.  In particular, include the
  result of `diff -c <old_file> <new_file>`.

  Please make sure that patches you provide apply cleanly to the latest
  code published in the Git repo:

    https://git.savannah.gnu.org/cgit/indent.git

  Because of the regression testing the project requires of indent,
  it is extremely unlikely that your code will be installed into indent
  "as-is";  however it may still be helpful, and will likely have
  solved your particular problem.
