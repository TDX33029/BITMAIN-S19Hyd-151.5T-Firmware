// FUN_016151c8 @ 016151c8 size=2108 calls_out=23 calls_in=2
// strings: 

void FUN_016151c8(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined4 extraout_r1;
  undefined2 extraout_r2;
  undefined2 extraout_r2_00;
  uint extraout_r3;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint *unaff_r9;
  uint *puVar9;
  uint *unaff_r11;
  uint *extraout_r12;
  uint *extraout_r12_00;
  uint *extraout_r12_01;
  uint *extraout_r12_02;
  uint *extraout_r12_03;
  uint *extraout_r12_04;
  uint *extraout_r12_05;
  uint *extraout_r12_06;
  uint *extraout_r12_07;
  uint *extraout_r12_08;
  uint *puVar10;
  ulonglong uVar11;
  undefined4 local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_78;
  int local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined2 local_34;
  undefined2 local_32;
  uint *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  if (*(short *)(param_2 + 0x10) != 0) {
    puVar3 = &DAT_80000004;
    *(short *)(param_1 + 2) = *(short *)(param_2 + 0x10);
    goto LAB_0161521c;
  }
  uVar5 = *(uint *)(param_2 + 0x10);
  puVar6 = *(uint **)(param_2 + 4);
  puVar9 = (uint *)(uVar5 >> 0x10);
  local_74 = (int)puVar6 + *(uint *)(param_2 + 8);
  uVar2 = (undefined1)(uVar5 >> 0x10);
  if (((uVar5 & 0xffff) == 0) && (((uint)puVar9 & 0xff) < 0x26)) {
    puVar7 = &switchD_01615250::switchdataD_01615254;
    uVar1 = uVar5 >> 0x18;
    local_78 = puVar6;
    switch((uint)puVar9 & 0xff) {
    case 0:
      if ((uVar1 & 1) == 0) {
        FUN_0160edb8(&local_70,&local_78);
        if (local_70 == 0) goto LAB_01615904;
        local_88 = local_40;
        uVar8 = 0;
LAB_01615680:
        unaff_r9 = local_64;
        local_84 = local_44;
        local_80 = local_48;
LAB_01615a38:
        uVar11 = CONCAT44(local_60,local_68);
        puVar7 = local_50;
        puVar9 = local_58;
        unaff_r11 = local_5c;
        local_50 = local_54;
        puVar10 = local_4c;
        local_68._2_2_ = local_6c._2_2_;
        local_68._0_2_ = (undefined2)local_6c;
LAB_01615a40:
        param_1[3] = (int)uVar11;
        param_1[5] = (int)(uVar11 >> 0x20);
        param_1[0xb] = local_80;
        *param_1 = uVar8;
        param_1[0xd] = local_88;
        param_1[0xe] = local_8c;
        *(undefined2 *)((int)param_1 + 10) = local_68._2_2_;
        param_1[4] = unaff_r9;
        *(undefined2 *)(param_1 + 2) = (undefined2)local_68;
        param_1[1] = local_70;
        param_1[7] = puVar9;
        param_1[8] = local_50;
        param_1[9] = puVar7;
        param_1[10] = puVar10;
        param_1[6] = unaff_r11;
        param_1[0xc] = local_84;
        return;
      }
      break;
    case 1:
      if ((uVar1 & 1) == 0) {
        puVar10 = (uint *)0x16155e4;
        uVar11 = FUN_0160ff2c(&local_70,&local_78);
        if (local_70 != 0x8000000a) {
          puVar6 = (uint *)(local_6c & 0xffff);
          local_30 = local_68;
          local_38 = local_70;
          local_32 = local_6c._2_2_;
          goto LAB_01615914;
        }
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        uVar8 = 1;
        local_50 = extraout_r12_04;
        local_68._2_2_ = extraout_r2;
LAB_01615638:
        local_68._0_2_ = SUB42(puVar6,0);
        local_70 = local_6c;
        goto LAB_01615a40;
      }
      break;
    case 2:
      if ((uVar1 & 1) == 0) {
        puVar10 = (uint *)0x161552c;
        FUN_0160f818(&local_70,&local_78);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 != 0) goto LAB_01615914;
        uVar8 = 2;
        uVar11 = ZEXT48(local_64);
        local_50 = extraout_r12_02;
        goto LAB_01615638;
      }
      break;
    case 3:
      if ((uVar1 & 1) == 0) {
        if (*(uint *)(param_2 + 8) < 4) {
          local_30 = (uint *)0x4;
          local_38 = 0x80000005;
          local_32 = (short)((uint)puVar6 >> 0x10);
          goto LAB_01615914;
        }
        local_70 = 0x80000005;
        puVar10 = (uint *)0x16159f8;
        uVar11 = FUN_00f2cc28(&local_70);
        local_6c = *puVar6;
        uVar8 = 3;
        local_50 = extraout_r12_08;
        local_68._2_2_ = extraout_r2_00;
        goto LAB_01615638;
      }
      break;
    case 0x10:
      if ((uVar1 & 1) == 0) {
        FUN_01610230(&local_70,&local_78);
        if (local_70 != 0) {
          uVar8 = 4;
          local_80 = local_48;
          local_84 = local_44;
          unaff_r9 = local_64;
          unaff_r11 = local_5c;
          local_48 = local_4c;
          goto LAB_016157a8;
        }
LAB_01615904:
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
LAB_01615914:
        local_2c = &local_38;
        local_34 = SUB42(puVar6,0);
        local_28 = &LAB_00a30488;
        FUN_00600d2c(&local_70,&DAT_00590e71,&local_2c);
        param_1[2] = local_70;
        param_1[3] = local_6c;
        param_1[4] = local_68;
        FUN_00f2cc28(&local_38);
        *(undefined1 *)((int)param_1 + 0x16) = uVar2;
        *(short *)(param_1 + 5) = (short)uVar5;
        *param_1 = 0x16;
        param_1[1] = 0x80000000;
        return;
      }
      break;
    case 0x11:
      if ((uVar1 & 1) == 0) {
        FUN_01610700(&local_70,&local_78);
        if (local_70 != 0) {
          local_88 = local_40;
          uVar8 = 5;
          goto LAB_01615680;
        }
        goto LAB_01615904;
      }
      break;
    case 0x12:
      if ((uVar1 & 1) == 0) {
        puVar10 = (uint *)0x1615618;
        FUN_0160fe50(&local_70,&local_78);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 != 0) goto LAB_01615914;
        uVar8 = 8;
        uVar11 = ZEXT48(local_64);
        local_50 = extraout_r12_05;
        goto LAB_01615638;
      }
      break;
    case 0x13:
      if ((uVar1 & 1) == 0) {
        FUN_0160ffd8(&local_70,&local_78);
        if (local_70 != 0) {
          local_88 = local_40;
          uVar8 = 6;
          goto LAB_01615680;
        }
        goto LAB_01615904;
      }
      break;
    case 0x14:
      if ((uVar1 & 1) == 0) {
        FUN_01610444(&local_70,&local_78);
        uVar11 = CONCAT44(local_60,local_68);
        if (local_70 != 0) {
          local_8c = local_3c;
          local_88 = local_40;
          uVar8 = 7;
          local_84 = local_44;
          local_80 = local_48;
          puVar7 = local_50;
          unaff_r9 = local_64;
          puVar9 = local_58;
          unaff_r11 = local_5c;
          local_50 = local_54;
          puVar10 = local_4c;
          local_68._2_2_ = local_6c._2_2_;
          local_68._0_2_ = (undefined2)local_6c;
          goto LAB_01615a40;
        }
        goto LAB_01615904;
      }
      break;
    case 0x15:
      if ((uVar1 & 1) != 0) {
        FUN_01610c2c(&local_70,&local_78);
        if (local_70 == 2) {
LAB_016157dc:
          puVar6 = (uint *)((uint)local_68 & 0xffff);
          local_30 = local_64;
          local_38 = local_6c;
          local_32 = local_68._2_2_;
          goto LAB_01615914;
        }
        local_88 = local_40;
        uVar8 = 0x10;
        local_80 = local_48;
        local_84 = local_44;
        unaff_r9 = local_64;
        goto LAB_01615a38;
      }
      break;
    case 0x16:
      if ((uVar1 & 1) != 0) {
        FUN_01610e50(&local_70,&local_78);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 == 1) goto LAB_01615914;
        uVar8 = 9;
        puVar6 = local_64;
        puVar10 = local_5c;
        local_70 = local_6c;
        puVar7 = local_4c;
        unaff_r9 = local_60;
        puVar9 = local_54;
        unaff_r11 = local_58;
LAB_016158c4:
        uVar11 = CONCAT44(puVar10,puVar6);
        puVar10 = local_48;
        goto LAB_01615a40;
      }
      break;
    case 0x17:
      if ((uVar1 & 1) != 0) {
        puVar10 = (uint *)0x16155a8;
        FUN_0160f214(&local_70,&local_78);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 != 0) goto LAB_01615914;
        uVar8 = 10;
        uVar11 = ZEXT48(local_64);
        local_50 = extraout_r12_03;
        goto LAB_01615638;
      }
      break;
    case 0x18:
      if ((uVar1 & 1) != 0) {
        puVar10 = (uint *)0x1615484;
        FUN_01610b50(&local_70,&local_78);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 != 0) goto LAB_01615914;
        uVar8 = 0xb;
        uVar11 = ZEXT48(local_64);
        local_50 = extraout_r12_01;
        goto LAB_01615638;
      }
      break;
    case 0x1a:
      if ((uVar1 & 1) != 0) {
        puVar10 = (uint *)0x16153e0;
        FUN_0160fb2c(&local_70,&local_78);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 == 1) goto LAB_01615914;
        uVar8 = 0xc;
        puVar6 = local_64;
        puVar4 = local_5c;
        local_70 = local_6c;
        puVar7 = local_5c;
        unaff_r9 = local_60;
        unaff_r11 = local_58;
        local_50 = extraout_r12_00;
