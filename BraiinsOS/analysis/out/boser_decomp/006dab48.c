// FUN_006dab48 @ 006dab48 size=7772 calls_out=51 calls_in=3
// strings: __typename | Unknown field '__typename' on type 'Subscription'. | __typename | ifdef |  Did you mean

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006dab48(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int *****pppppiVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int *****pppppiVar15;
  int iVar16;
  uint *puVar17;
  int *****pppppiVar18;
  undefined4 *puVar19;
  uint *puVar20;
  int ***pppiVar21;
  int ****ppppiVar22;
  int **ppiVar23;
  int iVar24;
  uint *puVar25;
  int iVar26;
  int ****ppppiVar27;
  int *piVar28;
  uint uVar29;
  int **ppiVar30;
  int *****pppppiVar31;
  int ***pppiVar32;
  undefined4 uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined8 uVar39;
  int *****local_170;
  int *****local_16c;
  int ****local_140;
  int local_13c;
  uint local_124;
  int *****local_114;
  int ****local_e4;
  int ****local_d4;
  int *****local_c4;
  int *****local_c0;
  int *****local_bc;
  int *****local_b8;
  undefined2 *local_b4;
  int *****local_b0;
  int **local_ac;
  uint local_a8;
  uint uStack_a4;
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *local_90;
  undefined1 *puStack_8c;
  uint uStack_88;
  uint uStack_84;
  int local_80;
  int ****local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  int ***local_68;
  undefined4 local_64;
  int *****local_60;
  int *****local_5c;
  int *****local_58;
  int ****local_54;
  uint local_50;
  int ****local_4c;
  uint local_48;
  int ****local_44;
  int *****local_40;
  int *****local_3c;
  int *****local_38;
  int *****local_34;
  int *****local_30;
  uint uStack_2c;
  undefined1 uStack_25;
  
  iVar16 = *(int *)(param_3 + 0x10);
  if (iVar16 == 0) {
    return;
  }
  uVar2 = CONCAT44(iVar16,&local_b8);
  uVar39 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar25 = (uint *)((int)uVar39 + (int)((ulonglong)uVar39 >> 0x20));
  if ((char)puVar25[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar25 = (uint)local_38;
    puVar25[1] = (uint)local_34;
    puVar25[2] = (uint)local_30;
    puVar25[3] = uStack_2c;
    *(undefined1 *)(puVar25 + 4) = 1;
  }
  local_b0 = (int *****)*puVar25;
  local_ac = (int **)puVar25[1];
  uStack_a4 = puVar25[3];
  puVar17 = puVar25 + 2;
  local_a8 = *puVar17;
  local_c0 = (int *****)&DAT_0056d238;
  *puVar25 = (uint)((int)local_b0 + 2);
  puVar25[1] = (uint)((int)local_ac + (uint)((int *****)0xfffffffd < local_b0));
  local_90 = (undefined1 *)((int)local_b0 + 1);
  local_b8 = (int *****)0x0;
  local_b4 = (undefined2 *)0x0;
  local_bc = (int *****)0x0;
  puStack_a0 = &DAT_0056d238;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  puStack_8c = (undefined1 *)((int)local_ac + (uint)((int *****)0xfffffffe < local_b0));
  uStack_88 = local_a8;
  uStack_84 = uStack_a4;
  local_80 = param_2;
  FUN_006beb64(&local_c0,0,&local_90,param_3);
  FUN_006bf3c8(&local_c0);
  iVar34 = *(int *)(param_3 + 0xc);
  iVar16 = iVar16 * 0x5c + iVar34;
  puVar4 = (uint *)((uint)&local_c0 | 4);
LAB_006dad00:
  pppppiVar18 = (int *****)&local_c0;
  uVar5 = *(int *)(iVar34 + 0x10) + 0x80000001U & *(int *)(iVar34 + 0x10) >> 0x1f;
  if (uVar5 != 0) {
    if (uVar5 != 1) {
      if (*(int *)(iVar34 + 0x4c) == 0) {
        FUN_006dcdc0(param_1,param_2,iVar34 + 0x14);
      }
      else {
        uVar11 = FUN_006c176c(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                              *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),
                              *(int *)(iVar34 + 0x4c) + 8,*(undefined4 *)(iVar34 + 0x50));
        iVar26 = *(int *)(param_2 + 0x14);
        if (iVar26 == *(int *)(param_2 + 0xc)) {
          FUN_007b4428(param_2 + 0xc);
        }
        *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar26 * 4) = uVar11;
        *(int *)(param_2 + 0x14) = iVar26 + 1;
        FUN_006dcdc0(param_1,param_2,iVar34 + 0x14);
        if (*(int *)(param_2 + 0x14) != 0) {
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
        }
      }
      goto LAB_006dc1a8;
    }
    FUN_006d13fc(param_2,*(undefined4 *)(iVar34 + 0x20),*(undefined4 *)(iVar34 + 0x24));
    iVar26 = param_1[0x96];
    if (iVar26 == param_1[0x94]) {
      FUN_00a20d54(param_1 + 0x94);
    }
    *(undefined1 *)(param_1[0x95] + iVar26) = 5;
    pppppiVar18 = (int *****)(iVar34 + 0x30);
    local_e4 = *pppppiVar18;
    param_1[0x96] = iVar26 + 1;
    pppiVar32 = *(int ****)(iVar34 + 0x34);
    if (param_1[3] != 0) {
      uVar6 = FUN_01a60560(param_1[4],param_1[5],param_1[6],param_1[7],local_e4 + 2,pppiVar32);
      uVar5 = uVar6 >> 0x19;
      iVar26 = *param_1;
      uVar29 = param_1[1];
      local_114 = (int *****)0x0;
      while( true ) {
        uVar6 = uVar29 & uVar6;
        uVar7 = *(uint *)(iVar26 + uVar6);
        uVar8 = uVar7 ^ uVar5 * 0x1010101;
        uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
        while (uVar8 != 0) {
          uVar35 = uVar8 - 1 & uVar8;
          uVar36 = uVar6 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                          (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                   uVar29;
          puVar19 = (undefined4 *)(iVar26 + -0x10 + uVar36 * -0x10);
          uVar8 = uVar35;
          if ((pppiVar32 == (int ***)puVar19[1]) &&
             (iVar9 = thunk_FUN_01bed842(local_e4 + 2,*puVar19,pppiVar32), iVar9 == 0)) {
            iVar26 = iVar26 + uVar36 * -0x10;
            local_74 = (int ****)(iVar26 + -8);
            if (*(int *)(param_2 + 0x14) != 0) {
              puVar20 = (uint *)(*(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14) * 4 + -4);
              if (puVar20 != (uint *)0x0) {
                uVar29 = *puVar20;
              }
              if (((puVar20 != (uint *)0x0 && uVar29 != 0) &&
                  (iVar26 = FUN_006c176c(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                                         *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),
                                         *(undefined4 *)(iVar26 + -8),*(undefined4 *)(iVar26 + -4)),
                  iVar26 != 0)) && (iVar26 = FUN_006a4e28(uVar29,iVar26), iVar26 == 0)) {
                ppppiVar27 = (int ****)thunk_FUN_01be5118(8);
                if (ppppiVar27 == (int ****)0x0) goto LAB_006dc980;
                pppiVar32 = *(int ****)(iVar34 + 0x18);
                *ppppiVar27 = *(int ****)(iVar34 + 0x14);
                ppppiVar27[1] = pppiVar32;
                local_48 = 1;
                local_50 = 1;
                iVar26 = *(int *)(uVar29 + 0x10);
                if (-1 < iVar26) {
                  iVar26 = 2;
                }
                local_5c = *(int ******)(uVar29 + *(int *)(iVar26 * 4 + 0x534d8c));
                local_60 = *(int ******)(uVar29 + *(int *)(iVar26 * 4 + 0x534d74));
                local_ac = (int **)&LAB_01963050;
                local_b0 = &local_74;
                local_b4 = &DAT_0132b6a0;
                local_b8 = (int *****)&local_60;
                local_bc = (int *****)&LAB_00701524;
                local_c0 = pppppiVar18;
                local_4c = ppppiVar27;
                FUN_00664898(&local_38,&DAT_00599da3,&local_c0);
                local_c0 = local_38;
                local_bc = local_34;
                local_b8 = local_30;
                FUN_006d6c3c(param_2,&local_50,&local_c0);
              }
            }
            pppiVar32 = *(int ****)(iVar34 + 0x34);
            local_e4 = *(int *****)(iVar34 + 0x30);
            goto LAB_006dbaa4;
          }
        }
        if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
        local_114 = (int *****)((int)local_114 + 4);
        uVar6 = uVar6 + (int)local_114;
      }
    }
LAB_006dbaa4:
    if (param_1[0x20] != 2) {
      local_c0 = (int *****)param_1[0x20];
      local_bc = (int *****)param_1[0x21];
      local_b8 = (int *****)param_1[0x22];
      puVar13 = (uint *)FUN_006c4c10(param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],&local_c0);
      pppppiVar3 = local_b8;
      pppppiVar31 = local_bc;
      pppppiVar15 = local_c0;
      uVar5 = param_1[9];
      iVar9 = param_1[8];
      iVar26 = 0;
      puVar20 = puVar13;
      do {
        uVar6 = uVar5 & (uint)puVar20;
        uVar8 = *(uint *)(iVar9 + uVar6);
        uVar29 = uVar8 ^ ((uint)puVar13 >> 0x19) * 0x1010101;
        for (uVar29 = ~uVar29 & 0x80808080 & uVar29 + 0xfefefeff; uVar29 != 0;
            uVar29 = uVar29 - 1 & uVar29) {
          puVar20 = (uint *)(iVar9 + (uVar6 + ((uint)LZCOUNT(uVar29 << 0x18 |
                                                             (uVar29 >> 8 & 0xff) << 0x10 |
                                                             (uVar29 >> 0x10 & 0xff) << 8 |
                                                             uVar29 >> 0x18) >> 3) & uVar5) * -0x30)
          ;
          if ((int *****)puVar20[-0xc] == pppppiVar15) {
            if (((uint)pppppiVar15 & 1) == 0) {
              uVar7 = puVar20[-0xb];
              if (pppppiVar31 == (int *****)0x0 || uVar7 == 0) {
                if (pppppiVar31 == (int *****)0x0 && uVar7 == 0) goto LAB_006dbdac;
              }
              else if ((int *****)puVar20[-10] == pppppiVar3) goto LAB_006dbbe4;
            }
            else if ((int *****)puVar20[-10] == pppppiVar3) {
              uVar7 = puVar20[-0xb];
LAB_006dbbe4:
              iVar14 = thunk_FUN_01bed842(uVar7,pppppiVar31,pppppiVar3);
              if (iVar14 == 0) goto LAB_006dbdac;
            }
          }
        }
        if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) goto LAB_006dbc68;
        iVar26 = iVar26 + 4;
        puVar20 = (uint *)(uVar6 + iVar26);
      } while( true );
    }
    goto LAB_006dbdc4;
  }
  iVar26 = *(int *)(iVar34 + 0x48);
  if (iVar26 == 10) {
    iVar10 = thunk_FUN_01bed842(*(int *)(iVar34 + 0x44) + 8,"__typename",10);
    iVar14 = *(int *)(param_2 + 0x10);
    iVar9 = *(int *)(param_2 + 0x14);
    if (iVar10 == 0) {
      if (iVar9 != 0) {
        piVar28 = (int *)(iVar14 + iVar9 * 4 + -4);
        iVar26 = 0;
        if (piVar28 != (int *)0x0) {
          iVar26 = *piVar28;
        }
        if (((piVar28 != (int *)0x0 && iVar26 != 0) && (*(int *)(iVar26 + 0x10) == -0x7fffffff)) &&
           ((*(byte *)(iVar26 + 0x9d) & 1) != 0)) {
          pppppiVar15 = (int *****)thunk_FUN_01be5118(8);
          if (pppppiVar15 == (int *****)0x0) goto LAB_006dc980;
          ppppiVar27 = *(int *****)(iVar34 + 0xc);
          *pppppiVar15 = *(int *****)(iVar34 + 8);
          pppppiVar15[1] = ppppiVar27;
          local_b8 = (int *****)&DAT_00000001;
          local_c0 = (int *****)&DAT_00000001;
          local_bc = pppppiVar15;
          FUN_006d6cb4(param_2,pppppiVar18,"Unknown field \"__typename\" on type \"Subscription\".",
                       0x32);
        }
      }
      goto LAB_006dc1a8;
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0x10);
    iVar9 = *(int *)(param_2 + 0x14);
  }
  ppppiVar27 = (int ****)0x0;
  if (iVar9 != 0) {
    piVar28 = (int *)(iVar14 + iVar9 * 4 + -4);
    iVar9 = 0;
    if (piVar28 != (int *)0x0) {
      iVar9 = *piVar28;
    }
    if (piVar28 != (int *)0x0 && iVar9 != 0) {
      uVar5 = 2;
      if ((int)*(uint *)(iVar9 + 0x10) < 0) {
        uVar5 = *(uint *)(iVar9 + 0x10) ^ 0x80000000;
      }
      if (uVar5 != 2) {
        if (uVar5 != 1) goto LAB_006db02c;
        iVar9 = iVar9 + 0x18;
      }
      iVar26 = FUN_006e05dc(iVar9,*(int *)(iVar34 + 0x44) + 8,iVar26);
      if (iVar26 != 0) {
        ppppiVar27 = (int ****)
                     FUN_006b1524(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                                  *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),
                                  *(undefined4 *)(iVar26 + 0x8c),*(undefined4 *)(iVar26 + 0x90));
      }
    }
  }
