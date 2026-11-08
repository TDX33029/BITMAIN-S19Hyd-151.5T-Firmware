// FUN_010ebd9c @ 010ebd9c size=100 calls_out=1 calls_in=0
// strings: 

void FUN_010ebd9c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38));
  }
  uVar1 = FUN_016dac50(*(undefined4 *)(param_1 + 0x40));
  iVar2 = thunk_FUN_016dde14(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_016d3496(iVar2);
  return;
}

