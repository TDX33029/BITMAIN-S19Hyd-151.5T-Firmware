// FUN_012f7aac @ 012f7aac size=116 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_012f7aac(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_018d8854;
  DataMemoryBarrier(0xb);
  if (DAT_018d8854 == 0) {
    return DAT_018d8858;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d8854,0,&local_c,&DAT_0188f1e0,&DAT_0188e9dc);
  return DAT_018d8858;
}

