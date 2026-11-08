// FUN_00b221f4 @ 00b221f4 size=428 calls_out=2 calls_in=3
// strings: 

void FUN_00b221f4(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint unaff_r6;
  uint uVar7;
  bool bVar8;
  
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\x03') {
    FUN_00b2246c(param_1 + 0x18);
  }
  else if (cVar1 == '\x04') {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 != 0) {
      puVar3 = (uint *)(iVar4 + 0x20);
      do {
        unaff_r6 = *puVar3;
        bVar8 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar8);
      *puVar3 = unaff_r6 | 4;
      DataMemoryBarrier(0xb);
      if ((unaff_r6 & 10) == 8) {
        (**(code **)(*(int *)(iVar4 + 0x10) + 8))(*(undefined4 *)(iVar4 + 0x14));
      }
      if ((unaff_r6 & 2) != 0) {
        iVar2 = *(int *)(iVar4 + 8);
        puVar6 = *(undefined4 **)(iVar4 + 0xc);
        *(undefined4 *)(iVar4 + 8) = 0;
        if (iVar2 != 0 && puVar6 != (undefined4 *)0x0) {
          (**(code **)*puVar6)(puVar6);
        }
      }
      piVar5 = *(int **)(param_1 + 0x10);
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar8 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar8);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*(undefined4 *)(param_1 + 0x10));
        }
      }
    }
  }
  else if (cVar1 != '\x05') {
    return;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  bVar8 = *(char *)(param_1 + 0xc) != '\0';
  if (bVar8) {
    unaff_r6 = *(uint *)(param_1 + 0x10);
  }
  if (bVar8 && unaff_r6 != 0) {
    puVar3 = (uint *)(unaff_r6 + 0x20);
    do {
      uVar7 = *puVar3;
      bVar8 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar8);
    *puVar3 = uVar7 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar7 & 10) == 8) {
      (**(code **)(*(int *)(unaff_r6 + 0x10) + 8))(*(undefined4 *)(unaff_r6 + 0x14));
    }
    if ((uVar7 & 2) != 0) {
      iVar4 = *(int *)(unaff_r6 + 8);
      puVar6 = *(undefined4 **)(unaff_r6 + 0xc);
      *(undefined4 *)(unaff_r6 + 8) = 0;
      if (iVar4 != 0 && puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(puVar6);
      }
    }
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar8 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar8);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4380(*(undefined4 *)(param_1 + 0x10));
      }
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}

