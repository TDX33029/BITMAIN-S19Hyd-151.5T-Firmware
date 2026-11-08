// FUN_00a87114 @ 00a87114 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_00a87114(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    FUN_016dffb2();
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    FUN_016dffb2();
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    return;
  }
  uVar1 = FUN_016dac50();
  iVar2 = thunk_FUN_016dde14(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_016d3496(iVar2);
  return;
}

