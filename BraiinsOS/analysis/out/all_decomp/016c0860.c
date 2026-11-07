// FUN_016c0860 @ 016c0860 size=2232 calls_out=15 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016c0860(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_d4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint local_38;
  int local_34;
  
  uVar8 = (uint)(byte)param_2[9];
  uVar16 = param_3[5];
  bVar23 = uVar8 == 1;
  if (bVar23) {
    uVar8 = uVar16 & 0xf000;
  }
  if (bVar23 && uVar8 == 0xa000) {
    uVar8 = param_3[3];
    uVar16 = param_3[4];
    uVar18 = param_3[2];
    local_d4 = param_2[0x17];
    if (uVar16 == 0) {
      uVar9 = 1;
    }
    else {
      uVar9 = thunk_FUN_016d4a50(uVar16);
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar16);
      }
    }
    FUN_016dd1aa(uVar9,uVar8,uVar16);
    local_c0 = uVar16;
    local_bc = uVar9;
    local_b8 = uVar16;
    FUN_016c2968(&local_98,local_d4,&local_c0,1);
    uVar4 = local_78;
    uVar16 = local_7c;
    uVar3 = local_80;
    uVar22 = local_84;
    uVar13 = local_88;
    uVar12 = local_8c;
    uVar9 = local_90;
    uVar17 = local_84;
    uVar20 = local_94;
    local_f8 = local_88;
    local_f4 = local_8c;
    local_f0 = local_80;
    if (local_98 == 1) goto joined_r0x016c1074;
    local_f4 = local_84;
    local_f8 = local_80;
    if (uVar18 != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
    if ((uVar16 & 0xf000) == 0x4000) {
      local_a8 = 0;
      local_9c = 0;
      local_a4 = 0x1b6;
      local_a0 = 1;
      FUN_015ec1bc(&local_98,&local_a8,uVar22,uVar3);
      uVar8 = local_94;
      if ((char)local_98 == '\x04') {
        FUN_016dd606(&local_98,0,0x68);
        iVar10 = FUN_016e03d2(uVar8,&local_98);
        iVar21 = local_34;
        uVar5 = local_38;
        uVar20 = local_94;
        uVar18 = local_98;
        if (iVar10 != -1) {
          local_c0 = local_98;
          local_bc = local_94;
          local_b8 = local_38;
          iStack_b4 = local_34;
          uStack_b0 = uVar8;
          local_ac = 0;
          if (param_2[0xf] != 0) {
            uVar14 = param_2[0xe];
            iVar10 = param_2[0xf] * 0xc;
            do {
              iVar19 = uVar14 + iVar10;
              local_9c = 0;
              local_a8 = 0;
              local_a4 = 0x1b6;
              local_a0 = 1;
              FUN_015ec1bc(&local_98,&local_a8,*(undefined4 *)(iVar19 + -8),
                           *(undefined4 *)(iVar19 + -4));
              uVar17 = local_94;
              if ((char)local_98 == '\x04') {
                FUN_016dd606(&local_98,0,0x68);
                iVar11 = FUN_016e03d2(uVar17,&local_98);
                iVar7 = local_34;
                uVar6 = local_38;
                uVar2 = local_94;
                uVar1 = local_98;
                if (iVar11 == -1) {
                  puVar15 = (uint *)FUN_016d2bc8();
                  local_f0 = *puVar15;
                  FUN_016dffb2(uVar17);
                  uVar17 = 0;
LAB_016c0c68:
                  FUN_016dffb2(uVar8);
                  goto LAB_016c1048;
                }
                FUN_016dffb2(uVar17);
                if ((uVar18 == uVar1 && uVar20 == uVar2) && (uVar5 == uVar6 && iVar21 == iVar7)) {
LAB_016c107c:
                  FUN_016c2c18(&local_98,local_d4,*(undefined4 *)(iVar19 + -8),
                               *(undefined4 *)(iVar19 + -4),uVar22,uVar3);
                  uVar17 = local_88;
                  uVar18 = local_94;
                  uVar20 = local_98;
                  local_d4 = local_80;
                  local_f4 = local_90;
                  local_f8 = local_8c;
                  local_f0 = local_84;
                  FUN_016dffb2(uVar8);
                  uVar8 = uVar18;
                  if (uVar20 == 0x80000001) goto LAB_016c0cac;
                  goto LAB_016c1058;
                }
              }
              else {
                local_f0 = local_94;
                uVar17 = CONCAT31(*(uint3 *)((uint)&local_98 | 1),(char)local_98);
                if ((char)local_98 != '\x04') goto LAB_016c0c68;
                if ((*(uint3 *)((uint)&local_98 | 1) & 1) != 0) goto LAB_016c107c;
              }
              iVar10 = iVar10 + -0xc;
            } while (iVar10 != 0);
          }
          FUN_016dffb2(uVar8);
          goto LAB_016c0cac;
        }
        puVar15 = (uint *)FUN_016d2bc8();
        local_f0 = *puVar15;
        FUN_016dffb2(uVar8);
        uVar17 = 0;
      }
      else {
        local_f0 = local_94;
        uVar17 = local_98;
      }
LAB_016c1048:
      uVar18 = 0;
      uVar20 = 0x80000000;
      uVar8 = 0x80000000;
LAB_016c1058:
      uVar9 = uVar8 & 0xffffff00 | uVar18 & 0xff;
      uVar16 = local_d4;
      uVar8 = uVar22;
      uVar18 = uVar13;
joined_r0x016c1074:
      if (uVar18 != 0) {
        thunk_FUN_016d3fb4(uVar8);
      }
      param_1[2] = uVar9;
      *param_1 = 1;
      param_1[1] = uVar20;
      param_1[7] = uVar16;
      param_1[3] = local_f4;
      param_1[4] = local_f8;
      param_1[5] = uVar17;
      param_1[6] = local_f0;
      return;
    }
LAB_016c0cac:
    *param_3 = uVar9;
    param_3[4] = uVar3;
    param_3[3] = uVar22;
    param_3[1] = uVar12;
    param_3[2] = uVar13;
    param_3[6] = uVar4;
    param_3[5] = uVar16;
    param_3[7] = uStack_74;
  }
  puVar15 = (uint *)((uint)&local_98 | 4);
  uVar16 = uVar16 & 0xf000;
  if (uVar16 != 0x4000) {
    bVar23 = uVar16 == 0xa000;
    if (bVar23) {
      uVar16 = param_3[6];
    }
    if ((!bVar23 || uVar16 != 0) || ((*(byte *)((int)param_2 + 0x25) & 1) == 0)) goto LAB_016c0dd0;
    uVar8 = param_3[3];
    uVar16 = param_3[4];
    FUN_015f5984(&local_98,uVar8,uVar16);
    if (local_98 == 1) {
      iVar21 = 1;
      if ((uVar16 != 0) && (iVar21 = thunk_FUN_016d4a50(uVar16), iVar21 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar16);
      }
      FUN_016dd1aa(iVar21,uVar8,uVar16);
      *param_1 = 1;
      param_1[1] = 0x80000000;
      param_1[2] = uVar16;
      param_1[3] = iVar21;
      param_1[4] = uVar16;
      param_1[5] = local_94;
      param_1[6] = local_90;
      param_1[7] = 0;
      uVar16 = param_3[2];
      goto joined_r0x016c0db8;
    }
    if (((local_80 & 0xf000) != 0x4000) ||
       (FUN_016c1354(&local_98,param_2,uVar8,uVar16), local_98 == 0x80000001)) goto LAB_016c0dd0;
LAB_016c0e6c:
    param_1[1] = local_98;
    param_1[2] = local_94;
    param_1[3] = local_90;
    param_1[4] = local_8c;
    param_1[5] = local_88;
    param_1[6] = local_84;
    param_1[7] = local_80;
    *param_1 = 1;
    uVar16 = param_3[2];
joined_r0x016c0db8:
    if (uVar16 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(uVar8);
    return;
  }
  if ((*(char *)((int)param_2 + 0x27) == '\x01') && (uVar16 = param_3[6], uVar16 != 0)) {
    uVar9 = param_2[2];
    uVar18 = param_2[3];
    uVar20 = *param_2;
    uVar8 = param_3[3];
    uVar17 = param_3[4];
    FUN_015f5984(&local_98,uVar8,uVar17);
    if (local_98 == 1) {
      uVar18 = *puVar15;
      uVar9 = puVar15[1];
      iVar21 = 1;
      local_c0 = uVar18;
      local_bc = uVar9;
      if ((uVar17 != 0) && (iVar21 = thunk_FUN_016d4a50(uVar17), iVar21 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar17);
      }
      FUN_016dd1aa(iVar21,uVar8,uVar17);
      param_1[4] = uVar17;
      param_1[5] = uVar18;
      param_1[2] = uVar17;
      param_1[3] = iVar21;
      param_1[6] = uVar9;
      param_1[7] = uVar16;
      *param_1 = 1;
      param_1[1] = 0x80000000;
      uVar16 = param_3[2];
      goto joined_r0x016c0db8;
    }
    if ((uVar20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00418da5,0x33,&DAT_018af228);
    }
    if (uVar9 == puVar15[1] && uVar18 == puVar15[2]) {
      FUN_016c1354(&local_98,param_2,uVar8,uVar17);
      goto LAB_016c0e60;
    }
  }
  else {
    uVar8 = param_3[3];
    FUN_016c1354(&local_98,param_2,uVar8,param_3[4]);
LAB_016c0e60:
    if (local_98 != 0x80000001) goto LAB_016c0e6c;
  }
  if (*(char *)((int)param_2 + 0x26) != '\0') {
    uVar17 = *param_3;
    uVar9 = param_3[1];
    uVar16 = param_2[0x12];
    uVar18 = param_3[2];
    if (uVar16 == param_2[0x10]) {
      FUN_016c06b0();
    }
    uVar20 = param_3[4];
    uVar12 = param_3[5];
    uVar13 = param_3[6];
    uVar22 = param_3[7];
    puVar15 = (uint *)(param_2[0x11] + uVar16 * 0x20);
    *puVar15 = uVar17;
    *param_1 = 2;
    puVar15[4] = uVar20;
    puVar15[5] = uVar12;
    puVar15[6] = uVar13;
    puVar15[7] = uVar22;
    puVar15[1] = uVar9;
    puVar15[2] = uVar18;
    puVar15[3] = uVar8;
    param_2[0x12] = uVar16 + 1;
    return;
  }
LAB_016c0dd0:
  if ((param_2[7] <= param_2[0x17]) && (param_2[0x17] <= param_2[8])) {
    uVar8 = param_3[1];
    uVar16 = param_3[2];
    uVar18 = param_3[3];
    *puVar15 = *param_3;
    puVar15[1] = uVar8;
    puVar15[2] = uVar16;
    puVar15[3] = uVar18;
    uVar8 = param_3[5];
    uVar16 = param_3[6];
    uVar18 = param_3[7];
    puVar15[4] = param_3[4];
    puVar15[5] = uVar8;
    puVar15[6] = uVar16;
    puVar15[7] = uVar18;
    *param_1 = 0;
    param_1[1] = local_98;
    param_1[2] = local_94;
    param_1[3] = local_90;
    param_1[4] = local_8c;
    param_1[5] = local_88;
    param_1[6] = local_84;
    param_1[7] = local_80;
    param_1[8] = local_7c;
    param_1[9] = local_78;
    return;
  }
  uVar8 = param_3[2];
  *param_1 = 2;
  if (uVar8 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(param_3[3]);
  return;
}

