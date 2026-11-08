// FUN_00ddf7fc @ 00ddf7fc size=1076 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ddf7fc(undefined4 *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int unaff_r7;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_190;
  undefined1 local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_174;
  undefined1 auStack_170 [64];
  undefined4 local_130;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint local_dc;
  uint local_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c16280);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16280);
  }
  piVar9 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_170,param_2,0x48);
  FUN_00a2b4fc(local_130);
  iVar4 = *(int *)(*piVar9 + 0x3c);
  if (*(int *)(iVar4 + 8) == 2 && *(int *)(iVar4 + 0xc) == 0) {
    uVar17 = 8;
    uVar5 = 0;
    uVar12 = 0;
  }
  else {
    uVar8 = *(uint *)(iVar4 + 0xdc);
    if (0x1999999 < uVar8) {
      uVar10 = 0;
LAB_00ddf8fc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,unaff_r7);
    }
    iVar4 = *(int *)(iVar4 + 0xd8);
    unaff_r7 = uVar8 * 0x50;
    if (unaff_r7 == 0) {
      uVar17 = 8;
      uVar5 = 0;
    }
    else {
      uVar10 = 8;
      uVar17 = FUN_01298504(unaff_r7,8);
      if (uVar17 == 0) goto LAB_00ddf8fc;
      uVar5 = uVar8;
    }
    uVar12 = 0;
    local_dc = uVar5;
    local_d8 = uVar17;
    if (uVar8 != 0) {
      uVar12 = 0;
      do {
        puVar11 = (undefined8 *)(iVar4 + uVar12 * 0x48);
        uVar13 = *(uint *)(puVar11 + 8);
        uVar20 = *puVar11;
        if (*(int *)(puVar11 + 1) == -0x80000000) {
          local_a8 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_a8,*(undefined4 *)((int)puVar11 + 0xc),*(undefined4 *)(puVar11 + 2));
        }
        if (*(int *)((int)puVar11 + 0x14) == -0x80000000) {
          local_98 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_98,*(undefined4 *)(puVar11 + 3),*(undefined4 *)((int)puVar11 + 0x1c));
        }
        if (*(int *)(puVar11 + 4) == -0x80000000) {
          local_88 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_88,*(undefined4 *)((int)puVar11 + 0x24),*(undefined4 *)(puVar11 + 5));
        }
        uVar6 = 0x80000000;
        if (*(int *)((int)puVar11 + 0x2c) == -0x80000000) {
          local_174 = uVar13;
        }
        else {
          uVar15 = *(uint *)((int)puVar11 + 0x34);
          uVar10 = 0;
          bVar19 = 0x1ffffffe < uVar15;
          bVar18 = uVar15 == 0x1fffffff;
          uVar6 = uVar17;
          uVar3 = uVar13;
          if (uVar15 < 0x20000000) {
            uVar6 = uVar15 << 3;
            bVar19 = 0x7ffffffb < uVar6;
            bVar18 = uVar6 == 0x7ffffffc;
            uVar3 = uVar17;
            local_174 = uVar13;
          }
          uVar17 = uVar3;
          uVar13 = local_190;
          if (bVar19 && !bVar18) {
LAB_00ddfc08:
            local_190 = uVar13;
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar10,local_190);
          }
          local_180 = (uint)*(ushort *)((int)puVar11 + 0x3a);
          local_17c = (uint)*(ushort *)(puVar11 + 7);
          iVar16 = *(int *)(puVar11 + 6);
          local_188 = *(uint *)(&DAT_005bfc84 + (uint)*(byte *)((int)puVar11 + 0x3d) * 4);
          local_184 = *(uint *)(&DAT_005bfc3c + (uint)*(byte *)((int)puVar11 + 0x3e) * 4);
          if (uVar6 == 0) {
            local_190 = 4;
            uVar6 = 0;
          }
          else {
            uVar10 = 4;
            local_190 = FUN_01298504(uVar6,4);
            uVar13 = uVar6;
            if (local_190 == 0) goto LAB_00ddfc08;
            uVar6 = uVar15;
          }
          local_74 = 0;
          if (uVar15 != 0) {
            puVar7 = (ushort *)(iVar16 + 2);
            puVar14 = (uint *)(local_190 + 4);
            uVar13 = uVar15;
            do {
              uVar2 = *puVar7;
              uVar13 = uVar13 - 1;
              puVar1 = puVar7 + -1;
              puVar7 = puVar7 + 2;
              puVar14[-1] = (uint)*puVar1;
              *puVar14 = (uint)uVar2;
              puVar14 = puVar14 + 2;
            } while (uVar13 != 0);
            local_74 = uVar15;
          }
          local_18c = *(undefined1 *)((int)puVar11 + 0x3c);
          local_78 = local_190;
        }
        local_70 = local_a8;
        local_6c = uStack_a4;
        local_68 = uStack_a0;
        local_c0 = local_98;
        uStack_bc = uStack_94;
        uStack_b8 = uStack_90;
        uStack_d0 = local_88;
        uStack_cc = local_84;
        uStack_c8 = local_80;
        uVar13 = uVar12 + 1;
        local_ac = local_74;
        local_b0 = local_78;
        puVar14 = (uint *)(uVar17 + uVar12 * 0x50);
        *puVar14 = uVar6;
        puVar14[1] = local_78;
        puVar14[2] = local_74;
        puVar14[3] = local_17c;
        puVar14[4] = local_180;
        puVar14[5] = local_184;
        *(undefined1 *)(puVar14 + 7) = local_18c;
        puVar14[6] = local_188;
        *(undefined8 *)(puVar14 + 8) = uVar20;
        puVar14[10] = local_a8;
        puVar14[0xb] = uStack_a4;
        puVar14[0xc] = uStack_a0;
        puVar14[0xd] = local_98;
        puVar14[0xe] = uStack_94;
        puVar14[0xf] = uStack_90;
        puVar14[0x10] = local_88;
        puVar14[0x11] = local_84;
        puVar14[0x12] = local_80;
        puVar14[0x13] = local_174;
        uVar12 = uVar13;
      } while (uVar13 != uVar8);
      uVar12 = uVar8;
    }
  }
  local_88 = uVar5;
  local_84 = uVar17;
  local_80 = uVar12;
  FUN_0160aaa4(&local_70,0);
  local_e8 = local_88;
  uStack_e4 = local_84;
  uStack_e0 = local_80;
  uStack_128 = local_70;
  uStack_124 = local_6c;
  uStack_120 = local_68;
  uStack_11c = uStack_64;
  uStack_118 = uStack_60;
  local_114 = local_5c;
  uStack_110 = uStack_58;
  uStack_10c = uStack_54;
  uStack_108 = uStack_50;
  uStack_104 = uStack_4c;
  local_100 = local_48;
  uStack_fc = uStack_44;
  uStack_f8 = uStack_40;
  uStack_f4 = uStack_3c;
  uStack_f0 = uStack_38;
  uStack_ec = uStack_34;
  FUN_00f9604c(auStack_170);
  *param_1 = 3;
  param_1[1] = 0;
  FUN_01bed4e2(param_1 + 2,&uStack_128,0x4c);
  param_1[0x15] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

