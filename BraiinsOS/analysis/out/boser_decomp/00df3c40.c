// FUN_00df3c40 @ 00df3c40 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_00df3c40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  *param_1 = puVar1;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  return;
}

