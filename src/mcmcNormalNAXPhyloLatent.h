#ifndef mcmcNormalNAXPhyloLatent_h
#define mcmcNormalNAXPhyloLatent_h
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include "sampleYlatentNormal.h"
#include "updateParamXPhylo.h"
#include "updateMeansParamXPhylo.h"
#include "updatePrecXPhylo.h"
#include "fixParamPhylo.h"
#include "updateParamPhylo.h"
#include "updateParamLatent.h"
#include "updateLatent.h"
#include "updateShrinkLocal.h"
#include "updateParamShrinkGlobal.h"
#include "adaptVar.h"
#include "updateResidVar.h"

RcppExport SEXP mcmcNormalNAXPhyloLatent(arma::mat& Y,
									   arma::mat& Ylatent,
									   arma::mat& X,
									   arma::mat& Phylo,
									   arma::mat& iPhylo,
									   arma::umat& Random,
									   arma::mat& paramX,
									   arma::mat& meansParamX,
									   arma::mat& precX,
									   double paramPhylo,
									   arma::vec& residVar,
									   arma::mat& priorMeansParamX,
									   arma::mat& priorVarMeansParamX,
									   arma::mat& priorVarXScaleMat,
									   double priorVarXDf,
									   double priorResidVarScale,
									   double priorResidVarShape,
									   arma::mat& priorParamPhyloWeight,
									   Rcpp::NumericVector& priorParamPhyloGrid,
									   double priorShrinkLocal,
									   double priorShrinkOverallShape,
									   double priorShrinkOverallScale,
									   double priorShrinkSpeedShape,
									   double priorShrinkSpeedScale,
									   arma::vec& adapt,
									   arma::vec& redund,
									   int nRandom,
									   arma::vec& nRandomLev,
									   arma::vec& nLatent,
									   double nsp,
									   int nsite,
									   int nparamX,
									   int nparamPhylo,
									   int niter,
									   int nburn,
									   int thin,
									   int verbose);

#endif
