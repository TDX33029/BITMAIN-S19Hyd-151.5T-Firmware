// FUN_006b2000 @ 006b2000 size=424 calls_out=8 calls_in=35
// strings: 

void FUN_006b2000(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = 2;
  if ((int)*(uint *)(param_1 + 0x10) < 0) {
    uVar2 = *(uint *)(param_1 + 0x10) ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x38) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
    piVar3 = *(int **)(param_1 + 0x50);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
      }
    }
    FUN_006a41c0(param_1 + 0x20);
    iVar4 = 0x2c;
    if (*(int *)(param_1 + 0x44) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    }
    goto LAB_006b21b0;
  case 1:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    if (*(int *)(param_1 + 0x7c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
    }
    FUN_00b3bad8(param_1 + 0x18);
    if (*(int *)(param_1 + 0x88) != -0x80000000) {
      FUN_006a41c0();
    }
    FUN_006a41c0(param_1 + 100);
    iVar4 = 0x70;
    goto LAB_006b21b0;
  case 2:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    if (*(int *)(param_1 + 0x8c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    }
    FUN_00b3bad8(param_1);
    FUN_00be3ec0(param_1 + 0x30);
    if (*(int *)(param_1 + 0x98) != -0x80000000) {
      FUN_006a41c0();
    }
    FUN_006a41c0(param_1 + 0x74);
    iVar4 = 0x80;
    goto LAB_006b21b0;
  case 3:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    if (*(int *)(param_1 + 0x54) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    FUN_00be3ec0(param_1 + 0x20);
    break;
  case 4:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    if (*(int *)(param_1 + 0x54) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    FUN_00b3bca4(param_1 + 0x20);
    break;
  default:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    if (*(int *)(param_1 + 0x54) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    FUN_011e7044(param_1 + 0x20);
  }
  FUN_006a41c0(param_1 + 0x6c);
  iVar4 = 0x78;
LAB_006b21b0:
  FUN_00b3bc54(param_1 + iVar4);
  return;
}

