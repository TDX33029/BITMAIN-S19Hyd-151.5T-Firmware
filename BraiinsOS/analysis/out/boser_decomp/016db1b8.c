// FUN_016db1b8 @ 016db1b8 size=1444 calls_out=18 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016db1b8(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  int local_ec;
  uint local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_80;
  uint local_7c;
  int iStack_78;
  uint local_74;
  uint uStack_70;
  int local_6c;
  uint local_68;
  uint uStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar16 = *param_2;
  uVar7 = param_2[2];
  puVar13 = (uint *)(iVar16 + 0x50);
  uVar17 = *puVar13;
  if (uVar17 == uVar7) {
    local_b4 = *puVar13;
    local_b0 = *(uint *)(iVar16 + 0x54);
    local_ac = *(int *)(iVar16 + 0x58);
    local_c0 = *puVar13;
    local_bc = *(uint *)(iVar16 + 0x54);
    local_b8 = *(int *)(iVar16 + 0x58);
    iVar8 = param_2[1];
    local_80 = 0x14;
    uVar7 = uVar17;
LAB_016db410:
    FUN_016d4540(param_1,iVar8,uVar7,&local_c0,&local_80);
    return;
  }
  uVar15 = *(uint *)(iVar16 + 0x54);
  iVar10 = *(int *)(iVar16 + 0x58);
  do {
    iVar8 = FUN_016d4a28(param_2);
    if (iVar8 == 0x3e) break;
    uVar2 = FUN_016d4a28(param_2);
    uVar3 = *(uint *)(iVar16 + 0x50);
    bVar18 = uVar3 == uVar17;
    if (bVar18) {
      uVar3 = *(uint *)(iVar16 + 0x54);
    }
    if ((!(bVar18 && uVar3 == uVar15)) || (*(int *)(iVar16 + 0x58) != iVar10)) {
      if (((4 < uVar2 - 0x5b) || ((1 << (uVar2 - 0x5b & 0xff) & 0x15U) == 0)) && (uVar2 != 0x2e)) {
        if (uVar2 < 0x80) {
          if ((uVar2 - 0x30 < 10) || ((uVar2 & 0x5f) - 0x41 < 0x1a)) goto LAB_016db314;
        }
        else if (0xa9 < uVar2) {
          iVar8 = FUN_0130743c(uVar2);
          if (iVar8 != 0) goto LAB_016db314;
          if (0xb1 < uVar2) {
            iVar8 = FUN_013077ac(uVar2);
            goto LAB_016db30c;
          }
        }
        goto LAB_016db438;
      }
    }
    else if ((uVar2 != 0x5f) && (0x19 < (uVar2 & 0xffffffdf) - 0x41)) {
      if (0xa9 < uVar2) {
        iVar8 = FUN_0130743c(uVar2);
LAB_016db30c:
        if (iVar8 != 0) goto LAB_016db314;
      }
LAB_016db438:
      FUN_016d4f3c(&local_c0,param_2);
      iVar8 = param_2[1];
      local_80 = 0x13;
      goto LAB_016db410;
    }
LAB_016db314:
    iVar8 = FUN_016d4fe8(param_2);
  } while (iVar8 != 0);
  uVar3 = *puVar13;
  if (uVar3 == uVar7) {
    iVar8 = param_2[1];
    local_80 = 0x14;
    local_c0 = *puVar13;
    local_bc = *(uint *)(iVar16 + 0x54);
    local_b8 = *(int *)(iVar16 + 0x58);
    local_b4 = *puVar13;
    local_b0 = *(uint *)(iVar16 + 0x54);
    local_ac = *(int *)(iVar16 + 0x58);
    goto LAB_016db410;
  }
  uVar2 = *(uint *)(iVar16 + 0x54);
  iVar14 = *(int *)(iVar16 + 0x58);
  local_ec = FUN_016d4a28(param_2);
  if (local_ec == 0x3e) {
    FUN_016d4fe8(param_2);
    iVar8 = param_2[1];
    if (((uVar3 < uVar17) ||
        ((uVar17 != 0 && ((uVar7 <= uVar17 || (*(char *)(iVar8 + uVar17) < -0x40)))))) ||
       ((uVar3 != 0 && ((uVar7 <= uVar3 || (*(char *)(iVar8 + uVar3) < -0x40)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar8,uVar7,uVar17,uVar3,&DAT_01d09f08);
    }
    uVar12 = uVar3 - uVar17;
    if (uVar12 == 0) {
      local_80 = 0x12;
      local_c0 = uVar17;
      local_bc = uVar15;
      local_b8 = iVar10;
      local_b4 = uVar17;
      local_b0 = uVar15;
      local_ac = iVar10;
      goto LAB_016db410;
    }
    uVar9 = 0;
    if ((int)uVar12 < 0) {
LAB_016db42c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,uVar12);
    }
    uVar9 = 1;
    iVar4 = FUN_01298504(uVar12,1);
    if (iVar4 == 0) goto LAB_016db42c;
    FUN_01bed4e2(iVar4,iVar8 + uVar17,uVar12);
    local_cc = uVar2;
    local_c4 = param_3;
    local_c8 = iVar14;
    local_d0 = uVar3;
    local_d4 = iVar10;
    local_d8 = uVar15;
    local_dc = uVar17;
    local_e8 = uVar12;
    local_e4 = iVar4;
    local_e0 = uVar12;
    if (*(int *)(iVar16 + 0x30) == 0) {
      uVar15 = *(uint *)(iVar16 + 0x3c);
      iVar10 = *(int *)(iVar16 + 0x38);
      *(undefined4 *)(iVar16 + 0x30) = 0xffffffff;
      uVar17 = 0;
      if (uVar15 != 0) {
        iVar14 = 0;
        if (uVar15 != 1) {
          iVar6 = 0;
          do {
            iVar14 = iVar6 + (uVar15 >> 1);
            iVar5 = iVar10 + iVar14 * 0x28;
            uVar3 = *(uint *)(iVar5 + 8);
            uVar17 = uVar12;
            if (uVar3 < uVar12) {
              uVar17 = uVar3;
            }
            iVar5 = FUN_01bed842(*(undefined4 *)(iVar5 + 4),iVar4,uVar17);
            if (iVar5 == 0) {
              iVar5 = uVar3 - uVar12;
            }
            uVar15 = uVar15 - (uVar15 >> 1);
            if (0 < iVar5) {
              iVar14 = iVar6;
            }
            iVar6 = iVar14;
          } while (1 < uVar15);
        }
        iVar10 = iVar10 + iVar14 * 0x28;
        uVar15 = *(uint *)(iVar10 + 8);
        uVar17 = uVar12;
        if (uVar15 < uVar12) {
          uVar17 = uVar15;
        }
        iVar6 = FUN_01bed842(*(undefined4 *)(iVar10 + 4),iVar4,uVar17);
        if (iVar6 == 0) {
          iVar6 = uVar15 - uVar12;
        }
        if (iVar6 == 0) {
          local_3c = *(undefined4 *)(iVar10 + 0xc);
          uStack_38 = *(undefined4 *)(iVar10 + 0x10);
          uStack_34 = *(undefined4 *)(iVar10 + 0x14);
          uStack_30 = *(undefined4 *)(iVar10 + 0x18);
          uStack_2c = *(undefined4 *)(iVar10 + 0x1c);
          uStack_28 = *(undefined4 *)(iVar10 + 0x20);
          local_40 = 0x11;
          FUN_016d4540(&local_80,iVar8,uVar7,&local_dc,&local_40);
          local_c0 = local_7c;
          local_bc = iStack_78;
          local_b8 = local_74;
          local_b4 = uStack_70;
          local_b0 = local_6c;
          local_ac = local_68;
          uStack_a8 = uStack_64;
          iStack_a4 = iStack_60;
          iStack_a0 = local_5c;
          iStack_9c = iStack_58;
          local_98 = local_54;
          iStack_94 = iStack_50;
          iStack_90 = iStack_4c;
          iStack_8c = iStack_48;
          iStack_88 = iStack_44;
          *(int *)(iVar16 + 0x30) = *(int *)(iVar16 + 0x30) + 1;
          if (local_80 != 0x22) {
            param_1[1] = local_7c;
            param_1[2] = iStack_78;
            param_1[3] = local_74;
            param_1[4] = uStack_70;
            param_1[5] = local_6c;
            param_1[6] = local_68;
            param_1[7] = uStack_64;
            param_1[8] = iStack_60;
            param_1[9] = local_5c;
            param_1[10] = iStack_58;
            param_1[0xb] = local_54;
            param_1[0xc] = iStack_50;
            param_1[0xd] = iStack_4c;
            param_1[0xe] = iStack_48;
            param_1[0xf] = iStack_44;
            *param_1 = local_80;
            FUN_0134bd64(uVar12,iVar4);
            return;
          }
          goto LAB_016db630;
        }
        uVar17 = iVar14 - (iVar6 >> 0x1f);
      }
      local_74 = local_dc;
      uStack_70 = local_d8;
      local_6c = local_d4;
      local_68 = local_d0;
      uStack_64 = local_cc;
      iStack_60 = local_c8;
      FUN_006666fc(&local_80,iVar4,uVar12);
      uVar7 = *(uint *)(iVar16 + 0x3c);
      local_5c = param_3;
      if (uVar17 <= uVar7) {
        if (uVar7 == *(uint *)(iVar16 + 0x34)) {
          FUN_0133e324();
        }
        piVar11 = (int *)(*(int *)(iVar16 + 0x38) + uVar17 * 0x28);
        if (uVar17 < uVar7) {
          FUN_01bed864(piVar11 + 10,piVar11,(uVar7 - uVar17) * 0x28);
        }
        *piVar11 = local_80;
        piVar11[1] = local_7c;
        piVar11[2] = iStack_78;
        piVar11[3] = local_74;
        piVar11[4] = uStack_70;
        piVar11[5] = local_6c;
        piVar11[6] = local_68;
        piVar11[7] = uStack_64;
        piVar11[8] = iStack_60;
        piVar11[9] = local_5c;
        *(uint *)(iVar16 + 0x3c) = uVar7 + 1;
        *(int *)(iVar16 + 0x30) = *(int *)(iVar16 + 0x30) + 1;
LAB_016db630:
        param_1[1] = local_e8;
        param_1[2] = local_e4;
        param_1[3] = local_e0;
        param_1[4] = local_dc;
        param_1[5] = local_d8;
        param_1[6] = local_d4;
        param_1[7] = local_d0;
        param_1[8] = local_cc;
        param_1[9] = local_c8;
        param_1[10] = local_c4;
        *param_1 = 0x22;
        return;
      }
      FUN_00666488(uVar17,uVar7,&DAT_01d09ed8);
      goto LAB_016db738;
    }
  }
  else {
    FUN_016f4e14(&local_ec,&DAT_0056e224,&DAT_01d09f18);
  }
  FUN_01306fc8(&DAT_01d09ec8);
LAB_016db738:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x16db738);
  (*pcVar1)();
}

