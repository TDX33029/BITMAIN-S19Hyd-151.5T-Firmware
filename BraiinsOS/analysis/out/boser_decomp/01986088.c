// FUN_01986088 @ 01986088 size=1520 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01986088(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r1;
  uint uVar8;
  int iVar9;
  uint extraout_r2;
  uint *puVar10;
  uint uVar11;
  undefined1 uVar12;
  uint extraout_r3;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint **ppuVar17;
  uint *puVar18;
  ushort *puVar19;
  ushort *extraout_r12;
  ushort *puVar20;
  ushort *extraout_r12_00;
  ushort *extraout_r12_01;
  undefined8 uVar21;
  uint local_a8;
  undefined2 local_94;
  undefined1 local_92;
  uint *local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint *local_7c;
  undefined4 local_78;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_58;
  uint *local_50;
  undefined4 local_48;
  uint local_44;
  uint **local_40;
  uint *local_3c;
  ushort local_38;
  undefined4 uStack_36;
  ushort local_32;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  cVar5 = (char)param_2[0x52];
  if (cVar5 == 'S') {
    if ((*param_2 & 1) != 0) {
      uVar15 = param_2[0x3c];
      if (uVar15 != 0) {
        local_a8 = param_2[0x3d];
      }
      uVar6 = param_2[2];
      local_88 = (uint **)(param_2 + 0x2e);
      local_90 = (uint *)param_2[0x34];
      local_8c = param_2[0x35];
      ppuVar17 = &local_90;
      puVar18 = (uint *)0x0;
      local_84 = (uint *)(param_2[0x40] + 8);
      uVar14 = param_2[3];
      local_64 = 0;
      local_80 = 0;
      FUN_0199987c(&local_48,ppuVar17);
      uVar11 = uStack_36;
      uVar8 = local_80;
      if ((char)local_48 == 'R') {
        if (local_80 == 0) {
          local_48._0_1_ = 'E';
          uVar11 = extraout_r1;
          uVar8 = extraout_r2;
          uVar15 = extraout_r3;
          local_58 = CONCAT44(local_58._4_4_,(uint **)local_58);
          goto LAB_01986498;
        }
        uVar1 = *(ushort *)((int)param_2 + 0xda);
        uVar21 = FUN_0134bd24(local_78);
        uStack_36 = uVar11;
        uVar11 = uStack_36;
        puVar19 = (ushort *)0x76;
        if (uVar1 < 5) {
          puVar19 = (ushort *)0x2130;
        }
        local_5c = (uint)local_7c;
        local_60 = uVar8;
        ppuVar17 = (uint **)&local_58;
        puVar20 = extraout_r12;
        local_50 = &local_80;
        if ((int)((ulonglong)uVar21 >> 0x20) == 0) {
          uVar4 = uStack_36._2_2_;
          if ((local_6c & 1) == 0) {
            local_6c = 1;
            local_68 = uVar8 - local_80;
          }
LAB_01986300:
          uStack_36._2_2_ = uVar4;
          uStack_36 = uVar11;
          local_58._4_4_ = puVar18;
          local_58._0_4_ = ppuVar17;
          uVar4 = uStack_36._2_2_;
          uVar8 = 0;
          uVar7 = 0x2e;
          uVar13 = 0;
          uVar11 = 0;
          uVar3 = uStack_36;
          uStack_36._2_2_ = uVar4;
        }
        else {
          do {
            uStack_36 = uVar11;
            uVar4 = uStack_36._2_2_;
            puVar10 = local_50;
            local_58._4_4_ = (uint *)((ulonglong)uVar21 >> 0x20);
            local_58._0_4_ = (uint **)uVar21;
            puVar18 = (uint *)(uint **)local_58;
            puVar16 = (uint *)((int)local_58._4_4_ + -1);
            if (puVar16 == (uint *)&DAT_ffffffff) {
              uVar11 = uStack_36;
              if (local_50[5] == 0) {
                ppuVar17 = (uint **)*local_50;
                uVar11 = local_60 - (int)ppuVar17;
                local_58 = uVar21;
                local_50[5] = 1;
                uStack_36._2_2_ = uVar4;
                uVar8 = uStack_36;
                puVar10[6] = uVar11;
                uStack_36 = uVar8;
                uVar11 = uStack_36;
                uVar4 = uStack_36._2_2_;
                uVar21 = local_58;
              }
              goto LAB_01986300;
            }
            uVar8 = uStack_36;
            uStack_36._2_2_ = uVar4;
            FUN_019901d0(&local_48,&local_60,*(undefined4 *)(local_50[3] + 0x20),(uint **)local_58);
            local_58 = uVar21;
            uVar11 = uStack_36;
            if (local_48 == 0x2e && local_44 == 0) {
              puVar18 = (uint *)(uVar11 >> 0x10 | (uint)local_32 << 0x10);
              ppuVar17 = (uint **)((uint)local_38 | uVar11 << 0x10);
              uVar15 = (uint)local_40 >> 8;
              uVar11 = (uint)local_40 >> 0x10 | (int)local_3c << 0x10;
              uVar8 = (uint)local_3c >> 0x10;
              local_48._0_1_ = (char)local_40;
              goto LAB_01986498;
            }
            local_58._0_4_ = (uint **)(puVar18 + 4);
            uVar21 = CONCAT44(puVar16,(uint **)local_58);
            puVar20 = (ushort *)(uint)local_38;
            ppuVar17 = local_40;
          } while (puVar20 != puVar19);
          uStack_36._2_2_ = SUB42(uVar11,2);
          local_38 = (ushort)puVar19;
          local_58._4_4_ = puVar16;
          FUN_01993028(&local_60,&local_48);
          uStack_36 = uVar11;
          uVar3 = uStack_36;
          uVar21 = CONCAT44(local_58._4_4_,(uint **)local_58);
          uVar13 = local_60 >> 0x10 | local_5c << 0x10;
          uVar8 = local_60 >> 8;
          uVar11 = local_5c >> 0x10;
          uVar7 = local_60;
          puVar20 = extraout_r12_00;
        }
        uStack_36 = uVar3;
        uVar4 = uStack_36._2_2_;
        local_44 = uVar11 << 0x10 | uVar13 >> 0x10;
        puVar18 = (uint *)*param_5;
        local_48 = uVar13 << 0x10 | (uVar8 & 0xff) << 8 | uVar7 & 0xff;
        if (local_48 == 0x2e && local_44 == 0) {
          local_8c = 0;
          local_88 = (uint **)0x0;
          uVar8 = uStack_36;
LAB_01986394:
          do {
            uStack_36._2_2_ = uVar4;
            uStack_36 = uVar8;
            uVar4 = uStack_36._2_2_;
            uVar11 = *puVar18;
            bVar2 = (bool)hasExclusiveAccess(puVar18);
            uVar8 = uStack_36;
          } while (!bVar2);
          *puVar18 = uVar11 + 1;
          uVar8 = uVar11;
          if (uVar11 < 0x80000000) {
            puVar20 = &local_38;
            uVar8 = uVar6;
          }
          if ((int)uVar11 < 0) {
            software_udf(0xfdee,0x1986458);
            return;
          }
          param_1[8] = uVar8;
          param_1[9] = uVar14;
          param_1[10] = uVar15;
          param_1[0xb] = local_a8;
          param_1[0xc] = local_8c;
          param_1[0xd] = local_88;
          param_1[0xe] = puVar18;
          param_1[0xf] = local_64;
          *(undefined4 *)puVar20 = param_3;
          uStack_36._2_2_ = uVar4;
          uVar15 = uStack_36;
          *(undefined4 *)(puVar20 + 2) = param_4;
          *(uint **)(puVar20 + 4) = param_2;
          *(int **)(puVar20 + 6) = param_5;
          *param_1 = param_2;
          param_1[1] = param_5;
          param_1[2] = param_2;
          param_1[3] = param_2;
          param_1[4] = CONCAT42(uVar15,local_38);
          param_1[5] = CONCAT22(local_32,uStack_36._2_2_);
          param_1[6] = uStack_30;
          param_1[7] = uStack_2c;
          return;
        }
        local_40 = (uint **)local_58;
        local_3c = local_58._4_4_;
        uVar8 = uStack_36;
        uStack_36._2_2_ = uVar4;
        local_58 = uVar21;
        FUN_0198d46c(&local_90,puVar18 + 2,*(undefined1 *)((int)param_2 + 0xd9),param_2[0x41],
                     &local_48);
        uVar8 = uStack_36;
        if ((char)local_90 == 'R') {
          puVar20 = extraout_r12_01;
          uVar4 = uStack_36._2_2_;
          goto LAB_01986394;
        }
        uVar15 = (uint)local_90 >> 8;
        local_44 = local_8c;
        ppuVar17 = local_88;
        puVar18 = local_84;
        local_48._0_1_ = (char)local_90;
      }
      else {
        puVar10 = (uint *)((uint)&local_48 | 2);
        uVar15 = local_48 >> 8 & 0xff;
        uVar11 = *puVar10;
        ppuVar17 = *(uint ***)((int)puVar10 + 6);
        puVar18 = *(uint **)((int)puVar10 + 10);
        uVar8 = (uint)(ushort)puVar10[1];
LAB_01986498:
        uVar15 = uVar15 & 0xff | uVar11 << 8;
        local_44 = uVar11 >> 0x10 | uVar8 << 0x10;
      }
      cVar5 = (char)param_2[0x52];
      local_48 = CONCAT13((char)(uVar15 >> 0x10),CONCAT21((short)uVar15,(char)local_48));
      local_40 = ppuVar17;
      local_3c = puVar18;
      if (cVar5 == 'S') {
        FUN_0199b668(param_2 + 0x52,&local_48);
        cVar5 = (char)param_2[0x52];
        if (cVar5 != 'R') goto LAB_019865d0;
LAB_019864d8:
        local_7c = (uint *)param_2[0x53];
        if (local_7c == (uint *)0x0) {
          uVar12 = 0;
          local_80 = *param_5 + 8;
          local_7c = param_2;
        }
        else {
          uVar12 = 2;
          local_80 = local_7c[0x46] + 8;
        }
      }
      else {
        if (cVar5 == 'R') goto LAB_019864d8;
LAB_019865d0:
        local_94 = *(undefined2 *)((int)param_2 + 0x14d);
        local_92 = *(undefined1 *)((int)param_2 + 0x14f);
        uVar12 = (undefined1)param_2[0x53];
        local_80 = param_2[0x54];
        local_7c = (uint *)param_2[0x55];
        local_60 = (uint)*(uint3 *)((int)param_2 + 0x149);
      }
      local_88 = (uint **)CONCAT13(local_60._2_1_,CONCAT21((undefined2)local_60,cVar5));
      local_84 = (uint *)CONCAT13(local_92,CONCAT21(local_94,uVar12));
      goto LAB_01986634;
    }
    FUN_0199b618(param_2 + 0x52);
    cVar5 = (char)param_2[0x52];
    if (cVar5 != 'R') goto LAB_01986538;
    local_7c = (uint *)param_2[0x53];
    if (local_7c != (uint *)0x0) goto LAB_019860f0;
    iVar9 = *param_5;
LAB_01986298:
    local_80 = iVar9 + 8;
    uVar12 = 0;
    local_7c = param_2;
  }
  else if (cVar5 == 'R') {
    local_7c = (uint *)param_2[0x53];
    if (local_7c == (uint *)0x0) {
      iVar9 = *param_5;
      goto LAB_01986298;
    }
LAB_019860f0:
    uVar12 = 2;
    local_80 = local_7c[0x46] + 8;
  }
  else {
LAB_01986538:
    uVar12 = (undefined1)param_2[0x53];
    local_80 = param_2[0x54];
    local_7c = (uint *)param_2[0x55];
    local_48 = CONCAT22(CONCAT11(local_48._3_1_,*(undefined1 *)((int)param_2 + 0x14b)),
                        *(undefined2 *)((int)param_2 + 0x149));
    local_60 = (uint)*(uint3 *)((int)param_2 + 0x14d);
  }
  local_88 = (uint **)CONCAT13(local_48._2_1_,(int3)CONCAT31((int3)local_48,cVar5));
  local_84 = (uint *)CONCAT13(local_60._2_1_,(int3)CONCAT31((int3)local_60,uVar12));
LAB_01986634:
  local_90 = (uint *)0x0;
  local_58._4_4_ = (uint *)param_5;
  local_60 = param_3;
  local_5c = param_4;
  local_58._0_4_ = (uint **)param_2;
  FUN_01989bf8(param_1 + 2,&local_60,&local_88);
  *param_1 = 0;
  return;
}

