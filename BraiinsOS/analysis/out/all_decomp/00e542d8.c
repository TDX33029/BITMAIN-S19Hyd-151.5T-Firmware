// FUN_00e542d8 @ 00e542d8 size=312 calls_out=7 calls_in=1
// strings: 

void FUN_00e542d8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  switch(*(undefined1 *)(param_1 + 0x6c)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 0x58);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_00e54414;
  default:
    return;
  case 3:
    break;
  case 4:
    if ((*(char *)(param_1 + 0x7c) == '\x03') && (*(int *)(param_1 + 0x74) != 0)) {
      FUN_00e44660(*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),1);
    }
    break;
  case 5:
    if ((*(char *)(param_1 + 0x7c) == '\x03') && (*(int *)(param_1 + 0x74) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),1);
    }
    goto LAB_00e543ac;
  case 6:
    if ((*(char *)(param_1 + 0x7c) == '\x03') && (*(int *)(param_1 + 0x74) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),1);
    }
LAB_00e543ac:
    piVar2 = *(int **)(param_1 + 0x68);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d444(*(undefined4 *)(param_1 + 0x68));
    }
    FUN_00ef99cc(param_1 + 0x28);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  FUN_00a07b4c(uVar5);
  thunk_FUN_016d3fb4(uVar5);
  puVar4 = (undefined4 *)(param_1 + 0x5c);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_00e54414:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*puVar4);
    return;
  }
  return;
}

