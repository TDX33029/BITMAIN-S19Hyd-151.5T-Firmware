// FUN_0195ad40 @ 0195ad40 size=84 calls_out=2 calls_in=3
// strings: 

void FUN_0195ad40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = param_2;
  puVar1[1] = &DAT_01d26a90;
  *param_1 = 0x80000000;
  param_1[1] = puVar1;
  param_1[2] = &DAT_01d269e4;
  return;
}

