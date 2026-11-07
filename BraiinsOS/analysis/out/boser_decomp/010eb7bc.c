// FUN_010eb7bc @ 010eb7bc size=280 calls_out=11 calls_in=1
// strings: 

void FUN_010eb7bc(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  uVar4 = *param_1;
  iVar2 = 2;
  if ((uint)(uVar4 < 4) <= -param_1[1]) {
    iVar2 = uVar4 - 4;
  }
  if (iVar2 == 0) {
    if (param_1[0x2a] != 2) {
      FUN_00b76614();
    }
    if (param_1[2] != 2 || param_1[3] != 0) {
      FUN_005f0424();
    }
    if (param_1[0x36] == 0) {
      return;
    }
    FUN_01139b38(param_1[0x36],param_1[0x37]);
    return;
  }
  if (iVar2 == 1) {
    FUN_005f2f60(param_1 + 0x42,-(param_1[1] + (uint)(uVar4 >= 4)));
    FUN_012840cc(param_1 + 0x59);
    FUN_019bb7e0(param_1[0x4c],param_1[0x4d]);
    FUN_01725b0c(param_1 + 0x50);
    FUN_005f7494(param_1 + 2);
    FUN_00d3697c(param_1 + 99);
    FUN_0172eef4(param_1 + 0x5e);
    piVar3 = (int *)param_1[0x66];
    if (*piVar3 != 0) {
      FUN_005f6438(piVar3[1],piVar3[2]);
    }
    thunk_FUN_01be4678(piVar3);
    return;
  }
  piVar3 = (int *)param_1[0xf4];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0xf4],param_1[0xf5]);
    }
  }
  FUN_01139b38(param_1[0xf2],param_1[0xf3]);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_00d33a7c(param_1 + 0xd0);
    FUN_00d33af4(param_1);
    FUN_005f9b40(param_1[0xf0]);
    return;
  }
  iVar2 = 1;
  uVar4 = param_1[2];
  if ((uint)(uVar4 < 4) <= -param_1[3]) {
    iVar2 = uVar4 - 4;
  }
  if (iVar2 == 0) {
    FUN_00640288(param_1 + 4,0,uVar4,-(param_1[3] + (uint)(uVar4 >= 4)),unaff_r4,unaff_r5);
  }
  else {
    if (iVar2 != 1) goto LAB_010e77f8;
    FUN_00640398();
  }
  FUN_01822488(param_1 + 0x92);
LAB_010e77f8:
  FUN_01822488(param_1 + 0xb4);
  return;
}

