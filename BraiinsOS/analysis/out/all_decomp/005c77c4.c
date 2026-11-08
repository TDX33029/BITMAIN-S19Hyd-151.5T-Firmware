// FUN_005c77c4 @ 005c77c4 size=228 calls_out=4 calls_in=5
// strings: 

void FUN_005c77c4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  switch(*(undefined1 *)(param_1 + 0x68)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 0x10);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_005c78a4;
  default:
    return;
  case 3:
    FUN_00a07b4c(param_1 + 0x70);
    break;
  case 4:
    if ((*(char *)(param_1 + 0x7c) == '\x03') && (*(int *)(param_1 + 0x74) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),1);
    }
    break;
  case 5:
    if ((*(char *)(param_1 + 0x7c) == '\x03') && (*(int *)(param_1 + 0x74) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),1);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
    }
  }
  puVar4 = (undefined4 *)(param_1 + 0x18);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_005c78a4:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*puVar4,puVar4[1]);
    return;
  }
  return;
}

