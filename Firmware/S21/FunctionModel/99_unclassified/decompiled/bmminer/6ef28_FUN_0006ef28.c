// FUN_0006ef28 @ 0006ef28  size=236  callers=1
// program: bmminer


undefined4 FUN_0006ef28(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 extraout_s1;
  double dVar2;
  undefined4 extraout_s1_00;
  double dVar3;
  double dVar4;
  int local_c;
  
  if (param_2 < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0006f9ac();
    dVar2 = (double)CONCAT44(extraout_s1,uVar1);
    uVar1 = FUN_0006fa30();
    if ((dVar2 < 0.0) || ((double)CONCAT44(extraout_s1_00,uVar1) < 0.0)) {
      uVar1 = 0;
    }
    else {
      dVar3 = (double)VectorSignedToFloat(param_2 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
      for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
        dVar4 = (double)VectorSignedToFloat(local_c,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        *(double *)(param_1 + local_c * 8) =
             dVar2 - dVar4 * ((dVar2 - (double)CONCAT44(extraout_s1_00,uVar1)) / dVar3);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

