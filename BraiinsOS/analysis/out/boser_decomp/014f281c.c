// FUN_014f281c @ 014f281c size=3068 calls_out=27 calls_in=1
// strings: bmc_version | description | description | assets | assets | bmc_version

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014f281c(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *******pppppppuVar2;
  undefined4 *******pppppppuVar3;
  char cVar4;
  undefined4 *******pppppppuVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined4 *******pppppppuVar9;
  int iVar10;
  uint uVar11;
  undefined4 *******extraout_r1;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *******pppppppuVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *******unaff_r7;
  uint uVar19;
  undefined4 *******pppppppuVar20;
  bool bVar21;
  ulonglong uVar22;
  uint local_32c;
  uint local_328;
  undefined4 *******local_324;
  undefined4 *******local_320;
  undefined4 *******local_30c;
  undefined4 *******local_308;
  undefined4 *******local_300;
  uint local_2fc;
  uint local_2f8;
  undefined4 *******local_2e0;
  uint *local_2dc;
  uint *local_2d8;
  uint local_2d4;
  uint *local_2d0;
  int local_2cc;
  undefined4 *******local_2c8;
  uint local_2c4;
  uint local_2c0;
  undefined4 local_2bc;
  undefined4 *******local_240;
  uint uStack_23c;
  undefined1 local_238;
  undefined4 *******local_230;
  undefined4 *******pppppppuStack_22c;
  uint uStack_228;
  uint uStack_224;
  undefined4 *local_220;
  undefined4 *local_21c;
  uint local_218;
  undefined4 *local_214;
  int local_210;
  undefined1 auStack_208 [176];
  undefined4 *******local_158;
  uint uStack_154;
  undefined1 local_150;
  undefined4 *******local_148;
  undefined4 *******local_144;
  undefined1 auStack_140 [136];
  undefined4 local_b8;
  undefined4 *******local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined1 auStack_29 [5];
  
  uVar11 = *param_2;
  uVar8 = 0x15;
  if ((int)uVar11 < 0) {
    uVar8 = uVar11 ^ 0x80000000;
  }
  if (uVar8 != 0x14) {
    if (uVar8 != 0x15) {
      uVar17 = FUN_014c8278(param_2,auStack_29,&DAT_01cf9cf4);
      *param_1 = 4;
      param_1[1] = uVar17;
      return;
    }
    local_230 = (undefined4 *******)0x80000015;
    puVar12 = (undefined4 *)((uint)&local_2c8 | 4);
    puVar13 = (undefined4 *)((uint)&local_230 | 4);
    local_220 = (undefined4 *)param_2[1];
    local_214 = local_220 + param_2[2] * 8;
    local_2fc = 2;
    local_300 = (undefined4 *******)0x0;
    local_308 = (undefined4 *******)&SUB_00000004;
    pppppppuVar16 = (undefined4 *******)&DAT_80000000;
    local_210 = 0;
    local_2e0 = (undefined4 *******)&SUB_00000004;
    local_2f8 = 2;
    local_21c = local_220;
    local_218 = uVar11;
LAB_014f28e8:
    puVar1 = local_21c;
    bVar21 = local_21c == local_214;
    if (!bVar21) {
      unaff_r7 = (undefined4 *******)*local_21c;
      local_21c = local_21c + 8;
    }
    if (bVar21 || unaff_r7 == (undefined4 *******)0x80000015) goto switchD_014f2ab4_caseD_5;
    local_210 = local_210 + 1;
    uVar17 = puVar1[2];
    uVar18 = puVar1[3];
    *puVar12 = puVar1[1];
    puVar12[1] = uVar17;
    puVar12[2] = uVar18;
    local_b8 = (undefined4 *******)puVar1[4];
    local_b4 = (undefined4 *******)puVar1[5];
    local_b0 = puVar1[6];
    local_ac = puVar1[7];
    local_2c8 = unaff_r7;
    if (local_230 != (undefined4 *******)0x80000015) {
      FUN_014c81b0(&local_230);
    }
    uVar14 = local_2c0;
    uVar8 = local_2c4;
    uVar19 = 0x15;
    if ((int)unaff_r7 < 0) {
      uVar19 = (uint)unaff_r7 ^ 0x80000000;
    }
    local_230 = local_b8;
    pppppppuStack_22c = local_b4;
    uStack_228 = local_b0;
    uStack_224 = local_ac;
    uVar17 = local_2bc;
    switch(uVar19) {
    case 1:
      uVar14 = local_2c4 & 0xff;
      uVar17 = 0;
    case 4:
      FUN_014e87cc(&local_b8,&switchD_014f2984::switchdataD_014f2988,uVar14,uVar17);
      goto LAB_014f2a6c;
    default:
      local_b4 = (undefined4 *******)FUN_014c8278(&local_2c8,auStack_29,&DAT_01cf9e54);
      local_b8 = (undefined4 *******)CONCAT31(local_b8._1_3_,1);
      goto LAB_014f2a84;
    case 0xc:
      FUN_014f3ae4(&local_b8,local_2c0,local_2bc);
      goto LAB_014f2a54;
    case 0xd:
      FUN_014f3ae4(&local_b8,local_2c4,local_2c0);
      break;
    case 0xe:
      FUN_014f0b34(&local_b8,local_2c0,local_2bc);
LAB_014f2a54:
      FUN_019bb7e0(uVar8,uVar14);
LAB_014f2a6c:
      if ((uVar19 | 2) != 0xe) break;
      goto LAB_014f2a84;
    case 0xf:
      FUN_014f0b34(&local_b8,local_2c4,local_2c0);
    }
    FUN_014c81b0(&local_2c8);
LAB_014f2a84:
    pppppppuVar9 = local_230;
    if ((char)local_b8 != '\0') {
      local_144 = local_30c;
      local_148 = local_308;
      local_300 = local_b4;
      goto LAB_014f2e98;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_b8 >> 8 & 0xff) {
    case 0:
      if (local_2f8 != 2) {
        local_144 = local_30c;
        local_b4 = (undefined4 *******)&DAT_0132b6a0;
        local_b8 = &local_2c8;
        local_148 = local_308;
        local_2c4 = 0xb;
        local_2c8 = (undefined4 *******)0x4a5608;
        pppppppuVar9 = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_b8);
        break;
      }
      FUN_014cabf4(&local_b8,&local_230);
      local_2f8 = local_ac >> 8 & 0xff;
      if (local_2f8 == 2) {
        local_300 = local_b8;
LAB_014f3214:
        local_144 = local_30c;
        local_148 = local_308;
        goto LAB_014f2e98;
      }
      local_324 = local_b8;
      local_158 = local_b4;
      uStack_154 = local_b0;
      local_150 = (undefined1)local_ac;
      local_328 = local_ac >> 0x10;
LAB_014f2c34:
      unaff_r7 = local_2e0;
      goto LAB_014f28e8;
    case 1:
      if (local_2fc == 2) {
        FUN_014cac54(&local_b8,&local_230);
        if ((char)local_b8 != '\0') {
          local_300 = local_b4;
          goto LAB_014f3214;
        }
        local_2fc = (uint)local_b8 >> 8 & 0xff;
        goto LAB_014f2c34;
      }
      local_144 = local_30c;
      local_b4 = (undefined4 *******)&DAT_0132b6a0;
      local_b8 = &local_2c8;
      local_148 = local_308;
      local_2c4 = 8;
      local_2c8 = (undefined4 *******)&DAT_00570d28;
      pppppppuVar9 = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_b8);
      break;
    case 2:
      if (local_300 != (undefined4 *******)0x0) {
        local_144 = local_30c;
        local_b4 = (undefined4 *******)&DAT_0132b6a0;
        local_b8 = &local_2c8;
        local_148 = local_308;
        local_2c4 = 0xc;
        local_2c8 = (undefined4 *******)0x4a5613;
        pppppppuVar9 = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_b8);
        break;
      }
      uVar22 = FUN_014cacb4(&local_230);
      local_300 = (undefined4 *******)(uVar22 >> 0x20);
      if ((uVar22 & 1) == 0) goto LAB_014f2c34;
      local_144 = local_30c;
      local_148 = local_308;
