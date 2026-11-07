// FUN_0003fc10 @ 0003fc10  size=216  callers=0
// program: bmminer


float FUN_0003fc10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  double __x;
  
  iVar1 = FUN_0002a514();
  if (iVar1 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar4 = 0;
    piVar3 = (int *)(param_2 + param_1 * 0x400 + -4);
    do {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar6 = iVar6 + *piVar3;
    } while (iVar1 != iVar4);
  }
  uVar2 = FUN_0002a514();
  iVar1 = FUN_00098658(iVar6,uVar2);
  iVar6 = FUN_0002a514();
  if (iVar6 < 1) {
    FUN_0002a514();
    return 0.0;
  }
  iVar5 = 0;
  iVar4 = 0;
  piVar3 = (int *)(param_2 + param_1 * 0x400 + -4);
  do {
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
    iVar5 = (*piVar3 - iVar1) * (*piVar3 - iVar1) + iVar5;
  } while (iVar6 != iVar4);
  uVar2 = FUN_0002a514();
  uVar2 = FUN_00098658(iVar5,uVar2);
  __x = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (__x < 0.0) {
    sqrt(__x);
  }
  return (float)SQRT(__x);
}

