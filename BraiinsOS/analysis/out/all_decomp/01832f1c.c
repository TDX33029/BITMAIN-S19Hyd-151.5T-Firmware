// FUN_01832f1c @ 01832f1c size=276 calls_out=4 calls_in=1
// strings: output32 != NULL | pubkey != NULL

int FUN_01832f1c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [84];
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  if (param_2 == 0) {
    uVar2 = (**(code **)(param_1 + 0xa0))("output32 != NULL",*(undefined4 *)(param_1 + 0xa4),0);
  }
  else {
    FUN_016dd606(param_2,0,0x20);
    if (param_3 == 0) {
      uVar2 = (**(code **)(param_1 + 0xa0))("pubkey != NULL",*(undefined4 *)(param_1 + 0xa4));
    }
    else {
      iVar1 = FUN_01825cf0(param_1,auStack_68,param_3);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = FUN_0181ef6c(param_2,auStack_68);
        goto LAB_01832fa0;
      }
    }
  }
  iVar1 = 0;
LAB_01832fa0:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,local_14 ^ DAT_018ddaf8,0);
  }
  return iVar1;
}

