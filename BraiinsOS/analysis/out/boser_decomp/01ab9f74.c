// FUN_01ab9f74 @ 01ab9f74 size=52 calls_out=2 calls_in=2
// strings: 

uint * FUN_01ab9f74(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_01ac2674(param_1 + 0xc);
  if (0x7ffffffe < *puVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2eee0);
  }
  *puVar1 = *puVar1 + 1;
  return puVar1 + 1;
}

