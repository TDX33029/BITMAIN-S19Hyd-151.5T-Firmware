// FUN_007af304 @ 007af304 size=128 calls_out=2 calls_in=2
// strings: 

void FUN_007af304(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_38;
  undefined1 auStack_34 [28];
  uint local_18;
  undefined4 local_14;
  
  local_38 = 0x4034b50;
  FUN_01bed4e2(auStack_34,param_2,0x1a);
  FUN_007b01f0(&local_18,param_3,&local_38,0x1e);
  if (((char)local_18 == '\x04') || ((local_18 & 0xff) == 4)) {
    *param_1 = 0x80000007;
  }
  else {
    *param_1 = 0x80000001;
    param_1[1] = local_18;
    param_1[2] = local_14;
  }
  return;
}