LAB_016156e4:
        uVar11 = CONCAT44(puVar4,puVar6);
        goto LAB_01615a40;
      }
      break;
    case 0x1b:
      if ((uVar1 & 1) != 0) {
        puVar10 = (uint *)0x16156b4;
        FUN_0160f8f4(&local_70,&local_78);
        if (local_70 != 0) {
          uVar8 = 0xd;
          puVar6 = local_68;
          puVar4 = local_60;
          unaff_r9 = local_64;
          puVar9 = local_58;
          unaff_r11 = local_5c;
          local_50 = local_54;
          local_68._2_2_ = local_6c._2_2_;
          local_68._0_2_ = (undefined2)local_6c;
          goto LAB_016156e4;
        }
        goto LAB_01615904;
      }
      break;
    case 0x1c:
      if ((uVar1 & 1) != 0) {
        puVar10 = (uint *)0x1615700;
        FUN_0160f2f0(&local_70,&local_78);
        uVar11 = CONCAT44(local_5c,local_64);
        if (local_70 != 1) {
          uVar8 = 0xe;
          local_70 = extraout_r3;
          unaff_r9 = local_60;
          puVar9 = local_54;
          unaff_r11 = local_58;
          local_50 = extraout_r12_06;
          goto LAB_01615a40;
        }
        goto LAB_01615904;
      }
      break;
    case 0x1d:
      if ((uVar1 & 1) != 0) {
        puVar10 = (uint *)0x16158e0;
        FUN_0160f0f4(&local_70,&local_78);
        uVar11 = CONCAT44(extraout_r1,local_68);
        if (local_70 != 0) {
          uVar8 = 0xf;
          unaff_r9 = local_64;
          local_50 = extraout_r12_07;
          local_68._2_2_ = local_6c._2_2_;
          local_68._0_2_ = (undefined2)local_6c;
          goto LAB_01615a40;
        }
        goto LAB_01615904;
      }
      break;
    case 0x1e:
      if ((uVar1 & 1) != 0) {
        FUN_0160fcb0(&local_70,&local_78);
        puVar6 = (uint *)(local_6c & 0xffff);
        local_30 = local_68;
        local_38 = local_70;
        local_32 = local_6c._2_2_;
        if ((char)local_44 == '\x02') goto LAB_01615914;
        uVar8 = 0x11;
        local_80 = local_48;
        local_84 = local_44;
        puVar6 = local_68;
        puVar10 = local_60;
        local_70 = local_70;
        puVar7 = local_50;
        unaff_r9 = local_64;
        puVar9 = local_58;
        unaff_r11 = local_5c;
        local_50 = local_54;
        local_48 = local_4c;
        local_68._2_2_ = local_6c._2_2_;
        local_68._0_2_ = (undefined2)local_6c;
        goto LAB_016158c4;
      }
      break;
    case 0x1f:
      if ((uVar1 & 1) != 0) {
        FUN_0160f418(&local_70,&local_78);
        if (local_70 == 2) goto LAB_016157dc;
        local_80 = local_48;
        uVar8 = 0x12;
        local_84 = local_44;
        unaff_r9 = local_64;
        unaff_r11 = local_5c;
        local_48 = local_4c;
LAB_016157a8:
        puVar6 = local_68;
        puVar10 = local_60;
        puVar7 = local_50;
        puVar9 = local_58;
        local_50 = local_54;
        local_68._2_2_ = local_6c._2_2_;
        local_68._0_2_ = (undefined2)local_6c;
        goto LAB_016158c4;
      }
      break;
    case 0x20:
      if ((uVar1 & 1) != 0) {
        FUN_01610fac(&local_70,&local_78);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 == 1) goto LAB_01615914;
        uVar8 = 0x13;
        local_80 = local_44;
        local_84 = local_40;
        puVar6 = local_64;
        puVar10 = local_5c;
        local_70 = local_6c;
        puVar7 = local_4c;
        unaff_r9 = local_60;
        puVar9 = local_54;
        unaff_r11 = local_58;
        goto LAB_016158c4;
      }
      break;
    case 0x21:
      if ((uVar1 & 1) != 0) {
        FUN_01610a58(&local_70,&local_78);
        uVar11 = CONCAT44(local_5c,local_64);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 == 1) goto LAB_01615914;
        uVar8 = 0x14;
        local_70 = local_6c;
        puVar7 = local_4c;
        unaff_r9 = local_60;
        puVar9 = local_54;
        unaff_r11 = local_58;
        puVar10 = (uint *)0x161599c;
        goto LAB_01615a40;
      }
      break;
    case 0x25:
      if ((uVar1 & 1) != 0) {
        puVar10 = (uint *)0x16153a4;
        FUN_01610954(&local_70,&local_78);
        puVar6 = (uint *)((uint)local_68 & 0xffff);
        local_30 = local_64;
        local_38 = local_6c;
        local_32 = local_68._2_2_;
        if (local_70 != 0) goto LAB_01615914;
        uVar8 = 0x15;
        uVar11 = ZEXT48(local_64);
        local_50 = extraout_r12;
        goto LAB_01615638;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 10) = uVar2;
  puVar3 = (undefined1 *)0x80000007;
  *(short *)(param_1 + 2) = (short)uVar5;
LAB_0161521c:
  *param_1 = 0x16;
  param_1[1] = puVar3;
  return;
}

