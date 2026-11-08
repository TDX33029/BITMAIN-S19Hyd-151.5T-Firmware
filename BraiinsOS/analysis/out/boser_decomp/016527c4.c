// FUN_016527c4 @ 016527c4 size=76 calls_out=2 calls_in=0
// strings: 

bool FUN_016527c4(uint *param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  FUN_019d23c8(&local_18);
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

