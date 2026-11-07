// FUN_01439370 @ 01439370 size=320 calls_out=5 calls_in=0
// strings: 

void FUN_01439370(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_01445d6c(*(int *)(param_1 + 0x310) + 8,*(int *)(param_1 + 0x314) + 8,1);
  FUN_01439428(param_1);
  if (*(int *)(param_1 + 0x318) != 0) {
    (**(code **)(*(int *)(param_1 + 0x318) + 0x10))
              (param_1 + 0x324,*(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800),
               *(undefined4 *)(param_1 + 800),unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  }
  if (*(int *)(param_1 + 0x234) != 0) {
    (**(code **)(*(int *)(param_1 + 0x234) + 0x10))
              (param_1 + 0x240,*(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c));
  }
  iVar2 = *(int *)(param_1 + 0x2f0);
  if (iVar2 != 0) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar2 + 8) = 4;
    puVar4 = (uint *)(iVar2 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar6 = *(int *)(iVar2 + 0x18);
      *(undefined4 *)(iVar2 + 0x18) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0xfffffffd;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar2 + 0x1c));
      }
    }
    piVar3 = *(int **)(param_1 + 0x2f0);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0102bf4c(*(undefined4 *)(param_1 + 0x2f0));
    }
  }
  FUN_0141ef08(param_1 + 0x310);
  FUN_005c3320(param_1 + 0x2d0);
  return;
}

