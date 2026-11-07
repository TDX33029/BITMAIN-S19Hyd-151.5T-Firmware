// FUN_00f184d0 @ 00f184d0 size=3120 calls_out=21 calls_in=1
// strings: 

void FUN_00f184d0(undefined4 param_1)

{
  code *pcVar1;
  longlong lVar2;
  int ****ppppiVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int ****ppppiVar9;
  uint uVar10;
  undefined4 extraout_r1;
  bool bVar11;
  undefined4 extraout_r2;
  int ***pppiVar12;
  int iVar13;
  int ****ppppiVar14;
  int ***pppiVar15;
  int unaff_r5;
  int ****ppppiVar16;
  int ****ppppiVar17;
  int ***pppiVar18;
  undefined4 uVar19;
  int ****ppppiVar20;
  int ****ppppiVar21;
  int iVar22;
  int iVar23;
  int ***pppiVar24;
  int local_538;
  int local_534;
  undefined4 local_530;
  undefined1 auStack_4b8 [152];
  int ****local_420;
  int local_41c;
  int ****local_418;
  undefined4 local_39c;
  undefined4 local_398;
  uint local_374;
  int ****local_348;
  int ****local_344;
  int ****local_340;
  int ****local_33c;
  char *pcStack_338;
  int iStack_334;
  int iStack_330;
  int ****local_328;
  int ****local_324;
  int ****local_320;
  int ****local_31c;
  int ****local_1b8;
  int ****local_1b4;
  int ****local_1b0;
  int ****local_1ac;
  int local_1a8;
  int ****local_1a4;
  int ****local_1a0;
  int ****local_19c;
  int ****local_198;
  int ****local_194;
  char *local_190;
  int local_18c;
  int local_188;
  undefined4 local_184;
  int ****local_34;
  int ****local_30;
  int ***local_2c [2];
  
  FUN_00a7a378(auStack_4b8);
  iVar13 = DAT_018dd97c;
  ppppiVar16 = DAT_018dd978;
  if (DAT_018dd97c == 0) {
    ppppiVar20 = (int ****)0x0;
    ppppiVar21 = (int ****)0x0;
    ppppiVar14 = (int ****)&DAT_00000004;
  }
  else {
    if ((int ****)0xaaaaaaa < DAT_018dd978) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    unaff_r5 = (int)DAT_018dd978 * 0xc;
    if (unaff_r5 == 0) {
      ppppiVar3 = (int ****)&DAT_00000004;
      local_1a0 = (int ****)0x0;
    }
    else {
      ppppiVar3 = (int ****)thunk_FUN_016d4a50(unaff_r5);
      local_1a0 = ppppiVar16;
      if (ppppiVar3 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,unaff_r5);
      }
    }
    local_198 = (int ****)0x0;
    ppppiVar20 = (int ****)0x0;
    ppppiVar21 = local_1a0;
    ppppiVar14 = ppppiVar3;
    local_19c = ppppiVar3;
    if (ppppiVar16 != (int ****)0x0) {
      iVar23 = 0;
      do {
        ppppiVar20 = local_198;
        iVar22 = *(int *)(iVar13 + (int)local_198 * 4);
        ppppiVar21 = local_1a0;
        ppppiVar14 = local_19c;
        if (iVar22 == 0) break;
        unaff_r5 = FUN_016dd8a2(iVar22);
        if (unaff_r5 == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = thunk_FUN_016d4a50(unaff_r5);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,unaff_r5);
          }
        }
        FUN_016dd1aa(iVar5,iVar22,unaff_r5);
        if (ppppiVar20 == local_1a0) {
          FUN_015f37b0(&local_1a0);
          ppppiVar3 = local_19c;
        }
        local_198 = (int ****)((int)ppppiVar20 + 1);
        piVar4 = (int *)((int)ppppiVar3 + iVar23);
        *piVar4 = unaff_r5;
        iVar23 = iVar23 + 0xc;
        piVar4[1] = iVar5;
        piVar4[2] = unaff_r5;
        ppppiVar20 = ppppiVar16;
        ppppiVar21 = local_1a0;
        ppppiVar14 = local_19c;
      } while (ppppiVar16 != local_198);
    }
  }
  local_31c = ppppiVar14 + (int)ppppiVar20 * 3;
  local_324 = ppppiVar14;
  local_328 = ppppiVar14;
  local_320 = ppppiVar21;
  if (ppppiVar20 == (int ****)0x0) {
LAB_00f1866c:
    ppppiVar16 = local_324 + 1;
    local_1b0 = (int ****)0x0;
    local_1b4 = (int ****)&DAT_00000004;
    local_1b8 = (int ****)0x0;
    for (iVar13 = ((uint)((int)local_31c - (int)local_324) >> 2) * -0x55555555; iVar13 != 0;
        iVar13 = iVar13 + -1) {
      if (ppppiVar16[-1] != (int ***)0x0) {
        thunk_FUN_016d3fb4(*ppppiVar16);
      }
      ppppiVar16 = ppppiVar16 + 3;
    }
    if (ppppiVar21 != (int ****)0x0) {
      thunk_FUN_016d3fb4(ppppiVar14);
    }
  }
  else {
    local_324 = ppppiVar14 + 3;
    pppiVar18 = *ppppiVar14;
    if (pppiVar18 == (int ***)0x80000000) goto LAB_00f1866c;
    uVar7 = (int)ppppiVar20 * 0xc - 0xc;
    pppiVar12 = ppppiVar14[1];
    uVar10 = (uVar7 >> 2) * -0x55555555;
    if (uVar10 < 4) {
      uVar10 = 3;
    }
    if (0x7fffffeb < uVar7 && (int)ppppiVar20 * 0xc != 0x7ffffff8) {
      uVar6 = 0;
LAB_00f186f8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,unaff_r5);
    }
    ppppiVar16 = (int ****)(uVar10 + 1);
    pppiVar15 = ppppiVar14[2];
    unaff_r5 = (int)ppppiVar16 * 0xc;
    if (unaff_r5 == 0) {
      ppppiVar20 = (int ****)&DAT_00000004;
      ppppiVar16 = (int ****)0x0;
    }
    else {
      ppppiVar20 = (int ****)thunk_FUN_016d4a50(unaff_r5);
      if (ppppiVar20 == (int ****)0x0) {
        uVar6 = 4;
        goto LAB_00f186f8;
      }
    }
    ppppiVar14 = local_31c;
    ppppiVar21 = local_324;
    *ppppiVar20 = pppiVar18;
    ppppiVar20[1] = pppiVar12;
    ppppiVar20[2] = pppiVar15;
    local_340 = (int ****)&DAT_00000001;
    local_194 = local_31c;
    local_198 = local_320;
    local_19c = local_324;
    local_1a0 = local_328;
    local_348 = ppppiVar16;
    local_344 = ppppiVar20;
    if (local_324 != local_31c) {
      uVar10 = (int)local_31c - (int)local_324;
      iVar13 = 0x14;
      do {
        iVar23 = iVar13;
        ppppiVar16 = local_340;
        uVar10 = uVar10 - 0xc;
        iVar13 = *(int *)((int)ppppiVar21 + iVar23 + -0x14);
        if (iVar13 == -0x80000000) break;
        uVar6 = *(undefined4 *)((int)ppppiVar21 + iVar23 + -0x10);
        uVar19 = *(undefined4 *)((int)ppppiVar21 + iVar23 + -0xc);
        if (local_340 == local_348) {
          FUN_00edff4c(&local_348,local_340,(uVar10 >> 2) * -0x55555555 + 1,4,0xc);
          ppppiVar20 = local_344;
        }
        local_340 = (int ****)((int)ppppiVar16 + 1);
        pcVar8 = (char *)((int)ppppiVar20 + iVar23);
        *(undefined4 *)pcVar8 = uVar19;
        *(int *)(pcVar8 + -8) = iVar13;
        *(undefined4 *)(pcVar8 + -4) = uVar6;
        iVar13 = iVar23 + 0xc;
      } while ((int ****)((int)ppppiVar21 + iVar23 + -8) != ppppiVar14);
      local_19c = (int ****)((int)ppppiVar21 + iVar23 + -8);
    }
    ppppiVar16 = local_19c + 1;
    for (iVar13 = ((uint)((int)local_194 - (int)local_19c) >> 2) * -0x55555555; iVar13 != 0;
        iVar13 = iVar13 + -1) {
      if (ppppiVar16[-1] != (int ***)0x0) {
        thunk_FUN_016d3fb4(*ppppiVar16);
      }
      ppppiVar16 = ppppiVar16 + 3;
    }
    if (local_198 != (int ****)0x0) {
      thunk_FUN_016d3fb4(local_1a0);
    }
    local_1b8 = local_348;
    local_1b4 = local_344;
    local_1b0 = local_340;
  }
  ppppiVar16 = (int ****)0x0;
  if (((local_374 & 0x800) == 0) ||
     (ppppiVar16 = (int ****)&DAT_00000001, local_1b0 == (int ****)0x0)) {
LAB_00f189d8:
    if ((local_374 & 0x4000000) == 0) {
      if (ppppiVar16 < local_1b0) {
        local_1a0 = (int ****)local_1b4[(int)ppppiVar16 * 3 + 1];
        local_19c = (int ****)local_1b4[(int)ppppiVar16 * 3 + 2];
        if (local_19c == (int ****)0x0) {
          bVar11 = false;
        }
        else {
          bVar11 = *(char *)local_1a0 == '/';
        }
        local_198 = (int ****)CONCAT31(local_198._1_3_,6);
        local_184 = (int ****)CONCAT22(CONCAT11(local_184._3_1_,bVar11),0x201);
        FUN_015c7164(&local_328,&local_1a0);
        ppppiVar16 = (int ****)((int)ppppiVar16 + 1);
        if ((((char)local_328 == '\t') &&
            (FUN_00fab1e0(&local_1a0,local_324,local_320), ppppiVar21 = local_198,
            ppppiVar20 = local_19c, local_1a0 != (int ****)&DAT_00000001)) &&
           (local_420 == (int ****)&DAT_80000000)) {
          if ((int)local_198 < 0) goto LAB_00f18ac0;
          if (local_198 == (int ****)0x0) {
            ppppiVar14 = (int ****)0x0;
            iVar13 = 1;
          }
          else {
            iVar13 = thunk_FUN_016d4a50(local_198);
            if (iVar13 == 0) goto LAB_00f19048;
            ppppiVar14 = ppppiVar21;
          }
          FUN_016dd1aa(iVar13,ppppiVar20,ppppiVar21);
          local_418 = ppppiVar21;
          local_420 = ppppiVar14;
          local_41c = iVar13;
        }
      }
      else {
        ppppiVar16 = (int ****)((int)ppppiVar16 + 1);
      }
    }
    FUN_00f90294(&local_348,auStack_4b8,&local_1b8,ppppiVar16);
    ppppiVar20 = local_1b4 + 1;
    for (ppppiVar16 = local_1b0; ppppiVar16 != (int ****)0x0;
        ppppiVar16 = (int ****)((int)ppppiVar16 + -1)) {
      if (ppppiVar20[-1] != (int ***)0x0) {
        thunk_FUN_016d3fb4(*ppppiVar20);
      }
      ppppiVar20 = ppppiVar20 + 3;
    }
LAB_00f18d44:
    if (local_1b8 != (int ****)0x0) {
      thunk_FUN_016d3fb4(local_1b4);
    }
    FUN_016dd1aa(&local_328,auStack_4b8,0x16c);
    ppppiVar16 = local_344;
    if (local_348 == (int ****)&DAT_80000000) {
      FUN_016dd1aa(&local_1a0,auStack_4b8,0x16c);
      FUN_00f192ac(&local_1a0);
      FUN_00eaaf28(ppppiVar16);
    }
    else {
      local_1a0 = local_348;
      local_19c = local_344;
      local_198 = local_340;
      local_194 = local_33c;
      local_190 = pcStack_338;
      local_18c = iStack_334;
      local_188 = iStack_330;
      FUN_00f192ac(&local_328);
      FUN_00a7a4bc(&local_538,&local_1a0);
      if (local_538 != 2 || local_534 != 0) {
        FUN_016dd1aa(param_1,&local_538,0x80);
        FUN_00f19820(&local_1a0);
        return;
      }
      FUN_00f19918(local_530);
      FUN_00eaaf28(local_530);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf190fc);
    (*pcVar1)();
  }
  local_1a0 = (int ****)local_1b4[1];
  local_19c = (int ****)local_1b4[2];
  if (local_19c == (int ****)0x0) {
    bVar11 = false;
  }
  else {
    bVar11 = *(char *)local_1a0 == '/';
  }
  local_198 = (int ****)CONCAT31(local_198._1_3_,6);
  local_184 = (int ****)CONCAT22(CONCAT11(local_184._3_1_,bVar11),0x201);
  FUN_015c7164(&local_328,&local_1a0);
  if ((char)local_328 != '\t') goto LAB_00f189d8;
  ppppiVar20 = local_320;
  ppppiVar21 = local_324;
  if ((local_320 == (int ****)&SUB_00000002) && (*(short *)local_324 == 0x2e2e)) {
    ppppiVar3 = (int ****)&SUB_00000002;
    ppppiVar9 = (int ****)0x0;
  }
  else {
    ppppiVar14 = local_320;
    do {
      ppppiVar3 = ppppiVar14;
      if ((int ****)((int)local_324 + (int)ppppiVar3) == local_324) {
        ppppiVar21 = (int ****)0x0;
        ppppiVar9 = local_324;
        goto LAB_00f189a8;
      }
      ppppiVar14 = (int ****)((int)ppppiVar3 + -1);
    } while (*(char *)((int)local_324 + (int)ppppiVar3 + -1) != '.');
    if (ppppiVar14 == (int ****)0x0) {
      ppppiVar9 = (int ****)0x0;
      ppppiVar3 = local_320;
    }
    else {
      ppppiVar9 = (int ****)((int)local_324 + (int)ppppiVar3);
      ppppiVar20 = (int ****)((int)local_320 - (int)ppppiVar3);
      ppppiVar3 = ppppiVar14;
    }
  }
