// FUN_00b6a2d0 @ 00b6a2d0 size=124 calls_out=3 calls_in=1
// strings: This board does not support Wi-Fi!

void FUN_00b6a2d0(undefined4 *param_1,int param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_2 + 4) == '\0') {
    FUN_01af9864(&local_18,"This board does not support Wi-Fi!",0x22);
    param_1[2] = local_18;
    *param_1 = 0x80000001;
    param_1[1] = 0x80000002;
    param_1[3] = uStack_14;
    *(undefined1 *)(param_2 + 4) = 1;
    return;
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13360);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c13360);
}

