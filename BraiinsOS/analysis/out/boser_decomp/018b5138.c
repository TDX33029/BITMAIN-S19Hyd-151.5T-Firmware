// FUN_018b5138 @ 018b5138 size=1696 calls_out=14 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018b5138(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  undefined2 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  uint uVar21;
  char cVar22;
  undefined *puVar23;
  undefined *unaff_r9;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 local_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_d8;
  uint local_d4;
  undefined *local_b8;
  int local_a4;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  undefined *local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined *local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  uint local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  uint local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar5 = CONCAT44(local_b8,local_e4);
  uVar28 = CONCAT44(local_e0,local_f0);
  FUN_018c41e4(&local_80);
  puVar20 = local_2c;
  puVar25 = local_30;
  puVar9 = local_74;
  puVar8 = local_78;
  uVar7 = local_7c;
  if (local_80 == (undefined *)0x1) {
    param_1[2] = local_78;
    *param_1 = 0x80000000;
    param_1[1] = local_7c;
    param_1[3] = local_74;
    return;
  }
  FUN_018c2e04(&local_34,param_2);
  local_2c = puVar20;
  local_30 = puVar25;
  puVar20 = local_2c;
  puVar25 = local_30;
  if ((char)local_34 == '\x14') {
    puVar16 = puVar25;
    if ((undefined *)0xffff < puVar25) {
      puVar16 = (undefined *)0x10000;
    }
    uVar27 = FUN_018beed0(param_2,puVar16);
    local_2c = puVar20;
    local_30 = puVar25;
    puVar20 = local_2c;
    puVar25 = local_30;
    uVar21 = (uint)((ulonglong)uVar27 >> 0x20);
    if ((int)uVar27 != 0) {
      local_98 = (undefined1)uVar27;
      local_a4 = 4;
      local_90 = 0;
      local_95 = (undefined1)((ulonglong)uVar27 >> 0x18);
      local_97 = (undefined2)((ulonglong)uVar27 >> 8);
      local_84 = 0;
      local_88 = 4;
      local_8c = 0;
      if (uVar21 == 0) {
        uVar21 = 0;
        local_8c._0_1_ = 0;
      }
      else {
        puVar17 = (undefined2 *)((uint)&local_80 | 5);
        local_a4 = 4;
        local_94 = uVar21;
        do {
          local_2c = puVar20;
          local_30 = puVar25;
          uVar1 = local_2c._2_2_;
          uVar11 = local_30._2_2_;
          uVar21 = local_84;
          puVar25 = local_30;
          local_30._2_2_ = uVar11;
          puVar20 = local_2c;
          local_2c._2_2_ = uVar1;
          FUN_018c3ef4(&local_34,&local_98);
          puVar25 = local_28;
          puVar16 = local_2c;
          puVar4 = local_30;
          if (local_34 == 1) {
            puVar20 = local_28;
            puVar25 = puVar16;
            puVar16 = puVar4;
LAB_018b5754:
            uVar21 = (uint)puVar4 >> 8;
            FUN_018a9894(&local_8c);
            cVar22 = (char)puVar16;
            goto LAB_018b575c;
          }
          puVar20 = puVar4;
          puVar10 = puVar16;
          uVar27 = FUN_018beed0(&local_98,2);
          local_2c = puVar10;
          local_30 = puVar20;
          puVar10 = local_2c;
          puVar20 = local_30;
          bVar3 = true;
          puVar26 = (undefined *)0xb;
          uVar18 = 0;
          puVar23 = (undefined *)0x2;
          if (((ushort *)uVar27 == (ushort *)0x0) || ((int)((ulonglong)uVar27 >> 0x20) != 2)) {
            puVar24 = &DAT_005239af;
            uVar19 = local_d4;
          }
          else {
            uVar1 = *(ushort *)uVar27;
            local_d4 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
            uVar27 = FUN_018beed0(&local_98);
            local_2c = puVar10;
            local_30 = puVar20;
            puVar10 = local_2c;
            puVar20 = local_30;
            if ((int)uVar27 == 0) {
              bVar3 = true;
              puVar26 = (undefined *)0xa;
              puVar23 = (undefined *)0x0;
              uVar27 = uVar5;
            }
            else {
              bVar3 = false;
              local_54 = (undefined *)0x0;
              local_60 = 0;
              local_58 = (undefined *)0x4;
              local_5c = (undefined *)0x0;
              local_68._0_4_ = (int)uVar27;
              if ((int)((ulonglong)uVar27 >> 0x20) != 0) {
                local_b8 = (undefined *)0x4;
                uVar5 = uVar28;
                uVar6 = uVar27;
                do {
                  local_2c = puVar10;
                  local_30 = puVar20;
                  uVar1 = local_2c._2_2_;
                  uVar11 = local_30._2_2_;
                  puVar20 = local_54;
                  puVar10 = local_30;
                  local_30._2_2_ = uVar11;
                  puVar23 = local_2c;
                  local_2c._2_2_ = uVar1;
                  local_68 = uVar6;
                  FUN_018be4cc(&local_34,&local_68);
                  puVar26 = local_2c;
                  puVar10 = local_30;
                  uVar18 = local_34 & 0xff;
                  uVar1 = local_34._2_2_;
                  local_30._0_2_ = SUB42(puVar10,0);
                  uVar11 = (undefined2)local_30;
                  if (uVar18 != 0x14) {
                    uVar14 = (uint)local_34._2_2_;
                    puVar24 = (undefined *)
                              ((uint)puVar10 & 0xffff | CONCAT42(puVar26,local_30._2_2_) << 0x10);
                    puVar23 = (undefined *)(ZEXT44(puVar26) | (uint)local_2c._2_2_ << 0x10);
                    uVar19 = (local_34 >> 8 & 0xff) << 8;
LAB_018b5550:
                    local_2c = puVar26;
                    local_30 = puVar10;
                    uVar1 = local_2c._2_2_;
                    uVar11 = local_30._2_2_;
                    puVar26 = (undefined *)(uVar19 | uVar14 << 0x10 | uVar18);
                    uVar28 = uVar5;
LAB_018b55d4:
                    local_2c._2_2_ = uVar1;
                    local_30._2_2_ = uVar11;
                    uVar1 = local_2c._2_2_;
                    uVar11 = local_30._2_2_;
                    bVar3 = true;
                    puVar20 = local_30;
                    local_30._2_2_ = uVar11;
                    puVar10 = local_2c;
                    local_2c._2_2_ = uVar1;
                    FUN_018a86fc(&local_5c);
                    puVar10 = local_2c;
                    puVar20 = local_30;
                    goto LAB_018b55e0;
                  }
                  uVar28 = FUN_018beed0(&local_68,2);
                  local_2c = puVar26;
                  local_30 = puVar10;
                  puVar26 = local_2c;
                  puVar10 = local_30;
                  puVar23 = (undefined *)0x2;
                  uVar19 = 0;
                  uVar18 = 0xb;
                  if (((ushort *)uVar28 == (ushort *)0x0) || ((int)((ulonglong)uVar28 >> 0x20) != 2)
                     ) {
                    puVar24 = &DAT_005239af;
                    uVar14 = local_d8;
                    goto LAB_018b5550;
                  }
                  uVar2 = *(ushort *)uVar28;
                  local_d8 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
                  uVar28 = FUN_018beed0(&local_68);
                  local_2c = puVar26;
                  local_30 = puVar10;
                  puVar26 = local_2c;
                  puVar10 = local_30;
                  if ((int)uVar28 == 0) {
                    puVar23 = (undefined *)0x0;
                    puVar20 = (undefined *)0xa;
                    uVar28 = uVar5;
LAB_018b55c8:
                    local_2c = puVar26;
                    local_30 = puVar10;
                    uVar1 = local_2c._2_2_;
                    uVar11 = local_30._2_2_;
                    puVar24 = (undefined *)((ulonglong)uVar28 >> 0x20);
                    local_f0 = (undefined4)uVar28;
                    local_e0 = (undefined4)((ulonglong)uVar5 >> 0x20);
                    puVar26 = (undefined *)((uint)uVar5 & 0xffffff00 | (uint)puVar20 & 0xff);
                    uVar28 = CONCAT44(local_e0,local_f0);
                    goto LAB_018b55d4;
                  }
                  local_38 = 0;
                  local_40 = uVar28;
                  if (uVar1 == 5) {
                    FUN_018b46c0(&local_34,&local_40);
                    local_2c = puVar26;
                    local_30 = puVar10;
                    uVar2 = local_2c._2_2_;
                    uVar12 = local_30._2_2_;
                    puVar24 = (undefined *)CONCAT24(uVar2,local_2c);
                    if (local_34 != 0) {
LAB_018b55c0:
                      local_2c._2_2_ = uVar2;
                      local_30._2_2_ = uVar12;
                      uVar1 = local_2c._2_2_;
                      uVar11 = local_30._2_2_;
                      uVar5 = CONCAT44((int)((ulonglong)uVar28 >> 0x20),local_30);
                      puVar20 = local_30;
                      puVar23 = local_28;
                      puVar10 = local_30;
                      puVar26 = local_2c;
                      local_30._2_2_ = uVar11;
                      local_2c._2_2_ = uVar1;
                      uVar28 = CONCAT44(puVar24,(int)uVar28);
                      goto LAB_018b55c8;
                    }
                    uVar18 = 0x80000000;
                    uVar5 = local_40;
                  }
                  else if (uVar1 == 0x11) {
                    FUN_018a98e4(&local_34,&local_40);
                    local_2c = puVar26;
                    local_30 = puVar10;
                    uVar2 = local_2c._2_2_;
                    uVar12 = local_30._2_2_;
                    puVar24 = (undefined *)CONCAT24(uVar2,local_2c);
                    if (local_34 != 0) goto LAB_018b55c0;
                    uVar18 = 0x80000001;
                    uVar5 = local_40;
                  }
                  else {
                    FUN_018c3e74(&local_34,&local_40);
                    local_2c = puVar26;
                    local_30 = puVar10;
                    uVar2 = local_2c._2_2_;
                    uVar12 = local_30._2_2_;
                    local_28 = (undefined *)CONCAT22(uVar11,uVar1);
                    puVar24 = (undefined *)CONCAT24(uVar2,local_2c);
                    uVar18 = local_34;
                    uVar5 = local_40;
                  }
                  local_2c._2_2_ = uVar2;
                  local_30._2_2_ = uVar12;
                  uVar1 = local_2c._2_2_;
                  uVar11 = local_30._2_2_;
                  local_40._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
                  local_40._0_4_ = (undefined4)uVar5;
                  if (local_38 < local_40._4_4_) {
                    local_2c._2_2_ = (ushort)((uint)puVar24 >> 0x10);
                    uVar19 = 2;
                    if ((int)uVar18 < 0) {
                      uVar19 = uVar18 ^ 0x80000000;
                    }
                    local_34 = uVar18;
                    if (uVar19 == 0) {
                      FUN_0134bd64(local_30,puVar24);
                      local_2c = puVar24;
                      puVar10 = local_2c;
                      puVar20 = local_30;
                    }
                    else if (uVar19 == 1) {
                      FUN_018a8274(&local_30);
                      local_2c = puVar24;
                      puVar10 = local_2c;
                      puVar20 = local_30;
                    }
                    else {
                      FUN_0134bd64();
                      local_2c = puVar24;
                      puVar10 = local_2c;
                      puVar20 = local_30;
                    }
                    local_2c = puVar10;
                    local_30 = puVar20;
                    uVar1 = local_2c._2_2_;
                    uVar11 = local_30._2_2_;
                    puVar24 = &UNK_00520ff4;
                    puVar23 = (undefined *)0x14;
                    puVar26 = (undefined *)0xffffff0e;
                    goto LAB_018b55d4;
                  }
                  puVar23 = local_28;
                  puVar26 = local_30;
                  if (uVar18 == 0x80000002) goto LAB_018b55d4;
                  local_50 = uVar18;
                  local_4c = local_30;
                  local_48 = puVar24;
                  local_44 = local_28;
                  puVar10 = local_30;
                  puVar23 = local_2c;
                  uVar6 = local_68;
                  if (puVar20 == local_5c) {
                    local_30._2_2_ = uVar11;
                    local_2c._2_2_ = uVar1;
                    FUN_018fa978(&local_5c);
                    puVar23 = local_2c;
                    puVar10 = local_30;
                    local_b8 = local_58;
                    uVar11 = local_30._2_2_;
                    uVar1 = local_2c._2_2_;
                    uVar6 = local_68;
                  }
                  local_2c._2_2_ = uVar1;
                  local_30._2_2_ = uVar11;
                  local_2c = puVar23;
                  local_30 = puVar10;
                  uVar1 = local_2c._2_2_;
                  uVar11 = local_30._2_2_;
                  local_68._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
                  local_68._0_4_ = (int)uVar6;
                  puVar13 = (uint *)(local_b8 + (int)puVar20 * 0x10);
                  local_54 = puVar20 + 1;
                  *puVar13 = local_50;
                  puVar13[1] = (uint)local_4c;
                  puVar13[2] = (uint)local_48;
                  puVar13[3] = (uint)local_44;
                  puVar20 = local_30;
                  puVar10 = local_2c;
                  local_30._2_2_ = uVar11;
                  local_2c._2_2_ = uVar1;
                  uVar5 = uVar28;
                } while (local_60 < local_68._4_4_);
              }
              local_2c = puVar10;
              local_30 = puVar20;
              uVar1 = local_2c._2_2_;
              uVar11 = local_30._2_2_;
              puVar23 = local_54;
              puVar24 = local_58;
              puVar26 = local_5c;
              puVar20 = local_30;
              puVar10 = local_2c;
              local_30._2_2_ = uVar11;
              local_2c._2_2_ = uVar1;
LAB_018b55e0:
              local_2c = puVar10;
              local_30 = puVar20;
              uVar1 = local_2c._2_2_;
              uVar11 = local_30._2_2_;
              puVar20 = local_30;
              puVar10 = local_2c;
              local_30._2_2_ = uVar11;
              local_2c._2_2_ = uVar1;
              uVar5 = uVar27;
              uVar27 = CONCAT44(puVar24,puVar26);
            }
            local_2c = puVar10;
            local_30 = puVar20;
            uVar1 = local_2c._2_2_;
            uVar11 = local_30._2_2_;
            puVar24 = (undefined *)((ulonglong)uVar27 >> 0x20);
            uVar18 = (uint)uVar27 & 0xff00;
            uVar19 = (uint)uVar27 >> 0x10;
            puVar20 = local_30;
            puVar10 = local_2c;
            local_30._2_2_ = uVar11;
            local_2c._2_2_ = uVar1;
          }
          local_2c = puVar10;
          local_30 = puVar20;
          uVar1 = local_2c._2_2_;
          uVar11 = local_30._2_2_;
          puVar20 = (undefined *)(uVar18 | uVar19 << 0x10);
          local_30._2_2_ = uVar11;
          local_2c._2_2_ = uVar1;
          if (bVar3) {
            FUN_0134bd64(puVar4,puVar16);
            puVar4 = puVar20;
            puVar20 = puVar23;
            puVar25 = puVar24;
            puVar16 = puVar26;
            goto LAB_018b5754;
          }
          puVar20 = (undefined *)((uint)puVar20 | (uint)puVar26 & 0xff);
          if (puVar4 == (undefined *)0x80000000) {
            puVar4 = puVar16;
            goto LAB_018b5754;
          }
          local_80 = puVar4;
          *(char *)(puVar17 + 1) = (char)((uint)puVar16 >> 0x18);
          *(undefined **)((int)puVar17 + 0xb) = puVar24;
          *puVar17 = (short)((uint)puVar16 >> 8);
          *(undefined **)((int)puVar17 + 0xf) = puVar23;
          local_7c = CONCAT31(local_7c._1_3_,(char)puVar16);
          local_78 = puVar25;
          local_74 = puVar20;
          puVar25 = local_30;
          puVar20 = local_2c;
          if (uVar21 == local_8c) {
            FUN_015f5b18(&local_8c);
            puVar20 = local_2c;
            puVar25 = local_30;
            local_a4 = local_88;
            uVar11 = local_30._2_2_;
            uVar1 = local_2c._2_2_;
          }
          local_2c._2_2_ = uVar1;
          local_30._2_2_ = uVar11;
          local_2c = puVar20;
          local_30 = puVar25;
          uVar1 = local_2c._2_2_;
          uVar11 = local_30._2_2_;
          local_84 = uVar21 + 1;
          puVar15 = (undefined4 *)(local_a4 + uVar21 * 0x18);
          *puVar15 = local_80;
          puVar15[1] = local_7c;
          puVar15[2] = local_78;
          puVar15[3] = local_74;
          puVar15[4] = uStack_70;
          puVar15[5] = uStack_6c;
          puVar25 = local_30;
          puVar20 = local_2c;
          local_30._2_2_ = uVar11;
          local_2c._2_2_ = uVar1;
        } while (local_90 < local_94);
        uVar21 = local_8c >> 8;
      }
      *(undefined1 *)(param_1 + 3) = (undefined1)local_8c;
      param_1[4] = local_a4;
      *(char *)((int)param_1 + 0xf) = (char)(uVar21 >> 0x10);
      *(short *)((int)param_1 + 0xd) = (short)uVar21;
      *param_1 = uVar7;
      param_1[1] = puVar8;
      param_1[2] = puVar9;
      param_1[5] = local_84;
      return;
    }
    uVar21 = 0;
    puVar20 = (undefined *)0x0;
    puVar25 = unaff_r9;
    cVar22 = '\n';
  }
  else {
    uVar21 = local_34 >> 8;
    cVar22 = (char)local_34;
  }
LAB_018b575c:
  *param_1 = 0x80000000;
  param_1[2] = puVar25;
  *(char *)((int)param_1 + 7) = (char)(uVar21 >> 0x10);
  *(short *)((int)param_1 + 5) = (short)uVar21;
  *(char *)(param_1 + 1) = cVar22;
  param_1[3] = puVar20;
  FUN_0134bd64(uVar7,puVar8);
  return;
}