LAB_014f2e98:
      *param_1 = 4;
      param_1[1] = local_300;
      if ((undefined1 *)0x1 < (undefined1 *)((int)local_2e0 + -3)) {
        FUN_014c9d44(&local_148);
      }
LAB_014f2eb8:
      if (pppppppuVar16 != (undefined4 *******)&DAT_80000000) {
LAB_014f2ec0:
        FUN_019bb7e0(pppppppuVar16,local_320);
      }
      FUN_014c9c60(&local_230);
      goto LAB_014f2ed4;
    case 3:
      if (pppppppuVar16 == (undefined4 *******)&DAT_80000000) {
        FUN_014cad14(&local_b8,&local_230);
        if (local_b8 != (undefined4 *******)&DAT_80000000) {
          local_32c = local_b0;
          local_320 = local_b4;
          pppppppuVar16 = local_b8;
          goto LAB_014f2c34;
        }
        pppppppuVar16 = (undefined4 *******)&DAT_80000000;
        local_144 = local_30c;
        local_148 = local_308;
        local_300 = local_b4;
        goto LAB_014f2e98;
      }
      local_144 = local_30c;
      local_b4 = (undefined4 *******)&DAT_0132b6a0;
      local_b8 = &local_2c8;
      local_148 = local_308;
      local_2c4 = 0xb;
      local_2c8 = (undefined4 *******)0x520c30;
      pppppppuVar9 = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_b8);
      break;
    case 4:
      if (local_2e0 == (undefined4 *******)&SUB_00000004) {
        local_230 = (undefined4 *******)0x80000015;
        if (pppppppuVar9 == (undefined4 *******)0x80000015) {
          local_144 = local_30c;
          local_148 = local_308;
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                       ,0x2c,&DAT_01cfa02c);
        }
        uVar17 = puVar13[1];
        uVar18 = puVar13[2];
        *puVar12 = *puVar13;
        puVar12[1] = uVar17;
        puVar12[2] = uVar18;
        local_2c8 = pppppppuVar9;
        FUN_014f218c(&local_b8,&local_2c8);
        local_2e0 = local_b8;
        local_30c = local_b4;
        if (local_b8 != (undefined4 *******)&SUB_00000004) {
          FUN_01bed4e2(auStack_140,&local_b0,0x84);
          local_308 = local_2e0;
          goto LAB_014f2c34;
        }
        local_148 = local_308;
        *param_1 = 4;
        param_1[1] = local_b4;
        goto LAB_014f2eb8;
      }
      local_144 = local_30c;
      local_b4 = (undefined4 *******)&DAT_0132b6a0;
      local_b8 = &local_2c8;
      local_148 = local_308;
      local_2c4 = 6;
      local_2c8 = (undefined4 *******)0x4a561f;
      pppppppuVar9 = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_b8);
      break;
    case 5:
