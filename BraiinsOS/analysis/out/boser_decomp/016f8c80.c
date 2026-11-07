// FUN_016f8c80 @ 016f8c80 size=432 calls_out=7 calls_in=1
// strings: size overflows MAX_SIZE

void FUN_016f8c80(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = 2;
  if ((uint)(uVar1 < 3) <= -uVar2) {
    iVar3 = uVar1 - 3;
  }
  if (iVar3 == 0) {
    if (uVar1 != 4 || uVar2 != 0) {
      FUN_016f8f3c(param_2,uVar2,0,-(uVar2 + (uVar1 >= 3)));
    }
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    uVar1 = param_3[6];
    uVar2 = param_3[7];
    uVar4 = param_3[8];
    uVar5 = param_3[9];
    param_2[5] = param_3[5];
    param_2[6] = uVar1;
    param_2[7] = uVar2;
    param_2[8] = uVar4;
    param_2[9] = uVar5;
    uVar1 = param_3[0xb];
    uVar2 = param_3[0xc];
    uVar4 = param_3[0xd];
    uVar5 = param_3[0xe];
    uVar6 = param_3[0xf];
    param_2[10] = param_3[10];
    param_2[0xb] = uVar1;
    param_2[0xc] = uVar2;
    param_2[0xd] = uVar4;
    param_2[0xe] = uVar5;
    param_2[0xf] = uVar6;
  }
  else if (iVar3 == 1) {
    local_98 = param_2[2];
    uStack_94 = param_2[3];
    uStack_90 = param_2[4];
    uStack_8c = param_2[5];
    uStack_88 = param_2[6];
    local_80 = 0;
    uStack_7c = 0x33;
    uStack_78 = 0;
    uStack_74 = 0;
    FUN_0141d2a4(&local_68,param_3,&local_80);
    local_80 = local_98;
    uStack_7c = uStack_94;
    uStack_78 = uStack_90;
    uStack_74 = uStack_8c;
    uStack_70 = uStack_88;
    if (uStack_50._2_1_ == '\x02') {
      if (*(uint *)(local_68 + 0x28) <= local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(local_60,*(uint *)(local_68 + 0x28),&DAT_01cf45e0);
      }
      (**(code **)(local_98 + 0x10))(&uStack_74,uStack_94,uStack_90);
    }
    else {
      iVar3 = FUN_0141c1f0(&local_68,&local_98);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("size overflows MAX_SIZE",0x17,&uStack_25,&DAT_01d2f38c,&DAT_01d1e3e4);
      }
    }
    local_68 = *param_3;
    uStack_64 = param_3[1];
    local_60 = param_3[2];
    uStack_5c = param_3[3];
    uStack_58 = param_3[4];
    local_54 = param_3[5];
    uStack_50 = param_3[6];
    uStack_4c = param_3[7];
    uStack_48 = param_3[8];
    uStack_44 = param_3[9];
    local_40 = param_3[10];
    uStack_3c = param_3[0xb];
    uStack_38 = param_3[0xc];
    uStack_34 = param_3[0xd];
    uStack_30 = param_3[0xe];
    uStack_2c = param_3[0xf];
    if (*param_2 != 4 || param_2[1] != 0) {
      FUN_016f8f3c(param_2);
    }
    *param_2 = local_68;
    param_2[1] = uStack_64;
    param_2[2] = local_60;
    param_2[3] = uStack_5c;
    param_2[4] = uStack_58;
    param_2[5] = local_54;
    param_2[6] = uStack_50;
    param_2[7] = uStack_4c;
    param_2[8] = uStack_48;
    param_2[9] = uStack_44;
    param_2[10] = local_40;
    param_2[0xb] = uStack_3c;
    param_2[0xc] = uStack_38;
    param_2[0xd] = uStack_34;
    param_2[0xe] = uStack_30;
    param_2[0xf] = uStack_2c;
  }
  else {
    FUN_01735bac(param_2,param_3);
  }
  FUN_01bed4e2(param_1,param_2,0x88);
  return;
}

