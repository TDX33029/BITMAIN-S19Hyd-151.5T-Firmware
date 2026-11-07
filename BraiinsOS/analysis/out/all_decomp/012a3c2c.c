// FUN_012a3c2c @ 012a3c2c size=124 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_012a3c2c(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 ***local_c;
  
  local_14 = &DAT_018d881c;
  DataMemoryBarrier(0xb);
  if (DAT_018d881c == 0) {
    return DAT_018d8820;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d881c,0,&local_c,&DAT_0188bdc4,&DAT_0188bca0);
  return local_14[1];
}

