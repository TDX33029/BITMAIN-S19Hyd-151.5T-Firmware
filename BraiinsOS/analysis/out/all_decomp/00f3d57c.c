// FUN_00f3d57c @ 00f3d57c size=52 calls_out=2 calls_in=0
// strings: 

void FUN_00f3d57c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_01629d00(param_1 + 1);
  if (param_1[2] != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  uVar1 = FUN_016dac50(*param_1);
  iVar2 = thunk_FUN_016dde14(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_016d3496(iVar2);
  return;
}

