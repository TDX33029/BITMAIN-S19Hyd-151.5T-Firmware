// FUN_00024490 @ 00024490  size=192  callers=1
// program: bmminer


undefined4 FUN_00024490(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_s1;
  double dVar4;
  double dVar5;
  double param3;
  char acStack_2018 [8192];
  
  iVar2 = 0;
  dVar5 = 0.0;
  do {
    iVar1 = FUN_0002a6f0(iVar2);
    param3 = dVar5;
    if (iVar1 != 0) {
      uVar3 = FUN_000243f0(iVar2,1);
      dVar4 = (double)CONCAT44(extraout_s1,uVar3);
      if (((0.1 < dVar4) && (param3 = dVar4, dVar5 <= dVar4)) && (param3 = dVar5, dVar5 < 0.1)) {
        param3 = dVar4;
      }
    }
    iVar2 = iVar2 + 1;
    dVar5 = param3;
  } while (iVar2 != 4);
  if (4 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"the minimal voltage = %.2f",param3);
    FUN_0004948c(4,acStack_2018,0);
  }
  return SUB84(param3,0);
}

