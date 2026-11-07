// FUN_018e4894 @ 018e4894 size=2280 calls_out=26 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018e4894(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined2 uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ushort uVar9;
  char *pcVar10;
  undefined1 uVar11;
  uint uVar12;
  ushort uVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined4 local_10c;
  uint local_108;
  uint local_104;
  ushort local_100;
  undefined8 local_fc;
  uint local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 *local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  uint local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  FUN_01930f74(&local_50,&DAT_0056a6b8,param_2);
  if ((char)local_50 == '\x18') {
    uVar20 = FUN_0192fac8(param_2,(undefined1 *)local_4c);
    if ((int)uVar20 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
    }
    else {
      local_f4 = 0;
      local_e8 = 0;
      local_ec = 4;
      local_f0 = 0;
      if ((int)((ulonglong)uVar20 >> 0x20) != 0) {
        uVar13 = 0;
        puVar6 = (ulonglong *)((uint)&local_98 | 4);
        uVar15 = 0;
        uVar16 = 0;
        uVar2 = CONCAT44(local_10c,local_108);
        do {
          uVar3 = uVar2 >> 0x20;
          local_108 = (uint)uVar2;
          local_fc = uVar20;
          FUN_0190d660(&local_50,&local_fc);
          uVar12 = (uint)(undefined1 *)local_4c;
          uVar9 = local_50._2_2_;
          uVar5 = (undefined2)local_4c;
          if ((char)local_50 != '\x18') {
            uVar15 = uVar12 >> 0x10;
            pcVar10 = (char *)(uVar12 & 0xffff);
            uVar13 = local_50._2_2_ >> 8;
            uVar12 = (uint)local_50 >> 8 & 0xff;
            uVar18 = local_4c._4_4_;
            cVar17 = (char)local_50;
            local_100 = local_50._2_2_;
LAB_018e51e0:
            uVar11 = (undefined1)uVar12;
            iVar19 = ((uint)pcVar10 & 0xffff) + uVar15 * 0x10000;
            uVar9 = local_100 & 0xff | uVar13 << 8;
            goto LAB_018e51f8;
          }
          uVar12 = (uint)local_50._2_2_;
          uVar20 = FUN_0192fac8(&local_fc,2);
          if (((ushort *)uVar20 == (ushort *)0x0) || ((int)((ulonglong)uVar20 >> 0x20) != 2)) {
            pcVar10 = "u16";
            uVar15 = 0x52;
            uVar18 = 3;
            cVar17 = '\f';
            goto LAB_018e51e0;
          }
          uVar1 = *(ushort *)uVar20;
          uVar13 = uVar1 & 0xff;
          local_100 = uVar1 >> 8;
          uVar21 = FUN_0192fac8(&local_fc);
          uVar8 = (uint)(uVar21 >> 0x20);
          iVar19 = (int)uVar21;
          if (iVar19 == 0) {
            cVar17 = '\v';
            puVar14 = &DAT_80000018;
            uVar16 = (local_108 & 0xffffff) >> 0x10;
            uVar15 = local_108 >> 0x18;
            local_104 = local_108 >> 8;
            uVar21 = uVar2 & 0xffffffffffffff00;
            goto LAB_018e5080;
          }
          local_9c = 0;
          local_a4 = uVar21;
          uVar2 = uVar21;
          switch(uVar12) {
          case 0:
            FUN_018edacc(&local_50,&local_a4);
            local_6c = local_4c._4_4_;
            local_68 = local_44;
            if (local_50 == (undefined1 *)0x0) {
              puVar14 = &DAT_80000004;
              local_70 = (uint)(undefined1 *)local_4c;
              FUN_018ee6c4(puVar6);
              uVar2 = local_a4;
              goto LAB_018e4ffc;
            }
            local_70._0_1_ = (char)local_4c;
            uVar16 = (uint)(undefined1 *)local_4c >> 0x10;
            local_104 = (uint)(undefined1 *)local_4c >> 8 & 0xff;
            uVar15 = (uint)(undefined1 *)local_4c;
            local_4c._0_1_ = (char)local_70;
            uVar2 = local_4c;
LAB_018e4f4c:
            local_70 = uVar15;
            local_4c._4_4_ = (int)(uVar2 >> 0x20);
            uVar3 = CONCAT44(local_44,local_4c._4_4_);
            uVar15 = uVar16 >> 8;
            uVar16 = uVar16 & 0xff;
            cVar17 = (char)local_4c;
            local_4c = uVar2;
            goto LAB_018e4f54;
          default:
switchD_018e49e4_caseD_1:
            local_50 = (undefined1 *)0x80000000;
            local_9c = uVar8;
            local_4c = uVar21;
            FUN_01935918(puVar6,&local_50);
            puVar14 = (undefined1 *)0x80000017;
            local_88 = CONCAT22(uVar5,uVar9);
            uVar2 = local_a4;
            goto LAB_018e4ffc;
          case 5:
            FUN_018edebc(&local_50,&local_a4);
            uVar2 = local_4c;
            if (local_50 == (undefined1 *)0x80000001) goto LAB_018e4ca8;
            puVar14 = (undefined1 *)0x8000000d;
            uVar3 = local_4c;
LAB_018e4f88:
            local_4c._4_4_ = (int)(uVar3 >> 0x20);
            local_84 = local_40;
            iStack_80 = iStack_3c;
            local_90 = CONCAT31(CONCAT21(local_4c._2_2_,local_4c._1_1_),(char)local_4c);
            local_94 = local_50;
            local_8c = local_4c._4_4_;
            local_88 = local_44;
            uVar2 = local_a4;
            local_4c = uVar3;
            goto LAB_018e4ffc;
          case 10:
            FUN_018e725c(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) {
LAB_018e4f48:
              local_104 = uVar15;
              uVar15 = local_70;
              uVar2 = local_4c;
              goto LAB_018e4f4c;
            }
            puVar14 = (undefined1 *)0x80000002;
            uVar3 = local_4c;
            break;
          case 0xb:
            FUN_018e43e8(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = (undefined1 *)0x80000001;
            uVar3 = local_4c;
            break;
          case 0xd:
            FUN_018e46fc(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = (undefined1 *)0x80000003;
            uVar3 = local_4c;
            break;
          case 0x10:
            FUN_018e70e4(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = (undefined1 *)0x80000006;
            uVar3 = local_4c;
            break;
          case 0x12:
            FUN_018e63cc(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = (undefined1 *)0x8000000f;
            uVar3 = local_4c;
            break;
          case 0x13:
            FUN_018e63cc(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = (undefined1 *)0x8000000e;
            uVar3 = local_4c;
            break;
          case 0x15:
            if (uVar8 != 0) goto switchD_018e49e4_caseD_1;
            puVar14 = &DAT_8000000c;
            goto LAB_018e4ffc;
          case 0x16:
            FUN_018e6234(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = (undefined1 *)0x80000013;
            uVar3 = local_4c;
            break;
          case 0x17:
            FUN_018ee158(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = &DAT_80000005;
            uVar3 = local_4c;
            break;
          case 0x18:
            FUN_018ee1b8(&local_50,&local_a4);
            uVar2 = local_4c;
            if (local_50 != (undefined1 *)0x80000000) {
              puVar14 = (undefined1 *)0x8000000a;
              uVar3 = local_4c;
              goto LAB_018e4f88;
            }
LAB_018e4ca8:
            local_4c._4_4_ = (int)(uVar2 >> 0x20);
            uVar3 = CONCAT44(local_44,local_4c._4_4_);
            local_104 = (uint)local_4c._1_1_;
            uVar15 = (uint)(local_4c._2_2_ >> 8);
            uVar16 = local_4c._2_2_ & 0xff;
            cVar17 = (char)local_4c;
            local_4c = uVar2;
            goto LAB_018e4f54;
          case 0x19:
            if (uVar8 != 0) goto switchD_018e49e4_caseD_1;
            puVar14 = (undefined1 *)0x80000012;
            goto LAB_018e4ffc;
          case 0x1a:
            FUN_018ee53c(&local_50,&local_a4);
            uVar16 = (uint)local_50._2_1_;
            if (((uint)local_50 & 0xff) == 0x18) {
              puVar14 = (undefined1 *)0x80000007;
              local_94 = (undefined1 *)
                         CONCAT31(CONCAT21(local_94._2_2_,local_50._2_1_),local_50._1_1_);
              uVar2 = local_a4;
              goto LAB_018e4ffc;
            }
            uVar15 = (uint)local_50 >> 0x18;
            local_104 = (uint)local_50._1_1_;
            cVar17 = (char)local_50;
            uVar3 = local_4c;
            goto LAB_018e4f54;
          case 0x1b:
            FUN_01935ea0(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = (undefined1 *)0x8000000b;
            uVar3 = local_4c;
            break;
          case 0x1c:
            FUN_018e6db8(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = &DAT_80000009;
            uVar3 = local_4c;
            break;
          case 0x1e:
            FUN_018e4584(&local_50,&local_a4);
            uVar3 = CONCAT44(local_44,local_4c._4_4_);
            uVar12 = (uint)(undefined1 *)local_4c;
            if (local_50 == (undefined1 *)0x0) {
              local_58 = local_44;
              local_60 = local_4c;
              if (local_44 != 0) {
                puVar14 = &DAT_80000016;
                *puVar6 = local_4c;
                *(int *)(puVar6 + 1) = local_44;
                uVar2 = local_a4;
                goto LAB_018e4ffc;
              }
              FUN_018e26a0(&local_60);
              cVar17 = '\x16';
              uVar3 = 0x1200520f63;
            }
            else {
              uVar15 = (uint)(local_4c._2_2_ >> 8);
              uVar16 = local_4c._2_2_ & 0xff;
              local_104 = uVar12 >> 8 & 0xff;
              cVar17 = (char)local_4c;
            }
LAB_018e4f54:
            puVar14 = &DAT_80000018;
            goto LAB_018e5080;
          case 0x22:
            FUN_018e4254(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = &DAT_80000008;
            uVar3 = local_4c;
            break;
          case 0x23:
            puVar14 = &DAT_80000010;
            local_9c = uVar8;
            FUN_018ee660(puVar6,iVar19);
            uVar2 = local_a4;
            goto LAB_018e4ffc;
          case 0x27:
            puVar14 = (undefined1 *)0x80000011;
            local_9c = uVar8;
            FUN_018ee660(puVar6,iVar19);
            uVar2 = local_a4;
            goto LAB_018e4ffc;
          case 0x29:
            FUN_018e609c(&local_50,&local_a4);
            uVar16 = (uint)local_4c._2_2_;
            uVar15 = (uint)local_4c._1_1_;
            if (local_50 != (undefined1 *)0x0) goto LAB_018e4f48;
            puVar14 = (undefined1 *)0x80000015;
            uVar3 = local_4c;
          }
          local_4c._4_4_ = (int)(uVar3 >> 0x20);
          local_94 = (undefined1 *)CONCAT31(CONCAT21(local_4c._2_2_,local_4c._1_1_),(char)local_4c);
          local_90 = local_4c._4_4_;
          local_8c = local_44;
          uVar2 = local_a4;
          local_4c = uVar3;
LAB_018e4ffc:
          uVar3 = CONCAT44(local_8c,local_90);
          local_a4._4_4_ = (uint)(uVar2 >> 0x20);
          local_98 = puVar14;
          local_a4 = uVar2;
          if (local_9c < local_a4._4_4_) {
            local_4c._0_4_ = local_94;
            local_4c._4_4_ = local_90;
            local_44 = local_8c;
            local_40 = local_88;
            iStack_3c = local_84;
            iStack_38 = iStack_80;
            uStack_34 = uStack_7c;
            uStack_30 = uStack_78;
            local_50 = puVar14;
            FUN_018e9bb4();
            puVar14 = &DAT_80000018;
            uVar15 = 0;
            uVar16 = 0;
            uVar3 = 0xf00520f75;
            cVar17 = '\x0f';
          }
          else {
            local_104 = (uint)local_94 >> 8 & 0xff;
            uVar15 = (uint)(local_94._2_2_ >> 8);
            uVar16 = local_94._2_2_ & 0xff;
            local_e0 = local_88;
            iStack_dc = local_84;
            iStack_d8 = iStack_80;
            uStack_d4 = uStack_7c;
            uStack_d0 = uStack_78;
            cVar17 = (char)local_94;
          }
LAB_018e5080:
          iVar4 = local_e8;
          uVar18 = (undefined4)(uVar3 >> 0x20);
          iVar19 = ((uint)uVar3 & 0xffff) + ((uint)uVar3 & 0xffff0000);
          uVar9 = (ushort)uVar16 | (ushort)(uVar15 << 8);
          uVar11 = (undefined1)local_104;
          if (puVar14 == &DAT_80000018) {
LAB_018e51f8:
            param_1[2] = iVar19;
            *param_1 = 1;
            param_1[3] = uVar18;
            *(ushort *)((int)param_1 + 6) = uVar9;
            *(undefined1 *)((int)param_1 + 5) = uVar11;
            *(char *)(param_1 + 1) = cVar17;
            FUN_018e23f8(&local_f0);
            return;
          }
          local_b8 = local_e0;
          iStack_b4 = iStack_dc;
          iStack_b0 = iStack_d8;
          uStack_ac = uStack_d4;
          uStack_a8 = uStack_d0;
          local_c4 = CONCAT31(CONCAT21(uVar9,uVar11),cVar17);
          local_c8 = puVar14;
          local_c0 = iVar19;
          local_bc = uVar18;
          uVar20 = local_fc;
          if (local_e8 == local_f0) {
            FUN_01ac589c(&local_f0);
            uVar20 = local_fc;
          }
          local_fc._4_4_ = (uint)((ulonglong)uVar20 >> 0x20);
          puVar7 = (undefined4 *)(local_ec + iVar4 * 0x24);
          *puVar7 = local_c8;
          puVar7[1] = local_c4;
          puVar7[2] = local_c0;
          puVar7[3] = local_bc;
          puVar7[4] = local_b8;
          puVar7[5] = iStack_b4;
          puVar7[6] = iStack_b0;
          puVar7[7] = uStack_ac;
          puVar7[8] = uStack_a8;
          local_e8 = iVar4 + 1;
          uVar2 = uVar21;
        } while (local_f4 < local_fc._4_4_);
      }
      param_1[1] = local_f0;
      param_1[2] = local_ec;
      param_1[3] = local_e8;
      *param_1 = 0;
    }
  }
  else {
    *(char *)(param_1 + 1) = (char)local_50;
    *(undefined1 *)((int)param_1 + 7) = local_50._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_50._1_2_;
    param_1[2] = (undefined1 *)local_4c;
    param_1[3] = local_4c._4_4_;
    *param_1 = 1;
  }
  return;
}

