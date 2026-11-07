// FUN_013f1d70 @ 013f1d70 size=112 calls_out=4 calls_in=1
// strings: 

void FUN_013f1d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_01401870(*(undefined4 *)(param_4 + 0x84));
  if (iVar1 != 0) {
    FUN_0140a2dc(param_2,param_3,iVar1);
    FUN_01409c78(iVar1);
  }
  FUN_013f1df8(param_1,param_4,param_5,param_6);
  return;
}

