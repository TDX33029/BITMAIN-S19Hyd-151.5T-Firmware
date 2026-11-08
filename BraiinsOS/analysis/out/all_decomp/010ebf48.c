// FUN_010ebf48 @ 010ebf48 size=100 calls_out=1 calls_in=0
// strings: 

void FUN_010ebf48(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  if (param_1[6] != 0) {
    thunk_FUN_016d3fb4(param_1[7]);
  }
  if (param_1[9] != 0) {
    thunk_FUN_016d3fb4(param_1[10]);
  }
  uVar1 = FUN_016dac50(param_1[0xc]);
  iVar2 = thunk_FUN_016dde14(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_016d3496(iVar2);
  return;
}

