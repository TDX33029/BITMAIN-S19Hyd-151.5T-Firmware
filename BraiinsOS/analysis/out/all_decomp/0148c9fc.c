// FUN_0148c9fc @ 0148c9fc size=268 calls_out=3 calls_in=7
// strings: 

void FUN_0148c9fc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    (**(code **)(*(int *)(param_1 + 0xf0) + 0x10))
              (param_1 + 0xfc,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x10))
              (param_1 + 0x18,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  iVar2 = *(int *)(param_1 + 200);
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
    piVar3 = *(int **)(param_1 + 200);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0102bf4c(*(undefined4 *)(param_1 + 200));
    }
  }
  FUN_0148c88c(param_1 + 0xe8);
  FUN_005c3320(param_1 + 0xa8);
  return;
}

