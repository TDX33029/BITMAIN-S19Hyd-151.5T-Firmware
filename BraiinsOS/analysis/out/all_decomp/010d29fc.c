// FUN_010d29fc @ 010d29fc size=40 calls_out=1 calls_in=0
// strings: 

void FUN_010d29fc(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[1] != 0) {
    thunk_FUN_016d3fb4(*param_1);
  }
  uVar1 = FUN_016dac50(param_1[5]);
  iVar2 = thunk_FUN_016dde14(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_016d3496(iVar2);
  return;
}

