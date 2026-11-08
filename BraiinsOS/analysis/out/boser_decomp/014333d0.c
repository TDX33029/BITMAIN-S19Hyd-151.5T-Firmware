// FUN_014333d0 @ 014333d0 size=52 calls_out=2 calls_in=19
// strings: 

void FUN_014333d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  uVar2 = param_1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  return;
}

