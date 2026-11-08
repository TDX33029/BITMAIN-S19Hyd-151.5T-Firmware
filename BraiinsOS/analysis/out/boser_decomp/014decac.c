// FUN_014decac @ 014decac size=84 calls_out=3 calls_in=3
// strings: 

void FUN_014decac(undefined1 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (*param_2 != 2) {
    FUN_019bb7e0(param_2[4],param_2[5]);
  }
  *param_2 = 2;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = param_2;
  *param_1 = 1;
  return;
}

