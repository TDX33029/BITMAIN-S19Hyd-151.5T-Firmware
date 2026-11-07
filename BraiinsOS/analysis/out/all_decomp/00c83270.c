// FUN_00c83270 @ 00c83270 size=356 calls_out=2 calls_in=2
// strings: 

void FUN_00c83270(int param_1)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint unaff_r6;
  uint uVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 7);
  if (cVar1 == '\x03') {
    FUN_00aca278(param_1 + 0x10);
  }
  else if (cVar1 == '\x04') {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 != 0) {
      puVar2 = (uint *)(iVar4 + 0x18);
      do {
        unaff_r6 = *puVar2;
        bVar6 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar6);
      *puVar2 = unaff_r6 | 4;
      DataMemoryBarrier(0xb);
      if ((unaff_r6 & 10) == 8) {
        (**(code **)(*(int *)(iVar4 + 8) + 8))(*(undefined4 *)(iVar4 + 0xc));
      }
      if ((unaff_r6 & 2) != 0) {
        *(undefined1 *)(iVar4 + 0x1c) = 0;
      }
      piVar3 = *(int **)(param_1 + 8);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar6 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar6);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0165863c(*(undefined4 *)(param_1 + 8));
        }
      }
    }
  }
  else if (cVar1 != '\x05') {
    return;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  bVar6 = *(char *)(param_1 + 4) != '\0';
  if (bVar6) {
    unaff_r6 = *(uint *)(param_1 + 8);
  }
  if (bVar6 && unaff_r6 != 0) {
    puVar2 = (uint *)(unaff_r6 + 0x18);
    do {
      uVar5 = *puVar2;
      bVar6 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar6);
    *puVar2 = uVar5 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 10) == 8) {
      (**(code **)(*(int *)(unaff_r6 + 8) + 8))(*(undefined4 *)(unaff_r6 + 0xc));
    }
    if ((uVar5 & 2) != 0) {
      *(undefined1 *)(unaff_r6 + 0x1c) = 0;
    }
    piVar3 = *(int **)(param_1 + 8);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar6 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar6);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0165863c(*(undefined4 *)(param_1 + 8));
      }
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

