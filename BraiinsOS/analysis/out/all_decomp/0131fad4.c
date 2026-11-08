// FUN_0131fad4 @ 0131fad4 size=116 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0131fad4(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_018d890c;
  DataMemoryBarrier(0xb);
  if (DAT_018d890c == 0) {
    return DAT_018d8910;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d890c,0,&local_c,&DAT_0188f0c8,&DAT_0188e9dc);
  return DAT_018d8910;
}

