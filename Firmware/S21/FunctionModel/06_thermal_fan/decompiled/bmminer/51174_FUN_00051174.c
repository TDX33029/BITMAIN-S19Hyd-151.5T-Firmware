// FUN_00051174 @ 00051174  size=328  callers=1
// program: bmminer


void FUN_00051174(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int param4;
  int iVar5;
  int param5;
  int param3;
  bool bVar6;
  bool bVar7;
  char acStack_2028 [8196];
  
  iVar5 = 0;
  param5 = 1;
  do {
    sVar2 = FUN_00019fe4();
    param4 = (int)sVar2;
    iVar4 = param5 * 1000;
    sVar2 = FUN_00019f38();
    param3 = (int)sVar2;
    iVar3 = param4 - param3;
    bVar7 = SBORROW4(param4,0x37);
    iVar1 = param4 + -0x37;
    bVar6 = param4 == 0x37;
    if (param4 < 0x38) {
      bVar7 = SBORROW4(iVar3,2);
      iVar1 = iVar3 + -2;
      bVar6 = iVar3 == 2;
    }
    if (bVar6 || iVar1 < 0 != bVar7) goto LAB_0005126c;
    if (9 < iVar5) {
      bVar7 = SBORROW4(iVar3,4);
      iVar1 = iVar3 + -4;
      bVar6 = iVar3 == 4;
      if (iVar3 < 5) {
        bVar7 = SBORROW4(param4,0x2d);
        iVar1 = param4 + -0x2d;
        bVar6 = param4 == 0x2d;
      }
      iVar4 = param5 * 1000;
      if (bVar6 || iVar1 < 0 != bVar7) {
LAB_0005126c:
        if (DAT_000be63c < 4) {
          return;
        }
        snprintf(acStack_2028,0x2000,"water temp %d ~ %d, stop.\n",param3,param4);
        FUN_0004948c(3,acStack_2028,0);
        return;
      }
      if (iVar5 == 10) {
        FUN_0002ff38(1);
        FUN_00056e88(9,0xff);
        FUN_0004e8c8(0x10,"Water is not flowing!");
        iVar4 = 60000;
        FUN_0004bf68(1000);
        param5 = 0x3c;
        FUN_0002ff38(1);
      }
    }
    iVar5 = iVar5 + param5;
    if (3 < DAT_000be63c) {
      snprintf(acStack_2028,0x2000,"water temp %d ~ %d, sleep %ds to cool down\n",param3,param4,
               param5);
      FUN_0004948c(3,acStack_2028,0);
    }
    FUN_0004bf68(iVar4);
  } while( true );
}

