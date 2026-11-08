// FUN_0131a640 @ 0131a640 size=108 calls_out=1 calls_in=2
// strings: 

void FUN_0131a640(void)

{
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  
  local_14 = &DAT_01d4cfec;
  DataMemoryBarrier(0xb);
  if (DAT_01d4cfe8 != 0) {
    local_10 = &local_14;
    local_c = &local_10;
    FUN_019a768c(&DAT_01d4cfe8,0,&local_c,&DAT_01ce4d08,&DAT_01ce4cf8);
  }
  return;
}

