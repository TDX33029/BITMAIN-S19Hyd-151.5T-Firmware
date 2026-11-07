// FUN_00b13be4 @ 00b13be4 size=156 calls_out=2 calls_in=0
// strings: 

void FUN_00b13be4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x48);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x48);
  }
  puVar1[2] = 0x67f35400;
  puVar1[8] = 2000;
  puVar1[0x10] = 2000;
  puVar1[3] = 0;
  puVar1[6] = 1;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 1;
  puVar1[0xb] = 0;
  puVar1[0xe] = 1;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0x40c81c80;
  *param_1 = 1;
  param_1[1] = puVar1;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  return;
}