LAB_006db02c:
  iVar26 = *(int *)(param_2 + 0x14);
  if (iVar26 == *(int *)(param_2 + 0xc)) {
    FUN_007b4428(param_2 + 0xc);
  }
  *(int *****)(*(int *)(param_2 + 0x10) + iVar26 * 4) = ppppiVar27;
  *(int *)(param_2 + 0x14) = iVar26 + 1;
  FUN_006d13fc(param_2,*(undefined4 *)(iVar34 + 0x20),*(undefined4 *)(iVar34 + 0x24));
  iVar26 = param_1[0x96];
  if (iVar26 == param_1[0x94]) {
    FUN_00a20d54(param_1 + 0x94);
  }
  iVar9 = *(int *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  *(undefined1 *)(param_1[0x95] + iVar26) = 3;
  param_1[0x96] = iVar26 + 1;
  if (1 < uVar5) {
    piVar28 = (int *)(iVar9 + uVar5 * 4 + -8);
    if (piVar28 != (int *)0x0) {
      pppppiVar18 = (int *****)*piVar28;
    }
    if (piVar28 != (int *)0x0 && pppppiVar18 != (int *****)0x0) {
      uVar5 = 2;
      if ((int)pppppiVar18[4] < 0) {
        uVar5 = (uint)pppppiVar18[4] ^ 0x80000000;
      }
      pppppiVar15 = pppppiVar18;
      if (uVar5 != 2) {
        if (uVar5 != 1) goto LAB_006db0b0;
        pppppiVar15 = pppppiVar18 + 6;
      }
      uVar39 = FUN_006e05dc(pppppiVar15,*(int *)(iVar34 + 0x44) + 8,*(undefined4 *)(iVar34 + 0x48));
      iVar26 = (int)((ulonglong)uVar39 >> 0x20);
      iVar9 = (int)uVar39;
      if (iVar9 != 0) {
        iVar26 = *(int *)(iVar9 + 0x20);
      }
      if (iVar9 != 0 && iVar26 != 0) {
        iVar14 = *(int *)(iVar9 + 0x1c);
        iVar10 = iVar26 * 0x6c + iVar14;
        pppiVar32 = *(int ****)(iVar34 + 8);
        pppiVar21 = *(int ****)(iVar34 + 0xc);
        iVar26 = *(int *)(iVar34 + 0x14);
        iVar9 = *(int *)(iVar34 + 0x18);
        do {
          uVar11 = *(undefined4 *)(iVar14 + 0x1c);
          ppppiVar27 = *(int *****)(iVar14 + 0x20);
          iVar24 = FUN_00700b3c(uVar11,ppppiVar27,0x21);
          if (iVar24 == 0) {
            FUN_006a4c58(uVar11,ppppiVar27);
          }
          else if (*(int *)(iVar14 + 0x48) == -0x80000000) {
            iVar24 = iVar26;
            piVar28 = (int *)(iVar26 + 8);
            for (ppppiVar27 = (int ****)(iVar9 * 0x48); ppppiVar27 != (int ****)0x0;
                ppppiVar27 = ppppiVar27 + -0x12) {
              if ((*(int *)(iVar24 + 0xc) == *(int *)(iVar14 + 0x14)) &&
                 (iVar12 = thunk_FUN_01bed842(*piVar28 + 8,*(undefined4 *)(iVar14 + 0x10)),
                 iVar12 == 0)) goto LAB_006db758;
              iVar24 = iVar24 + 0x48;
              piVar28 = piVar28 + 0x12;
            }
            ppppiVar27 = (int ****)thunk_FUN_01be5118(8);
            if (ppppiVar27 == (int ****)0x0) goto LAB_006dc980;
            local_4c = ppppiVar27;
            *ppppiVar27 = pppiVar32;
            ppppiVar27[1] = pppiVar21;
            local_48 = 1;
            local_50 = 1;
            ppppiVar22 = pppppiVar18[4];
            if (-1 < (int)ppppiVar22) {
              ppppiVar22 = (int ****)0x2;
            }
            local_5c = *(int ******)((int)pppppiVar18 + *(int *)((int)ppppiVar22 * 4 + 0x534dbc));
            local_60 = *(int ******)((int)pppppiVar18 + *(int *)((int)ppppiVar22 * 4 + 0x534da4));
            local_ac = (int **)&DAT_0132b6a0;
            local_b0 = (int *****)&local_60;
            local_b4 = (undefined2 *)&LAB_00632348;
            local_bc = (int *****)&LAB_006e026c;
            local_c0 = (int *****)(iVar34 + 0x3c);
            local_b8 = (int *****)(iVar14 + 0xc);
            FUN_00664898(&local_38,&DAT_005b3804,&local_c0);
            local_c0 = local_38;
            local_bc = local_34;
            local_b8 = local_30;
            FUN_006d6c3c(param_2,&local_50,&local_c0);
          }
LAB_006db758:
          iVar14 = iVar14 + 0x6c;
        } while (iVar14 != iVar10);
      }
    }
LAB_006db0b0:
    if (1 < *(uint *)(param_2 + 0x14)) {
      piVar28 = (int *)(*(int *)(param_2 + 0x10) + *(uint *)(param_2 + 0x14) * 4 + -8);
      iVar26 = 0;
      if (piVar28 != (int *)0x0) {
        iVar26 = *piVar28;
      }
      if (piVar28 != (int *)0x0 && iVar26 != 0) {
        uVar5 = 2;
        if ((int)*(uint *)(iVar26 + 0x10) < 0) {
          uVar5 = *(uint *)(iVar26 + 0x10) ^ 0x80000000;
        }
        if (uVar5 != 2) {
          if (uVar5 != 1) goto LAB_006db0e0;
          iVar26 = iVar26 + 0x18;
        }
        iVar26 = FUN_006e05dc(iVar26,*(int *)(iVar34 + 0x44) + 8,*(undefined4 *)(iVar34 + 0x48));
        if ((iVar26 != 0) &&
           (iVar26 = FUN_006b1524(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                                  *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),
                                  *(undefined4 *)(iVar26 + 0x8c),*(undefined4 *)(iVar26 + 0x90)),
           iVar26 != 0)) {
          if ((*(uint *)(iVar26 + 0x10) & 0xfffffffb) == 0x80000000) {
            if (*(int *)(iVar34 + 0x38) != 0) {
              ppppiVar27 = (int ****)thunk_FUN_01be5118(8);
              if (ppppiVar27 == (int ****)0x0) goto LAB_006dc980;
              pppiVar32 = *(int ****)(iVar34 + 0xc);
              *ppppiVar27 = *(int ****)(iVar34 + 8);
              ppppiVar27[1] = pppiVar32;
              local_48 = 1;
              local_50 = 1;
              iVar9 = *(int *)(iVar26 + 0x10);
              if (-1 < iVar9) {
                iVar9 = 2;
              }
              local_5c = *(int ******)(iVar26 + *(int *)(iVar9 * 4 + 0x534dec));
              local_60 = *(int ******)(iVar26 + *(int *)(iVar9 * 4 + 0x534dd4));
              local_b4 = &DAT_0132b6a0;
              local_b8 = (int *****)&local_60;
              local_bc = (int *****)&LAB_006e026c;
              local_c0 = (int *****)(iVar34 + 0x3c);
              local_4c = ppppiVar27;
              FUN_00664898(&local_38,&DAT_0057f06e,&local_c0);
              goto LAB_006dc300;
            }
          }
          else if (*(int *)(iVar34 + 0x38) == 0) {
            ppppiVar27 = (int ****)thunk_FUN_01be5118(8);
            if (ppppiVar27 == (int ****)0x0) goto LAB_006dc980;
            pppiVar32 = *(int ****)(iVar34 + 0xc);
            *ppppiVar27 = *(int ****)(iVar34 + 8);
            ppppiVar27[1] = pppiVar32;
            local_48 = 1;
            local_50 = 1;
            iVar9 = *(int *)(iVar26 + 0x10);
            if (-1 < iVar9) {
              iVar9 = 2;
            }
            local_5c = *(int ******)(iVar26 + *(int *)(iVar9 * 4 + 0x534e1c));
            local_60 = *(int ******)(iVar26 + *(int *)(iVar9 * 4 + 0x534e04));
            local_b4 = &DAT_0132b6a0;
            local_b8 = (int *****)&local_60;
            local_bc = (int *****)&LAB_006e026c;
            local_c0 = (int *****)(iVar34 + 0x3c);
            local_4c = ppppiVar27;
            FUN_00664898(&local_38,&DAT_0058e788,&local_c0);
LAB_006dc300:
            local_c0 = local_38;
            local_bc = local_34;
            local_b8 = local_30;
            FUN_006d6c3c(param_2,&local_50,&local_c0);
          }
        }
      }
    }
  }
