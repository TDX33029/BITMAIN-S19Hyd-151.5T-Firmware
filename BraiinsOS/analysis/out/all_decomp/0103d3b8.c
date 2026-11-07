// FUN_0103d3b8 @ 0103d3b8 size=84 calls_out=4 calls_in=2
// strings: 

void FUN_0103d3b8(short *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_0103b9f8();
  if (*param_1 == 2) {
    uVar1 = *(undefined4 *)(param_1 + 2);
    FUN_0103a4b0(param_1,param_2,param_3);
    FUN_01036ca0(uVar1);
    thunk_FUN_016d3fb4(uVar1);
  }
  return;
}

