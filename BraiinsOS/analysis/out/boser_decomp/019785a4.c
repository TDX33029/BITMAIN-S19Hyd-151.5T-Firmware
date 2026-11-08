// FUN_019785a4 @ 019785a4 size=100 calls_out=1 calls_in=2
// strings: 

void FUN_019785a4(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_01d4fd6c;
  DataMemoryBarrier(0xb);
  if (DAT_01d4fd88 != 0) {
    local_10 = &local_14;
    local_c = &local_10;
    FUN_019a768c(&DAT_01d4fd88,0,&local_c,&DAT_01d27448,&DAT_01d27438);
  }
  return;
}