LAB_006db0e0:
  if (param_1[0x2f] != 0) {
    uVar5 = param_1[0x2d];
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      FUN_01bed93e(param_1[0x2c],0xff,uVar5 + 5);
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
      }
    }
    param_1[0x2e] = uVar5;
    param_1[0x2f] = 0;
  }
  iVar26 = *(int *)(iVar34 + 0x44);
  uVar5 = *(uint *)(iVar34 + 0x48);
  if (1 < *(uint *)(param_2 + 0x14)) {
    iVar9 = *(int *)(param_2 + 0x10) + *(uint *)(param_2 + 0x14) * 4;
    piVar28 = (int *)(iVar9 + -8);
    if (piVar28 != (int *)0x0) {
      iVar9 = *piVar28;
    }
    if (piVar28 != (int *)0x0 && iVar9 != 0) {
      uVar29 = 2;
      if ((int)*(uint *)(iVar9 + 0x10) < 0) {
        uVar29 = *(uint *)(iVar9 + 0x10) ^ 0x80000000;
      }
      if (uVar29 != 2) {
        if (uVar29 != 1) goto LAB_006db174;
        iVar9 = iVar9 + 0x18;
      }
      ppppiVar27 = (int ****)(iVar26 + 8);
      iVar9 = FUN_006e05dc(iVar9,ppppiVar27,uVar5);
      if (iVar9 != 0) {
        iVar14 = *piVar28;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c05e64);
        }
        iVar10 = *(int *)(iVar14 + 0x10);
        if (-1 < iVar10) {
          iVar10 = 2;
        }
        iVar24 = *(int *)(iVar14 + *(int *)(iVar10 * 4 + 0x534e34));
        iVar10 = *(int *)(iVar10 * 4 + 0x534e4c);
        param_1[0x66] = uVar5;
        iVar14 = *(int *)(iVar14 + iVar10);
        param_1[0x65] = (int)ppppiVar27;
        param_1[100] = iVar9 + 8;
        param_1[0x68] = iVar14;
        param_1[0x67] = iVar24;
      }
    }
  }
