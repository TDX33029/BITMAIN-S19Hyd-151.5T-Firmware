// FUN_014c5074 @ 014c5074 size=152 calls_out=5 calls_in=0
// strings: missing scheme

void FUN_014c5074(undefined4 *param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*param_2 != '\0') {
    if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018a6284);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6284);
  }
  FUN_015e79d4(&local_18,0x28,"missing scheme",0xe);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  param_1[1] = puVar1;
  param_1[2] = &DAT_018a500c;
  *param_1 = 3;
  *param_2 = '\x01';
  return;
}

