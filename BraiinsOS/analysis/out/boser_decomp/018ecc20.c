// FUN_018ecc20 @ 018ecc20 size=1440 calls_out=12 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018ecc20(uint *param_1,char *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 uVar11;
  ushort uVar12;
  undefined2 *puVar13;
  char *pcVar14;
  int iVar15;
  uint *puVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char cVar23;
  uint uVar24;
  char *unaff_r11;
  undefined8 uVar25;
  undefined8 uVar26;
  char *local_e8;
  undefined4 local_dc;
  undefined4 local_bc;
  uint local_b8;
  undefined1 local_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  char *local_98;
  uint local_94;
  char *local_90;
  uint local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  undefined8 local_78;
  uint local_70;
  char *local_6c;
  uint local_68;
  char *local_64;
  uint local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  undefined8 local_4c;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  
  uVar26 = CONCAT44(local_bc,local_dc);
  FUN_01935b68(&local_90);
  pcVar22 = local_38;
  pcVar21 = local_3c;
  pcVar6 = local_84;
  pcVar5 = local_88;
  uVar4 = local_8c;
  if (local_90 == (char *)0x1) {
    param_1[2] = (uint)local_88;
    *param_1 = 0x80000000;
    param_1[1] = local_8c;
    param_1[3] = (uint)local_84;
    return;
  }
  FUN_01930f74(&local_40,"",param_2);
  local_38 = pcVar22;
  local_3c = pcVar21;
  pcVar22 = local_38;
  pcVar21 = local_3c;
  if ((char)local_40 == '\x18') {
    uVar25 = FUN_0192fac8(param_2,pcVar21);
    local_38 = pcVar22;
    local_3c = pcVar21;
    uVar12 = local_38._2_2_;
    uVar11 = local_3c._2_2_;
    uVar18 = (uint)((ulonglong)uVar25 >> 0x20);
    if ((int)uVar25 != 0) {
      local_a8 = (undefined1)uVar25;
      pcVar20 = (char *)0x4;
      local_a0 = 0;
      local_a5 = (undefined1)((ulonglong)uVar25 >> 0x18);
      local_a7 = (undefined2)((ulonglong)uVar25 >> 8);
      local_94 = 0;
      local_98 = (char *)0x4;
      local_9c = 0;
      if (uVar18 == 0) {
        uVar18 = 0;
        local_9c._0_1_ = 0;
      }
      else {
        puVar13 = (undefined2 *)((uint)&local_90 | 5);
        local_e8 = (char *)0x4;
        local_a4 = uVar18;
        do {
          local_38._2_2_ = uVar12;
          local_3c._2_2_ = uVar11;
          uVar12 = local_38._2_2_;
          uVar11 = local_3c._2_2_;
          uVar3 = local_94;
          pcVar21 = local_3c;
          local_3c._2_2_ = uVar11;
          pcVar22 = local_38;
          local_38._2_2_ = uVar12;
          FUN_0191d6e4(&local_40,&local_a8);
          pcVar9 = local_34;
          pcVar8 = local_38;
          pcVar7 = local_3c;
          if (local_40 == 1) {
            uVar18 = (uint)pcVar7 >> 8;
            cVar23 = (char)pcVar7;
            pcVar21 = pcVar8;
            pcVar22 = local_34;
LAB_018ed130:
            FUN_018e21f4(&local_9c);
            local_40._0_1_ = cVar23;
            goto LAB_018ed138;
          }
          pcVar21 = pcVar7;
          pcVar22 = pcVar8;
          FUN_01930f74(&local_40,&DAT_0056a6b8,&local_a8);
          local_38 = pcVar22;
          local_3c = pcVar21;
          pcVar22 = local_38;
          pcVar21 = local_3c;
          if ((char)local_40 != '\x18') {
            uVar18 = (uint)*(uint3 *)((uint)&local_40 | 1);
            cVar23 = (char)local_40;
LAB_018ed120:
            if (pcVar7 != (char *)0x80000000) {
              FUN_0134bd64(pcVar7,pcVar8);
            }
            goto LAB_018ed130;
          }
          uVar25 = FUN_0192fac8(&local_a8,pcVar21);
          local_38 = pcVar22;
          local_3c = pcVar21;
          pcVar22 = local_38;
          pcVar21 = local_3c;
          pcVar17 = (char *)((ulonglong)uVar25 >> 0x20);
          pcVar14 = (char *)uVar25;
          if (pcVar14 == (char *)0x0) {
            pcVar22 = (char *)0x0;
            cVar23 = '\v';
LAB_018ed11c:
            uVar18 = (uint)unaff_r11 >> 8;
            pcVar21 = pcVar20;
            goto LAB_018ed120;
          }
          uVar24 = 4;
          local_70 = 0;
          local_64 = (char *)0x0;
          local_68 = 4;
          local_6c = (char *)0x0;
          if (pcVar17 != (char *)0x0) {
            uVar2 = uVar26;
            do {
              local_38 = pcVar22;
              local_3c = pcVar21;
              uVar12 = local_38._2_2_;
              uVar11 = local_3c._2_2_;
              pcVar21 = local_64;
              pcVar22 = local_3c;
              local_3c._2_2_ = uVar11;
              pcVar20 = local_38;
              local_38._2_2_ = uVar12;
              local_78 = uVar25;
              FUN_0190d660(&local_40,&local_78);
              pcVar10 = local_38;
              pcVar22 = local_3c;
              uVar18 = local_40 & 0xff;
              uVar12 = local_40._2_2_;
              local_3c._0_2_ = SUB42(pcVar22,0);
              uVar11 = (undefined2)local_3c;
              if (uVar18 != 0x18) {
                uVar19 = (local_40 >> 8 & 0xff) << 8;
                local_b8 = (uint)local_40._2_2_;
                pcVar20 = (char *)((uint)pcVar22 & 0xffff | CONCAT42(pcVar10,local_3c._2_2_) << 0x10
                                  );
                pcVar22 = (char *)(ZEXT44(pcVar10) | (uint)local_38._2_2_ << 0x10);
LAB_018ed0b0:
                unaff_r11 = (char *)(uVar19 | local_b8 << 0x10 | uVar18);
LAB_018ed104:
                FUN_018e22b8(&local_6c);
                cVar23 = (char)unaff_r11;
                goto LAB_018ed11c;
              }
              uVar26 = FUN_0192fac8(&local_78,2);
              local_38 = pcVar10;
              local_3c = pcVar22;
              pcVar10 = local_38;
              pcVar20 = local_3c;
              pcVar22 = (char *)0x3;
              uVar19 = 0;
              uVar18 = 0xc;
              if (((ushort *)uVar26 == (ushort *)0x0) || ((int)((ulonglong)uVar26 >> 0x20) != 2)) {
                pcVar20 = "u16";
                goto LAB_018ed0b0;
              }
              uVar1 = *(ushort *)uVar26;
              local_b8 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
              uVar26 = FUN_0192fac8(&local_78);
              local_38 = pcVar10;
              local_3c = pcVar20;
              pcVar20 = local_38;
              pcVar22 = local_3c;
              uVar18 = (uint)((ulonglong)uVar26 >> 0x20);
              iVar15 = (int)uVar26;
              if (iVar15 == 0) {
                pcVar22 = (char *)0x0;
                unaff_r11 = (char *)0xb;
LAB_018ed100:
                pcVar20 = (char *)((ulonglong)uVar2 >> 0x20);
                unaff_r11 = (char *)((uint)uVar2 & 0xffffff00 | (uint)unaff_r11 & 0xff);
                goto LAB_018ed104;
              }
              local_44 = 0;
              if (uVar12 == 5) {
                local_4c = uVar26;
                FUN_018ec174(&local_40,&local_4c);
                local_38 = pcVar20;
                local_3c = pcVar22;
                pcVar10 = local_38;
                unaff_r11 = local_3c;
                pcVar20 = (char *)CONCAT24(local_38._2_2_,pcVar10);
                uVar2 = CONCAT44(pcVar20,unaff_r11);
                if (local_40 == 0) {
                  if (local_4c._4_4_ <= local_44) {
                    uVar18 = 0x80000001;
                    goto LAB_018eced4;
                  }
                  uVar2 = CONCAT44(&UNK_00520ff4,unaff_r11);
                  if (unaff_r11 != (char *)0x80000000) {
                    FUN_0134bd64(unaff_r11,pcVar20);
                  }
                  pcVar22 = (char *)0x14;
                  unaff_r11 = (char *)0xf;
                }
                else {
                  pcVar22 = local_34;
                }
                goto LAB_018ed100;
              }
              local_30 = 0x80000000;
              local_4c._0_4_ = iVar15;
              local_44 = uVar18;
              local_2c = iVar15;
              local_28 = uVar18;
              FUN_01935918(&local_40,&local_30);
              local_38 = pcVar20;
              local_3c = pcVar22;
              pcVar10 = local_38;
              unaff_r11 = local_3c;
              local_34 = (char *)CONCAT22(uVar11,uVar12);
              pcVar20 = (char *)CONCAT24(local_38._2_2_,pcVar10);
              pcVar22 = local_34;
              uVar18 = local_40;
              if (local_40 == 0x80000002) goto LAB_018ed104;
LAB_018eced4:
              local_38 = pcVar10;
              local_3c = unaff_r11;
              uVar12 = local_38._2_2_;
              uVar11 = local_3c._2_2_;
              local_60 = uVar18;
              local_5c = local_3c;
              local_58 = pcVar20;
              local_54 = local_34;
              pcVar22 = local_3c;
              pcVar20 = local_38;
              uVar25 = local_78;
              if (pcVar21 == local_6c) {
                local_3c._2_2_ = uVar11;
                local_38._2_2_ = uVar12;
                FUN_018fa978(&local_6c);
                pcVar20 = local_38;
                pcVar22 = local_3c;
                uVar24 = local_68;
                uVar11 = local_3c._2_2_;
                uVar12 = local_38._2_2_;
                uVar25 = local_78;
              }
              local_38._2_2_ = uVar12;
              local_3c._2_2_ = uVar11;
              local_38 = pcVar20;
              local_3c = pcVar22;
              uVar12 = local_38._2_2_;
              uVar11 = local_3c._2_2_;
              local_78._4_4_ = (uint)((ulonglong)uVar25 >> 0x20);
              puVar16 = (uint *)(uVar24 + (int)pcVar21 * 0x10);
              local_64 = pcVar21 + 1;
              *puVar16 = local_60;
              puVar16[1] = (uint)local_5c;
              puVar16[2] = (uint)local_58;
              puVar16[3] = (uint)local_54;
              pcVar21 = local_3c;
              pcVar22 = local_38;
              local_3c._2_2_ = uVar11;
              local_38._2_2_ = uVar12;
              uVar2 = uVar26;
            } while (local_70 < local_78._4_4_);
          }
          local_38 = pcVar22;
          local_3c = pcVar21;
          uVar12 = local_38._2_2_;
          uVar11 = local_3c._2_2_;
          uVar18 = uVar24 >> 8;
          cVar23 = (char)uVar24;
          local_3c._2_2_ = uVar11;
          local_38._2_2_ = uVar12;
          local_78 = uVar25;
          if (local_6c == (char *)0x80000000) {
            pcVar21 = local_64;
            pcVar22 = pcVar7;
            goto LAB_018ed130;
          }
          local_7c = pcVar9;
          local_80 = pcVar8;
          *puVar13 = (short)(uVar24 >> 8);
          *(char *)(puVar13 + 1) = (char)(uVar24 >> 0x18);
          local_8c = CONCAT31(local_8c._1_3_,cVar23);
          local_84 = pcVar7;
          local_90 = local_6c;
          local_88 = local_64;
          pcVar21 = local_3c;
          pcVar22 = local_38;
          if (uVar3 == local_9c) {
            FUN_015f5b18(&local_9c);
            pcVar22 = local_38;
            pcVar21 = local_3c;
            local_e8 = local_98;
            uVar11 = local_3c._2_2_;
            uVar12 = local_38._2_2_;
          }
          local_38._2_2_ = uVar12;
          local_3c._2_2_ = uVar11;
          local_38 = pcVar22;
          local_3c = pcVar21;
          uVar12 = local_38._2_2_;
          uVar11 = local_3c._2_2_;
          puVar16 = (uint *)(local_e8 + uVar3 * 0x18);
          *puVar16 = (uint)local_90;
          puVar16[1] = local_8c;
          puVar16[2] = (uint)local_88;
          puVar16[3] = (uint)local_84;
          puVar16[4] = (uint)local_80;
          puVar16[5] = (uint)local_7c;
          local_94 = uVar3 + 1;
          pcVar20 = pcVar17;
          unaff_r11 = pcVar14;
        } while (local_a0 < local_a4);
        uVar18 = local_9c >> 8;
        pcVar20 = local_e8;
      }
      param_1[4] = (uint)pcVar20;
      *(undefined1 *)(param_1 + 3) = (undefined1)local_9c;
      *(char *)((int)param_1 + 0xf) = (char)(uVar18 >> 0x10);
      *(short *)((int)param_1 + 0xd) = (short)uVar18;
      *param_1 = uVar4;
      param_1[1] = (uint)pcVar5;
      param_1[2] = (uint)pcVar6;
      param_1[5] = local_94;
      return;
    }
    local_40._0_1_ = '\v';
    uVar18 = 0;
    pcVar22 = (char *)0x0;
    pcVar21 = param_2;
    local_3c._2_2_ = uVar11;
    local_38._2_2_ = uVar12;
  }
  else {
    uVar18 = local_40 >> 8;
  }
LAB_018ed138:
  *param_1 = 0x80000000;
  *(char *)(param_1 + 1) = (char)local_40;
  *(char *)((int)param_1 + 7) = (char)(uVar18 >> 0x10);
  *(short *)((int)param_1 + 5) = (short)uVar18;
  param_1[2] = (uint)pcVar21;
  param_1[3] = (uint)pcVar22;
  FUN_0134bd64(uVar4,pcVar5);
  return;
}

