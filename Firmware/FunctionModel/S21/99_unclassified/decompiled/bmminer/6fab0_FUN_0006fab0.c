// FUN_0006fab0 @ 0006fab0  size=1212  callers=1
// program: bmminer


float FUN_0006fab0(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  double dVar2;
  float fVar4;
  double dVar3;
  int local_c;
  
  dVar3 = (double)CONCAT44(param_2,param_1);
  dVar1 = (double)FUN_0006f9ac();
  dVar2 = (double)FUN_0006fa30();
  if ((dVar1 < 0.0) || (dVar2 < 0.0)) {
    fVar4 = 0.0;
  }
  else if (DAT_0094521c < 2) {
    fVar4 = -1.0;
  }
  else {
    for (local_c = 0; local_c < DAT_0094521c + -1; local_c = local_c + 1) {
      if (((*(double *)(&DAT_00945208 + (local_c + 0x17) * 2) - 0.001 < dVar3) &&
          (dVar3 < *(double *)(&DAT_00945208 + (local_c + 0x18) * 2) + 0.001)) ||
         ((dVar3 < *(double *)(&DAT_00945208 + (local_c + 0x17) * 2) + 0.001 &&
          (*(double *)(&DAT_00945208 + (local_c + 0x18) * 2) - 0.001 < dVar3)))) {
        dVar3 = (dVar3 - *(double *)(&DAT_00945208 + (local_c + 0x17) * 2)) *
                ((*(double *)(&DAT_00945208 + (local_c + 4) * 2) -
                 *(double *)(&DAT_00945208 + (local_c + 3) * 2)) /
                (*(double *)(&DAT_00945208 + (local_c + 0x18) * 2) -
                *(double *)(&DAT_00945208 + (local_c + 0x17) * 2))) +
                *(double *)(&DAT_00945208 + (local_c + 3) * 2);
        if ((dVar3 <= dVar1 + 0.5) && (dVar2 - 0.5 <= dVar3)) {
          return (float)dVar3;
        }
        return -1.0;
      }
    }
    if (dVar3 <= DAT_009452c0 - 0.001) {
      if (*(double *)(&DAT_00945208 + (DAT_0094521c + 0x16) * 2) + 0.001 <= dVar3) {
        fVar4 = -1.0;
      }
      else {
        dVar3 = (dVar3 - *(double *)(&DAT_00945208 + (DAT_0094521c + 0x16) * 2)) *
                ((*(double *)(&DAT_00945208 + (DAT_0094521c + 2) * 2) -
                 *(double *)(&DAT_00945208 + (DAT_0094521c + 1) * 2)) /
                (*(double *)(&DAT_00945208 + (DAT_0094521c + 0x16) * 2) -
                *(double *)(&DAT_00945208 + (DAT_0094521c + 0x15) * 2))) +
                *(double *)(&DAT_00945208 + (DAT_0094521c + 2) * 2);
        if ((dVar1 + 0.5 < dVar3) || (dVar3 < dVar2 - 0.5)) {
          fVar4 = -1.0;
        }
        else {
          fVar4 = (float)dVar3;
        }
      }
    }
    else {
      dVar3 = (dVar3 - DAT_009452c0) *
              ((DAT_00945228 - DAT_00945220) / (DAT_009452c8 - DAT_009452c0)) + DAT_00945220;
      if ((dVar1 + 0.5 < dVar3) || (dVar3 < dVar2 - 0.5)) {
        fVar4 = -1.0;
      }
      else {
        fVar4 = (float)dVar3;
      }
    }
  }
  return fVar4;
}

