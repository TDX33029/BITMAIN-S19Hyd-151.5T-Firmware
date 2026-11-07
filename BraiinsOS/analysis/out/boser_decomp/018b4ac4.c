// FUN_018b4ac4 @ 018b4ac4 size=1412 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018b4ac4(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  char cVar9;
  ushort uVar10;
  ushort *puVar11;
  ushort *puVar12;
  char cVar13;
  ushort uVar14;
  undefined *puVar15;
  char cVar16;
  ushort *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *local_f0;
  uint local_ec;
  ushort *local_e8;
  undefined *local_dc;
  undefined *local_d8;
  int local_d4;
  uint local_c0;
  undefined4 local_bc;
  undefined *local_b8;
  undefined *puStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  ushort local_94;
  ushort uStack_92;
  undefined2 local_90;
  ushort uStack_8e;
  undefined4 local_8c;
  undefined *puStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  uint uStack_6c;
  undefined *puStack_68;
  undefined *puStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined2 local_32;
  uint local_30;
  uint local_2c;
  
  FUN_018b5c74(&local_98);
  cVar16 = (char)&local_c0;
  if (CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(local_98._1_1_,(char)local_98))) == 1) {
    param_1[1] = CONCAT22(uStack_92,local_94);
    param_1[2] = CONCAT22(uStack_8e,local_90);
    param_1[3] = local_8c;
  }
  else {
    local_c0 = CONCAT22(uStack_92,local_94);
    local_bc = CONCAT22(uStack_8e,local_90);
    local_b8 = local_8c;
    puStack_b4 = puStack_88;
    local_b0 = local_84;
    uStack_ac = uStack_80;
    uStack_a8 = uStack_7c;
    uStack_a4 = uStack_78;
    uStack_a0 = uStack_74;
    puStack_68 = local_8c;
    puStack_64 = puStack_88;
    local_60 = local_84;
    uStack_5c = uStack_80;
    uStack_58 = uStack_7c;
    uStack_54 = uStack_78;
    uStack_50 = uStack_74;
    local_70 = local_c0;
    uStack_6c = local_bc;
    FUN_018d6230(&local_98,param_2);
    uVar4 = local_94;
    if ((char)local_98 == '\x14') {
      puVar11 = &local_98;
      uVar2 = CONCAT11(uStack_95,uStack_96);
      FUN_018be40c(puVar11,param_2);
      if ((char)local_98 == '\x14') {
        if (local_98._1_1_ != '\0') {
          *param_1 = 0x80000000;
          *(undefined1 *)(param_1 + 1) = 0x11;
          return;
        }
        puVar15 = (undefined *)0x2;
        uVar18 = FUN_018beed0(param_2,2);
        if (((ushort *)uVar18 == (ushort *)0x0) || ((int)((ulonglong)uVar18 >> 0x20) != 2)) {
          cVar13 = '\v';
          local_f0 = &DAT_005239af;
        }
        else {
          uVar14 = *(ushort *)uVar18;
          uVar18 = FUN_018beed0(param_2,uVar14 << 8 | uVar14 >> 8);
          local_48 = (uint)((ulonglong)uVar18 >> 0x20);
          if ((int)uVar18 != 0) {
            local_4c = (undefined1)uVar18;
            local_40._2_2_ = 0;
            local_4a = (undefined2)((ulonglong)uVar18 >> 0x10);
            local_4b = (undefined1)((ulonglong)uVar18 >> 8);
            local_44 = 0;
            local_38 = 0;
            local_d4 = 4;
            local_3c = 4;
            local_40 = 0;
            if (local_48 == 0) {
              local_40._1_1_ = 0;
              local_40._0_1_ = 0;
            }
            else {
              puVar12 = &local_94;
              uVar18 = CONCAT44(local_f0,local_ec);
              do {
                iVar5 = local_38;
                local_f0 = (undefined *)((ulonglong)uVar18 >> 0x20);
                local_ec = (uint)uVar18;
                FUN_018be4cc(puVar11,&local_4c);
                uVar14 = local_94;
                if ((char)local_98 != '\x14') {
                  uVar6 = CONCAT22(local_90,uStack_92);
LAB_018b4fd8:
                  local_e8 = (ushort *)(uint)CONCAT11(uStack_95,uStack_96);
                  local_d8 = (undefined *)(uVar6 >> 0x10 | (uint)uStack_8e << 0x10);
                  local_f0 = (undefined *)((uint)local_94 | uVar6 << 0x10);
                  cVar13 = (char)local_98;
                  cVar16 = local_98._1_1_;
LAB_018b5024:
                  FUN_018a929c(&local_40);
                  puVar11 = local_e8;
                  puVar15 = local_d8;
                  goto LAB_018b502c;
                }
                sVar3 = CONCAT11(uStack_95,uStack_96);
                uVar19 = FUN_018beed0(&local_4c,2);
                cVar13 = '\v';
                if (((ushort *)uVar19 == (ushort *)0x0) || ((int)((ulonglong)uVar19 >> 0x20) != 2))
                {
                  local_d8 = (undefined *)0x2;
                  local_f0 = &DAT_005239af;
                  goto LAB_018b5024;
                }
                uVar10 = *(ushort *)uVar19;
                local_e8 = (ushort *)((uVar10 & 0xff) << 8 | (uint)(uVar10 >> 8));
                uVar19 = FUN_018beed0(&local_4c);
                local_30 = (uint)((ulonglong)uVar19 >> 0x20);
                if ((int)uVar19 == 0) {
                  cVar13 = '\n';
                  local_d8 = (undefined *)0x0;
                  local_e8 = (ushort *)(local_ec >> 0x10);
                  cVar16 = (char)((ulonglong)uVar18 >> 8);
                  goto LAB_018b5024;
                }
                local_34 = (undefined1)uVar19;
                local_2c = 0;
                local_32 = (undefined2)((ulonglong)uVar19 >> 0x10);
                local_33 = (undefined1)((ulonglong)uVar19 >> 8);
                if (sVar3 != 0x17) {
                  if (sVar3 != 0x18) {
                    if (sVar3 == 0x1f) {
                      FUN_018be238(puVar11,&local_34);
                      if ((char)local_98 != '\x14') goto LAB_018b4fcc;
                      uVar14 = CONCAT11(uStack_95,uStack_96);
                      uVar6 = 0x80000000;
                      goto LAB_018b4de8;
                    }
                    FUN_018c3e74(puVar11,&local_34);
                    local_8c = (undefined *)CONCAT22(uVar14,sVar3);
                    local_dc = (undefined *)CONCAT22(uStack_8e,local_90);
                    uVar10 = local_94 >> 8;
                    local_d8 = local_8c;
                    uVar14 = local_94 & 0xff;
                    uVar6 = CONCAT13(uStack_95,
                                     CONCAT12(uStack_96,CONCAT11(local_98._1_1_,(char)local_98)));
                    puVar17 = (ushort *)(uint)uStack_92;
                    goto LAB_018b4e28;
                  }
                  FUN_018c4324(puVar11,&local_34);
                  puVar17 = (ushort *)(uint)uStack_92;
                  local_dc = (undefined *)CONCAT22(uStack_8e,local_90);
                  uVar10 = local_94 >> 8;
                  cVar9 = (char)(local_94 >> 8);
                  local_d8 = local_8c;
                  uVar14 = local_94 & 0xff;
                  local_f0 = local_dc;
                  if (CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(local_98._1_1_,(char)local_98))
                              ) == 0) {
                    uVar6 = 0x80000001;
                    goto LAB_018b4e28;
                  }
LAB_018b4ff8:
                  local_e8 = puVar17;
                  cVar13 = (char)uVar14;
                  cVar16 = cVar9;
                  goto LAB_018b5024;
                }
                FUN_018d880c(puVar11,&local_34);
                if ((char)local_98 != '\x14') {
LAB_018b4fcc:
                  uVar6 = CONCAT22(local_90,uStack_92);
                  goto LAB_018b4fd8;
                }
                uVar14 = CONCAT11(uStack_95,uStack_96);
                uVar6 = 0x80000002;
LAB_018b4de8:
                puVar17 = (ushort *)(uint)local_94;
                uVar10 = 0;
LAB_018b4e28:
                cVar9 = (char)uVar10;
                uVar1 = (ushort)puVar17;
                if (local_2c < local_30) {
                  uStack_92 = uVar1;
                  local_94 = uVar14 | uVar10 << 8;
                  uVar8 = 3;
                  if ((int)uVar6 < 0) {
                    uVar8 = uVar6 ^ 0x80000000;
                  }
                  local_98._0_1_ = (char)uVar6;
                  local_98._1_1_ = (char)(uVar6 >> 8);
                  uStack_96 = (undefined1)(uVar6 >> 0x10);
                  uStack_95 = (undefined1)(uVar6 >> 0x18);
                  if (uVar8 != 0) {
                    if (uVar8 == 1) {
                      uVar6 = CONCAT22(uVar1,local_94);
                    }
                    else {
                      puVar12 = puVar11;
                      if (uVar8 == 2) goto LAB_018b5014;
                    }
                    FUN_0134bd64(uVar6,*(undefined4 *)(puVar12 + 2));
                    puVar11 = puVar12;
                  }
LAB_018b5014:
                  local_d8 = (undefined *)0x13;
                  local_f0 = &UNK_00520fe1;
                  local_e8 = puVar11;
                  cVar13 = '\x0e';
                  goto LAB_018b5024;
                }
                local_f0 = local_dc;
                if (uVar6 == 0x80000003) goto LAB_018b4ff8;
                puStack_b4 = local_d8;
                local_bc = CONCAT22(uVar1,CONCAT11(cVar9,(char)uVar14));
                local_c0 = uVar6;
                local_b8 = local_dc;
                if (iVar5 == local_40) {
                  FUN_018fa978(&local_40);
                  local_d4 = local_3c;
                }
                puVar7 = (uint *)(local_d4 + iVar5 * 0x10);
                local_38 = iVar5 + 1;
                *puVar7 = local_c0;
                puVar7[1] = local_bc;
                puVar7[2] = (uint)local_b8;
                puVar7[3] = (uint)puStack_b4;
                uVar18 = uVar19;
              } while (local_44 < local_48);
            }
            *(undefined1 *)param_1 = (undefined1)local_40;
            *(undefined2 *)((int)param_1 + 2) = local_40._2_2_;
            *(undefined1 *)((int)param_1 + 1) = local_40._1_1_;
            param_1[1] = local_3c;
            param_1[2] = local_38;
            param_1[5] = local_70;
            param_1[6] = uStack_6c;
            param_1[7] = puStack_68;
            param_1[8] = puStack_64;
            param_1[9] = local_60;
            param_1[10] = uStack_5c;
            param_1[0xb] = uStack_58;
            param_1[0xc] = uStack_54;
            param_1[0xd] = uStack_50;
            *(ushort *)((int)param_1 + 0x12) = uVar4;
            *(undefined2 *)(param_1 + 4) = uVar2;
            param_1[3] = 9;
            return;
          }
          local_f0 = (undefined *)0x0;
          cVar13 = '\n';
          puVar15 = (undefined *)0x0;
          cVar16 = '\0';
          puVar11 = (ushort *)0x0;
        }
LAB_018b502c:
        *(short *)((int)param_1 + 6) = (short)puVar11;
        *(char *)((int)param_1 + 5) = cVar16;
        *(char *)(param_1 + 1) = cVar13;
        *param_1 = 0x80000000;
        param_1[2] = local_f0;
        param_1[3] = puVar15;
        return;
      }
      FUN_01bed4e2((int)param_1 + 7,(uint)puVar11 | 3,9);
      *(undefined1 *)((int)param_1 + 6) = uStack_96;
      *(char *)((int)param_1 + 5) = local_98._1_1_;
      *(char *)(param_1 + 1) = (char)local_98;
    }
    else {
      *(uint *)((int)param_1 + 10) = CONCAT22(local_90,uStack_92);
      *(ushort *)((int)param_1 + 0xe) = uStack_8e;
      *(uint *)((int)param_1 + 6) = CONCAT22(local_94,CONCAT11(uStack_95,uStack_96));
      *(char *)((int)param_1 + 5) = local_98._1_1_;
      *(char *)(param_1 + 1) = (char)local_98;
    }
  }
  *param_1 = 0x80000000;
  return;
}

