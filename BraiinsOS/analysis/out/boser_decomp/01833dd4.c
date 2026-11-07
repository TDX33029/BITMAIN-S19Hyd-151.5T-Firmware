// FUN_01833dd4 @ 01833dd4 size=324 calls_out=5 calls_in=0
// strings: 

void FUN_01833dd4(uint *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined2 local_38 [10];
  
  iVar2 = FUN_019e84a0(*(undefined4 *)(param_2 + 0x68),*param_3);
  if (iVar2 == 0) {
    local_a8 = CONCAT22(local_a8._2_2_,4);
    uVar5 = FUN_0183ba50(&local_a8);
LAB_01833e48:
    uVar5 = FUN_0183a75c(uVar5);
    param_1[1] = 0;
    *param_1 = 4;
    param_1[2] = uVar5;
    param_1[3] = (uint)&DAT_01d1e854;
  }
  else {
    uVar5 = 0x1833e10;
    FUN_01833f1c(&local_a8,param_2,param_3);
    uVar1 = local_a8;
    if (local_a8 == 6 && local_a4 == 0) {
LAB_01833e24:
      uVar5 = 6;
    }
    else {
      uVar4 = local_a8 & 7;
      uVar3 = extraout_r2;
      if (uVar4 != 5) {
        if (local_a8 == 4) {
          local_38[0] = 4;
          uVar5 = FUN_0183b9d4(local_38,local_a0);
          uVar3 = extraout_r2_00;
        }
        else {
          local_68 = local_98;
          uStack_64 = uStack_94;
          uStack_60 = uStack_90;
          uStack_5c = uStack_8c;
          uStack_58 = uStack_88;
          uStack_54 = uStack_84;
          local_50 = local_80;
          uStack_4c = uStack_7c;
          uStack_48 = uStack_78;
          uStack_44 = uStack_74;
          uStack_40 = uStack_70;
          uStack_3c = uStack_6c;
          uVar3 = local_9c;
          uVar5 = local_a0;
        }
      }
      if (uVar4 == 4) goto LAB_01833e48;
      if (uVar1 != 5) {
        if (uVar1 != 6) {
          *param_1 = uVar1;
          param_1[1] = local_a4;
          param_1[2] = uVar5;
          param_1[3] = uVar3;
          param_1[4] = local_68;
          param_1[5] = uStack_64;
          param_1[6] = uStack_60;
          param_1[7] = uStack_5c;
          param_1[8] = uStack_58;
          param_1[9] = uStack_54;
          param_1[10] = local_50;
          param_1[0xb] = uStack_4c;
          param_1[0xc] = uStack_48;
          param_1[0xd] = uStack_44;
          param_1[0xe] = uStack_40;
          param_1[0xf] = uStack_3c;
          return;
        }
        goto LAB_01833e24;
      }
      uVar5 = 5;
    }
    *param_1 = uVar5;
    param_1[1] = 0;
  }
  return;
}

