// FUN_00bce3d0 @ 00bce3d0 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_00bce3d0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x6a) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x03') {
    FUN_00bd3480(param_1 + 8);
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x5c) + 4);
  for (iVar1 = *(int *)(param_1 + 0x60); iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*piVar2 != 0) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
    piVar2 = piVar2 + 4;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  *(undefined2 *)(param_1 + 0x68) = 0;
  return;
}

