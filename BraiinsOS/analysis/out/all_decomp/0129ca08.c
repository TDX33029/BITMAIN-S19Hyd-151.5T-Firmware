// FUN_0129ca08 @ 0129ca08 size=124 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0129ca08(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 ***local_c;
  
  local_14 = &DAT_018d87f4;
  DataMemoryBarrier(0xb);
  if (DAT_018d87f4 == 0) {
    return DAT_018d87f8;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d87f4,0,&local_c,&DAT_0188bd88,&DAT_0188bca0);
  return local_14[1];
}

