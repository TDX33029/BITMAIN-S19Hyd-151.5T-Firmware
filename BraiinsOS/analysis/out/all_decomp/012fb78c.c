// FUN_012fb78c @ 012fb78c size=116 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_012fb78c(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_018d8864;
  DataMemoryBarrier(0xb);
  if (DAT_018d8864 == 0) {
    return DAT_018d8868;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d8864,0,&local_c,&DAT_0188f0a0,&DAT_0188e9dc);
  return DAT_018d8868;
}

