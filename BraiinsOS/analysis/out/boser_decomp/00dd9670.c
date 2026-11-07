// FUN_00dd9670 @ 00dd9670 size=3768 calls_out=26 calls_in=1
// strings: operationName | operationName | variables | variables | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dd9670(int *******param_1,uint *param_2)

{
  bool bVar1;
  int *******pppppppiVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *******pppppppiVar6;
  int ******ppppppiVar7;
  int *******pppppppiVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  undefined4 *puVar12;
  int *******pppppppiVar13;
  int *******pppppppiVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  uint uVar18;
  int *******unaff_r10;
  int *******unaff_r11;
  int ******ppppppiVar19;
  bool bVar20;
  undefined8 uVar21;
  int *******local_220;
  int *******local_21c;
  int *******local_218;
  int *******local_214;
  int *******local_204;
  int *******local_200;
  int *******local_1fc;
  int *******local_1e8;
  int *******local_1e4;
  undefined4 local_1e0;
  int *******local_1d4;
  int *******local_1cc;
  int *******local_1c8;
  undefined4 *local_1c4;
  undefined4 *local_1c0;
  uint local_1bc;
  undefined4 *local_1b8;
  int local_1b4;
  int *******local_1b0;
  int *******pppppppiStack_1ac;
  int *******pppppppiStack_1a8;
  undefined4 uStack_1a4;
  undefined4 *local_1a0;
  undefined4 *local_19c;
  uint local_198;
  undefined4 *local_194;
  int local_190;
  undefined1 auStack_188 [192];
  undefined4 local_c8;
  int *******local_c4;
  int *******local_c0;
  int *******local_bc;
  int *******local_b8;
  int *******local_b4;
  int *******local_b0;
  int *******local_ac;
  int *******local_a8;
  int *******pppppppiStack_a4;
  int ******ppppppiStack_a0;
  int ******ppppppiStack_9c;
  int *******local_98;
  int *******local_94;
  int *******local_90;
  int *******local_8c;
  int *******local_80;
  int *******local_7c;
  int *******local_78;
  int *******local_74;
  int *******local_70;
  int *******pppppppiStack_6c;
  int ******ppppppiStack_68;
  int ******ppppppiStack_64;
  int *******local_60;
  int *******pppppppiStack_5c;
  int *******pppppppiStack_58;
  int *******pppppppiStack_54;
  int *******local_50;
  int *******local_4c;
  int *******local_48;
  undefined4 uStack_44;
  char local_40;
  undefined1 local_3f;
  int *******local_3c;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  int *******local_2c;
  undefined1 uStack_25;
  
  uVar18 = *param_2;
  uVar3 = 0x15;
  if ((int)uVar18 < 0) {
    uVar3 = uVar18 ^ 0x80000000;
  }
  pppppppiVar8 = param_1 + 4;
  if (uVar3 != 0x14) {
    if (uVar3 != 0x15) {
      ppppppiVar7 = (int ******)FUN_012664e4(param_2,&uStack_25,&DAT_01c1604c);
      *param_1 = ppppppiVar7;
      param_1[0x2b] = (int ******)0x80000000;
      return;
    }
    local_1b0 = (int *******)0x80000015;
    puVar12 = (undefined4 *)((uint)&local_80 | 4);
    local_1c8 = (int *******)&DAT_80000000;
    local_1cc = (int *******)&DAT_80000001;
    local_190 = 0;
    local_b8 = (int *******)0x0;
    local_1e8 = local_b4;
    local_1e4 = (int *******)0x0;
    puVar4 = (undefined4 *)((uint)&local_38 | 4);
    puVar5 = (undefined4 *)((uint)&local_1b0 | 4);
    local_1e0 = 0;
    local_1d4 = (int *******)0x0;
    local_1a0 = (undefined4 *)param_2[1];
    local_194 = local_1a0 + param_2[2] * 8;
    bVar1 = false;
    pppppppiVar13 = pppppppiVar8;
    pppppppiVar14 = param_1;
    local_19c = local_1a0;
    local_198 = uVar18;
LAB_00dd9780:
    pppppppiVar11 = local_1c8;
    bVar20 = local_19c == local_194;
    if (!bVar20) {
      pppppppiVar14 = (int *******)*local_19c;
      pppppppiVar13 = (int *******)local_19c[1];
      unaff_r11 = (int *******)local_19c[2];
      unaff_r10 = (int *******)local_19c[3];
      local_50 = (int *******)local_19c[4];
      local_4c = (int *******)local_19c[5];
      local_48 = (int *******)local_19c[6];
      uStack_44 = local_19c[7];
      local_19c = local_19c + 8;
    }
    if (bVar20 || pppppppiVar14 == (int *******)0x80000015) {
      local_c0 = local_200;
      local_bc = local_204;
      local_b4 = local_1e8;
      local_b8 = local_1e4;
      local_c4 = local_1fc;
      local_c8 = local_1e0;
      if (local_1c8 == (int *******)&DAT_80000000) {
        local_214 = (int *******)0x0;
        pppppppiVar13 = (int *******)0x0;
      }
      else {
        pppppppiVar13 = local_1c8;
      }
      if (local_1cc == (int *******)&DAT_80000001) {
        local_1cc = (int *******)&DAT_80000000;
      }
      if (local_1c8 == (int *******)&DAT_80000000) {
        local_21c = (int *******)&DAT_00000001;
      }
      if (bVar1) {
        local_98 = local_1fc;
        local_94 = local_200;
        local_90 = local_204;
      }
      else {
        local_90 = (int *******)0x0;
        local_98 = (int *******)0x0;
      }
      if (local_1d4 == (int *******)0x0) {
        uVar21 = thunk_FUN_01bee35a(0,0x2c0);
        piVar16 = (int *)((int)uVar21 + (int)((ulonglong)uVar21 >> 0x20));
        if ((char)piVar16[4] == '\0') {
          FUN_019ae6ac(&local_80);
          *piVar16 = (int)local_80;
          piVar16[1] = (int)local_7c;
          piVar16[2] = (int)local_78;
          piVar16[3] = (int)local_74;
          *(undefined1 *)(piVar16 + 4) = 1;
        }
        pppppppiVar14 = (int *******)*piVar16;
        pppppppiVar11 = (int *******)piVar16[1];
        ppppppiVar7 = (int ******)piVar16[2];
        ppppppiVar19 = (int ******)piVar16[3];
        *piVar16 = (int)pppppppiVar14 + 1;
        piVar16[1] = (int)pppppppiVar11 + (uint)((int *******)0xfffffffe < pppppppiVar14);
        local_60 = (int *******)&DAT_0056d238;
        pppppppiStack_5c = (int *******)0x0;
        pppppppiStack_58 = (int *******)0x0;
        pppppppiStack_54 = (int *******)0x0;
      }
      else {
        local_60 = local_1e4;
        pppppppiStack_5c = local_1e8;
        pppppppiStack_58 = local_b0;
        pppppppiStack_54 = local_ac;
        pppppppiVar14 = local_a8;
        pppppppiVar11 = pppppppiStack_a4;
        ppppppiVar7 = ppppppiStack_a0;
        ppppppiVar19 = ppppppiStack_9c;
      }
      param_1[0x27] = (int ******)local_220;
      param_1[0x25] = (int ******)local_1cc;
      param_1[0x2a] = (int ******)local_214;
      param_1[0x29] = (int ******)local_21c;
      param_1[0x28] = (int ******)pppppppiVar13;
      param_1[0x26] = (int ******)local_218;
      param_1[0x22] = (int ******)local_98;
      param_1[0x23] = (int ******)local_94;
      param_1[0x24] = (int ******)local_90;
      *param_1 = (int ******)local_60;
      param_1[1] = (int ******)pppppppiStack_5c;
      param_1[2] = (int ******)pppppppiStack_58;
      param_1[3] = (int ******)pppppppiStack_54;
      *pppppppiVar8 = (int ******)pppppppiVar14;
      param_1[5] = (int ******)pppppppiVar11;
      param_1[6] = ppppppiVar7;
      param_1[7] = ppppppiVar19;
      param_1[8] = (int ******)&DAT_0056d238;
      param_1[9] = (int ******)0x0;
      param_1[10] = (int ******)0x0;
      param_1[0xb] = (int ******)0x0;
      *(undefined1 *)(param_1 + 0x2e) = 1;
      param_1[0x2d] = (int ******)0x0;
      param_1[0x2b] = (int ******)0x0;
      param_1[0xe] = (int ******)0x80000001;
      param_1[0x2c] = (int ******)0x4;
      FUN_01bed4e2(auStack_188,param_1,0xc0);
      ppppppiVar7 = (int ******)FUN_012666d8(&local_1b0);
      if (ppppppiVar7 != (int ******)0x0) {
        *param_1 = ppppppiVar7;
        param_1[0x2b] = (int ******)0x80000000;
        FUN_00db1274(auStack_188);
      }
      goto LAB_00dda238;
    }
    local_190 = local_190 + 1;
    local_38 = pppppppiVar14;
    local_34 = pppppppiVar13;
    local_30 = unaff_r11;
    local_2c = unaff_r10;
    if (local_1b0 != (int *******)0x80000015) {
      FUN_00db3970(&local_1b0);
    }
    local_1b0 = local_50;
    pppppppiStack_1ac = local_4c;
    pppppppiStack_1a8 = local_48;
    uStack_1a4 = uStack_44;
    uVar3 = 0x15;
    if ((int)pppppppiVar14 < 0) {
      uVar3 = (uint)pppppppiVar14 ^ 0x80000000;
    }
    local_98 = pppppppiVar14;
    local_94 = pppppppiVar13;
    local_90 = unaff_r11;
    local_8c = unaff_r10;
    switch(uVar3) {
    case 1:
      local_3f = SUB41(pppppppiVar13,0);
      if (3 < ((uint)pppppppiVar13 & 0xff)) {
        local_3f = 4;
      }
      goto LAB_00dd98dc;
    default:
      local_80 = pppppppiVar14;
      local_7c = pppppppiVar13;
      local_78 = unaff_r11;
      local_74 = unaff_r10;
      local_3c = (int *******)FUN_012664e4(&local_80,&uStack_25,&DAT_01c1609c);
      local_40 = '\x01';
      goto LAB_00dd9908;
    case 4:
      pppppppiVar6 = unaff_r11;
      if (&DAT_00000003 < unaff_r11) {
        pppppppiVar6 = (int *******)&SUB_00000004;
      }
      local_3f = SUB41(pppppppiVar6,0);
      if (unaff_r10 != (int *******)0x0) {
        local_3f = 4;
      }
LAB_00dd98dc:
      local_40 = '\0';
      break;
    case 0xc:
      FUN_00db1308(&local_40,unaff_r11,unaff_r10);
      goto LAB_00dd98fc;
    case 0xd:
      FUN_00db1308(&local_40,pppppppiVar13,unaff_r11);
      break;
    case 0xe:
      FUN_00db1410(&local_40,unaff_r11,unaff_r10);
LAB_00dd98fc:
      FUN_019bb7e0(pppppppiVar13,unaff_r11);
      goto LAB_00dd9908;
    case 0xf:
      FUN_00db1410(&local_40,pppppppiVar13,unaff_r11);
    }
    FUN_00db3970(&local_98);
LAB_00dd9908:
    pppppppiVar6 = local_1b0;
    if (local_40 != '\0') {
      pppppppiVar8 = local_3c;
LAB_00dd9cb4:
      local_bc = local_204;
      local_c0 = local_200;
      local_b4 = local_1e8;
      local_b8 = local_1e4;
      local_c4 = local_1fc;
      local_c8 = local_1e0;
LAB_00dd9cb8:
LAB_00dd9cbc:
      *param_1 = (int ******)pppppppiVar8;
      param_1[0x2b] = (int ******)0x80000000;
      if (local_1d4 != (int *******)0x0) {
LAB_00dd9cd4:
        FUN_006b3bf4(&local_b8);
      }
      goto LAB_00dd9cdc;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(local_3f) {
    case 0:
      if (local_1c8 != (int *******)&DAT_80000000) {
        local_c0 = local_200;
        local_bc = local_204;
        local_b4 = local_1e8;
        local_b8 = local_1e4;
        local_c4 = local_1fc;
        local_7c = (int *******)&DAT_0132b6a0;
        local_80 = (int *******)&local_98;
        local_c8 = local_1e0;
        local_94 = (int *******)&DAT_00000005;
        local_98 = (int *******)&DAT_0050c2f4;
        pppppppiVar8 = (int *******)FUN_019676ac(&DAT_005ab34f,&local_80);
LAB_00dda474:
        goto LAB_00dd9cb8;
      }
      FUN_0126662c(&local_80,&local_1b0);
      local_1c8 = local_80;
      if (local_80 == (int *******)&DAT_80000000) {
        local_1c8 = (int *******)&DAT_80000000;
        pppppppiVar8 = local_7c;
        goto LAB_00dd9cb4;
      }
      local_214 = local_78;
      local_21c = local_7c;
      break;
    case 1:
      if (local_1cc != (int *******)&DAT_80000001) {
        local_c0 = local_200;
        local_bc = local_204;
        local_b4 = local_1e8;
        local_b8 = local_1e4;
        local_c4 = local_1fc;
        local_7c = (int *******)&DAT_0132b6a0;
        local_80 = (int *******)&local_98;
        local_c8 = local_1e0;
        local_94 = (int *******)&DAT_0000000d;
        local_98 = (int *******)0x3efcc1;
        pppppppiVar8 = (int *******)FUN_019676ac(&DAT_005ab34f,&local_80);
        goto LAB_00dda474;
      }
      FUN_014d5fb0(&local_80,&local_1b0);
      local_1cc = local_80;
      if (local_80 == (int *******)&DAT_80000001) {
        local_1cc = (int *******)&DAT_80000001;
        local_c0 = local_200;
        local_bc = local_204;
        local_b4 = local_1e8;
        local_b8 = local_1e4;
        local_c4 = local_1fc;
        local_c8 = local_1e0;
        pppppppiVar8 = local_7c;
        goto LAB_00dd9cb8;
      }
      local_220 = local_78;
      local_218 = local_7c;
      pppppppiVar13 = (int *******)&DAT_80000001;
      pppppppiVar11 = pppppppiVar14;
      break;
    case 2:
      if (bVar1) {
        local_c0 = local_200;
        local_bc = local_204;
        local_b4 = local_1e8;
        local_b8 = local_1e4;
        local_c4 = local_1fc;
        local_7c = (int *******)&DAT_0132b6a0;
        local_80 = (int *******)&local_98;
        local_c8 = local_1e0;
        local_94 = (int *******)&DAT_00000009;
        local_98 = (int *******)0x3f2abd;
        pppppppiVar8 = (int *******)FUN_019676ac(&DAT_005ab34f,&local_80);
        goto LAB_00dda474;
      }
      local_1b0 = (int *******)0x80000015;
      if (pppppppiVar6 == (int *******)0x80000015) {
LAB_00dda488:
        local_1b0 = (int *******)0x80000015;
        local_c0 = local_200;
        local_bc = local_204;
        local_b4 = local_1e8;
        local_b8 = local_1e4;
        local_c4 = local_1fc;
        local_c8 = local_1e0;
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                     ,0x2c,&DAT_01cfa02c);
      }
      uVar15 = puVar5[1];
      uVar17 = puVar5[2];
      *puVar12 = *puVar5;
      puVar12[1] = uVar15;
      puVar12[2] = uVar17;
      local_80 = pppppppiVar6;
      bVar1 = false;
      FUN_00f1ea2c(&local_98,&local_80);
      if (local_98 == (int *******)0x0) {
        local_1fc = local_94;
        bVar1 = true;
        local_200 = local_90;
        local_204 = local_8c;
        local_1e0 = 1;
        pppppppiVar11 = pppppppiVar14;
        break;
      }
      local_c0 = local_200;
      local_bc = local_204;
      local_b4 = local_1e8;
      local_b8 = local_1e4;
      local_c4 = local_1fc;
      local_c8 = local_1e0;
      pppppppiVar8 = local_94;
      goto LAB_00dd9cbc;
    case 3:
      if (local_1d4 != (int *******)0x0) {
        local_c0 = local_200;
        local_bc = local_204;
        local_b4 = local_1e8;
        local_b8 = local_1e4;
        local_c4 = local_1fc;
        local_7c = (int *******)&DAT_0132b6a0;
        local_80 = (int *******)&local_98;
        local_c8 = local_1e0;
        local_94 = (int *******)&DAT_0000000a;
        local_98 = (int *******)&DAT_00520f23;
        ppppppiVar7 = (int ******)FUN_019676ac(&DAT_005ab34f,&local_80);
        param_1[0x2b] = (int ******)0x80000000;
        *param_1 = ppppppiVar7;
        goto LAB_00dd9cd4;
      }
      local_1b0 = (int *******)0x80000015;
      if (pppppppiVar6 == (int *******)0x80000015) goto LAB_00dda488;
      uVar15 = puVar5[1];
      uVar17 = puVar5[2];
      *puVar4 = *puVar5;
      puVar4[1] = uVar15;
      puVar4[2] = uVar17;
      local_38 = pppppppiVar6;
      FUN_011e4e68(&local_80,&local_38);
      if (local_80 != (int *******)0x0) {
        unaff_r10 = (int *******)&local_98;
        local_98 = local_78;
        local_94 = local_74;
        local_90 = local_70;
        local_8c = pppppppiStack_6c;
        local_b0 = local_78;
        local_ac = local_74;
        local_a8 = local_70;
        pppppppiStack_a4 = pppppppiStack_6c;
        ppppppiStack_a0 = ppppppiStack_68;
        ppppppiStack_9c = ppppppiStack_64;
        local_1e8 = local_7c;
        local_1d4 = local_80;
        local_1e4 = local_80;
        pppppppiVar13 = local_70;
        pppppppiVar11 = pppppppiStack_6c;
        break;
      }
      local_c0 = local_200;
      local_bc = local_204;
      local_b4 = local_1e8;
      local_b8 = local_1e4;
      local_c4 = local_1fc;
      local_c8 = local_1e0;
      param_1[0x2b] = (int ******)0x80000000;
      *param_1 = (int ******)local_7c;
LAB_00dd9cdc:
      if (bVar1) {
        FUN_007028c4(&local_c4);
      }
      if (-0x7fffffff < (int)local_1cc) {
        FUN_019bb7e0(local_1cc,local_218);
      }
      if (local_1c8 != (int *******)&DAT_80000000) {
        FUN_019bb7e0(local_1c8,local_21c);
      }
      FUN_00db38c0(&local_1b0);
      goto LAB_00dda238;
    case 4:
      FUN_012665cc(&local_1b0);
      pppppppiVar11 = pppppppiVar14;
    }
    pppppppiVar14 = pppppppiVar11;
    goto LAB_00dd9780;
  }
  local_1bc = param_2[1];
  local_1c4 = (undefined4 *)param_2[2];
  local_1b8 = local_1c4 + param_2[3] * 4;
  local_1b4 = 0;
  local_1c0 = local_1c4;
  FUN_01266770(&local_80,&local_1c4);
  if (local_80 == (int *******)&DAT_80000001) {
    param_1[0x2b] = (int ******)0x80000000;
    *param_1 = (int ******)local_7c;
  }
  else {
    pppppppiVar11 = local_7c;
    pppppppiVar13 = local_78;
    pppppppiVar14 = local_80;
    if (local_80 == (int *******)&DAT_80000000) {
      pppppppiVar11 = (int *******)&DAT_00000001;
      pppppppiVar13 = (int *******)0x0;
      pppppppiVar14 = (int *******)0x0;
    }
    FUN_014d6134(&local_80,&local_1c4);
    pppppppiVar2 = local_78;
    pppppppiVar6 = local_7c;
    puVar4 = local_1b8;
    if (local_80 == (int *******)0x80000002) {
      param_1[0x2b] = (int ******)0x80000000;
      *param_1 = (int ******)local_7c;
    }
    else {
      pppppppiVar9 = local_80;
      if (local_80 == (int *******)&DAT_80000001) {
        pppppppiVar9 = (int *******)&DAT_80000000;
      }
      if (local_1c0 == local_1b8) {
        puVar5 = local_1c0;
LAB_00dd9ec4:
        local_1c0 = puVar5;
        local_50 = (int *******)0x0;
        local_48 = (int *******)0x0;
        puVar5 = local_1c0;
LAB_00dd9ecc:
        pppppppiVar10 = (int *******)0x0;
        local_30 = (int *******)0x0;
        local_34 = (int *******)&SUB_00000004;
        local_38 = (int *******)0x0;
        if (puVar5 == puVar4) {
LAB_00dd9f00:
          uVar21 = thunk_FUN_01bee35a(pppppppiVar10,0x2c0);
          piVar16 = (int *)((int)uVar21 + (int)((ulonglong)uVar21 >> 0x20));
          if ((char)piVar16[4] == '\0') {
            FUN_019ae6ac(&local_80);
            *piVar16 = (int)local_80;
            piVar16[1] = (int)local_7c;
            piVar16[2] = (int)local_78;
            piVar16[3] = (int)local_74;
            *(undefined1 *)(piVar16 + 4) = 1;
          }
          local_70 = (int *******)*piVar16;
          pppppppiStack_6c = (int *******)piVar16[1];
          ppppppiStack_68 = (int ******)piVar16[2];
          ppppppiStack_64 = (int ******)piVar16[3];
          *piVar16 = (int)local_70 + 1;
          piVar16[1] = (int)pppppppiStack_6c + (uint)((int *******)0xfffffffe < local_70);
          local_98 = (int *******)0x0;
          local_94 = (int *******)0x0;
          local_90 = (int *******)0x0;
          pppppppiVar10 = (int *******)&DAT_0056d238;
        }
        else {
          local_1c0 = puVar5 + 4;
          pppppppiVar10 = (int *******)*puVar5;
          if (pppppppiVar10 == (int *******)0x80000015) goto LAB_00dd9f00;
          uVar15 = puVar5[2];
          uVar17 = puVar5[3];
          puVar4 = (undefined4 *)((uint)&local_b8 | 4);
          *puVar4 = puVar5[1];
          puVar4[1] = uVar15;
          puVar4[2] = uVar17;
          local_1b4 = local_1b4 + 1;
          local_b8 = pppppppiVar10;
          FUN_011e4e68(&local_80);
          if (local_80 == (int *******)0x0) {
            param_1[0x2b] = (int ******)0x80000000;
            *param_1 = (int ******)local_7c;
            FUN_01aae24c(&DAT_01d30848);
            FUN_006775f0(&local_38);
            FUN_007028c4(&local_50);
            goto LAB_00dda204;
          }
          puVar4 = (undefined4 *)((uint)&local_80 | 4);
          local_98 = (int *******)*puVar4;
          local_94 = (int *******)puVar4[1];
          local_90 = (int *******)puVar4[2];
          pppppppiVar10 = local_80;
        }
        param_1[0x25] = (int ******)pppppppiVar9;
        param_1[0x28] = (int ******)pppppppiVar14;
        param_1[0x29] = (int ******)pppppppiVar11;
        param_1[0x26] = (int ******)pppppppiVar6;
        param_1[0x27] = (int ******)pppppppiVar2;
        param_1[0x2a] = (int ******)pppppppiVar13;
        param_1[0x22] = (int ******)local_50;
        param_1[0x23] = (int ******)local_4c;
        param_1[0x24] = (int ******)local_48;
        param_1[0x2b] = (int ******)local_38;
        param_1[0x2c] = (int ******)local_34;
        param_1[0x2d] = (int ******)local_30;
        param_1[8] = (int ******)&DAT_0056d238;
        param_1[9] = (int ******)0x0;
        param_1[10] = (int ******)0x0;
        param_1[0xb] = (int ******)0x0;
        *param_1 = (int ******)pppppppiVar10;
        param_1[1] = (int ******)local_98;
        param_1[2] = (int ******)local_94;
        param_1[3] = (int ******)local_90;
        param_1[5] = (int ******)pppppppiStack_6c;
        param_1[6] = ppppppiStack_68;
        param_1[7] = ppppppiStack_64;
        *pppppppiVar8 = (int ******)local_70;
        *(undefined1 *)(param_1 + 0x2e) = 1;
        param_1[0xe] = (int ******)0x80000001;
        if (param_1[0x2b] != (int ******)0x80000000) {
          FUN_01bed4e2(auStack_188,param_1,0xc0);
          ppppppiVar7 = (int ******)FUN_01266548(&local_1c4);
          if (ppppppiVar7 != (int ******)0x0) {
            *param_1 = ppppppiVar7;
            param_1[0x2b] = (int ******)0x80000000;
            FUN_00db1274(auStack_188);
          }
          goto LAB_00dda238;
        }
        goto LAB_00dda230;
      }
      puVar5 = local_1c0 + 4;
      pppppppiVar10 = (int *******)*local_1c0;
      if (pppppppiVar10 == (int *******)0x80000015) goto LAB_00dd9ec4;
      puVar12 = (undefined4 *)((uint)&local_80 | 4);
      uVar15 = local_1c0[2];
      uVar17 = local_1c0[3];
      *puVar12 = local_1c0[1];
      puVar12[1] = uVar15;
      puVar12[2] = uVar17;
      local_1b4 = local_1b4 + 1;
      local_1c0 = puVar5;
      local_80 = pppppppiVar10;
      FUN_00f1ea2c(&local_b8,&local_80);
      if (local_b8 == (int *******)0x0) {
        local_48 = local_ac;
        local_4c = local_b0;
        local_50 = local_b4;
        goto LAB_00dd9ecc;
      }
      param_1[0x2b] = (int ******)0x80000000;
      *param_1 = (int ******)local_b4;
LAB_00dda204:
      if (pppppppiVar9 != (int *******)&DAT_80000000) {
        FUN_019bb7e0(pppppppiVar9,pppppppiVar6);
      }
    }
    FUN_019bb7e0(pppppppiVar14,pppppppiVar11);
  }
LAB_00dda230:
  FUN_01264ff4(&local_1c4);
LAB_00dda238:
  if ((0x7fffffff < uVar18) && ((undefined1 *)(uVar18 & 0xfffffffe) != &DAT_80000014)) {
    FUN_00db3970(param_2);
  }
  return;
}

