// FUN_008e2144 @ 008e2144 size=2180 calls_out=10 calls_in=3
// strings: 

void FUN_008e2144(uint *param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int unaff_r4;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined *local_ac;
  undefined *local_a8;
  undefined *local_a4;
  uint local_84;
  undefined4 *local_7c;
  undefined *local_74;
  undefined *local_70;
  int *local_68;
  uint local_60;
  uint local_5c;
  uint local_50;
  undefined4 *local_4c;
  uint local_48;
  uint local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 uStack_28;
  
  iVar6 = param_5 * 0xc;
  if (0xaaaaaaa < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  local_5c = param_5;
  if (iVar6 == 0) {
    local_3c = (undefined4 *)&DAT_00000004;
    local_40 = 0;
    if (1 < param_5) goto LAB_008e21c0;
LAB_008e2200:
    puVar5 = local_3c;
    if (param_5 == 0) {
      local_50 = local_40;
      local_4c = local_3c;
      local_68 = (int *)&DAT_00000008;
      local_48 = 0;
      local_7c = (undefined4 *)&DAT_00000008;
      goto LAB_008e2270;
    }
  }
  else {
    local_3c = (undefined4 *)thunk_FUN_016d4a50(iVar6);
    if (local_3c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar6);
    }
    local_40 = param_5;
    if (param_5 < 2) goto LAB_008e2200;
LAB_008e21c0:
    iVar6 = param_5 - 1;
    puVar5 = local_3c;
    do {
      *puVar5 = 0;
      puVar5[1] = 4;
      iVar6 = iVar6 + -1;
      puVar5[2] = 0;
      puVar5 = puVar5 + 3;
    } while (iVar6 != 0);
  }
  puVar5[1] = 4;
  *puVar5 = 0;
  puVar5[2] = 0;
  iVar6 = param_5 << 3;
  local_48 = param_5;
  local_50 = local_40;
  local_4c = local_3c;
  local_68 = (int *)FUN_016d38c8(iVar6,1);
  if (local_68 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,iVar6);
  }
  local_7c = (undefined4 *)FUN_016d38c8(iVar6,1);
  if (local_7c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,iVar6);
  }
LAB_008e2270:
  iVar6 = *(int *)(param_2 + 4);
  uVar24 = *(uint *)(param_2 + 8);
  local_60 = *(uint *)(param_3 + 8);
  iVar7 = *(int *)(param_3 + 4);
  uVar25 = uVar24;
  if (local_60 < uVar24) {
    uVar25 = local_60;
  }
  if (uVar25 != 0) {
    uVar27 = 0;
    local_70 = &DAT_0186680c;
    local_74 = &DAT_01865854;
    do {
      uVar16 = *(uint *)(iVar7 + uVar27 * 4);
      if (*(uint *)(iVar6 + uVar27 * 4) != uVar16) {
        uVar4 = FUN_018462e8(uVar27,param_4);
        if (local_60 <= uVar27) {
LAB_008e2930:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar27,local_60,local_70);
        }
        if (uVar24 <= uVar27) {
          local_70 = &DAT_0186681c;
          local_60 = uVar24;
          goto LAB_008e2930;
        }
        if (param_5 <= uVar4) {
LAB_008e290c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar4,local_5c,local_74);
        }
        uVar8 = *(uint *)(iVar6 + uVar27 * 4);
        uVar10 = *(uint *)(iVar7 + uVar27 * 4);
        puVar3 = (uint *)(local_68 + uVar4 * 2);
        uVar21 = *puVar3;
        uVar9 = uVar10 - uVar8;
        *puVar3 = uVar9 + uVar21;
        puVar3[1] = (puVar3[1] - (uint)(uVar10 < uVar8)) + (uint)CARRY4(uVar9,uVar21);
        if (local_48 <= uVar4) {
          local_5c = local_48;
          local_74 = &DAT_01865864;
          goto LAB_008e290c;
        }
        piVar18 = local_4c + uVar4 * 3;
        iVar26 = piVar18[2];
        if (iVar26 == *piVar18) {
          FUN_008f55dc(piVar18);
        }
        puVar3 = (uint *)(piVar18[1] + iVar26 * 8);
        *puVar3 = uVar27;
        puVar3[1] = uVar16;
        piVar18[2] = iVar26 + 1;
      }
      uVar27 = uVar27 + 1;
    } while (uVar25 != uVar27);
  }
  local_84 = 4;
  local_38 = 0;
  local_40 = 0;
  local_3c = (undefined4 *)0x4;
  local_a4 = &DAT_01865874;
  local_ac = &DAT_01865824;
  local_a8 = &DAT_0186680c;
  local_70 = (undefined *)local_48;
