// FUN_009657e0 @ 009657e0 size=640 calls_out=10 calls_in=2
// strings: 

void FUN_009657e0(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  switch(*(undefined1 *)(param_1 + 0xb2)) {
  case 3:
    if (*(char *)(param_1 + 0xc0) != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0xb8) == 0) {
      return;
    }
    FUN_00999924(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),1);
    return;
  case 4:
    goto switchD_00965800_caseD_4;
  case 5:
    if (*(char *)(param_1 + 400) == '\x03') {
      FUN_0096cfd4(param_1 + 0xf0);
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    }
    if (*(int *)(param_1 + 0xd4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    }
    if ((*(uint *)(param_1 + 200) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
    }
    if ((*(uint *)(param_1 + 0x198) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x19c));
    }
    break;
  case 6:
    FUN_0095e70c(param_1 + 0xb8);
    break;
  case 7:
    if ((*(char *)(param_1 + 0xd4) == '\x03') && (*(int *)(param_1 + 0xcc) != 0)) {
      FUN_00999924(*(int *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),1);
    }
    piVar2 = *(int **)(param_1 + 0x94);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078e66c(*(undefined4 *)(param_1 + 0x94));
    }
    break;
  case 8:
    FUN_00989d30(param_1 + 0xb8);
    FUN_005c3320(param_1 + 0xb8);
    goto LAB_00965a48;
  default:
    return;
  }
  piVar2 = *(int **)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0xab) = 0;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0x90));
    }
  }
  piVar2 = *(int **)(param_1 + 0x8c);
  *(undefined1 *)(param_1 + 0xac) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa7c3c(*(undefined4 *)(param_1 + 0x8c));
  }
  puVar5 = (uint *)(*(int *)(param_1 + 0x54) + 0x10);
  *(undefined1 *)(param_1 + 0xaf) = 0;
  *(undefined2 *)(param_1 + 0xad) = 0;
  for (iVar4 = ((uint)(*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x54)) >> 2) * 0x38e38e39;
      iVar4 != 0; iVar4 = iVar4 + -1) {
    if ((*puVar5 & 0x7fffffff) == 0) {
      uVar3 = puVar5[-3];
    }
    else {
      thunk_FUN_016d3fb4(puVar5[1]);
      uVar3 = puVar5[-3];
    }
    if (uVar3 != 0) {
      thunk_FUN_016d3fb4(puVar5[-2]);
    }
    puVar5 = puVar5 + 9;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
  }
LAB_00965a48:
  FUN_00ce17a4(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 0x44) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x48));
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
switchD_00965800_caseD_4:
  *(undefined1 *)(param_1 + 0xb1) = 0;
  return;
}

