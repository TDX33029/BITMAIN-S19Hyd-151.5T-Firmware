// FUN_00acb058 @ 00acb058 size=432 calls_out=9 calls_in=2
// strings: 

void FUN_00acb058(int param_1)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 200) != '\0') {
    if (*(char *)(param_1 + 200) == '\x03') {
      FUN_00887914(param_1 + 0xb8);
      return;
    }
    return;
  }
  if (5 < *(byte *)(param_1 + 0x42)) goto switchD_00acb098_caseD_1;
  switch(*(byte *)(param_1 + 0x42)) {
  case 0:
    puVar3 = (undefined4 *)(param_1 + 0x3c);
    piVar2 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar4 + -1;
    break;
  default:
    goto switchD_00acb098_caseD_1;
  case 3:
    uVar1 = (ushort)*(byte *)(param_1 + 0x68);
    bVar5 = uVar1 == 3;
    if (bVar5) {
      uVar1 = *(ushort *)(param_1 + 0x48);
    }
    if (bVar5 && uVar1 == 3) {
      piVar2 = *(int **)(param_1 + 0x4c);
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar5 = (bool)hasExclusiveAccess(piVar2);
        if (bVar5) {
          *piVar2 = 0x84;
          goto LAB_00acb1b8;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar2[2] + 0x10))();
    }
    goto LAB_00acb1b8;
  case 5:
    FUN_00ac9344(param_1 + 0x68);
    piVar2 = *(int **)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d06854(*(undefined4 *)(param_1 + 0x44));
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    FUN_005e6cdc(param_1 + 0x58);
    if (*(int *)(param_1 + 100) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x41) = 0;
    if (*(int *)(param_1 + 0x48) == 2) {
      FUN_00acb358();
    }
  case 4:
    FUN_005e6cdc(param_1 + 0xc);
    if (*(int *)(param_1 + 0x18) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0xc);
LAB_00acb1b8:
    if (*(int *)(param_1 + 0x30) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
    }
    puVar3 = (undefined4 *)(param_1 + 0x2c);
    piVar2 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06854(*puVar3);
  }
switchD_00acb098_caseD_1:
  FUN_00ac9c30(param_1);
  return;
}

