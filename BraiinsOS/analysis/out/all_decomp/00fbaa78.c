// FUN_00fbaa78 @ 00fbaa78 size=112 calls_out=1 calls_in=2
// strings: 

void FUN_00fbaa78(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_018d8074;
  DataMemoryBarrier(0xb);
  if (DAT_018d8070 == 0) {
    return;
  }
  local_10 = &local_14;
  local_c = &local_10;
  FUN_015eedc4(&DAT_018d8070,0,&local_c,&DAT_018813c0,&DAT_0188138c);
  return;
}