LAB_00f189a8:
  if (ppppiVar21 != (int ****)0x0) {
    ppppiVar9 = ppppiVar21;
  }
  if (ppppiVar9 == (int ****)0x0) goto LAB_00f189d8;
  if (ppppiVar21 == (int ****)0x0) {
    ppppiVar3 = ppppiVar20;
  }
  FUN_00fab1e0(&local_1a0,ppppiVar9,ppppiVar3);
  ppppiVar21 = local_198;
  ppppiVar20 = local_19c;
  if (local_1a0 != (int ****)0x0) goto LAB_00f189d8;
  if (-1 < (int)local_198) {
    if (local_198 == (int ****)0x0) {
      ppppiVar16 = (int ****)0x0;
      local_1a8 = 1;
LAB_00f18afc:
      FUN_016dd1aa(local_1a8,ppppiVar20,ppppiVar21);
      local_1a4 = ppppiVar21;
      local_1ac = ppppiVar16;
      if (local_1b0 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,1,0,&DAT_018af198);
      }
      local_184 = (int ****)&local_1ac;
      local_190 = (char *)((int)local_1b0 + -1);
      local_198 = (int ****)&local_1b8;
      local_18c = 0;
      local_1b0 = (int ****)&DAT_00000001;
      local_194 = (int ****)&DAT_00000001;
      local_188 = 1;
      local_19c = (int ****)&DAT_00000004;
      local_1a0 = (int ****)&DAT_00000004;
      if (local_190 == (char *)0x0) {
        if (local_1b8 == (int ****)&DAT_00000001) {
          FUN_00edff4c(&local_1b8,1,1,4,0xc);
        }
        local_328 = (int ****)&local_1b0;
        local_324 = local_1b0;
        local_320 = local_1b4;
        FUN_00bada58(&local_18c,&local_328);
      }
      else {
        iVar13 = FUN_00ebe498(&local_1b8,1,&local_18c);
        pcVar8 = local_190;
        ppppiVar20 = local_194;
        ppppiVar16 = local_198;
        if (iVar13 != 0) {
          if (local_188 == local_18c) {
            iVar13 = local_18c;
          }
          else {
            uVar10 = local_188 - local_18c;
            if ((uint)((int)*local_198 - (int)(local_190 + (int)local_194)) < uVar10) {
              FUN_00edff4c(local_198,local_190 + (int)local_194,uVar10,4,0xc);
            }
            ppppiVar21 = (int ****)((int)ppppiVar20 + uVar10);
            pppiVar18 = ppppiVar16[1];
            FUN_016dd52c(pppiVar18 + (int)ppppiVar21 * 3,pppiVar18 + (int)ppppiVar20 * 3,
                         (int)pcVar8 * 0xc);
            local_194 = ppppiVar21;
            iVar13 = FUN_00ebe498(ppppiVar16,ppppiVar21,&local_18c);
            if (iVar13 == 0) goto LAB_00f18bc0;
            iVar13 = local_188;
          }
          ppppiVar16 = (int ****)(iVar13 - local_18c);
          iVar13 = (int)ppppiVar16 * 0xc;
          uVar6 = 0;
          if ((int ****)0xaaaaaaa < ppppiVar16) {
LAB_00f18e74:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar6,iVar13);
          }
          if (iVar13 == 0) {
            local_30 = (int ****)&DAT_00000004;
            ppppiVar16 = (int ****)0x0;
          }
          else {
            local_30 = (int ****)thunk_FUN_016d4a50(iVar13);
            if (local_30 == (int ****)0x0) {
              uVar6 = 4;
              goto LAB_00f18e74;
            }
          }
          local_348 = local_2c;
          local_2c[0] = (int ***)0x0;
          local_344 = (int ****)0x0;
          local_340 = local_30;
          local_34 = ppppiVar16;
          FUN_00bada58(&local_18c,&local_348);
          pppiVar18 = local_2c[0];
          ppppiVar3 = local_30;
          ppppiVar14 = local_34;
          pcVar8 = local_190;
          ppppiVar21 = local_194;
          ppppiVar20 = local_198;
          local_320 = local_34;
          local_328 = local_30;
          ppppiVar9 = local_30 + (int)local_2c[0] * 3;
          local_324 = local_30;
          ppppiVar16 = ppppiVar3;
          local_31c = ppppiVar9;
          if (local_2c[0] != (int ***)0x0) {
            if ((int ***)((int)*local_198 - (int)(local_190 + (int)local_194)) < local_2c[0]) {
              FUN_00edff4c(local_198,local_190 + (int)local_194,local_2c[0],4,0xc);
            }
            ppppiVar17 = (int ****)((int)ppppiVar21 + (int)pppiVar18);
            FUN_016dd52c(ppppiVar20[1] + (int)ppppiVar17 * 3,ppppiVar20[1] + (int)ppppiVar21 * 3,
                         (int)pcVar8 * 0xc);
            pppiVar12 = ppppiVar20[1];
            local_194 = ppppiVar17;
            if ((int ****)ppppiVar20[2] != ppppiVar17) {
              iVar13 = (int)pppiVar18 * 0xc;
              pppiVar18 = pppiVar12 + (int)ppppiVar20[2] * 3;
              ppppiVar21 = ppppiVar3;
              do {
                ppppiVar16 = ppppiVar16 + 3;
                if (iVar13 == 0) {
                  ppppiVar16 = ppppiVar9;
                  break;
                }
                if (*ppppiVar21 == (int ***)0x80000000) {
                  ppppiVar16 = ppppiVar21 + 3;
                  break;
                }
                pppiVar24 = ppppiVar21[2];
                iVar13 = iVar13 + -0xc;
                pppiVar15 = ppppiVar21[1];
                *pppiVar18 = (int **)*ppppiVar21;
                pppiVar18[1] = (int **)pppiVar15;
                pppiVar18[2] = (int **)pppiVar24;
                pppiVar18 = pppiVar18 + 3;
                ppppiVar20[2] = (int ***)((int)ppppiVar20[2] + 1);
                ppppiVar21 = ppppiVar21 + 3;
              } while (pppiVar18 != pppiVar12 + (int)ppppiVar17 * 3);
              local_324 = ppppiVar16;
            }
          }
          ppppiVar20 = ppppiVar16 + 1;
          for (iVar13 = ((uint)((int)ppppiVar9 - (int)ppppiVar16) >> 2) * -0x55555555; iVar13 != 0;
              iVar13 = iVar13 + -1) {
            if (ppppiVar20[-1] != (int ***)0x0) {
              thunk_FUN_016d3fb4(*ppppiVar20);
            }
            ppppiVar20 = ppppiVar20 + 3;
          }
          if (ppppiVar14 != (int ****)0x0) {
            thunk_FUN_016d3fb4(ppppiVar3);
          }
        }
      }
