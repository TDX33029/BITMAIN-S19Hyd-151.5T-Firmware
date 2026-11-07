// FUN_013187a4 @ 013187a4 size=116 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_013187a4(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_018d88cc;
  DataMemoryBarrier(0xb);
  if (DAT_018d88cc == 0) {
    return DAT_018d88d0;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d88cc,0,&local_c,&DAT_0188f064,&DAT_0188e9dc);
  return DAT_018d88d0;
}