LAB_008e2420:
  uVar25 = local_38;
  piVar13 = local_4c + 2;
  uVar27 = 0;
  piVar18 = local_68;
  puVar5 = local_7c;
  while( true ) {
    uVar16 = uVar27;
    puVar5 = puVar5 + 2;
    piVar18 = piVar18 + 2;
    if (param_5 == uVar16) break;
    if (local_48 == uVar16) goto LAB_008e28cc;
    piVar14 = piVar13 + 3;
    iVar26 = *piVar13;
    uVar27 = uVar16 + 1;
    piVar13 = piVar14;
    if (iVar26 != 0) goto code_r0x008e2464;
  }
  *param_1 = local_40;
  param_1[1] = (uint)local_3c;
  param_1[2] = local_38;
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_7c);
    thunk_FUN_016d3fb4(local_68);
  }
  puVar5 = local_4c + 1;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    if (puVar5[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar5);
    }
    puVar5 = puVar5 + 3;
  }
  if (local_50 == 0) {
    return;
  }
  if (local_4c == (undefined4 *)0x0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar25 = *(byte *)((int)local_4c + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar24 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar24 - 0x10, uVar24 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar24 = (uint)(*(byte *)((int)local_4c + -3) >> 5);
  iVar17 = *(int *)(iVar6 + 8) + 0x10;
  iVar26 = iVar7 * uVar25 + iVar7 + -4;
  iVar7 = iVar17 + iVar26;
  if (4 < uVar24) {
    if (uVar24 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar24 = *(uint *)(iVar7 + -4);
    if (uVar24 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - (int)local_4c) < uVar24) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar24) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar17 + iVar26) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar24 = 1 << uVar25;
  *(undefined1 *)((int)local_4c + -3) = 0xff;
  *(undefined2 *)((int)local_4c + -2) = 0;
  do {
    uVar16 = *(uint *)(iVar6 + 0x10);
    uVar27 = *(uint *)(iVar6 + 0xc) | uVar16;
    if ((uVar24 & uVar27) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar16 == 0) || (uVar27 + uVar24 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar25);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar15 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar15;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar24 + uVar16;
      return;
    }
    puVar3 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar3);
      uVar27 = *puVar3;
      if (uVar16 != uVar27) goto LAB_016d409c;
      bVar29 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar29);
    *puVar3 = uVar24 + uVar16;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar16 == uVar27) {
      return;
    }
  } while( true );
LAB_008e28cc:
  local_5c = local_48;
  goto LAB_008e295c;
code_r0x008e2464:
  if (uVar27 < param_5) {
    iVar26 = 0;
    do {
      if (local_48 == uVar27) goto LAB_008e28cc;
      if (*(int *)((int)piVar14 - iVar26) != 0) {
        if (uVar16 < param_5) {
          iVar17 = local_68[uVar16 * 2];
          iVar28 = (local_68 + uVar16 * 2)[1];
          if (iVar17 == 0 && iVar28 == 0) {
            dVar32 = INFINITY;
          }
          else {
            dVar32 = (double)FUN_01845d5c(local_7c[uVar16 * 2],(local_7c + uVar16 * 2)[1]);
            dVar31 = (double)FUN_01845d5c(iVar17,iVar28);
            dVar32 = dVar32 / dVar31;
          }
          if (uVar27 < param_5) {
            uVar4 = (uint)((ulonglong)dVar32 >> 0x20);
            if (*piVar18 == 0 && piVar18[1] == 0) {
              dVar31 = INFINITY;
            }
            else {
              dVar30 = (double)FUN_01845d5c();
              dVar31 = (double)FUN_01845d5c(*puVar5,puVar5[1]);
              dVar31 = dVar31 / dVar30;
            }
            uVar10 = (uint)((ulonglong)dVar31 >> 0x20);
            uVar8 = (int)uVar4 >> 0x1f;
            uVar4 = uVar8 >> 1 ^ uVar4;
            uVar9 = (int)uVar10 >> 0x1f;
            uVar10 = uVar9 >> 1 ^ uVar10;
            bVar29 = (((uint)((byte)((longlong)dVar31 >> 0x3f) & 1) << 0x1f | uVar9 >> 1) ^
                     SUB84(dVar31,0)) <
                     (((uint)((byte)((longlong)dVar32 >> 0x3f) & 1) << 0x1f | uVar8 >> 1) ^
                     SUB84(dVar32,0));
            if ((int)(uVar10 - (uVar4 + bVar29)) < 0 !=
                (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)bVar29))) {
              uVar16 = uVar27;
            }
            goto LAB_008e24d8;
          }
          local_70 = (undefined *)uVar27;
        }
        else {
          local_70 = (undefined *)uVar16;
        }
        local_a4 = &DAT_01865884;
        goto LAB_008e295c;
      }
