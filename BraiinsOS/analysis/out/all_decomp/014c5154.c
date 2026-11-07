// FUN_014c5154 @ 014c5154 size=160 calls_out=5 calls_in=0
// strings: 

void FUN_014c5154(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(char *)(param_2 + 3) != '\0') {
    if (*(char *)(param_2 + 3) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018a6274);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6274);
  }
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  FUN_0156a5a0(&local_28,0x28,&local_20);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  param_1[1] = puVar1;
  param_1[2] = &DAT_018a500c;
  *param_1 = 3;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}

