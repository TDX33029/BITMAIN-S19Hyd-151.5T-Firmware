// FUN_00716624 @ 00716624 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_00716624(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar1 = param_1;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  return;
}

