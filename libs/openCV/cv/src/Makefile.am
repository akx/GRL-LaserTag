lib_LTLIBRARIES = libcv.la

libcv_la_SOURCES = \
    cvaccum.cpp cvadapthresh.cpp cvapprox.cpp cvcalccontrasthistogram.cpp \
    cvcalcimagehomography.cpp cvcalibinit.cpp cvcalibration.cpp \
    cvcamshift.cpp cvcanny.cpp cvcolor.cpp cvcondens.cpp cvcontours.cpp \
    cvcontourtree.cpp cvconvhull.cpp cvconvolve.cpp cvcorner.cpp \
    cvcornersubpix.cpp cvderiv.cpp cvdistransform.cpp cvdominants.cpp \
    cvemd.cpp cvfeatureselect.cpp cvfloodfill.cpp cvfundam.cpp \
    cvgeometry.cpp cvhaar.cpp cvhistogram.cpp cvhough.cpp cvimgwarp.cpp \
    cvkalman.cpp cvlinefit.cpp cvlkpyramid.cpp cvmatchcontours.cpp \
    cvmoments.cpp cvmorph.cpp cvmotempl.cpp cvoptflowbm.cpp cvoptflowhs.cpp \
    cvoptflowlk.cpp cvpgh.cpp cvposit.cpp cvprecomp.cpp cvpyramids.cpp \
    cvpyrsegmentation.cpp cvrotcalipers.cpp cvsamplers.cpp cvshapedescr.cpp \
    cvsmooth.cpp cvsnakes.cpp cvsubdivision2d.cpp cvsumpixels.cpp \
    cvswitcher.cpp cvtables.cpp cvtemplmatch.cpp cvthresh.cpp \
    cvundistort.cpp cvutils.cpp

noinst_HEADERS = _cv.h _cvgeom.h _cvimgproc.h _cvipp.h _cvlist.h _cvmatrix.h
EXTRA_DIST = cv.dsp cv.vcproj cv.rc resource.h

libcv_la_LDFLAGS = -no-undefined -version-info @LT_VERSION@ @LDFLAGS@
libcv_la_LIBADD  = $(top_builddir)/cxcore/src/libcxcore.la

LIBS = -ldl -lpthread -lm

INCLUDES = -I. -I$(top_srcdir)/cv/include -I$(top_srcdir)/cxcore/include -I$(top_srcdir)
