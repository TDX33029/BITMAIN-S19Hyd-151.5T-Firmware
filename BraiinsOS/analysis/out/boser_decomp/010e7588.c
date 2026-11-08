// FUN_010e7588 @ 010e7588 size=428 calls_out=18 calls_in=1
// strings: 

void FUN_010e7588(uint *param_1)

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
    FUN_005f5594(param_1 + 0x36);
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
    FUN_005f7494(param_1 + 2);
    FUN_010e7868(param_1 + 0x5e);
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
  FUN_005f5594(param_1 + 0xf2,iVar4);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_00d33a7c(param_1 + 0xd0);
    FUN_00d33af4(param_1);
    FUN_005f9b40(param_1[0xf0]);
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
    if (iVar4 != 1) goto LAB_010e77f8;
    FUN_00640398();
  }
  FUN_01822488(param_1 + 0x92);
LAB_010e77f8:
  FUN_01822488(param_1 + 0xb4);
  return;
}

