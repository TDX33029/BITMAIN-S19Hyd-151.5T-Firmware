// FUN_00038228 @ 00038228  size=372  callers=1
// program: bmminer


void FUN_00038228(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int param4;
  int param3;
  int iVar4;
  int iVar5;
  int param5;
  bool bVar6;
  bool bVar7;
  char acStack_828 [2052];
  
  pcVar2 = (char *)FUN_0001fffc();
  iVar3 = strcmp(pcVar2,"HHB28601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0001fffc();
    iVar3 = strcmp(pcVar2,"HHB28602");
    if (iVar3 != 0) {
      return;
    }
  }
  iVar3 = 0;
  param5 = 5;
  do {
    param4 = FUN_0001879c();
    param3 = FUN_00018800();
    iVar4 = param4 - param3;
    bVar7 = SBORROW4(param4,0x37);
    iVar1 = param4 + -0x37;
    bVar6 = param4 == 0x37;
    if (param4 < 0x38) {
      bVar7 = SBORROW4(iVar4,2);
      iVar1 = iVar4 + -2;
      bVar6 = iVar4 == 2;
    }
    iVar5 = param5 * 1000;
    if (bVar6 || iVar1 < 0 != bVar7) goto LAB_00038328;
    if (99 < iVar3) {
      bVar7 = SBORROW4(iVar4,4);
      iVar1 = iVar4 + -4;
      bVar6 = iVar4 == 4;
      if (iVar4 < 5) {
        bVar7 = SBORROW4(param4,0x26);
        iVar1 = param4 + -0x26;
        bVar6 = param4 == 0x26;
      }
      iVar5 = param5 * 1000;
      if (bVar6 || iVar1 < 0 != bVar7) {
LAB_00038328:
        if (DAT_00087bbc < 4) {
          return;
        }
        snprintf(acStack_828,0x800,"water temp %d ~ %d, stop.\n",param3,param4);
        FUN_00032218(3,acStack_828,0);
        return;
      }
      if (iVar3 == 100) {
        FUN_00022a44(1);
        FUN_0003a9e0(9,0xff);
        iVar5 = 60000;
        param5 = 0x3c;
        FUN_00036380(0xf,"Water is not flowing!");
      }
    }
    iVar3 = iVar3 + param5;
    if (3 < DAT_00087bbc) {
      snprintf(acStack_828,0x800,"water temp %d ~ %d, sleep %ds to cool down\n",param3,param4,param5
              );
      FUN_00032218(3,acStack_828,0);
    }
    FUN_00034a5c(iVar5);
  } while( true );
}

