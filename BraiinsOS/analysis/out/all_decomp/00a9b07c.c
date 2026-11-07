// FUN_00a9b07c @ 00a9b07c size=336 calls_out=2 calls_in=2
// strings: 

void FUN_00a9b07c(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int unaff_r5;
  uint uVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 10) == '\x03') {
    FUN_00a1f280(param_1 + 0x10);
  }
  else {
    if (*(char *)(param_1 + 10) != '\x04') {
      return;
    }
    unaff_r5 = *(int *)(param_1 + 0xc);
    if (unaff_r5 != 0) {
      puVar1 = (uint *)(unaff_r5 + 0x18);
      do {
        uVar4 = *puVar1;
        bVar5 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar5);
      *puVar1 = uVar4 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 10) == 8) {
        (**(code **)(*(int *)(unaff_r5 + 8) + 8))(*(undefined4 *)(unaff_r5 + 0xc));
      }
      if ((uVar4 & 2) != 0) {
        *(undefined1 *)(unaff_r5 + 0x1c) = 0;
      }
      piVar2 = *(int **)(param_1 + 0xc);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar5 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar5);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0165863c(*(undefined4 *)(param_1 + 0xc));
        }
      }
    }
  }
  bVar5 = *(char *)(param_1 + 8) != '\0';
  if (bVar5) {
    unaff_r5 = *(int *)(param_1 + 0xc);
  }
  if (bVar5 && unaff_r5 != 0) {
    puVar1 = (uint *)(unaff_r5 + 0x18);
    do {
      uVar4 = *puVar1;
      bVar5 = (bool)hasExclusiveAccess(puVar1);
    } while (!bVar5);
    *puVar1 = uVar4 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar4 & 10) == 8) {
      (**(code **)(*(int *)(unaff_r5 + 8) + 8))(*(undefined4 *)(unaff_r5 + 0xc));
    }
    if ((uVar4 & 2) != 0) {
      *(undefined1 *)(unaff_r5 + 0x1c) = 0;
    }
    piVar2 = *(int **)(param_1 + 0xc);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0165863c(*(undefined4 *)(param_1 + 0xc));
      }
    }
  }
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}