LAB_006db174:
  if (*(uint *)(param_2 + 0x14) < 2) {
    iVar9 = 0;
  }
  else {
    puVar19 = (undefined4 *)(*(int *)(param_2 + 0x10) + *(uint *)(param_2 + 0x14) * 4 + -8);
    if (puVar19 != (undefined4 *)0x0) {
      ppppiVar27 = (int ****)*puVar19;
    }
    if (puVar19 != (undefined4 *)0x0 && ppppiVar27 != (int ****)0x0) {
      if (((int)ppppiVar27[4] < 0 && ((uint)ppppiVar27[4] & 0xfffffffe) != 0x80000002 || uVar5 != 10
          ) || (iVar9 = thunk_FUN_01bed842(iVar26 + 8,"__typename",10), iVar9 != 0)) {
        uVar29 = 2;
        if ((int)ppppiVar27[4] < 0) {
          uVar29 = (uint)ppppiVar27[4] ^ 0x80000000;
        }
        ppppiVar22 = ppppiVar27;
        if (uVar29 == 2) {
LAB_006db86c:
          iVar9 = FUN_006e05dc(ppppiVar22,iVar26 + 8,uVar5);
          if (iVar9 != 0) goto LAB_006db198;
        }
        else if (uVar29 == 1) {
          ppppiVar22 = ppppiVar27 + 6;
          goto LAB_006db86c;
        }
        iVar14 = *(int *)(iVar34 + 0x20);
        piVar28 = (int *)(iVar14 + 0x1c);
        for (iVar9 = *(int *)(iVar34 + 0x24) * 0x24; iVar9 != 0; iVar9 = iVar9 + -0x24) {
          if ((*(int *)(iVar14 + 0x20) == 5) &&
             (iVar10 = thunk_FUN_01bed842(*piVar28 + 8,"ifdef",5), iVar10 == 0)) goto LAB_006db198;
          iVar14 = iVar14 + 0x24;
          piVar28 = piVar28 + 9;
        }
        puVar19 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar19 == (undefined4 *)0x0) goto LAB_006dc980;
        uVar11 = *(undefined4 *)(iVar34 + 0xc);
        uVar29 = 2;
        *puVar19 = *(undefined4 *)(iVar34 + 8);
        puVar19[1] = uVar11;
        local_6c = 1;
        local_74 = (int ****)0x1;
        if ((int)ppppiVar27[4] < 0) {
          uVar29 = (uint)ppppiVar27[4] ^ 0x80000000;
        }
        local_64 = *(undefined4 *)((int)ppppiVar27 + *(int *)(uVar29 * 4 + 0x534e7c));
        local_68 = *(int ****)((int)ppppiVar27 + *(int *)(uVar29 * 4 + 0x534e64));
        local_70 = puVar19;
        if (*(char *)(*(int *)(param_2 + 0x24) + 0x7f) != '\0') {
          if (uVar29 == 2) {
            local_54 = ppppiVar27;
          }
          else {
            local_54 = (int ****)0x0;
            if (uVar29 == 1) {
              local_54 = ppppiVar27 + 6;
            }
          }
          local_48 = 0;
          local_50 = 0;
          local_4c = (int ****)&SUB_00000004;
          local_d4 = (int ****)0x0;
          if (local_54 != (int ****)0x0) {
            local_d4 = (int ****)&local_54;
          }
          if ((char)puVar25[4] == '\0') {
            FUN_019ae6ac(&local_38);
            *puVar17 = (uint)local_30;
            puVar25[3] = uStack_2c;
            *puVar25 = (uint)local_38;
            puVar25[1] = (uint)local_34;
            *(undefined1 *)(puVar25 + 4) = 1;
          }
          local_b0 = (int *****)*puVar25;
          ppiVar23 = (int **)puVar25[1];
          local_a8 = *puVar17;
          uStack_a4 = puVar25[3];
          *puVar25 = (int)local_b0 + 1;
          puVar25[1] = (int)ppiVar23 + (uint)(0xfffffffe < local_b0);
          local_c0 = (int *****)&DAT_0056d238;
          local_bc = (int *****)0x0;
          local_b8 = (int *****)0x0;
          local_b4 = (undefined2 *)0x0;
          ppiVar30 = (int **)0x0;
          local_124 = 0;
          local_140 = (int ****)&SUB_00000004;
          local_13c = -0xc;
          local_ac = ppiVar23;
          do {
            ppppiVar27 = local_4c;
            if (ppiVar30 == (int **)0x0) goto LAB_006dc42c;
LAB_006dc3e0:
            if (ppiVar30 == ppiVar23) {
LAB_006dc42c:
              if (local_d4 != (int ****)0x0) goto code_r0x006dc434;
              if (local_124 == 0) {
                pppppiVar18 = (int *****)&DAT_80000000;
              }
              else {
                local_38 = (int *****)&local_40;
                local_40 = (int *****)&local_c0;
                if (local_124 != 1) {
                  ppppiVar22 = local_4c;
                  if (local_124 < 0x15) {
                    do {
                      FUN_006c6010(ppppiVar27,ppppiVar22 + 3,&local_40);
                      local_13c = local_13c + -0xc;
                      ppppiVar22 = ppppiVar22 + 3;
                    } while (local_13c != 0);
                  }
                  else {
                    FUN_006e44a4(local_4c,local_124,&local_38);
                  }
                }
                ppppiVar27 = ppppiVar27 + 2;
                iVar26 = 0;
                do {
                  iVar9 = iVar26;
                  pppiVar32 = *ppppiVar27;
                  local_124 = local_124 - 1;
                  ppppiVar27 = ppppiVar27 + 3;
                  iVar26 = (int)pppiVar32 + iVar9 + 5;
                } while (local_124 != 0);
                pppppiVar18 = (int *****)((int)pppiVar32 + iVar9 + 0x12);
                uVar11 = 0;
                if ((int)pppppiVar18 < 0) {
LAB_006dc9fc:
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(uVar11,local_170);
                }
                if (pppppiVar18 == (int *****)0x0) {
                  local_34 = (int *****)&DAT_00000001;
                  local_38 = (int *****)0x0;
LAB_006dc63c:
                  local_170 = local_34;
                  local_30 = (int *****)0x0;
                  FUN_0132b898(&local_38,0,0xd,1,1);
                }
                else {
                  uVar11 = 1;
                  local_170 = (int *****)FUN_01298504(pppppiVar18,1);
                  if (local_170 == (int *****)0x0) {
                    local_170 = pppppiVar18;
                    goto LAB_006dc9fc;
                  }
                  local_30 = (int *****)0x0;
                  local_38 = pppppiVar18;
                  local_34 = local_170;
                  if (pppppiVar18 < &DAT_0000000d) goto LAB_006dc63c;
                }
                pppppiVar31 = local_30;
                pppppiVar15 = local_34;
                pppppiVar18 = local_38;
                FUN_01bed4e2((undefined1 *)((int)local_34 + (int)local_30)," Did you mean",0xd);
                local_30 = (int *****)((int)pppppiVar31 + 0xd);
                if (pppppiVar18 == local_30) {
                  FUN_0132b898(&local_38,pppppiVar18,1,1,1);
                  pppppiVar15 = local_34;
                }
                pppppiVar31 = (int *****)((int)pppppiVar31 + 0xe);
                *(undefined1 *)((int)pppppiVar15 + (int)local_30) = 0x20;
                local_30 = pppppiVar31;
                if (local_48 != 0) {
                  iVar9 = 0;
                  iVar26 = local_48 * 0xc;
                  ppppiVar27 = local_4c;
                  do {
                    local_44 = ppppiVar27;
                    if (iVar9 != 0) {
                      if ((uint)((int)local_38 - (int)local_30) < 2) {
                        FUN_0132b898(&local_38,local_30,2,1,1);
                      }
                      *(undefined2 *)((int)local_34 + (int)local_30) = 0x202c;
                      local_30 = (int *****)((int)local_30 + 2);
                    }
                    local_40 = &local_44;
                    local_3c = (int *****)&LAB_0193a90c;
                    iVar14 = FUN_012fa178(&local_38,&DAT_01d05f88,&DAT_00599e95,&local_40);
                    if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01c05fb4,&DAT_01c05f4c);
                    }
                    ppppiVar27 = ppppiVar27 + 3;
                    iVar9 = iVar9 + -1;
                    iVar26 = iVar26 + -0xc;
                  } while (iVar26 != 0);
                }
                pppppiVar18 = local_30;
                if (local_38 == local_30) {
                  FUN_0132b898(&local_38,local_30,1,1,1);
                }
                *(undefined1 *)((int)local_34 + (int)local_30) = 0x3f;
                local_3c = (int *****)((int)pppppiVar18 + 1);
                local_40 = local_34;
                pppppiVar18 = local_38;
                local_30 = local_3c;
              }
              FUN_006b40cc(&local_c0);
              FUN_006a41c0(&local_50);
              if (pppppiVar18 == (int *****)&DAT_80000000) {
                pppppiVar18 = (int *****)0x0;
                local_58 = (int *****)0x0;
                local_5c = (int *****)&DAT_00000001;
              }
              else {
                local_5c = local_40;
                local_58 = local_3c;
              }
              local_60 = pppppiVar18;
              goto LAB_006dc1d0;
            }
            pppppiVar18 = (int *****)ppiVar30[0x2f];
            uVar11 = 0;
            if ((int)pppppiVar18 < 0) {
LAB_006dc9e8:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar11,local_16c);
            }
            piVar28 = ppiVar30[0x2e];
            if (pppppiVar18 == (int *****)0x0) {
              local_16c = (int *****)&DAT_00000001;
              local_114 = (int *****)0x0;
            }
            else {
              uVar11 = 1;
              local_16c = (int *****)FUN_01298504(pppppiVar18,1);
              if (local_16c == (int *****)0x0) {
                local_16c = pppppiVar18;
                goto LAB_006dc9e8;
              }
              local_114 = pppppiVar18;
            }
            FUN_01bed4e2(local_16c,piVar28,pppppiVar18);
            uVar6 = FUN_006cd114(iVar26 + 8,uVar5,local_16c,pppppiVar18);
            ppiVar30 = ppiVar30 + 0x30;
            uVar29 = uVar5 >> 1;
            if (uVar5 >> 1 < (uint)pppppiVar18 >> 1) {
              uVar29 = (uint)pppppiVar18 >> 1;
            }
            if (uVar29 < 2) {
              uVar29 = 1;
            }
            if (uVar6 < uVar29) {
              FUN_006666fc(&local_38,local_16c,pppppiVar18);
              if (local_124 == local_50) {
                FUN_019abd3c(&local_50);
                local_140 = local_4c;
              }
              ppppiVar27 = local_140 + local_124 * 3;
              *ppppiVar27 = (int ***)local_38;
              ppppiVar27[1] = (int ***)local_34;
              ppppiVar27[2] = (int ***)local_30;
              local_38 = local_114;
              local_48 = local_124 + 1;
              local_34 = local_16c;
              local_30 = pppppiVar18;
              FUN_006e5cd0(&local_c0,&local_38,uVar6);
              local_13c = local_13c + 0xc;
              local_124 = local_124 + 1;
            }
            else {
              FUN_019bb7e0(local_114,local_16c);
            }
          } while( true );
        }
        local_5c = (int *****)&DAT_00000001;
        local_58 = (int *****)0x0;
        local_60 = (int *****)0x0;
