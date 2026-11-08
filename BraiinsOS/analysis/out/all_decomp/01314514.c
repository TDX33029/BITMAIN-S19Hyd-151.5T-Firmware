// FUN_01314514 @ 01314514 size=116 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01314514(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_018d88bc;
  DataMemoryBarrier(0xb);
  if (DAT_018d88bc == 0) {
    return DAT_018d88c0;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d88bc,0,&local_c,&DAT_0188f0b4,&DAT_0188e9dc);
  return DAT_018d88c0;
}

