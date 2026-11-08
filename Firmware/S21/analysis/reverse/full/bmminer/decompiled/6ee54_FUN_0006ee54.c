// FUN_0006ee54 @ 0006ee54  size=200  callers=1
// program: bmminer


undefined4 FUN_0006ee54(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  double dVar3;
  int local_c;
  
  if ((param_2 < 2) || (0x100 < param_2)) {
    uVar1 = 0;
  }
  else {
    dVar2 = (double)VectorSignedToFloat(param_2 + -1,(byte)(in_fpscr >> 0x16) & 3);
    for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
      dVar3 = (double)VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
      dVar3 = round(dVar3 * (255.0 / dVar2));
      *(char *)(param_1 + local_c) = (0.0 < dVar3) * (char)(longlong)dVar3;
    }
    uVar1 = 1;
  }
  return uVar1;
}

