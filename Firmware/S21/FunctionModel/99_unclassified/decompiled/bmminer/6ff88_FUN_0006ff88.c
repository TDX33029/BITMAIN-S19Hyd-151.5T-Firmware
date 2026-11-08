// FUN_0006ff88 @ 0006ff88  size=648  callers=2
// program: bmminer


float FUN_0006ff88(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  int local_c;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  dVar2 = (double)FUN_0006f9ac();
  dVar3 = (double)FUN_0006fa30();
  if ((dVar2 < 0.0) || (dVar3 < 0.0)) {
    fVar4 = 0.0;
  }
  else if ((dVar2 + 0.5 < dVar1) || (dVar1 < dVar3 - 0.5)) {
    fVar4 = -1.0;
  }
  else {
    for (local_c = 0; local_c < DAT_0094521c + -1; local_c = local_c + 1) {
      if (((*(double *)(&DAT_00945208 + (local_c + 3) * 2) - 0.001 < dVar1) &&
          (dVar1 < *(double *)(&DAT_00945208 + (local_c + 4) * 2) + 0.001)) ||
         ((*(double *)(&DAT_00945208 + (local_c + 3) * 2) - 0.001 < dVar1 &&
          (dVar1 < *(double *)(&DAT_00945208 + (local_c + 4) * 2) + 0.001)))) {
        return (float)(*(double *)(&DAT_00945208 + (local_c + 0x17) * 2) +
                      (dVar1 - *(double *)(&DAT_00945208 + (local_c + 3) * 2)) *
                      ((*(double *)(&DAT_00945208 + (local_c + 0x18) * 2) -
                       *(double *)(&DAT_00945208 + (local_c + 0x17) * 2)) /
                      (*(double *)(&DAT_00945208 + (local_c + 4) * 2) -
                      *(double *)(&DAT_00945208 + (local_c + 3) * 2))));
      }
    }
    fVar4 = (float)dVar1;
  }
  return fVar4;
}

