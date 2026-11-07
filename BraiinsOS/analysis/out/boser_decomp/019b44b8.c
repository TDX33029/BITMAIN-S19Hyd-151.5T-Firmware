// FUN_019b44b8 @ 019b44b8 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_019b44b8(void)

{
  undefined1 local_d;
  undefined1 *local_c;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d50338 == 0) {
    return;
  }
  local_d = 1;
  local_c = &local_d;
  FUN_019a768c(&DAT_01d50338,0,&local_c,&DAT_01d27cac,&DAT_01d277fc);
  return;
}

