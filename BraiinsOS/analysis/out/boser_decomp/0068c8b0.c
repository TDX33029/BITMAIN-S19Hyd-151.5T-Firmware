// FUN_0068c8b0 @ 0068c8b0 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_0068c8b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_01298504(0x7c,4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x7c);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  return;
}

