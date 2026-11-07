// FUN_01833680 @ 01833680 size=464 calls_out=4 calls_in=1
// strings: pubkey != NULL | keypair != NULL

int FUN_01833680(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_88;
  int local_84;
  undefined1 auStack_80 [40];
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == 0) {
    uVar3 = (**(code **)(param_1 + 0xa0))("pubkey != NULL",*(undefined4 *)(param_1 + 0xa4),0);
  }
  else {
    FUN_016dd606(param_2,0,0x40);
    if (param_4 == 0) {
      uVar3 = (**(code **)(param_1 + 0xa0))("keypair != NULL",*(undefined4 *)(param_1 + 0xa4));
    }
    else {
      iVar1 = FUN_01825cf0(param_1,auStack_80,param_4 + 0x20);
      uVar3 = 0;
      if (iVar1 != 0) {
        local_84 = local_54;
        local_88 = local_4c;
        iVar2 = 0;
        if ((local_58 & 1) != 0) {
          local_84 = 0xffffefc - local_54;
          local_58 = 0xffff0bc - local_58;
          local_34 = 0xfffffc - local_34;
          local_88 = 0xffffffc - local_4c;
          local_50 = 0xffffffc - local_50;
          local_48 = 0xffffffc - local_48;
          local_44 = 0xffffffc - local_44;
          local_40 = 0xffffffc - local_40;
          local_3c = 0xffffffc - local_3c;
          local_38 = 0xffffffc - local_38;
          iVar2 = iVar1;
        }
        if (param_3 != (int *)0x0) {
          *param_3 = iVar2;
        }
        local_54 = local_84;
        local_4c = local_88;
        uVar3 = FUN_0182f990(param_2,auStack_80);
        goto LAB_01833704;
      }
    }
  }
  iVar1 = 0;
LAB_01833704:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,local_2c ^ DAT_018ddaf8,0);
  }
  return iVar1;
}

