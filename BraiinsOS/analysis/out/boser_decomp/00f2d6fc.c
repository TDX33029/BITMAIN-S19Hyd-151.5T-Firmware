// FUN_00f2d6fc @ 00f2d6fc size=440 calls_out=18 calls_in=2
// strings: 

void FUN_00f2d6fc(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  uVar5 = *param_1;
  iVar2 = 2;
  iVar4 = -(param_1[1] + (uint)(uVar5 >= 4));
  if ((uint)(uVar5 < 4) <= -param_1[1]) {
    iVar2 = uVar5 - 4;
  }
  if (iVar2 == 0) {
    if (param_1[0x2a] != 2) {
      FUN_00b76614();
    }
    if (param_1[2] != 2 || param_1[3] != 0) {
      FUN_005f0424();
    }
    if (param_1[0x36] == 0x80000000) {
      return;
    }
    FUN_00d31b70(param_1 + 0x36);
    return;
  }
  if (iVar2 == 1) {
    if (param_1[2] == 4 && param_1[3] == 0) {
      return;
    }
    FUN_005f2f60(param_1 + 0x42);
    FUN_012840cc(param_1 + 0x59);
    FUN_019bb7e0(param_1[0x4c],param_1[0x4d]);
    FUN_01725b0c(param_1 + 0x50);
    FUN_00f2a900(param_1 + 2);
    FUN_00f2d9f0(param_1 + 0x5e);
    FUN_0172eef4(param_1 + 0x6f);
    FUN_00d339f8(param_1[0x74]);
    return;
  }
  piVar3 = (int *)param_1[0x102];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x102],param_1[0x103]);
      iVar4 = extraout_r1;
    }
  }
  FUN_00d31b70(param_1 + 0xf2,iVar4);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_00d33a7c(param_1 + 0xd0);
    FUN_00d33af4(param_1);
    if (param_1[0xf0] == 0) {
      return;
    }
    FUN_00f200ec();
    return;
  }
  iVar4 = 1;
  uVar5 = param_1[2];
  if ((uint)(uVar5 < 4) <= -param_1[3]) {
    iVar4 = uVar5 - 4;
  }
  if (iVar4 == 0) {
    FUN_00640288(param_1 + 4,0,uVar5,-(param_1[3] + (uint)(uVar5 >= 4)),unaff_r4,unaff_r5);
  }
  else {
    if (iVar4 != 1) goto LAB_00f2d978;
    FUN_00640398();
  }
  FUN_01822488(param_1 + 0x92);
LAB_00f2d978:
  FUN_01822488(param_1 + 0xb4);
  return;
}

