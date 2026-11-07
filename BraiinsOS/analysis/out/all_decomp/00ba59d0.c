// FUN_00ba59d0 @ 00ba59d0 size=2176 calls_out=12 calls_in=0
// strings: Out of bounds access

void FUN_00ba59d0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  uint *puVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint local_9c;
  float *local_90;
  uint local_88;
  float *local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int local_54;
  int *local_50;
  int local_4c;
  
  uVar12 = *(uint *)(param_2 + 0x578);
  uVar14 = param_3[8];
  uVar9 = *(uint *)(param_2 + 0x584);
  if (uVar9 == uVar12) {
    FUN_00ba62fc();
    uVar12 = *(uint *)(param_2 + 0x578);
    uVar9 = *(uint *)(param_2 + 0x584);
  }
  uVar28 = *(uint *)(param_2 + 0x580);
  uVar27 = uVar9 + 1;
  uVar30 = 0;
  uVar1 = uVar28 + uVar9;
  iVar15 = *(int *)(param_2 + 0x57c);
  uVar3 = uVar1 - uVar12;
  if (uVar1 < uVar12) {
    uVar3 = uVar1;
  }
  *(uint *)(param_2 + 0x584) = uVar27;
  puVar2 = (undefined4 *)(iVar15 + uVar3 * 0x30);
  uVar16 = param_3[1];
  uVar18 = param_3[2];
  uVar20 = param_3[3];
  uVar22 = param_3[4];
  uVar24 = param_3[5];
  *puVar2 = *param_3;
  puVar2[1] = uVar16;
  puVar2[2] = uVar18;
  puVar2[3] = uVar20;
  puVar2[4] = uVar22;
  puVar2[5] = uVar24;
  uVar16 = param_3[7];
  uVar18 = param_3[8];
  uVar20 = param_3[9];
  uVar22 = param_3[10];
  uVar24 = param_3[0xb];
  puVar2[6] = param_3[6];
  puVar2[7] = uVar16;
  puVar2[8] = uVar18;
  puVar2[9] = uVar20;
  puVar2[10] = uVar22;
  puVar2[0xb] = uVar24;
  uVar3 = 0;
  if (uVar27 < uVar9) {
LAB_00ba5ab8:
    if (uVar3 < uVar27) {
      uVar9 = uVar27;
      if (uVar27 < uVar30) {
        uVar9 = uVar30;
      }
      do {
        iVar4 = iVar15 + 0x20 + (uVar28 + uVar3) * 0x30;
        uVar1 = uVar3;
        while( true ) {
          uVar17 = uVar12;
          if (uVar28 + uVar1 < uVar12) {
            uVar17 = 0;
          }
          if (*(uint *)(iVar4 + uVar17 * -0x30) == uVar14) break;
          uVar1 = uVar1 + 1;
          iVar4 = iVar4 + 0x30;
          if (uVar27 <= uVar1) {
            uVar9 = uVar3 + 1;
            if (uVar3 + 1 < uVar27) {
              uVar9 = uVar27;
            }
            if (uVar9 == uVar30) goto LAB_00ba5dcc;
            goto LAB_00ba5bd8;
          }
        }
        if (uVar30 == uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_005666b0,0x20,&DAT_018a6c20);
        }
        uVar5 = uVar30 + uVar28;
        uVar3 = uVar5 - uVar12;
        if (uVar5 < uVar12) {
          uVar3 = uVar5;
        }
        puVar6 = (uint *)(iVar15 + uVar3 * 0x30);
        local_88 = *puVar6;
        local_84 = (float *)puVar6[1];
        local_80 = puVar6[2];
        uStack_7c = puVar6[3];
        uStack_78 = puVar6[4];
        uStack_74 = puVar6[5];
        local_70 = puVar6[6];
        uStack_6c = puVar6[7];
        uStack_68 = puVar6[8];
        uStack_64 = puVar6[9];
        uStack_60 = puVar6[10];
        uStack_5c = puVar6[0xb];
        puVar25 = (uint *)(iVar15 + ((uVar28 + uVar1) - uVar17) * 0x30);
        FUN_016dd52c(puVar6,puVar25,0x30);
        uVar30 = uVar30 + 1;
        *puVar25 = local_88;
        puVar25[1] = (uint)local_84;
        puVar25[2] = local_80;
        puVar25[3] = uStack_7c;
        puVar25[4] = uStack_78;
        puVar25[5] = uStack_74;
        uVar3 = uVar1 + 1;
        puVar25[6] = local_70;
        puVar25[7] = uStack_6c;
        puVar25[8] = uStack_68;
        puVar25[9] = uStack_64;
        puVar25[10] = uStack_60;
        puVar25[0xb] = uStack_5c;
      } while (uVar3 < uVar27);
    }
    if (uVar3 != uVar30) {
LAB_00ba5bd8:
      if (uVar30 < uVar27) {
        iVar4 = 0;
        *(uint *)(param_2 + 0x584) = uVar30;
        uVar9 = uVar28 - uVar12;
        if (uVar28 < uVar12) {
          uVar9 = uVar28;
        }
        uVar3 = uVar12 - uVar9;
        iVar7 = uVar27 - uVar3;
        if (uVar27 < uVar3) {
          iVar7 = 0;
        }
        uVar1 = uVar27;
        if (uVar3 < uVar27) {
          uVar1 = uVar3;
        }
        uVar27 = uVar30;
        if (uVar3 < uVar30) {
          while (iVar4 != iVar7 - (uVar30 - uVar1)) {
            iVar8 = iVar15 + (uVar30 - uVar1) * 0x30 + iVar4 * 0x30;
            if (*(int *)(iVar8 + 0x18) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x1c));
            }
            iVar23 = *(int *)(iVar8 + 0x28);
            iVar4 = iVar4 + 1;
            puVar2 = (undefined4 *)(iVar23 + 4);
            for (iVar21 = *(int *)(iVar8 + 0x2c); iVar21 != 0; iVar21 = iVar21 + -1) {
              if (puVar2[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar2);
              }
              puVar2 = puVar2 + 6;
            }
            if (*(int *)(iVar8 + 0x24) != 0) {
              thunk_FUN_016d3fb4(iVar23);
            }
          }
        }
        else {
          while (iVar4 != uVar1 - uVar30) {
            iVar8 = iVar15 + uVar9 * 0x30 + uVar30 * 0x30 + iVar4 * 0x30;
            if (*(int *)(iVar8 + 0x18) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x1c));
            }
            iVar21 = *(int *)(iVar8 + 0x28);
            iVar4 = iVar4 + 1;
            puVar2 = (undefined4 *)(iVar21 + 4);
            for (iVar23 = *(int *)(iVar8 + 0x2c); iVar23 != 0; iVar23 = iVar23 + -1) {
              if (puVar2[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar2);
              }
              puVar2 = puVar2 + 6;
            }
            if (*(int *)(iVar8 + 0x24) != 0) {
              thunk_FUN_016d3fb4(iVar21);
            }
          }
          iVar4 = 0;
          while (iVar4 != iVar7) {
            iVar8 = iVar15 + iVar4 * 0x30;
            if (*(int *)(iVar8 + 0x18) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x1c));
            }
            iVar23 = *(int *)(iVar8 + 0x28);
            iVar4 = iVar4 + 1;
            puVar2 = (undefined4 *)(iVar23 + 4);
            for (iVar21 = *(int *)(iVar8 + 0x2c); iVar21 != 0; iVar21 = iVar21 + -1) {
              if (puVar2[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar2);
              }
              puVar2 = puVar2 + 6;
            }
            if (*(int *)(iVar8 + 0x24) != 0) {
              thunk_FUN_016d3fb4(iVar23);
            }
          }
        }
      }
    }
  }
  else {
    iVar4 = iVar15 + uVar28 * 0x30 + 0x20;
    do {
      uVar9 = uVar12;
      if (uVar28 + uVar30 < uVar12) {
        uVar9 = 0;
      }
      if (*(uint *)(iVar4 + uVar9 * -0x30) != uVar14) {
        uVar3 = uVar30 + 1;
        goto LAB_00ba5ab8;
      }
      uVar30 = uVar30 + 1;
      iVar4 = iVar4 + 0x30;
    } while (uVar27 != uVar30);
  }
