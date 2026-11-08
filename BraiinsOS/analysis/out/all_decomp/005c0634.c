// FUN_005c0634 @ 005c0634 size=852 calls_out=9 calls_in=4
// strings: 

void FUN_005c0634(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x104) == '\0') {
    piVar2 = *(int **)(param_1 + 0xf8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*(undefined4 *)(param_1 + 0xf8));
    }
    piVar2 = *(int **)(param_1 + 0xfc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(*(undefined4 *)(param_1 + 0xfc));
    }
    puVar5 = (undefined4 *)(param_1 + 0x100);
    FUN_01663cc4(*puVar5);
    piVar2 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar5);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x104) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x60)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x4c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(*(undefined4 *)(param_1 + 0x4c));
    }
    puVar5 = (undefined4 *)(param_1 + 0x50);
    FUN_01663cc4(*puVar5);
    piVar2 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar5);
    }
  default:
    goto switchD_005c0664_caseD_1;
  case 3:
    break;
  case 4:
    FUN_0163bdc0(param_1 + 0x80);
    if (*(int *)(param_1 + 0x90) != 0) {
      (**(code **)(*(int *)(param_1 + 0x90) + 0xc))(*(undefined4 *)(param_1 + 0x94));
    }
    break;
  case 5:
    if ((*(char *)(param_1 + 0x74) == '\x03') && (*(int *)(param_1 + 0x6c) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),1);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0xf0) == '\x03') {
      if (*(char *)(param_1 + 0xe4) == '\x03') {
        if (*(char *)(param_1 + 0xe3) == '\x03') {
          uVar7 = *(undefined4 *)(param_1 + 0xbc);
          puVar5 = *(undefined4 **)(param_1 + 0xc0);
          pcVar3 = (code *)*puVar5;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar7);
          }
          if (puVar5[1] != 0) {
            thunk_FUN_016d3fb4(uVar7);
          }
          *(undefined1 *)(param_1 + 0xe2) = 0;
          *(undefined2 *)(param_1 + 0xe0) = 0;
        }
        else if (*(char *)(param_1 + 0xe3) == '\0') {
          if (*(int *)(param_1 + 200) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4));
          }
          if (*(int *)(param_1 + 0xd0) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
          }
          iVar4 = *(int *)(param_1 + 0xd8);
          if (iVar4 != 0) {
            iVar6 = *(int *)(param_1 + 0xd4);
            iVar8 = 0;
            do {
              puVar5 = (undefined4 *)(iVar6 + iVar8 * 8);
              if (puVar5[1] != 0) {
                thunk_FUN_016d3fb4(*puVar5);
              }
              iVar8 = iVar8 + 1;
            } while (iVar4 != iVar8);
            thunk_FUN_016d3fb4(iVar6);
          }
        }
        *(undefined1 *)(param_1 + 0xe5) = 0;
      }
      else if ((*(char *)(param_1 + 0xe4) == '\0') && (*(int *)(param_1 + 0x90) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
      }
      *(undefined1 *)(param_1 + 0xf1) = 0;
    }
    FUN_00e44114(*(undefined4 *)(param_1 + 0x68));
  }
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  FUN_00a07b4c(uVar7);
  thunk_FUN_016d3fb4(uVar7);
  puVar5 = (undefined4 *)(param_1 + 0x5c);
  FUN_01663cc4(*puVar5);
  piVar2 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar5);
  }
  piVar2 = *(int **)(param_1 + 0x58);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x58));
  }
switchD_005c0664_caseD_1:
  piVar2 = *(int **)(param_1 + 0xf8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45d08(*(undefined4 *)(param_1 + 0xf8));
    return;
  }
  return;
}

