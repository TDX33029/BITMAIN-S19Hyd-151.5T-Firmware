// FUN_012a1f10 @ 012a1f10 size=124 calls_out=1 calls_in=0
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_012a1f10(void)

{
  undefined1 *local_14;
  undefined1 **local_10;
  undefined1 ***local_c;
  
  local_14 = &DAT_018d880c;
  DataMemoryBarrier(0xb);
  if (_DAT_018d880c == 0) {
    return DAT_018d8810;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d880c,0,&local_c,&DAT_0188bdb0,&DAT_0188bca0);
  return *(undefined4 *)(local_14 + 4);
}

