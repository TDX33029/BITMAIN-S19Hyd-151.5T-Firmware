// FUN_0005990c @ 0005990c  size=256  callers=1
// program: bmminer


float FUN_0005990c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  double __x;
  
  iVar1 = FUN_0002a514();
  if (iVar1 < 1) {
    iVar4 = 0;
  }
  else {
    piVar3 = (int *)(&DAT_00ff8ffc + param_2 + param_1 * 0x400);
    iVar4 = 0;
    do {
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + *piVar3;
    } while (piVar3 != (int *)(&DAT_00ff8ffc + (iVar1 + param_1 * 0x100) * 4 + param_2));
  }
  uVar2 = FUN_0002a514();
  iVar1 = FUN_00098658(iVar4,uVar2);
  iVar4 = FUN_0002a514();
  if (iVar4 < 1) {
    FUN_0002a514();
    return 0.0;
  }
  piVar3 = (int *)(&DAT_00ff8ffc + param_2 + param_1 * 0x400);
  iVar5 = 0;
  do {
    piVar3 = piVar3 + 1;
    iVar5 = (*piVar3 - iVar1) * (*piVar3 - iVar1) + iVar5;
  } while (piVar3 != (int *)(&DAT_00ff8ffc + (iVar4 + param_1 * 0x100) * 4 + param_2));
  uVar2 = FUN_0002a514();
  uVar2 = FUN_00098658(iVar5,uVar2);
  __x = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (__x < 0.0) {
    sqrt(__x);
  }
  return (float)SQRT(__x);
}

