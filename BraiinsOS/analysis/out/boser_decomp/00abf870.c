// FUN_00abf870 @ 00abf870 size=428 calls_out=8 calls_in=52
// strings: 

void FUN_00abf870(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = 2;
  if ((int)uVar4 < 0) {
    uVar2 = uVar4 ^ 0x80000000;
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
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
      }
    }
    FUN_006a41c0(param_1 + 0x20);
    iVar5 = 0x2c;
    if (*(int *)(param_1 + 0x44) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    }
    goto LAB_00abfa24;
  case 1:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    if (*(int *)(param_1 + 0x7c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
    }
    FUN_009c9624(param_1 + 0x28);
    if (*(int *)(param_1 + 0x88) != -0x80000000) {
      FUN_006a41c0();
    }
    FUN_006a41c0(param_1 + 100);
    iVar5 = 0x70;
    goto LAB_00abfa24;
  case 2:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    if (*(int *)(param_1 + 0x8c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    }
    FUN_009c9624((uint *)(param_1 + 0x10));
    FUN_009c96a4(param_1 + 0x40);
    if (*(int *)(param_1 + 0x98) != -0x80000000) {
      FUN_006a41c0();
    }
    FUN_006a41c0(param_1 + 0x74);
    iVar5 = 0x80;
    goto LAB_00abfa24;
  case 3:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    if (*(int *)(param_1 + 0x54) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    FUN_009c96a4(param_1 + 0x30);
    break;
  case 4:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    if (*(int *)(param_1 + 0x54) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    FUN_009c91f4(param_1 + 0x30);
    break;
  default:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    if (*(int *)(param_1 + 0x54) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    FUN_00985ec0(param_1 + 0x30);
  }
  FUN_006a41c0(param_1 + 0x6c);
  iVar5 = 0x78;
LAB_00abfa24:
  FUN_00b3bc54(param_1 + iVar5);
  return;
}