LAB_006dc1d0:
        local_b0 = (int *****)&local_60;
        local_c0 = (int *****)(iVar34 + 0x3c);
        local_b8 = (int *****)&local_68;
        local_ac = (int **)&LAB_00632348;
        local_b4 = &DAT_0132b6a0;
        local_bc = (int *****)&LAB_006e026c;
        FUN_00664898(&local_38,&DAT_005ab8bd,&local_c0);
        FUN_019bb7e0(local_60,local_5c);
        local_c0 = local_38;
        local_bc = local_34;
        local_b8 = local_30;
        FUN_006d6c3c(param_2,&local_74,&local_c0);
        iVar26 = *(int *)(iVar34 + 0x44);
        uVar5 = *(uint *)(iVar34 + 0x48);
      }
      else {
        uVar5 = 10;
      }
    }
LAB_006db198:
    iVar9 = 0;
    if (1 < *(uint *)(param_2 + 0x14)) {
      iVar14 = *(int *)(param_2 + 0x10);
      piVar28 = (int *)(iVar14 + *(uint *)(param_2 + 0x14) * 4 + -8);
      if (piVar28 != (int *)0x0) {
        iVar14 = *piVar28;
      }
      if (piVar28 != (int *)0x0 && iVar14 != 0) {
        uVar29 = 2;
        if ((int)*(uint *)(iVar14 + 0x10) < 0) {
          uVar29 = *(uint *)(iVar14 + 0x10) ^ 0x80000000;
        }
        if (uVar29 != 2) {
          if (uVar29 != 1) goto LAB_006db1fc;
          iVar14 = iVar14 + 0x18;
        }
        iVar9 = FUN_006e05dc(iVar14,iVar26 + 8,uVar5);
      }
    }
  }