LAB_008e24d8:
      uVar27 = uVar27 + 1;
      iVar26 = iVar26 + -0xc;
      piVar18 = piVar18 + 2;
      puVar5 = puVar5 + 2;
    } while (param_5 != uVar27);
  }
  if (uVar16 < param_5) {
    puVar3 = local_7c + uVar16 * 2;
    uVar27 = local_68[uVar16 * 2];
    uVar4 = uVar27 - *puVar3;
    iVar26 = (local_68 + uVar16 * 2)[1] - (puVar3[1] + (uint)(uVar27 < *puVar3));
    if (uVar16 < local_48) {
      uVar27 = local_4c[uVar16 * 3 + 2];
      if (uVar27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00346742,0x1b,&DAT_01865844);
      }
      puVar19 = (uint *)local_4c[uVar16 * 3 + 1];
      uVar8 = *puVar19;
      if (uVar8 < local_60) {
        if (uVar24 <= uVar8) {
          local_70 = (undefined *)uVar8;
          goto LAB_008e29c4;
        }
        uVar9 = 0;
        if (uVar27 != 1) {
          uVar9 = *(uint *)(iVar6 + uVar8 * 4);
          uVar11 = *(uint *)(iVar7 + uVar8 * 4);
          uVar21 = uVar4 + uVar9;
          uVar10 = -(iVar26 + (uint)CARRY4(uVar4,uVar9) + (uint)(uVar11 < uVar21));
          uVar8 = (int)uVar10 >> 0x1f;
          uVar21 = uVar11 - uVar21 ^ uVar8;
          uVar11 = 0;
          uVar9 = 0;
          iVar17 = (uVar10 ^ uVar8) - (uVar8 + (uVar21 < uVar8));
          uVar10 = uVar21 - uVar8;
          do {
            uVar8 = puVar19[uVar11 * 2 + 2];
            if (local_60 <= uVar8) {
LAB_008e28e8:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar8,local_60,local_a8);
            }
            if (uVar24 <= uVar8) {
              local_a8 = &DAT_0186681c;
              local_60 = uVar24;
              goto LAB_008e28e8;
            }
            uVar11 = uVar11 + 1;
            uVar21 = *(uint *)(iVar6 + uVar8 * 4);
            uVar22 = uVar4 + uVar21;
            uVar12 = *(uint *)(iVar7 + uVar8 * 4);
            uVar21 = -(iVar26 + (uint)CARRY4(uVar4,uVar21) + (uint)(uVar12 < uVar22));
            uVar8 = (int)uVar21 >> 0x1f;
            uVar12 = uVar12 - uVar22 ^ uVar8;
            uVar22 = uVar12 - uVar8;
            iVar23 = (uVar21 ^ uVar8) - (uVar8 + (uVar12 < uVar8));
            iVar28 = iVar23;
            uVar21 = uVar22;
            if ((int)(iVar17 - (iVar23 + (uint)(uVar10 < uVar22))) < 0 !=
                (SBORROW4(iVar17,iVar23) != SBORROW4(iVar17 - iVar23,(uint)(uVar10 < uVar22)))) {
              iVar28 = iVar17;
              uVar21 = uVar10;
            }
            uVar8 = uVar22 - uVar10;
            if ((int)(iVar23 - (iVar17 + (uint)(uVar22 < uVar10))) < 0 !=
                (SBORROW4(iVar23,iVar17) != SBORROW4(iVar23 - iVar17,(uint)(uVar22 < uVar10)))) {
              uVar9 = uVar11;
            }
            iVar17 = iVar28;
            uVar10 = uVar21;
          } while ((uVar27 - 1 & 0x1fffffff) != uVar11);
        }
        if (uVar27 <= uVar9) {
          FUN_006028e8(uVar9,uVar27,uVar8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x8e2994);
          (*pcVar1)();
        }
        puVar20 = puVar19 + uVar9 * 2;
        uVar9 = *puVar20;
        uVar4 = puVar19[(uVar27 - 1) * 2];
        uVar10 = puVar20[1];
        uVar8 = (puVar19 + (uVar27 - 1) * 2)[1];
        local_4c[uVar16 * 3 + 2] = uVar27 - 1;
        *puVar20 = uVar4;
        puVar20[1] = uVar8;
        if (uVar9 < local_60) {
          if (uVar24 <= uVar9) {
            local_70 = (undefined *)uVar9;
LAB_008e29c4:
            local_a4 = &DAT_0186681c;
            local_5c = uVar24;
LAB_008e295c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(local_70,local_5c,local_a4);
          }
          uVar27 = *(uint *)(iVar6 + uVar9 * 4);
          uVar4 = *(uint *)(iVar7 + uVar9 * 4);
          uVar8 = *puVar3;
          uVar16 = uVar4 - uVar27;
          *puVar3 = uVar16 + uVar8;
          puVar3[1] = (puVar3[1] - (uint)(uVar4 < uVar27)) + (uint)CARRY4(uVar16,uVar8);
          if (uVar25 == local_40) {
            FUN_008f55dc(&local_40);
            local_84 = (uint)local_3c;
          }
          puVar3 = (uint *)(local_84 + uVar25 * 8);
          *puVar3 = uVar9;
          local_38 = uVar25 + 1;
          puVar3[1] = uVar10;
          goto LAB_008e2420;
        }
        local_70 = (undefined *)uVar9;
      }
      else {
        local_70 = (undefined *)uVar8;
      }
      local_a4 = &DAT_0186680c;
      local_5c = local_60;
      goto LAB_008e295c;
    }
    local_5c = local_48;
    local_ac = &DAT_01865834;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar16,local_5c,local_ac);
}