LAB_00f18bc0:
      ppppiVar16 = local_198;
      uVar10 = (int)local_19c - (int)local_1a0;
      lVar2 = (ulonglong)uVar10 * 0xaaaaaaab;
      if (uVar10 != 0) {
        ppppiVar20 = local_1a0 + 1;
        uVar10 = uVar10 / 0xc;
        while( true ) {
          if (uVar10 == 0) break;
          if (ppppiVar20[-1] != (int ***)0x0) {
            thunk_FUN_016d3fb4(*ppppiVar20,(int)((ulonglong)lVar2 >> 0x20),(int)lVar2);
            lVar2 = CONCAT44(extraout_r1,extraout_r2);
          }
          uVar10 = uVar10 - 1;
          ppppiVar20 = ppppiVar20 + 3;
        }
      }
      pcVar8 = local_190;
      if (local_190 != (char *)0x0) {
        ppppiVar20 = (int ****)ppppiVar16[2];
        if (local_194 != ppppiVar20) {
          FUN_016dd52c(ppppiVar16[1] + (int)ppppiVar20 * 3,ppppiVar16[1] + (int)local_194 * 3,
                       (int)local_190 * 0xc);
        }
        ppppiVar16[2] = (int ***)((int)ppppiVar20 + (int)pcVar8);
      }
      local_398 = 0;
      local_39c = 1;
      if (local_420 != (int ****)&DAT_80000000 && local_420 != (int ****)0x0) {
        thunk_FUN_016d3fb4(local_41c);
      }
      local_420 = (int ****)&DAT_80000000;
      FUN_00f90294(&local_348,auStack_4b8,&local_1b8,1);
      if (local_1ac != (int ****)0x0) {
        thunk_FUN_016d3fb4(local_1a8);
      }
      ppppiVar20 = local_1b4 + 1;
      for (ppppiVar16 = local_1b0; ppppiVar16 != (int ****)0x0;
          ppppiVar16 = (int ****)((int)ppppiVar16 + -1)) {
        if (ppppiVar20[-1] != (int ***)0x0) {
          thunk_FUN_016d3fb4(*ppppiVar20);
        }
        ppppiVar20 = ppppiVar20 + 3;
      }
      goto LAB_00f18d44;
    }
    local_1a8 = thunk_FUN_016d4a50(local_198);
    if (local_1a8 != 0) {
      ppppiVar16 = ppppiVar21;
      goto LAB_00f18afc;
    }
LAB_00f19048:
    uVar6 = 1;
    goto LAB_00f18ac4;
  }
LAB_00f18ac0:
  uVar6 = 0;
  ppppiVar21 = local_198;
LAB_00f18ac4:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar6,ppppiVar21);
}

