// FUN_015fc8f4 @ 015fc8f4 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_015fc8f4(void)

{
  undefined1 local_d;
  undefined1 *local_c;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d9088 == 0) {
    return;
  }
  local_d = 1;
  local_c = &local_d;
  FUN_015eedc4(&DAT_018d9088,0,&local_c,&DAT_018ab088,&DAT_018aabfc);
  return;
}

