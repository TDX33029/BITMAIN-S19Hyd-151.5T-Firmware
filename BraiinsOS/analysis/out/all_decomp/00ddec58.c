// FUN_00ddec58 @ 00ddec58 size=588 calls_out=6 calls_in=1
// strings: 

void FUN_00ddec58(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if ((char)param_1[0xb7] == '\0') {
    FUN_005c8810(param_1 + 0x24);
    if (param_1[3] == -0x80000000 || param_1[3] == 0) {
      iVar6 = *param_1;
    }
    else {
      thunk_FUN_016d3fb4(param_1[4]);
      iVar6 = *param_1;
    }
    if (iVar6 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    iVar6 = param_1[0x6c];
    piVar3 = (int *)(iVar6 + 0x44);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      FUN_00e46e30(iVar6 + 8);
    }
    piVar3 = (int *)param_1[0x6c];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(param_1[0x6c]);
      return;
    }
  }
  else if ((char)param_1[0xb7] == '\x03') {
    iVar6 = param_1[0x22];
    puVar7 = (undefined4 *)param_1[0x23];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(iVar6);
    }
    iVar6 = param_1[0xb6];
    *(undefined1 *)((int)param_1 + 0x2dd) = 0;
    if (iVar6 != 0) {
      puVar2 = (uint *)(iVar6 + 0x18);
      do {
        uVar8 = *puVar2;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = uVar8 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar8 & 10) == 8) {
        (**(code **)(*(int *)(iVar6 + 8) + 8))(*(undefined4 *)(iVar6 + 0xc));
      }
      if ((uVar8 & 2) != 0) {
        *(undefined1 *)(iVar6 + 0x1c) = 2;
      }
      piVar3 = (int *)param_1[0xb6];
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f3128(param_1[0xb6]);
        }
      }
    }
    *(undefined1 *)((int)param_1 + 0x2de) = 0;
    FUN_005c3004(param_1 + 0xc);
    iVar6 = param_1[0xb5];
    *(undefined1 *)((int)param_1 + 0x2df) = 0;
    piVar3 = (int *)(iVar6 + 0x44);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      FUN_00e46e30(iVar6 + 8);
    }
    piVar3 = (int *)param_1[0xb5];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(param_1[0xb5]);
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
    if (param_1[9] == -0x80000000 || param_1[9] == 0) {
      iVar6 = param_1[6];
    }
    else {
      thunk_FUN_016d3fb4(param_1[10]);
      iVar6 = param_1[6];
    }
    if (iVar6 != 0) {
      thunk_FUN_016d3fb4(param_1[7]);
    }
    *(undefined1 *)((int)param_1 + 0x2e1) = 0;
    FUN_005c8810(param_1 + 0x6e);
    *(undefined1 *)((int)param_1 + 0x2e2) = 0;
  }
  return;
}

