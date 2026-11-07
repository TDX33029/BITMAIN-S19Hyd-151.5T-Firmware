// FUN_0001caa8 @ 0001caa8  size=188
// callers: [FUN_0001cd50]

undefined4 FUN_0001caa8(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_s1;
  double dVar5;
  double dVar6;
  double param3;
  char acStack_818 [2048];
  
  dVar1 = DAT_0001cb70;
  iVar3 = 0;
  dVar6 = DAT_0001cb68;
  do {
    iVar2 = FUN_000201d8(iVar3);
    param3 = dVar6;
    if (iVar2 != 0) {
      uVar4 = FUN_0001c978(iVar3);
      dVar5 = (double)CONCAT44(extraout_s1,uVar4);
      if (((dVar1 < dVar5) && (param3 = dVar5, dVar6 <= dVar5)) && (param3 = dVar6, dVar6 < dVar1))
      {
        param3 = dVar5;
      }
    }
    iVar3 = iVar3 + 1;
    dVar6 = param3;
  } while (iVar3 != 4);
  if (4 < DAT_00087bbc) {
    snprintf(acStack_818,0x800,"the minimal voltage = %.2f",param3);
    FUN_00032218(4,acStack_818,0);
  }
  return SUB84(param3,0);
}


