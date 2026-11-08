// FUN_0118c2e4 @ 0118c2e4 size=128 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0118c2e4(void)

{
  undefined4 *puVar1;
  uint local_34;
  uint local_28;
  
  local_28 = local_28 & 0xffffff00;
  local_34 = local_34 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = 0x1fffffff;
  puVar1[3] = local_34;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = local_28;
  puVar1[7] = 0x3ffffffe;
  puVar1[8] = 0;
  puVar1[9] = 4;
  puVar1[10] = 0;
  return;
}

