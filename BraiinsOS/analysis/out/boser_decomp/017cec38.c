// FUN_017cec38 @ 017cec38 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_017cec38(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_2 + 2) == '\0') {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uVar1 = FUN_014333d0(&local_18);
    *param_1 = 3;
    *(undefined1 *)(param_2 + 2) = 1;
    param_1[1] = uVar1;
    param_1[2] = &DAT_01cf5e1c;
    return;
  }
  if (*(char *)(param_2 + 2) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1c89c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01d1c89c);
}

