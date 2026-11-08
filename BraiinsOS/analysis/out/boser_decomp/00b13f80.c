// FUN_00b13f80 @ 00b13f80 size=232 calls_out=2 calls_in=0
// strings: 

void FUN_00b13f80(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x78);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  puVar1[2] = 900;
  puVar1[3] = 0;
  puVar1[0xc] = 1;
  puVar1[0x10] = 1;
  puVar1[0x14] = 1;
  puVar1[0x18] = 1;
  puVar1[7] = 0;
  puVar1[8] = 1;
  puVar1[9] = 0;
  puVar1[0xd] = 0;
  puVar1[0x11] = 0;
  puVar1[0x15] = 0;
  puVar1[0x19] = 0;
  puVar1[4] = 1;
  puVar1[5] = 0;
  puVar1[6] = 0x3b0;
  puVar1[10] = 0x20000000;
  puVar1[0xb] = 0x40443a3f;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0x4018aaaa;
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[0x12] = 0x83a68dd2;
  puVar1[0x13] = 0x40434a2e;
  puVar1[0x16] = 0xe8000000;
  puVar1[0x17] = 0x41a914f0;
  puVar1[0x1a] = &DAT_8d4fdf3b;
  puVar1[0x1b] = 0x4027ee97;
  puVar1[0x1c] = 1;
  puVar1[0x1d] = 0x19;
  *param_1 = 1;
  param_1[1] = puVar1;
  param_1[2] = 1;
  return;
}

