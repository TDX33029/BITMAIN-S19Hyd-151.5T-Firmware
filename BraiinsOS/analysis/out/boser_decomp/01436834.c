// FUN_01436834 @ 01436834 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_01436834(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_01298504(0x68,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  return;
}

