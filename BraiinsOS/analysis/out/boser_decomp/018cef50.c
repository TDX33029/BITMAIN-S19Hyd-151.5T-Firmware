// FUN_018cef50 @ 018cef50 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_018cef50(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)thunk_FUN_01be5118(0x24);
  if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(2,0x24);
  }
  puVar1[0x10] = 2;
  puVar1[0xe] = 4;
  puVar1[6] = 10;
  puVar1[0xc] = 6;
  puVar1[4] = 0xb;
  puVar1[10] = 8;
  puVar1[2] = 3;
  puVar1[8] = 9;
  *puVar1 = 5;
  *param_1 = 9;
  param_1[1] = puVar1;
  param_1[2] = 9;
  return;
}

