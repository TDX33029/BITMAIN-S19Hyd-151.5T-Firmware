// FUN_019a8444 @ 019a8444 size=96 calls_out=2 calls_in=0
// strings: 

bool FUN_019a8444(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  FUN_019a7f74(&local_18,*(undefined4 *)param_1[2],param_2,param_3);
  uVar1 = local_18 & 0xff;
  if (uVar1 != 4) {
    if ((char)*param_1 != '\x04') {
      FUN_0197acb4(param_1);
    }
    *param_1 = local_18;
    param_1[1] = uStack_14;
  }
  return uVar1 != 4;
}

