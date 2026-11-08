// FUN_012a4388 @ 012a4388 size=124 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_012a4388(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 ***local_c;
  
  local_14 = &DAT_018d8824;
  DataMemoryBarrier(0xb);
  if (DAT_018d8824 == 0) {
    return DAT_018d8828;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d8824,0,&local_c,&DAT_0188bd24,&DAT_0188bca0);
  return local_14[1];
}

