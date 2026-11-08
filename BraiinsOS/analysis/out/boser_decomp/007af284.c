// FUN_007af284 @ 007af284 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_007af284(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_30;
  undefined1 auStack_2c [20];
  uint local_18;
  undefined4 local_14;
  
  local_30 = 0x8074b50;
  FUN_01bed4e2(auStack_2c,param_2,0x14);
  FUN_007b01f0(&local_18,param_3,&local_30,0x18);
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

