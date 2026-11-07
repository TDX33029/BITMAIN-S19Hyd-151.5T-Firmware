// FUN_007ae35c @ 007ae35c size=88 calls_out=2 calls_in=0
// strings: 

bool FUN_007ae35c(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  FUN_007adef8(&local_18,param_1[2],param_2,param_3);
  uVar1 = local_18 & 0xff;
  if (uVar1 != 4) {
    if ((char)*param_1 != '\x04') {
      FUN_0069d8a4((char)*param_1,param_1[1]);
    }
    *param_1 = local_18;
    param_1[1] = uStack_14;
  }
  return uVar1 != 4;
}

