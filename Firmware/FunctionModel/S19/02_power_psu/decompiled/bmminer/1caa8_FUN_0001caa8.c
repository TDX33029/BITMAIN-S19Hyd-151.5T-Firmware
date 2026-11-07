// FUN_0001caa8 @ 0001caa8  size=188  callers=1
// program: bmminer


undefined4 FUN_0001caa8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_s1;
  double dVar4;
  double dVar5;
  double param3;
  char acStack_818 [2048];
  
  iVar2 = 0;
  dVar5 = 0.0;
  do {
    iVar1 = FUN_000201d8(iVar2);
    param3 = dVar5;
    if (iVar1 != 0) {
      uVar3 = FUN_0001c978(iVar2);
      dVar4 = (double)CONCAT44(extraout_s1,uVar3);
      if (((0.1 < dVar4) && (param3 = dVar4, dVar5 <= dVar4)) && (param3 = dVar5, dVar5 < 0.1)) {
        param3 = dVar4;
      }
    }
    iVar2 = iVar2 + 1;
    dVar5 = param3;
  } while (iVar2 != 4);
  if (4 < DAT_00087bbc) {
    snprintf(acStack_818,0x800,"the minimal voltage = %.2f",param3);
    FUN_00032218(4,acStack_818,0);
  }
  return SUB84(param3,0);
}

