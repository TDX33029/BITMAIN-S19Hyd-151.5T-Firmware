// FUN_00073974 @ 00073974  size=340  callers=1
// program: bmminer


int FUN_00073974(int param_1)

{
  int iVar1;
  int local_c;
  
  if (param_1 < 0xb) {
    iVar1 = -0x1e;
  }
  else if (param_1 < 0x5f8) {
    for (local_c = 0; local_c < 0x97; local_c = local_c + 1) {
      if ((*(short *)(&DAT_000a84ac + local_c * 4) <= param_1) &&
         (param_1 < *(short *)(&DAT_000a84ac + (local_c + 1) * 4))) {
        return (int)*(short *)(&DAT_000a84ae + local_c * 4);
      }
    }
    iVar1 = 0x7d;
  }
  else {
    iVar1 = 0x7d;
  }
  return iVar1;
}

