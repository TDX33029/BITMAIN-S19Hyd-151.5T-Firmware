// FUN_00025680 @ 00025680  size=160  callers=1
// program: bmminer


int FUN_00025680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  double dVar5;
  
  if (DAT_000be8e8 != 2) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 1;
    iVar1 = FUN_0002a6f0(iVar1);
    if (iVar1 != 0) {
      iVar1 = FUN_0002a514();
      iVar2 = FUN_0002a554();
      iVar4 = iVar2 * param_1 * iVar1 + iVar4;
    }
    iVar1 = iVar3;
  } while (iVar3 != 4);
  dVar5 = (double)VectorSignedToFloat(iVar4 / 1000,(byte)(in_fpscr >> 0x16) & 3);
  return ((int)(longlong)(dVar5 * 0.99) / 1000) * 1000;
}

