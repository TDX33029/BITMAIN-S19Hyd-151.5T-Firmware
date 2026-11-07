// FUN_00ab29c0 @ 00ab29c0 size=72 calls_out=3 calls_in=0
// strings: 

void FUN_00ab29c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  FUN_0196c25c(uVar1,param_1[2]);
  FUN_0134aee0(*param_1,uVar1,4,0x10);
  if (param_1[4] == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1[3]);
  return;
}

