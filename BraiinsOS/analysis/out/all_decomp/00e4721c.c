// FUN_00e4721c @ 00e4721c size=152 calls_out=2 calls_in=1
// strings: 

void FUN_00e4721c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    do {
      iVar3 = iVar3 + -1;
      iVar2 = 0;
      if (*piVar1 != 0) {
        iVar2 = piVar1[1];
      }
      if (*piVar1 != 0 && iVar2 != 0) {
        (**(code **)(iVar2 + 0xc))(piVar1[2]);
      }
      piVar1 = piVar1 + 3;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x20) == 2 && *(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_00e47c18((int *)(param_1 + 0x20));
  return;
}

