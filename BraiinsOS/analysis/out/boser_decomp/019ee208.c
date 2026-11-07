// FUN_019ee208 @ 019ee208 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_019ee208(uint *param_1,undefined4 param_2)

{
  uint local_10;
  uint local_c;
  
  FUN_01979d08(&local_10,param_2,0x801,6);
  if (((char)local_10 == '\x04') || ((local_10 & 0xff) == 4)) {
    param_1[1] = local_c;
    *(undefined1 *)param_1 = 4;
  }
  else {
    *param_1 = local_10;
    param_1[1] = local_c;
  }
  return;
}