LAB_00ba5dcc:
  uVar9 = uVar14 * 0x10;
  bVar32 = 0xffffffe < uVar14;
  bVar31 = uVar14 == 0xfffffff;
  if (uVar14 < 0x10000000) {
    bVar32 = 0x7ffffffb < uVar9;
    bVar31 = uVar9 == 0x7ffffffc;
  }
  if (bVar32 && !bVar31) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar3 = 0;
  if (uVar9 == 0) {
    local_90 = (float *)&DAT_00000004;
    local_9c = 0;
  }
  else {
    local_90 = (float *)thunk_FUN_016d4a50(uVar9);
    local_9c = uVar14;
    if (local_90 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar9);
    }
  }
  if (uVar14 != 0) {
    uVar3 = uVar28 + (uVar27 >> 1);
    uVar9 = uVar3 - uVar12;
    if (uVar3 < uVar12) {
      uVar9 = uVar3;
    }
    iVar4 = iVar15 + uVar9 * 0x30;
    uVar3 = (uVar27 + uVar28) - 1;
    uVar9 = uVar3 - uVar12;
    if (uVar3 < uVar12) {
      uVar9 = uVar3;
    }
    iVar7 = iVar15 + uVar9 * 0x30;
    uVar9 = uVar28 - uVar12;
    if (uVar28 < uVar12) {
      uVar9 = uVar28;
    }
    iVar23 = 0xc;
    iVar8 = iVar15 + uVar9 * 0x30;
    uVar9 = 0;
    do {
      if (uVar27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("Out of bounds access",0x14,&DAT_01870d3c);
      }
      uVar3 = *(uint *)(iVar8 + 0x20);
      bVar31 = uVar3 <= uVar9;
      if (!bVar31) {
        uVar3 = *(uint *)(iVar4 + 0x20);
      }
      if ((bVar31 || uVar3 <= uVar9) || (uVar3 = *(uint *)(iVar7 + 0x20), uVar3 <= uVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar9,uVar3,&DAT_01870d4c);
      }
      uVar9 = uVar9 + 1;
      pfVar13 = (float *)((int)local_90 + iVar23);
      fVar33 = *(float *)(*(int *)(iVar8 + 0x1c) + iVar23);
      fVar34 = *(float *)(*(int *)(iVar4 + 0x1c) + iVar23);
      pfVar10 = (float *)(*(int *)(iVar7 + 0x1c) + iVar23);
      iVar23 = iVar23 + 0x10;
      fVar35 = *pfVar10;
      fVar36 = fVar35 - fVar34;
      fVar19 = pfVar10[-2];
      fVar11 = pfVar10[-1];
      pfVar13[-3] = pfVar10[-3];
      pfVar13[-2] = fVar19;
      pfVar13[-1] = fVar11;
      *pfVar13 = (fVar34 - fVar33) / 3.0 + fVar35 + (fVar36 + fVar36) / 3.0;
      uVar3 = uVar14;
    } while (uVar14 != uVar9);
  }
  if (uVar27 < 4) {
    if (uVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0034f88c,0x19,&DAT_01870d2c);
    }
  }
  else {
    do {
      uVar9 = uVar28 + 1;
      piVar29 = (int *)(iVar15 + uVar28 * 0x30);
      uVar28 = uVar9 - uVar12;
      if (uVar9 < uVar12) {
        uVar28 = uVar9;
      }
      if (*piVar29 != 2) {
        iVar4 = piVar29[9];
        iVar8 = piVar29[10];
        iVar7 = piVar29[0xb];
        if (piVar29[6] != 0) {
          thunk_FUN_016d3fb4(piVar29[7]);
        }
        puVar2 = (undefined4 *)(iVar8 + 4);
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (puVar2[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar2);
          }
          puVar2 = puVar2 + 6;
        }
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(iVar8);
        }
      }
      uVar27 = uVar27 - 1;
    } while (3 < uVar27);
    uVar27 = 3;
    *(uint *)(param_2 + 0x580) = uVar28;
    *(undefined4 *)(param_2 + 0x584) = 3;
  }
  uVar14 = (uVar27 + uVar28) - 1;
  uVar9 = uVar14 - uVar12;
  if (uVar14 < uVar12) {
    uVar9 = uVar14;
  }
  piVar29 = (int *)&DAT_00000004;
  iVar15 = iVar15 + uVar9 * 0x30;
  local_4c = 0;
  iVar4 = *(int *)(iVar15 + 0x28);
  iVar15 = *(int *)(iVar15 + 0x2c);
  local_50 = (int *)&DAT_00000004;
  local_54 = 0;
  local_88 = local_9c;
  local_84 = local_90;
  local_80 = uVar3;
  if (iVar15 == 0) {
    if (uVar3 != 0) {
LAB_00ba623c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0034abac,0x39,&DAT_0186a464);
    }
  }
  else {
    pfVar10 = local_90 + uVar3 * 4;
    while (pfVar13 = local_90, local_90 != pfVar10) {
      while( true ) {
        iVar7 = local_4c;
        fVar11 = *pfVar13;
        local_90 = pfVar13 + 4;
        fVar19 = pfVar13[1];
        iVar8 = iVar4;
        iVar23 = iVar15 * 0x18;
        while( true ) {
          fVar33 = *(float *)(iVar8 + 0xc);
          bVar31 = fVar33 == fVar11;
          if (bVar31) {
            fVar33 = *(float *)(iVar8 + 0x10);
          }
          if (bVar31 && (bVar31 && fVar33 == fVar19)) break;
          iVar8 = iVar8 + 0x18;
          iVar23 = iVar23 + -0x18;
          if (iVar23 == 0) goto LAB_00ba623c;
        }
        fVar33 = pfVar13[3];
        iVar8 = *(int *)(iVar8 + 0x14);
        if (local_4c == 0) break;
        iVar23 = local_4c * 0x18;
        piVar26 = piVar29;
        while( true ) {
          fVar34 = (float)piVar26[3];
          bVar31 = fVar34 == fVar11;
          if (bVar31) {
            fVar34 = (float)piVar26[4];
          }
          if (bVar31 && (bVar31 && fVar34 == fVar19)) break;
          piVar26 = piVar26 + 6;
          iVar23 = iVar23 + -0x18;
          if (iVar23 == 0) goto LAB_00ba6148;
        }
        iVar7 = piVar26[2];
        if (iVar7 == *piVar26) {
          FUN_0132f568(piVar26);
        }
        *(float *)(piVar26[1] + iVar7 * 4) = fVar33;
        piVar26[2] = iVar7 + 1;
        pfVar13 = local_90;
        if (local_90 == pfVar10) goto LAB_00ba61d8;
      }
LAB_00ba6148:
      pfVar13 = (float *)thunk_FUN_016d4a50(4);
      if (pfVar13 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,4);
      }
      *pfVar13 = fVar33;
      if (iVar7 == local_54) {
        FUN_009b6c80(&local_54);
        piVar29 = local_50;
      }
      piVar26 = piVar29 + iVar7 * 6;
      *piVar26 = 1;
      piVar26[1] = (int)pfVar13;
      piVar26[3] = (int)fVar11;
      piVar26[4] = (int)fVar19;
      piVar26[5] = iVar8;
      piVar26[2] = 1;
      local_4c = iVar7 + 1;
    }
  }
LAB_00ba61d8:
  FUN_009cad94(param_1,&local_88,&local_54);
  return;
}

