// FUN_00d843fc @ 00d843fc size=692 calls_out=4 calls_in=1
// strings: 

void FUN_00d843fc(undefined1 *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  
  if (param_1[0x117] != '\0') {
    if (param_1[0x117] != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0x100) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x104));
    }
    if (*(int *)(param_1 + 0xe8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xec));
    }
    if (*(int *)(param_1 + 0xdc) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe0));
    }
    if (*(int *)(param_1 + 0xd0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd4));
    }
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    *param_1 = 0;
    param_1[0x111] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    puVar5 = *(undefined1 **)(param_1 + 0x80);
    iVar6 = *(int *)(param_1 + 0x84);
    param_1[0x112] = 0;
    if (iVar6 != 0) {
      puVar3 = puVar5;
      do {
        *puVar3 = 0;
        iVar6 = iVar6 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x84) = 0;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    }
    iVar6 = *(int *)(param_1 + 0x70);
    param_1[0x113] = 0;
    if (iVar6 != -0x80000000) {
      puVar5 = *(undefined1 **)(param_1 + 0x74);
      iVar4 = *(int *)(param_1 + 0x78);
      if (iVar4 != 0) {
        do {
          *puVar5 = 0;
          iVar4 = iVar4 + -1;
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
        iVar6 = *(int *)(param_1 + 0x70);
        puVar5 = *(undefined1 **)(param_1 + 0x74);
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_1 + 0x70) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
      }
    }
    piVar7 = (int *)(param_1 + 0x68);
    param_1[0x114] = 0;
    param_1[0x110] = 0;
    FUN_00ebb27c(piVar7);
    piVar2 = (int *)*piVar7;
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00f36f34(*piVar7);
      }
    }
    *(undefined2 *)(param_1 + 0x115) = 0;
    return;
  }
  piVar2 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00f36b8c(*(undefined4 *)(param_1 + 0x60));
  }
  piVar2 = *(int **)(param_1 + 100);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00f36b8c(*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}

