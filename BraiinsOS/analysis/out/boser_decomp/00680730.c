// FUN_00680730 @ 00680730 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00680730(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_b0 [140];
  undefined1 auStack_24 [12];
  
  FUN_006666fc(auStack_24,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14));
  FUN_0069f130(auStack_b0,param_3,param_2,auStack_24,param_5,param_4,param_6);
  FUN_006807d8(param_1,auStack_b0);
  return;
}