LAB_006db1fc:
  if (iVar9 != 0) {
    iVar9 = iVar9 + 8;
  }
  param_1[0x69] = iVar9;
  if (*(int *)(iVar34 + 0x18) != 0) {
    iVar26 = *(int *)(iVar34 + 0x14);
    iVar9 = iVar26 + *(int *)(iVar34 + 0x18) * 0x48;
    do {
      FUN_006d5eb0(param_1 + 0x2c,param_2,iVar26,iVar26 + 0x10);
      pppppiVar18 = (int *****)&DAT_00000003;
      if (1 < *(uint *)(param_2 + 0x14)) {
        piVar28 = (int *)(*(int *)(param_2 + 0x10) + *(uint *)(param_2 + 0x14) * 4 + -8);
        iVar14 = 0;
        if (piVar28 != (int *)0x0) {
          iVar14 = *piVar28;
        }
        if (piVar28 != (int *)0x0 && iVar14 != 0) {
          uVar5 = 2;
          if ((int)*(uint *)(iVar14 + 0x10) < 0) {
            uVar5 = *(uint *)(iVar14 + 0x10) ^ 0x80000000;
          }
          if (uVar5 != 2) {
            if (uVar5 != 1) goto LAB_006db26c;
            iVar14 = iVar14 + 0x18;
          }
          iVar14 = FUN_006e05dc(iVar14,*(int *)(iVar34 + 0x44) + 8,*(undefined4 *)(iVar34 + 0x48));
          if (iVar14 != 0) {
            iVar14 = FUN_006e0794(iVar14 + 8,*(int *)(iVar26 + 8) + 8,*(undefined4 *)(iVar26 + 0xc))
            ;
            if (iVar14 != 0) {
              uVar11 = *(undefined4 *)(iVar14 + 0x14);
              uVar33 = *(undefined4 *)(iVar14 + 0x10);
              uVar2 = *(undefined8 *)(iVar14 + 0x10);
              uVar39 = FUN_00700b3c(uVar33,uVar11,0x21);
              if ((int)uVar39 == 0) {
                uVar39 = FUN_006a4c58(uVar33,uVar11);
                if ((int)uVar39 == 0) {
                  pppppiVar18 = (int *****)0x2;
                }
                else {
                  pppppiVar18 = (int *****)0x0;
                  uVar2 = uVar39;
                }
              }
              else {
                pppppiVar18 = (int *****)&DAT_00000001;
                uVar2 = uVar39;
              }
            }
          }
        }
      }
LAB_006db26c:
      local_c4 = (int *****)((ulonglong)uVar2 >> 0x20);
      iVar14 = *(int *)(param_2 + 0x20);
      if (iVar14 == *(int *)(param_2 + 0x18)) {
        FUN_00b68760(param_2 + 0x18);
      }
      puVar19 = (undefined4 *)(*(int *)(param_2 + 0x1c) + iVar14 * 0xc);
      *puVar19 = pppppiVar18;
      *(undefined8 *)(puVar19 + 1) = uVar2;
      *(int *)(param_2 + 0x20) = iVar14 + 1;
      local_b8 = local_c4;
      local_c0 = pppppiVar18;
      local_bc = (int *****)uVar2;
      FUN_006dcb48(param_2,&local_c0,iVar26 + 0x18);
      iVar26 = iVar26 + 0x48;
      if (*(int *)(param_2 + 0x20) != 0) {
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
      }
    } while (iVar26 != iVar9);
  }
  FUN_006da578(param_1,param_2,*(undefined4 *)(iVar34 + 0x20),*(undefined4 *)(iVar34 + 0x24));
  FUN_006dab48(param_1,param_2,iVar34 + 0x28);
  param_1[0x69] = 0;
  param_1[100] = 0;
  if (param_1[0x96] != 0) {
    param_1[0x96] = param_1[0x96] + -1;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  }
  goto LAB_006dc1a8;
