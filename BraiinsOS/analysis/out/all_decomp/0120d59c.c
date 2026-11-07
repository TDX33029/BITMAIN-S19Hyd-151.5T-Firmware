// FUN_0120d59c @ 0120d59c size=88 calls_out=3 calls_in=0
// strings: 

void FUN_0120d59c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  *puVar2 = puVar1;
  puVar2[1] = 0;
  return;
}

