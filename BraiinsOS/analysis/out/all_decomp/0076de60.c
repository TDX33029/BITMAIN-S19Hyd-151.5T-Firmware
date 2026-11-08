// FUN_0076de60 @ 0076de60 size=148 calls_out=2 calls_in=1
// strings: 

void FUN_0076de60(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(9);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  *(undefined1 *)(puVar1 + 2) = 0x5f;
  puVar1[1] = 0x746c7561;
  *puVar1 = 0x6665645f;
  param_1[8] = 0;
  param_1[9] = 9;
  param_1[10] = puVar1;
  param_1[0xb] = 9;
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  return;
}

