// FUN_016d8bf6 @ 016d8bf6 size=54 calls_out=3 calls_in=2
// strings: 

int FUN_016d8bf6(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  thunk_FUN_016dde14(0x129,param_1,param_2,param_3,0,0,0);
  iVar1 = FUN_016d3496();
  if (-1 < iVar1) {
    FUN_016d8b08(param_2,uVar2);
  }
  return iVar1;
}

