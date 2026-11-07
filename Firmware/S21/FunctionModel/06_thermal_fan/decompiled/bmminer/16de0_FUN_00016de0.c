// FUN_00016de0 @ 00016de0  size=548  callers=2
// program: bmminer


undefined4 FUN_00016de0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint param3;
  int iVar6;
  char acStack_2028 [8196];
  
  iVar6 = 10;
  do {
    for (uVar5 = 0; uVar2 = FUN_0002a750(), uVar5 < uVar2; uVar5 = uVar5 + 1) {
      param3 = uVar5 & 0xff;
      uVar2 = FUN_00060b1c(param3);
      if (-1 < (int)uVar2) {
        if (4 < DAT_000be63c) {
          snprintf(acStack_2028,0x2000,"fan[%u] speed[%u]\n",param3,uVar2);
          FUN_0004948c(4,acStack_2028,0);
        }
        FUN_0002a828(param3,uVar2);
        iVar1 = FUN_0002c3f4();
        if ((iVar1 != 0) && (iVar1 = FUN_0002c424(), iVar1 != 0)) {
          if (param_2 == 0) {
            uVar2 = FUN_0002c588(param3);
          }
          else {
            uVar2 = FUN_0002c574();
          }
        }
        FUN_0002a7a4(param3,param_1 <= uVar2);
      }
    }
    iVar1 = FUN_0002a760();
    iVar3 = FUN_0002a750();
    if (iVar3 <= iVar1) break;
    if (param_2 == 0) {
      uVar4 = 0x32;
    }
    else {
      uVar4 = 2000;
    }
    FUN_0004bf68(uVar4);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = FUN_0002a760();
  iVar1 = FUN_0002a750();
  if (iVar6 < iVar1) {
    if (1 < DAT_000be63c) {
      iVar6 = FUN_0002a760();
      iVar1 = FUN_0002a750();
      snprintf(acStack_2028,0x2000,"Error, fan lost, only find %d (< %d)\n",iVar6,iVar1);
      FUN_0004948c(1,acStack_2028,0);
    }
    uVar5 = 0;
    while( true ) {
      uVar2 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      iVar6 = FUN_0002a750();
      if (iVar6 <= (int)uVar2) break;
      if (3 < DAT_000be63c) {
        iVar6 = FUN_0002a890(uVar2);
        snprintf(acStack_2028,0x2000,"fan_id = %d, fan_speed = %d\n",uVar2,iVar6);
        FUN_0004948c(3,acStack_2028,0);
      }
    }
    FUN_00056e88(10,0xff);
    FUN_0002ff20(1);
    FUN_0004e8c8(7,"fan lost");
    uVar4 = 0xffffffff;
  }
  else {
    FUN_0002ff20(0);
    uVar4 = 0;
  }
  return uVar4;
}

