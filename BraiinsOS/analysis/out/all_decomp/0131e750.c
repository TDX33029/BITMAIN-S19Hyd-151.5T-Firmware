// FUN_0131e750 @ 0131e750 size=116 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0131e750(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_018d8904;
  DataMemoryBarrier(0xb);
  if (DAT_018d8904 == 0) {
    return DAT_018d8908;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d8904,0,&local_c,&DAT_0188f208,&DAT_0188e9dc);
  return DAT_018d8908;
}