switchD_014f2ab4_caseD_5:
      local_144 = local_30c;
      local_148 = local_308;
      if (local_2f8 == 2) {
        FUN_014f8be0(&local_b8,"bmc_version");
        local_2f8._0_1_ = (undefined1)(local_ac >> 8);
        pppppppuVar9 = local_b8;
        if ((local_ac >> 8 & 0xff) == 2) break;
        local_324 = local_b8;
        local_240 = local_b4;
        uStack_23c = local_b0;
        local_328._0_2_ = (undefined2)(local_ac >> 0x10);
        local_238 = (undefined1)local_ac;
      }
      else {
        local_240 = local_158;
        uStack_23c = uStack_154;
        local_238 = local_150;
      }
      if (local_2fc == 2) {
        local_b4 = (undefined4 *******)&DAT_0132b6a0;
        local_b8 = &local_2c8;
        local_2c4 = 8;
        local_2c8 = (undefined4 *******)&DAT_00570d28;
        pppppppuVar9 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_b8);
      }
      else {
        if (local_300 != (undefined4 *******)0x0) {
          if (pppppppuVar16 == (undefined4 *******)&DAT_80000000) {
            local_b4 = (undefined4 *******)&DAT_0132b6a0;
            local_b8 = &local_2c8;
            local_2c4 = 0xb;
            local_2c8 = (undefined4 *******)0x520c30;
            local_300 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_b8);
            pppppppuVar16 = (undefined4 *******)&DAT_80000000;
            goto LAB_014f2e98;
          }
          if (local_2e0 == (undefined4 *******)&SUB_00000004) {
            local_b4 = (undefined4 *******)&DAT_0132b6a0;
            local_b8 = &local_2c8;
            local_2c4 = 6;
            local_2c8 = (undefined4 *******)0x4a561f;
            uVar17 = FUN_019676ac(&DAT_0057cd64,&local_b8);
            *param_1 = 4;
            param_1[1] = uVar17;
            goto LAB_014f2ec0;
          }
          FUN_01bed4e2(param_1 + 2,auStack_140,0x84);
          param_1[0x25] = local_32c;
          param_1[0x24] = local_320;
          param_1[0x23] = pppppppuVar16;
          param_1[0x27] = local_240;
          param_1[0x28] = uStack_23c;
          *(byte *)(param_1 + 0x2b) = (byte)local_2fc & 1;
          param_1[0x2a] = local_300;
          *(undefined2 *)((int)param_1 + 0xa6) = (undefined2)local_328;
          *(undefined1 *)(param_1 + 0x29) = local_238;
          param_1[0x26] = local_324;
          *param_1 = local_2e0;
          param_1[1] = local_30c;
          *(undefined1 *)((int)param_1 + 0xa5) = (undefined1)local_2f8;
          FUN_01bed4e2(auStack_208,param_1,0xb0);
          iVar10 = FUN_014c9cac(&local_230);
          goto LAB_014f3088;
        }
        FUN_014dbcc0();
        pppppppuVar9 = extraout_r1;
      }
    }
    local_300 = pppppppuVar9;
    goto LAB_014f2e98;
  }
  local_2d4 = param_2[1];
  local_2dc = (uint *)param_2[2];
  local_2d0 = local_2dc + param_2[3] * 4;
  local_2cc = 0;
  local_2d8 = local_2dc;
  FUN_014cad74(&local_b8,&local_2dc);
  pppppppuVar16 = local_b8;
  cVar6 = local_ac._1_1_;
  pppppppuVar9 = local_b8;
  if (local_ac._1_1_ == '\x03') {
LAB_014f2e74:
    *param_1 = 4;
    param_1[1] = pppppppuVar9;
  }
  else {
    local_158 = local_b4;
    uStack_154 = local_b0;
    uVar7 = local_ac._2_2_;
    local_150 = (undefined1)local_ac;
    if (local_ac._1_1_ == '\x02') {
      uVar17 = 0;
LAB_014f3434:
      pppppppuVar9 = (undefined4 *******)FUN_014dee0c(uVar17,&DAT_01cf9fd4,&DAT_01d064b8);
      goto LAB_014f2e74;
    }
    FUN_014cae14(&local_b8,&local_2dc);
    if ((char)local_b8 != '\0') {
      pppppppuVar9 = local_b4;
      goto LAB_014f2e74;
    }
    cVar4 = local_b8._1_1_;
    if (local_b8._1_1_ == '\x02') {
      uVar17 = 1;
      goto LAB_014f3434;
    }
    uVar22 = FUN_014caeb4(&local_2dc);
    pppppppuVar9 = (undefined4 *******)(uVar22 >> 0x20);
    if ((uVar22 & 1) != 0) goto LAB_014f2e74;
    if (pppppppuVar9 == (undefined4 *******)0x0) {
      uVar17 = 2;
      goto LAB_014f3434;
    }
    FUN_014ca8dc(&local_b8,&local_2dc);
    uVar8 = local_b0;
    pppppppuVar5 = local_b4;
    pppppppuVar2 = local_b8;
    if (local_b8 == (undefined4 *******)&DAT_80000001) {
      pppppppuVar16 = local_b4;
LAB_014f2f20:
      *param_1 = 4;
      param_1[1] = pppppppuVar16;
    }
    else {
      if (local_b8 == (undefined4 *******)&DAT_80000000) {
        pppppppuVar16 = (undefined4 *******)FUN_014dee0c(3,&DAT_01cf9fd4,&DAT_01d064b8);
        goto LAB_014f2f20;
      }
      puVar15 = local_2d8;
      if (local_2d8 == local_2d0) {
LAB_014f2fb8:
        local_2d8 = puVar15;
        pppppppuVar20 = (undefined4 *******)FUN_014dee0c(4,&DAT_01cf9fd4,&DAT_01d064b8);
      }
      else {
        pppppppuVar20 = (undefined4 *******)*local_2d8;
        puVar15 = local_2d8 + 4;
        if (pppppppuVar20 == (undefined4 *******)0x80000015) goto LAB_014f2fb8;
        puVar15 = (uint *)((uint)&local_240 | 4);
        uVar14 = local_2d8[2];
        uVar19 = local_2d8[3];
        *puVar15 = local_2d8[1];
        puVar15[1] = uVar14;
        puVar15[2] = uVar19;
        local_2cc = local_2cc + 1;
        local_2d8 = local_2d8 + 4;
        local_240 = pppppppuVar20;
        FUN_014f218c(&local_b8,&local_240);
        pppppppuVar20 = local_b4;
        pppppppuVar3 = local_b8;
        if (local_b8 != (undefined4 *******)&SUB_00000004) {
          FUN_01bed4e2(&local_2c8,&local_b0,0x84);
          FUN_01bed4e2(&local_148,&local_2c8,0x84);
          FUN_01bed4e2(param_1 + 2,&local_148,0x84);
          param_1[0x25] = uVar8;
          param_1[0x24] = pppppppuVar5;
          param_1[0x23] = pppppppuVar2;
          param_1[0x27] = local_158;
          param_1[0x28] = uStack_154;
          *(undefined1 *)(param_1 + 0x29) = local_150;
          *param_1 = pppppppuVar3;
          param_1[1] = pppppppuVar20;
          *(char *)(param_1 + 0x2b) = cVar4;
          param_1[0x2a] = pppppppuVar9;
          *(undefined2 *)((int)param_1 + 0xa6) = uVar7;
          *(char *)((int)param_1 + 0xa5) = cVar6;
          param_1[0x26] = pppppppuVar16;
          FUN_01bed4e2(auStack_208,param_1,0xb0);
          iVar10 = FUN_014ca838(&local_2dc);
LAB_014f3088:
          if (iVar10 != 0) {
            *param_1 = 4;
            param_1[1] = iVar10;
            FUN_014c9bb4(auStack_208);
          }
          goto LAB_014f2ed4;
        }
      }
      *param_1 = 4;
      param_1[1] = pppppppuVar20;
      FUN_019bb7e0(pppppppuVar2,pppppppuVar5);
    }
  }
  FUN_014deb6c(&local_2dc);
LAB_014f2ed4:
  if ((uVar11 < 0x80000000) || ((undefined1 *)(uVar11 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_014c81b0(param_2);
  return;
}

