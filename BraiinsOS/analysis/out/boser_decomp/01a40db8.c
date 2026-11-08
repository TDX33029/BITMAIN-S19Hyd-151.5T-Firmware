// FUN_01a40db8 @ 01a40db8 size=544 calls_out=9 calls_in=2
// strings: 

void FUN_01a40db8(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 local_242;
  undefined1 local_241;
  undefined1 auStack_240 [96];
  int local_1e0;
  int *local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_160 [2];
  undefined1 auStack_158 [104];
  int *local_f0;
  code *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int *local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar8 = param_5[0x15];
  if (iVar8 == 8) {
    uVar6 = param_5[1];
    uVar7 = param_5[2];
    *param_1 = *param_5;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
  }
  else {
    local_90 = param_5[0x16];
    local_8c = param_5[0x17];
    uStack_88 = param_5[0x18];
    uStack_84 = param_5[0x19];
    local_242 = param_3;
    local_241 = param_4;
    FUN_01bed4e2(&local_e8,param_5,0x54);
    local_f0 = (int *)0x1;
    local_94 = iVar8;
    FUN_01a55f68(&local_1e0,&local_f0);
    if (local_1e0 == 4) {
      FUN_01bed4e2(auStack_240,&uStack_1d8,0x60);
      FUN_01a43b7c(&local_242,auStack_240);
      FUN_01bed4e2(auStack_158,auStack_240,0x60);
      local_160[0] = 2;
      local_4c = 0x80000003;
      local_58 = (int *)0x80000003;
      FUN_01a4a968(&local_f0);
      uStack_9c = uStack_44;
      uStack_a0 = uStack_48;
      uStack_a4 = local_4c;
      uStack_a8 = uStack_50;
      uStack_ac = uStack_54;
      local_b0 = local_58;
      uStack_b4 = uStack_c4;
      uStack_b8 = local_c8;
      uStack_bc = uStack_cc;
      uStack_c0 = uStack_d0;
      uVar5 = uStack_d4;
      uVar4 = local_d8;
      uVar3 = uStack_dc;
      piVar2 = local_e0;
      uVar7 = local_e4;
      uVar6 = local_e8;
      piVar1 = local_f0;
      local_70 = local_58;
      uStack_6c = uStack_54;
      uStack_68 = uStack_50;
      uStack_64 = local_4c;
      uStack_60 = uStack_48;
      uStack_5c = uStack_44;
      local_1dc = local_f0;
      uStack_1d8 = local_ec;
      uStack_1d4 = local_e8;
      uStack_1d0 = local_e4;
      uStack_1cc = local_e0;
      uStack_1c8 = uStack_dc;
      local_1c4 = local_d8;
      uStack_1c0 = uStack_d4;
      uStack_1bc = uStack_d0;
      uStack_1b8 = uStack_cc;
      uStack_1b4 = local_c8;
      uStack_1b0 = uStack_c4;
      local_58 = local_f0;
      uStack_54 = local_ec;
      uStack_50 = local_e8;
      local_4c = local_e4;
      uStack_48 = local_e0;
      uStack_44 = uStack_dc;
      local_40 = local_d8;
      uStack_3c = uStack_d4;
      uStack_38 = uStack_d0;
      uStack_34 = uStack_cc;
      uStack_30 = local_c8;
      uStack_2c = uStack_c4;
      local_e8 = 1;
      local_f0 = (int *)0x2;
      local_e4 = 0;
      local_e0 = piVar1;
      uStack_dc = local_ec;
      local_d8 = uVar6;
      uStack_d4 = uVar7;
      uStack_d0 = piVar2;
      uStack_cc = uVar3;
      local_c8 = uVar4;
      uStack_c4 = uVar5;
      local_80 = 0x80000000;
      local_8c = local_8c & 0xffff0000;
      local_98 = 0;
      FUN_01bed4e2(&local_1e0,local_160,0x70);
      uStack_170 = local_80;
      uStack_16c = uStack_7c;
      uStack_168 = uStack_78;
      FUN_01a530f0(&local_f0);
      local_ec = FUN_01a535ac;
      local_f0 = &local_1e0;
      iVar8 = FUN_012fa178(param_2,&DAT_01d2c43c,&DAT_00590e5f,&local_f0);
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,local_160,&DAT_01d2bdbc,&DAT_01d2bdcc);
      }
      *param_1 = &DAT_80000005;
      FUN_01a41038(&local_1e0);
    }
    else {
      *param_1 = 0x80000000;
      param_1[1] = 0;
      FUN_01a41098(&local_1e0);
    }
  }
  return;
}

