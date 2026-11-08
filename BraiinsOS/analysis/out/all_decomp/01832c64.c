// FUN_01832c64 @ 01832c64 size=676 calls_out=8 calls_in=1
// strings: pubkey != NULL | input32 != NULL

int FUN_01832c64(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  undefined1 auStack_d0 [40];
  int local_a8 [10];
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint local_64;
  uint local_60;
  int iStack_5c;
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
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == 0) {
    (**(code **)(param_1 + 0xa0))("pubkey != NULL",*(undefined4 *)(param_1 + 0xa4));
  }
  else {
    FUN_016dd606(param_2,0,0x40,0);
    if (param_3 == 0) {
      (**(code **)(param_1 + 0xa0))("input32 != NULL",*(undefined4 *)(param_1 + 0xa4));
    }
    else {
      FUN_0181edb4(&local_f8,param_3);
      if ((local_f0 & local_ec & local_e8 & local_e4 & local_e0 & local_dc & local_d8) != 0x3ffffff
          || (local_f4 + 0x40 + (local_f8 + 0x3d1U >> 0x1a) < 0x4000000 || local_d4 != 0x3fffff)) {
        local_6c = local_e4;
        uStack_68 = local_e0;
        local_70 = local_e8;
        local_64 = local_dc;
        local_60 = local_d8;
        iStack_5c = local_d4;
        local_80 = local_f8;
        local_7c = local_f4;
        local_78 = local_f0;
        local_74 = local_ec;
        FUN_0181f914(auStack_d0,&local_f8);
        FUN_0181f130(local_a8,&local_f8,auStack_d0);
        local_a8[0] = local_a8[0] + 7;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        iVar4 = FUN_01825fac(&local_58,local_a8);
        FUN_0181ea1c(&local_58);
        iVar1 = local_44;
        iVar2 = local_34;
        uVar3 = local_58;
        iVar5 = local_40;
        iVar6 = local_48;
        iVar7 = local_4c;
        iVar8 = local_50;
        iVar9 = local_54;
        iVar10 = local_38;
        iVar11 = local_3c;
        if ((local_58 & 1) != 0) {
          iVar9 = 0xffffefc - local_54;
          uVar3 = 0xffff0bc - local_58;
          iVar2 = 0xfffffc - local_34;
          iVar8 = 0xffffffc - local_50;
          iVar7 = 0xffffffc - local_4c;
          iVar6 = 0xffffffc - local_48;
          iVar1 = 0xffffffc - local_44;
          iVar5 = 0xffffffc - local_40;
          iVar11 = 0xffffffc - local_3c;
          iVar10 = 0xffffffc - local_38;
        }
        if (iVar4 != 0) {
          local_58 = uVar3;
          local_54 = iVar9;
          local_50 = iVar8;
          local_4c = iVar7;
          local_48 = iVar6;
          local_44 = iVar1;
          local_40 = iVar5;
          local_3c = iVar11;
          local_38 = iVar10;
          local_34 = iVar2;
          FUN_0182f990(param_2,&local_80);
          goto LAB_01832d54;
        }
      }
    }
  }
  iVar4 = 0;
LAB_01832d54:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar4;
}

