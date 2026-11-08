// FUN_00b9d688 @ 00b9d688 size=104 calls_out=2 calls_in=0
// strings: 

void FUN_00b9d688(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  param_1[1] = &DAT_3fdccccc;
  *puVar1 = 12500000;
  puVar1[1] = 12500000;
  puVar1[2] = 12500000;
  *param_1 = 0xcccccccd;
  param_1[2] = 3;
  param_1[3] = puVar1;
  param_1[4] = 3;
  param_1[5] = 0x6010001;
  return;
}