LAB_006dbc68:
  if (param_1[10] == 0) {
    FUN_006bbd5c(param_1 + 8,param_1 + 0xc);
  }
  puVar20 = puVar13;
  if (pppppiVar15 != (int *****)0x2) {
    uVar5 = *puVar4;
    uVar29 = puVar4[1];
    if ((char)puVar25[4] == '\0') {
      FUN_019ae6ac(&local_38);
      *puVar17 = (uint)local_30;
      puVar25[3] = uStack_2c;
      *puVar25 = (uint)local_38;
      puVar25[1] = (uint)local_34;
      *(undefined1 *)(puVar25 + 4) = 1;
    }
    uVar38 = *puVar25;
    uVar37 = puVar25[1];
    uVar6 = *puVar17;
    uVar8 = puVar25[3];
    *puVar25 = uVar38 + 1;
    puVar25[1] = uVar37 + (0xfffffffe < uVar38);
    *puVar4 = (uint)&DAT_0056d238;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar20 = (uint *)param_1[8];
    uVar36 = param_1[9];
    uVar35 = uVar36 & (uint)puVar13;
    uVar7 = *(uint *)((int)puVar20 + uVar35) & 0x80808080;
    if (uVar7 == 0) {
      iVar26 = 4;
      do {
        uVar35 = uVar35 + iVar26 & uVar36;
        iVar26 = iVar26 + 4;
        uVar7 = *(uint *)((int)puVar20 + uVar35) & 0x80808080;
      } while (uVar7 == 0);
    }
    uVar7 = uVar35 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar36;
    uVar35 = (uint)*(char *)((int)puVar20 + uVar7);
    if (-1 < (int)uVar35) {
      uVar7 = *puVar20 & 0x80808080;
      uVar7 = LZCOUNT((*puVar20 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
      uVar35 = (uint)*(byte *)((int)puVar20 + (uVar7 >> 3));
      uVar7 = uVar7 >> 3;
    }
    iVar26 = param_1[10];
    bVar1 = (byte)((uint)puVar13 >> 0x19);
    *(byte *)((int)puVar20 + uVar7) = bVar1;
    param_1[10] = iVar26 - (uVar35 & 1);
    *(byte *)((int)puVar20 + (uVar7 - 4 & uVar36) + 4) = bVar1;
    puVar20 = puVar20 + uVar7 * -0xc;
    puVar20[-0xc] = (uint)pppppiVar15;
    puVar20[-0xb] = uVar5;
    puVar20[-10] = uVar29;
    puVar20[-9] = (uint)local_c0;
    puVar20[-8] = (uint)local_bc;
    puVar20[-7] = (uint)local_b8;
    puVar20[-6] = (uint)local_b4;
    puVar20[-5] = (uint)local_b0;
    puVar20[-1] = uVar8;
    puVar20[-2] = uVar6;
    iVar26 = param_1[0xb];
    puVar20[-3] = uVar37;
    puVar20[-4] = uVar38;
    param_1[0xb] = iVar26 + 1;
  }
LAB_006dbdac:
  FUN_006e6200(puVar20 + -8,local_e4 + 2,pppiVar32);
  local_e4 = *(int *****)(iVar34 + 0x30);
  pppiVar32 = *(int ****)(iVar34 + 0x34);
LAB_006dbdc4:
  if (param_1[0x4c] != 2) {
    local_38 = (int *****)param_1[0x4c];
    local_34 = (int *****)param_1[0x4d];
    local_30 = (int *****)param_1[0x4e];
    FUN_006e55e0(&local_c0,param_1 + 0x44);
    ppiVar23 = local_ac;
    pppppiVar15 = local_c0;
    if (local_b8 == (int *****)0x2) {
    }
    else {
      local_c0 = local_b8;
      *puVar4 = (uint)local_b4;
      puVar4[1] = (uint)local_b0;
      local_ac = (int **)0x0;
      local_b0 = (int *****)&SUB_00000004;
      local_b4 = (undefined2 *)0x0;
      pppppiVar15 = (int *****)FUN_006b447c(ppiVar23,0,pppppiVar15,local_bc,&local_c0);
    }
    ppppiVar27 = pppppiVar15[-1];
    if (ppppiVar27 == pppppiVar15[-3]) {
      FUN_01aa1bc0();
    }
    ppppiVar22 = pppppiVar15[-2];
    ppppiVar22[(int)ppppiVar27 * 2] = (int ***)(local_e4 + 2);
    (ppppiVar22 + (int)ppppiVar27 * 2)[1] = pppiVar32;
    pppppiVar15[-1] = (int ****)((int)ppppiVar27 + 1);
  }
  if (param_1[0x60] != 2) {
    local_38 = (int *****)param_1[0x60];
    local_34 = (int *****)param_1[0x61];
    local_30 = (int *****)param_1[0x62];
    FUN_006e55e0(&local_c0,param_1 + 0x50);
    ppiVar23 = local_ac;
    pppppiVar15 = local_c0;
    if (local_b8 == (int *****)0x2) {
    }
    else {
      local_c0 = local_b8;
      *puVar4 = (uint)local_b4;
      puVar4[1] = (uint)local_b0;
      local_ac = (int **)0x0;
      local_b0 = (int *****)&SUB_00000004;
      local_b4 = (undefined2 *)0x0;
      pppppiVar15 = (int *****)FUN_006b447c(ppiVar23,0,pppppiVar15,local_bc,&local_c0);
    }
    ppppiVar27 = pppppiVar15[-1];
    if (ppppiVar27 == pppppiVar15[-3]) {
      FUN_01aa1bc0();
    }
    ppppiVar22 = pppppiVar15[-2];
    ppppiVar22[(int)ppppiVar27 * 2] = (int ***)(local_e4 + 2);
    (ppppiVar22 + (int)ppppiVar27 * 2)[1] = pppiVar32;
    pppppiVar15[-1] = (int ****)((int)ppppiVar27 + 1);
  }
  if (param_1[0x90] != 2) {
    local_38 = (int *****)param_1[0x90];
    local_34 = (int *****)param_1[0x91];
    local_30 = (int *****)param_1[0x92];
    FUN_006e55e0(&local_c0,param_1 + 0x88);
    ppiVar23 = local_ac;
    pppppiVar15 = local_c0;
    if (local_b8 == (int *****)0x2) {
    }
    else {
      local_c0 = local_b8;
      *puVar4 = (uint)local_b4;
      puVar4[1] = (uint)local_b0;
      local_ac = (int **)0x0;
      local_b0 = (int *****)&SUB_00000004;
      local_b4 = (undefined2 *)0x0;
      pppppiVar15 = (int *****)FUN_006b447c(ppiVar23,0,pppppiVar15,local_bc,&local_c0);
    }
    ppppiVar27 = pppppiVar15[-1];
    if (ppppiVar27 == pppppiVar15[-3]) {
      FUN_01aa1bc0();
    }
    ppppiVar22 = pppppiVar15[-2];
    ppppiVar22[(int)ppppiVar27 * 2] = (int ***)(local_e4 + 2);
    (ppppiVar22 + (int)ppppiVar27 * 2)[1] = pppiVar32;
    pppppiVar15[-1] = (int ****)((int)ppppiVar27 + 1);
  }
  piVar28 = *(int **)(param_2 + 0x28);
  if (piVar28[3] != 0) {
    ppppiVar27 = local_e4 + 2;
    uVar29 = FUN_01a60560(piVar28[4],piVar28[5],piVar28[6],piVar28[7],ppppiVar27,pppiVar32);
    uVar5 = uVar29 >> 0x19;
    iVar26 = *piVar28;
    uVar6 = piVar28[1];
    local_e4 = (int ****)0x0;
    while( true ) {
      uVar29 = uVar6 & uVar29;
      uVar7 = *(uint *)(iVar26 + uVar29);
      uVar8 = uVar7 ^ uVar5 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar35 = uVar8 >> 8;
        uVar36 = uVar8 >> 0x10;
        uVar37 = uVar8 >> 0x18;
        uVar38 = uVar8 << 0x18;
        uVar8 = uVar8 - 1 & uVar8;
        piVar28 = (int *)(iVar26 + -0x48 +
                         (uVar29 + ((uint)LZCOUNT(uVar38 | (uVar35 & 0xff) << 0x10 |
                                                  (uVar36 & 0xff) << 8 | uVar37) >> 3) & uVar6) *
                         -0x48);
        if ((pppiVar32 == (int ***)piVar28[1]) &&
           (iVar9 = thunk_FUN_01bed842(ppppiVar27,*piVar28 + 8), iVar9 == 0)) goto LAB_006dc16c;
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_e4 = (int ****)((int)local_e4 + 4);
      uVar29 = uVar29 + (int)local_e4;
    }
  }
  ppppiVar27 = (int ****)thunk_FUN_01be5118(8);
  if (ppppiVar27 == (int ****)0x0) {
LAB_006dc980:
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  pppiVar32 = *(int ****)(iVar34 + 0x18);
  *ppppiVar27 = *(int ****)(iVar34 + 0x14);
  ppppiVar27[1] = pppiVar32;
  local_48 = 1;
  local_50 = 1;
  local_34 = (int *****)&LAB_00701524;
  local_4c = ppppiVar27;
  local_38 = pppppiVar18;
  FUN_00664898(&local_c0,&DAT_005840ae,&local_38);
  local_38 = local_c0;
  local_34 = local_bc;
  local_30 = local_b8;
  FUN_006d6c3c(param_2,&local_50,&local_38);
LAB_006dc16c:
  FUN_006ca9b8(param_1 + 0x6a,iVar34 + 0x14);
  FUN_006da578(param_1,param_2,*(undefined4 *)(iVar34 + 0x20),*(undefined4 *)(iVar34 + 0x24));
  if (param_1[0x96] != 0) {
    param_1[0x96] = param_1[0x96] + -1;
  }
LAB_006dc1a8:
  iVar34 = iVar34 + 0x5c;
  if (iVar34 == iVar16) {
    return;
  }
  goto LAB_006dad00;
code_r0x006dc434:
  ppiVar30 = (*local_d4)[5];
  ppiVar23 = ppiVar30 + (int)(*local_d4)[6] * 0x30;
  local_d4 = (int ****)0x0;
  goto LAB_006dc3e0;
}

