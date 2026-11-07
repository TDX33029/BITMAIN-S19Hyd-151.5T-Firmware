// FUN_010574a8 @ 010574a8 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_010574a8(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(param_1 + 2);
  }
  if (*param_1 != 0 && iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
  }
  iVar1 = 0;
  if (param_1[0x12] != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  if (param_1[0x12] != 0 && iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16));
    FUN_007963b0(param_1 + 0x24);
    return;
  }
  FUN_007963b0(param_1 + 0x24);
  return;
}

