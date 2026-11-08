// FUN_00b7c12c @ 00b7c12c size=156 calls_out=4 calls_in=1
// strings: This board does not support Wi-Fi!

void FUN_00b7c12c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_2 + 7) == '\0') {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    iVar1 = param_2[3];
    uVar2 = param_2[4];
    FUN_01af9864(&local_30,"This board does not support Wi-Fi!",0x22);
    if (iVar1 != -0x80000000) {
      FUN_019bb7e0(iVar1,uVar2);
    }
    FUN_019bb7e0(uVar3,uVar4);
    param_1[2] = local_2c;
    *param_1 = 0x80000002;
    param_1[1] = local_30;
    *(undefined1 *)(param_2 + 7) = 1;
    return;
  }
  if (*(char *)(param_2 + 7) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c136a0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c136a0);
}

