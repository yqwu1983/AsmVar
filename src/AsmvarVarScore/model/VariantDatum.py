"""
==============================================
Same with GATK
==============================================

Author : Shujia Huang
Date   : 2014-05-20 17:49:27
"""

class VariantDatum :

    def __init__ ( self ) :
        self.annotations         = []
        #self.annoTexts           = ['Position', 'NRatio', 'AlternatePerfect', 'BothImperfect']
        #self.annoTexts           = [] # annoTexts is a 2D array : [ [ id, type, description ], ... ]
        self.lod                 = None 
        self.prior               = 2.0
        self.atTrainingSite      = False
        self.atAntiTrainingSite  = False
        self.failingSTDThreshold = False
        self.worstAnnotation     = None
        self.variantContext      = [] 

