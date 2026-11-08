// FUN_006960c4 @ 006960c4 size=92 calls_out=2 calls_in=0
// strings: 

bool FUN_006960c4(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_20;
  uint uStack_1c;
  
  FUN_006bc590(&local_20,*(undefined4 *)param_1[2],param_2,param_3);
  if ((local_20 & 0xff) != 4) {
    if ((char)*param_1 != '\x04') {
      FUN_0069603c(param_1);
    }
    *param_1 = local_20;
    param_1[1] = uStack_1c;
  }
  return (local_20 & 0xff) != 4;
}

