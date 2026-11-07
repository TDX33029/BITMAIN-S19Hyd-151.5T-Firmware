// FUN_013b3b10 @ 013b3b10 size=5844 calls_out=25 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x013b5568) */
/* WARNING: Removing unreachable block (ram,0x013b594c) */
/* WARNING: Removing unreachable block (ram,0x013b5570) */
/* WARNING: Removing unreachable block (ram,0x013b5530) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013b3b10(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int ***pppiVar7;
  int *piVar8;
  int iVar9;
  int ****ppppiVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  code *pcVar15;
  undefined4 *puVar16;
  int ****ppppiVar17;
  int **ppiVar18;
  uint uVar19;
  undefined *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  int ***pppiVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int ***pppiVar32;
  int ***pppiVar33;
  uint uVar34;
  undefined4 uVar35;
  uint uVar36;
  int *piVar37;
  uint uVar38;
  int *piVar39;
  uint uVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
  longlong lVar44;
  uint local_4f4;
  int local_4ec;
  undefined *local_4e8;
  undefined *local_4e4;
  uint local_4c0;
  int ***local_49c;
  int ****local_48c;
  uint local_488 [4];
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined1 auStack_468 [256];
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  uint local_348;
  uint local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  int *local_334;
  int ****local_330;
  code *local_32c;
  uint local_328;
  int ***local_324;
  uint *local_320;
  int ***local_31c;
  undefined1 local_318;
  int local_317;
  int local_310;
  uint *local_30c;
  int local_308;
  int local_304;
  int local_300;
  uint local_2fc;
  int ****local_2f8;
  code *local_2f4;
  uint local_2f0;
  int local_2ec;
  int local_2e8;
  uint local_2e4;
  int local_2e0;
  int local_2dc;
  uint local_2d8;
  int local_2d4;
  uint local_1f8 [15];
  int local_1bc;
  int ****local_1b8;
  undefined4 *local_1b0;
  int local_1ac;
  int ***local_19c;
  int local_198;
  int ***local_194;
  undefined4 local_190;
  code *local_18c;
  int ****local_188;
  code *local_184;
  int ****local_180;
  int ****local_17c;
  uint local_178;
  uint local_174;
  int local_170;
  int iStack_16c;
  uint local_168;
  int iStack_164;
  uint local_160;
  uint local_15c;
  int local_158;
  undefined4 local_154;
  int ****local_30;
  int **local_2c;
  int ****local_28;
  
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00565ff0,0x41,&DAT_01893880);
  }
  iVar23 = 0;
  local_2f0 = 0;
  local_2f4 = (code *)&DAT_00000004;
  local_2f8 = (int ****)0x0;
  piVar3 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  piVar3[6] = 8;
  *piVar3 = 1;
  piVar3[1] = 1;
  piVar3[2] = 0;
  piVar3[3] = 4;
  piVar3[8] = 0;
  piVar3[9] = 4;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[7] = 0;
  FUN_016dd606(&local_190,0,0x100);
  do {
    *(char *)((int)&local_190 + iVar23) = (char)iVar23;
    iVar23 = iVar23 + 1;
  } while (iVar23 != 0x100);
  uVar35 = 0;
  local_31c = (int ***)0x0;
  local_330 = local_2f8;
  local_32c = local_2f4;
  local_328 = local_2f0;
  local_320 = (uint *)&DAT_00000004;
  local_324 = (int ***)0x0;
  local_344 = 0;
  local_348 = 0;
  local_368 = 0;
  local_364 = 0;
  local_360 = 0;
  local_35c = 0;
  local_358 = 0;
  local_354 = 0;
  local_350 = 0;
  local_34c = 0;
  local_334 = piVar3;
  FUN_016dd1aa(auStack_468,&local_190,0x100);
  local_317 = (uint)*(ushort *)(param_2 + 0xe) << 0x10;
  uVar27 = param_2[6];
  local_318 = *(undefined1 *)((int)param_2 + 0x3a);
  local_338 = 0;
  local_33c = 0;
  local_340 = 0;
  local_308 = 0;
  local_30c = (uint *)&DAT_00000004;
  local_310 = 0;
  local_2fc = 0;
  local_300 = 4;
  local_304 = 0;
  uVar4 = uVar27;
  if (uVar27 != 0) {
    FUN_013c4434(&local_304,0,uVar27,4,4);
    iVar23 = uVar27 - 1;
    puVar11 = (undefined4 *)(local_300 + local_2fc * 4);
    puVar16 = puVar11;
    if (iVar23 != 0) {
      do {
        puVar16 = puVar11 + 1;
        *puVar11 = 0;
        iVar23 = iVar23 + -1;
        puVar11 = puVar16;
      } while (iVar23 != 0);
      local_2fc = uVar27 + local_2fc + -1;
    }
    uVar4 = local_2fc + 1;
    *puVar16 = 0;
  }
  pppiVar32 = (int ***)param_2[9];
  iVar23 = param_2[8];
  bVar43 = (int ***)0x3ffffffe < pppiVar32;
  bVar42 = pppiVar32 == (int ***)0x3fffffff;
  uVar31 = (int)pppiVar32 * 4;
  if (pppiVar32 < (int ***)0x40000000) {
    bVar43 = 0x7ffffffb < uVar31;
    bVar42 = uVar31 == 0x7ffffffc;
  }
  local_348 = param_3;
  local_344 = param_4;
  local_2fc = uVar4;
  if (bVar43 && !bVar42) {
LAB_013b3ce8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar35,uVar31);
  }
  if (uVar31 == 0) {
    puVar5 = (uint *)&DAT_00000004;
    pppiVar28 = (int ***)0x0;
  }
  else {
    puVar5 = (uint *)thunk_FUN_016d4a50(uVar31);
    pppiVar28 = pppiVar32;
    if (puVar5 == (uint *)0x0) {
      uVar35 = 4;
      goto LAB_013b3ce8;
    }
  }
  FUN_016dd1aa(puVar5,iVar23,uVar31);
  if (local_324 != (int ***)0x0) {
    thunk_FUN_016d3fb4(local_320);
  }
  iVar23 = param_2[0xb];
  local_2d4 = 0;
  local_2d8 = 0;
  local_2dc = 4;
  local_2e0 = 0;
  local_2e4 = 0;
  local_2e8 = 8;
  local_2ec = 0;
  local_2f0 = 0;
  local_2f4 = (code *)&DAT_00000004;
  local_2f8 = (int ****)0x0;
  local_324 = pppiVar28;
  local_320 = puVar5;
  local_31c = pppiVar32;
  if (param_2[0xc] != 0) {
    uVar4 = 0;
    iVar6 = iVar23 + param_2[0xc] * 0xc;
    local_4e4 = &DAT_01893df0;
    local_4e8 = &DAT_01893de0;
    do {
      iVar29 = *(int *)(iVar23 + 8);
      uVar31 = uVar4;
      if (iVar29 == 0) {
        pppiVar28 = (int ***)0x80000002;
        local_49c = pppiVar32;
        goto LAB_013b4724;
      }
      pppiVar32 = *(int ****)(iVar23 + 4);
      if (*pppiVar32 != (int **)0x0) {
        pppiVar28 = (int ***)0x80000003;
        local_49c = pppiVar32;
        goto LAB_013b4724;
      }
      FUN_013baffc(&local_2f8,uVar4);
      if (iVar29 != 1) {
        pppiVar7 = pppiVar32 + iVar29 * 2;
        local_49c = (int ***)&DAT_00000001;
        pppiVar28 = pppiVar32 + 2;
        pppiVar33 = pppiVar32;
LAB_013b3e68:
        pppiVar32 = pppiVar28;
        uVar25 = local_2d8;
        iVar29 = local_2dc;
        pcVar15 = local_2f4;
        if (local_2f0 <= uVar4) {
          local_4e4 = &DAT_01893dc0;
          uVar25 = local_2f0;
          goto LAB_013b5b54;
        }
        uVar12 = *(uint *)(local_2f4 + (uVar4 * 2 + 1) * 4);
        uVar13 = uVar12 + 2;
        if (uVar13 < 0x7ffffffe || uVar12 == 0x7ffffffc) {
          ppiVar18 = pppiVar33[2];
          *(uint *)(local_2f4 + (uVar4 * 2 + 1) * 4) = uVar13;
          if (ppiVar18 != (int **)0x0) {
            lVar44 = FUN_011e1508(pppiVar33[2] + 2,pppiVar33[3]);
            pppiVar33 = (int ***)((ulonglong)lVar44 >> 0x20);
            piVar3 = (int *)lVar44;
            if (uVar4 < local_2e4) {
              piVar39 = piVar3 + 2;
              piVar37 = (int *)(local_2e8 + uVar4 * 0x20);
              if (piVar37[3] != 0) {
                local_184 = (code *)(piVar37[5] ^ 0x6c796765);
                local_188 = (int ****)(piVar37[4] ^ 0x6e657261);
                local_17c = (int ****)(piVar37[7] ^ 0x646f7261);
                local_180 = (int ****)(piVar37[6] ^ 0x6e646f6d);
                local_174 = piVar37[7] ^ 0x74656462;
                local_178 = piVar37[6] ^ 0x79746573;
                local_18c = (code *)(piVar37[5] ^ 0x736f6d65);
                local_4ec = 0;
                local_190 = (int ***)(piVar37[4] ^ 0x70736575);
                local_160 = 0;
                local_15c = 0;
                local_158 = 0;
                local_154 = 0;
                FUN_010b4a1c(&local_190,piVar39,pppiVar33);
                local_2c = (int **)CONCAT31(local_2c._1_3_,0xff);
                FUN_010b4a1c(&local_190,&local_2c,1);
                uVar40 = (int)local_17c + (int)local_18c +
                         (uint)CARRY4((uint)local_180,(uint)local_190);
                uVar21 = ((int)local_180 << 0xd | (uint)local_17c >> 0x13) ^
                         (uint)((int)local_180 + (int)local_190);
                uVar19 = ((int)local_17c << 0xd | (uint)local_180 >> 0x13) ^ uVar40;
                uVar30 = local_15c | local_158 << 0x18;
                local_174 = uVar30 ^ local_174;
                local_178 = local_160 ^ local_178;
                uVar12 = local_178 + (int)local_188;
                local_184 = local_184 + CARRY4(local_178,(uint)local_188) + local_174;
                uVar25 = (uint)(local_184 + CARRY4(uVar12,uVar21) + uVar19) ^
                         (uVar19 << 0x11 | uVar21 >> 0xf);
                uVar34 = (local_174 << 0x10 | local_178 >> 0x10) ^ (uint)local_184;
                uVar24 = (local_178 << 0x10 | local_174 >> 0x10) ^ uVar12;
                puVar14 = (undefined1 *)((int)local_180 + (int)local_190) +
                          CARRY4(uVar24,uVar40) + uVar34;
                uVar22 = uVar12 + uVar21 ^ (uVar21 << 0x11 | uVar19 >> 0xf);
                uVar13 = uVar24 + uVar40 ^ local_160;
                uVar41 = uVar13 + uVar22;
                uVar36 = ((uint)puVar14 ^ uVar30) + uVar25 + (uint)CARRY4(uVar13,uVar22);
                uVar30 = uVar36 ^ (uVar25 << 0xd | uVar22 >> 0x13);
                uVar25 = uVar41 ^ (uVar22 << 0xd | uVar25 >> 0x13);
                uVar13 = (uVar34 << 0x15 | uVar24 >> 0xb) ^ (uint)puVar14;
                uVar19 = (uint)(local_184 + CARRY4(uVar12,uVar21) + uVar19) ^ 0xff;
                uVar24 = (uVar24 << 0x15 | uVar34 >> 0xb) ^ uVar24 + uVar40;
                uVar22 = uVar24 + uVar19;
                uVar19 = uVar13 + uVar12 + uVar21 + (uint)CARRY4(uVar24,uVar19);
                uVar38 = uVar30 + uVar19 + (uint)CARRY4(uVar25,uVar22);
                uVar21 = uVar38 ^ (uVar30 << 0x11 | uVar25 >> 0xf);
                uVar30 = uVar25 + uVar22 ^ (uVar25 << 0x11 | uVar30 >> 0xf);
                uVar19 = (uVar13 << 0x10 | uVar24 >> 0x10) ^ uVar19;
                uVar12 = (uVar24 << 0x10 | uVar13 >> 0x10) ^ uVar22;
                uVar24 = uVar12 + uVar36;
                uVar13 = uVar19 + uVar41 + (uint)CARRY4(uVar12,uVar36);
                uVar40 = uVar21 + uVar13 + (uint)CARRY4(uVar30,uVar24);
                uVar41 = (uVar21 << 0xd | uVar30 >> 0x13) ^ uVar40;
                uVar34 = (uVar30 << 0xd | uVar21 >> 0x13) ^ uVar30 + uVar24;
                uVar13 = (uVar19 << 0x15 | uVar12 >> 0xb) ^ uVar13;
                uVar12 = (uVar12 << 0x15 | uVar19 >> 0xb) ^ uVar24;
                uVar19 = uVar12 + uVar38;
                uVar25 = uVar13 + uVar25 + uVar22 + (uint)CARRY4(uVar12,uVar38);
                uVar38 = uVar41 + uVar25 + (uint)CARRY4(uVar34,uVar19);
                uVar36 = (uVar41 << 0x11 | uVar34 >> 0xf) ^ uVar38;
                uVar25 = (uVar13 << 0x10 | uVar12 >> 0x10) ^ uVar25;
                uVar13 = (uVar12 << 0x10 | uVar13 >> 0x10) ^ uVar19;
                uVar21 = uVar13 + uVar40;
                uVar22 = uVar25 + uVar30 + uVar24 + (uint)CARRY4(uVar13,uVar40);
                uVar12 = (uVar13 << 0x15 | uVar25 >> 0xb) ^ uVar21;
                uVar24 = (uVar25 << 0x15 | uVar13 >> 0xb) ^ uVar22;
                uVar40 = uVar12 + uVar38;
                uVar30 = (uVar34 << 0x11 | uVar41 >> 0xf) ^ uVar34 + uVar19;
                uVar25 = uVar24 + uVar34 + uVar19 + (uint)CARRY4(uVar12,uVar38);
                uVar13 = (uVar36 << 0xd | uVar30 >> 0x13) ^
                         uVar36 + uVar22 + (uint)CARRY4(uVar30,uVar21);
                uVar19 = (uVar30 << 0xd | uVar36 >> 0x13) ^ uVar30 + uVar21;
                iVar29 = *piVar37;
                uVar12 = ((uVar40 ^ uVar24 >> 0x10) << 0x15 |
                         ((uVar24 << 0x10 | uVar12 >> 0x10) ^ uVar25) >> 0xb) ^
                         (uVar19 << 0x11 | uVar13 >> 0xf) ^
                         uVar13 + uVar25 + (uint)CARRY4(uVar19,uVar40) ^ uVar19 + uVar40;
                uVar13 = piVar37[1];
                uVar25 = uVar12 >> 0x19;
                do {
                  uVar12 = uVar13 & uVar12;
                  uVar19 = *(uint *)(iVar29 + uVar12);
                  uVar21 = uVar19 ^ uVar25 * 0x1010101;
                  uVar21 = ~uVar21 & 0x80808080 & uVar21 + 0xfefefeff;
                  while (uVar21 != 0) {
                    uVar22 = uVar21 >> 8;
                    uVar24 = uVar21 >> 0x10;
                    uVar30 = uVar21 >> 0x18;
                    uVar34 = uVar21 << 0x18;
                    uVar21 = uVar21 - 1 & uVar21;
                    piVar8 = (int *)(iVar29 + -0xc +
                                    (uVar12 + ((uint)LZCOUNT(uVar34 | (uVar22 & 0xff) << 0x10 |
                                                             (uVar24 & 0xff) << 8 | uVar30) >> 3) &
                                    uVar13) * -0xc);
                    if ((pppiVar33 == (int ***)piVar8[1]) &&
                       (iVar9 = thunk_FUN_016dd50a(piVar39,*piVar8 + 8,pppiVar33), iVar9 == 0)) {
                      uVar35 = 0;
                      if (lVar44 < 0) {
LAB_013b4680:
                    /* WARNING: Subroutine does not return */
                        FUN_00600af4(uVar35,pppiVar33);
                      }
                      if (pppiVar33 == (int ***)0x0) {
                        uVar31 = 1;
                        pppiVar28 = (int ***)0x0;
                      }
                      else {
                        uVar31 = thunk_FUN_016d4a50(pppiVar33);
                        if (uVar31 == 0) {
                          uVar35 = 1;
                          goto LAB_013b4680;
                        }
                        pppiVar28 = pppiVar33;
                      }
                      FUN_016dd1aa(uVar31,piVar39,pppiVar33);
                      DataMemoryBarrier(0xb);
                      do {
                        iVar23 = *piVar3;
                        bVar42 = (bool)hasExclusiveAccess(piVar3);
                      } while (!bVar42);
                      *piVar3 = iVar23 + -1;
                      local_49c = pppiVar33;
                      if (iVar23 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_0143daec(piVar3,pppiVar33);
                      }
                      goto LAB_013b4724;
                    }
                  }
                  if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
                  local_4ec = local_4ec + 4;
                  uVar12 = uVar12 + local_4ec;
                } while( true );
              }
              do {
                iVar29 = *piVar3;
                bVar42 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar42);
              *piVar3 = iVar29 + 1;
              if (iVar29 < 0) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)software_udf(0xfdee,0x13b5c78);
                (*pcVar15)();
              }
              uVar25 = FUN_013c3b20(piVar37[4],piVar37[5],piVar37[6],piVar37[7],lVar44);
              if (piVar37[2] == 0) {
                FUN_013bd228(piVar37,piVar37 + 4);
              }
              puVar5 = (uint *)*piVar37;
              uVar13 = piVar37[1];
              iVar29 = 0;
              bVar42 = false;
              uVar12 = uVar25;
              do {
                uVar12 = uVar13 & uVar12;
                uVar21 = *(uint *)((int)puVar5 + uVar12);
                uVar19 = uVar21 ^ (uVar25 >> 0x19) * 0x1010101;
                uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff;
                if (uVar19 != 0) {
LAB_013b4390:
                  uVar22 = uVar12 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                                   (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >>
                                    3) & uVar13;
                  if ((pppiVar33 != (int ***)puVar5[uVar22 * -3 + -2]) ||
                     (iVar9 = thunk_FUN_016dd50a(piVar39,puVar5[uVar22 * -3 + -3] + 8,pppiVar33),
                     iVar9 != 0)) goto LAB_013b43ec;
                  puVar5[uVar22 * -3 + -1] = (uint)local_49c;
                  DataMemoryBarrier(0xb);
                  do {
                    iVar9 = *piVar3;
                    bVar42 = (bool)hasExclusiveAccess(piVar3);
                  } while (!bVar42);
                  *piVar3 = iVar9 + -1;
                  iVar29 = local_2dc;
                  uVar25 = local_2d8;
                  if (iVar9 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_0143daec(piVar3,pppiVar33);
                    iVar29 = local_2dc;
                    uVar25 = local_2d8;
                  }
                  goto joined_r0x013b450c;
                }
LAB_013b4414:
                uVar19 = uVar21 & 0x80808080;
                if (bVar42) {
LAB_013b4448:
                  if ((uVar19 & uVar21 << 1) != 0) goto LAB_013b45cc;
                  bVar42 = true;
                }
                else {
                  if (uVar19 != 0) {
                    local_4f4 = uVar12 + ((uint)LZCOUNT((uVar21 & 0x80) << 0x18 |
                                                        (uVar19 >> 8 & 0xff) << 0x10 |
                                                        (uVar19 >> 0x10 & 0xff) << 8 |
                                                        uVar19 >> 0x18) >> 3) & uVar13;
                    goto LAB_013b4448;
                  }
                  bVar42 = false;
                }
                iVar29 = iVar29 + 4;
                uVar12 = iVar29 + uVar12;
              } while( true );
            }
            local_4e8 = &DAT_01893dd0;
            uVar25 = local_2e4;
            goto LAB_013b5b34;
          }
          if (local_2d8 <= uVar4) goto LAB_013b5b58;
          piVar3 = (int *)(local_2dc + uVar4 * 0xc);
          iVar9 = piVar3[2];
          if (iVar9 == *piVar3) {
            FUN_013c3fcc(piVar3);
          }
          *(undefined4 *)(piVar3[1] + iVar9 * 8) = 0;
          local_2d4 = local_2d4 + 8;
          piVar3[2] = iVar9 + 1;
          goto LAB_013b4558;
        }
        pppiVar28 = (int ***)0x80000001;
        goto LAB_013b4724;
      }
LAB_013b3e30:
      uVar4 = uVar4 + 1;
      iVar23 = iVar23 + 0xc;
    } while (iVar23 != iVar6);
    if (local_2f0 != 0) {
      iVar23 = local_2f0 << 3;
      uVar4 = local_2f0 * 2;
      uVar31 = 0;
      do {
        if (local_2f0 == uVar31) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01893d70);
        }
        pcVar15 = local_2f4 + uVar31 * 8;
        uVar25 = *(uint *)(pcVar15 + 4);
        if ((CARRY4(uVar25,uVar4)) || (0x7ffffffe < uVar25 + uVar4)) {
          uVar4 = 0;
          pppiVar28 = (int ***)0x80000001;
          local_49c = (int ***)((uVar25 - *(int *)pcVar15 >> 1) + 1);
LAB_013b4724:
          FUN_013bb358(&local_2f8);
          *param_1 = 0x23;
          param_1[2] = pppiVar28;
          param_1[3] = uVar31;
          param_1[4] = local_49c;
          param_1[5] = uVar4;
          if (local_304 != 0) {
            thunk_FUN_016d3fb4(local_300);
          }
          if (local_310 != 0) {
            thunk_FUN_016d3fb4(local_30c);
          }
          FUN_013b60a8(auStack_468);
          return;
        }
        pppiVar32 = (int ***)(*(int *)pcVar15 + uVar4);
        *(uint *)(pcVar15 + 4) = uVar25 + uVar4;
        if ((int ***)0x7ffffffe < pppiVar32) {
          local_18c = (code *)0x0;
          local_190 = pppiVar32;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_190,&DAT_01893e30,&DAT_01893db0);
        }
        *(int ****)(local_2f4 + uVar31 * 8) = pppiVar32;
        uVar31 = uVar31 + 1;
        iVar23 = iVar23 + -8;
      } while (iVar23 != 0);
    }
  }
  local_188 = local_2f8;
  local_184 = local_2f4;
  local_180 = (int ****)local_2f0;
  local_17c = (int ****)local_2ec;
  local_178 = local_2e8;
  local_174 = local_2e4;
  local_170 = local_2e0;
  iStack_16c = local_2dc;
  local_168 = local_2d8;
  iStack_164 = local_2d4;
  local_18c = (code *)0x1;
  local_190 = (int ***)&DAT_00000001;
  piVar3 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *piVar3 = (int)local_190;
  piVar3[1] = (int)local_18c;
  piVar3[2] = (int)local_188;
  piVar3[3] = (int)local_184;
  piVar3[4] = (int)local_180;
  piVar3[5] = (int)local_17c;
  piVar3[6] = local_178;
  piVar3[7] = local_174;
  piVar3[8] = local_170;
  piVar3[9] = iStack_16c;
  piVar3[10] = local_168;
  piVar3[0xb] = iStack_164;
  DataMemoryBarrier(0xb);
  do {
    iVar23 = *local_334;
    bVar42 = (bool)hasExclusiveAccess(local_334);
  } while (!bVar42);
  *local_334 = iVar23 + -1;
  if (iVar23 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(local_334);
  }
  piVar37 = (int *)param_2[5];
  local_334 = piVar3;
  if (piVar37 != piVar37 + uVar27 * 4) {
                    /* WARNING: Could not recover jumptable at 0x013b48cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_013b48d0 + *(int *)(&DAT_013b48d0 + *piVar37 * 4)))();
    return;
  }
  if (uVar27 == 0) {
    iVar23 = 1;
    local_4c0 = 0;
  }
  else {
    uVar35 = 1;
    iVar23 = FUN_016d38c8(uVar27,1);
    if (iVar23 == 0) {
      uVar31 = uVar27;
      goto LAB_013b3ce8;
    }
    local_4c0 = uVar27;
  }
  if (local_308 != 0) {
    puVar20 = &DAT_01893890;
    puVar5 = local_30c;
    do {
      uVar31 = *puVar5;
      uVar4 = uVar31;
      if (uVar27 <= uVar31) goto LAB_013b5908;
      if (*(char *)(iVar23 + uVar31) != '\x01') {
        uVar25 = puVar5[1];
        uVar4 = uVar25;
        if (uVar25 < uVar27) {
          do {
            piVar3 = piVar37 + uVar4 * 4;
            iVar6 = *piVar3;
            if (iVar6 == 7 || iVar6 == 6) {
              if (piVar3[3] != 1) goto LAB_013b4fe8;
              uVar4 = *(uint *)piVar3[2];
            }
            else {
              if (iVar6 != 0) goto LAB_013b4fe8;
              uVar4 = piVar3[1];
            }
            if (uVar27 <= uVar4) {
              uVar25 = uVar4;
              break;
            }
          } while( true );
        }
        puVar20 = &DAT_018938a0;
        uVar4 = uVar25;
        goto LAB_013b5908;
      }
LAB_013b4f64:
      puVar5 = puVar5 + 2;
    } while (puVar5 != local_30c + local_308 * 2);
  }
  if (local_328 != 0) {
                    /* WARNING: Could not recover jumptable at 0x013b50f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_013b50f8 + *(int *)(&DAT_013b50f8 + *(int *)local_32c * 4)))
              (*(int *)(&DAT_013b50f8 + *(int *)local_32c * 4),local_2fc,&UNK_01894238);
    return;
  }
  if (local_2fc <= local_348) {
    puVar20 = &DAT_01894188;
    uVar4 = local_348;
LAB_013b59c8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,local_2fc,puVar20);
  }
  local_348 = *(uint *)(local_300 + local_348 * 4);
  if (local_2fc <= local_344) {
    puVar20 = &DAT_01894198;
    uVar4 = local_344;
    goto LAB_013b59c8;
  }
  local_344 = *(uint *)(local_300 + local_344 * 4);
  if (local_31c != (int ***)0x0) {
    iVar6 = (int)local_31c << 2;
    puVar20 = &DAT_018941a8;
    puVar5 = local_320;
    do {
      uVar4 = *puVar5;
      if (local_2fc <= uVar4) goto LAB_013b59c8;
      iVar6 = iVar6 + -4;
      *puVar5 = *(uint *)(local_300 + uVar4 * 4);
      puVar5 = puVar5 + 1;
    } while (iVar6 != 0);
  }
  FUN_016dd1aa(&local_2f8,auStack_468,0x158);
  FUN_016dd606(&local_190,0,0x100);
  iVar6 = 0;
  uVar4 = 0;
  do {
    uVar27 = uVar4 >> 3 & 0x10;
    local_488[3] = *(undefined4 *)((int)local_1f8 + uVar27 + 0xc);
    local_488[1] = *(undefined4 *)((int)local_1f8 + uVar27 + 4);
    local_46c = 0;
    local_470 = 0;
    local_474 = 0;
    local_478 = 0;
    local_488[0] = *(uint *)((int)local_1f8 + uVar27);
    local_488[2] = *(undefined4 *)((int)local_1f8 + uVar27 + 8);
    if ((*(uint *)((int)local_488 + ((uVar4 & 0x60) >> 3)) >> (uVar4 & 0x1f) & 1) != 0) {
      if (iVar6 == 0xff) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01892ed0);
      }
      iVar6 = iVar6 + 1;
    }
    uVar27 = uVar4 + 1;
    *(char *)((int)&local_190 + uVar4 + 1) = (char)iVar6;
    uVar4 = uVar27;
  } while (uVar27 != 0xff);
  FUN_016dd1aa(&local_2f8,&local_190,0x100);
  local_48c = local_1b8;
  local_194 = (int ***)0x0;
  local_198 = 4;
  local_19c = (int ***)0x0;
  local_178 = 0;
  local_17c = (int ****)0x0;
  local_180 = (int ****)0x4;
  local_184 = (code *)0x0;
  local_188 = (int ****)0x0;
  local_18c = (code *)&DAT_00000004;
  local_190 = (int ***)0x0;
  if (local_1b8 == (int ****)0x0) {
    local_188 = local_1b8;
  }
  else {
    FUN_013c4434(&local_190,0,local_1b8,4,4);
    ppppiVar17 = local_17c;
    iVar6 = (int)local_48c - 1;
    puVar5 = (uint *)((int)local_18c + local_188 * 4);
    puVar26 = puVar5;
    if (iVar6 != 0) {
      do {
        puVar26 = puVar5 + 1;
        *puVar5 = 0;
        iVar6 = iVar6 + -1;
        puVar5 = puVar26;
      } while (iVar6 != 0);
      local_188 = (int ****)((int)local_48c + (int)local_188 + -1);
    }
    local_188 = (int ****)((int)local_188 + 1);
    *puVar26 = 0;
    if (local_17c < local_48c) {
      uVar4 = (int)local_48c - (int)local_17c;
      if ((uint)((int)local_184 - (int)local_17c) < uVar4) {
        FUN_013c4434(&local_184,local_17c,uVar4,4,4);
        puVar11 = (undefined4 *)((int)local_180 + (int)local_17c * 4);
      }
      else {
        puVar11 = (undefined4 *)((int)local_180 + (int)local_17c * 4);
      }
      ppppiVar10 = local_17c;
      if (1 < uVar4) {
        iVar6 = ~(uint)ppppiVar17 + (int)local_48c;
        puVar16 = puVar11;
        do {
          puVar11 = puVar16 + 1;
          *puVar16 = 0;
          iVar6 = iVar6 + -1;
          puVar16 = puVar11;
        } while (iVar6 != 0);
        ppppiVar10 = (int ****)((int)local_17c + (uVar4 - 1));
      }
      local_48c = (int ****)((int)ppppiVar10 + 1);
      *puVar11 = 0;
      goto LAB_013b5454;
    }
  }
LAB_013b5454:
  ppppiVar10 = local_180;
  pcVar2 = local_184;
  ppppiVar17 = local_188;
  pcVar15 = local_18c;
  pppiVar32 = local_190;
  if (local_1ac != 0) {
    puVar11 = local_1b0;
    do {
      pppiVar28 = local_194;
      puVar16 = puVar11 + 1;
      uVar35 = *puVar11;
      if (local_194 == local_19c) {
        FUN_013c1038(&local_19c);
        *(undefined4 *)(local_198 + (int)pppiVar28 * 4) = uVar35;
LAB_013b5514:
        local_30 = *(int *****)(local_198 + (int)pppiVar28 * 4);
        local_194 = pppiVar28;
        if (local_48c <= local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_30,local_48c,&DAT_01894268);
        }
        local_2c = (int **)0x0;
        if (ppppiVar17 == (int ****)0x0) {
          local_184 = FUN_007883b8;
          local_18c = FUN_007883b8;
          local_190 = &local_2c;
          local_17c = (int ****)FUN_013bc8e0;
          local_180 = (int ****)&local_30;
          local_188 = (int ****)&local_28;
          local_28 = ppppiVar17;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0058f9b7,&local_190,&DAT_01894248);
        }
        *(int *****)pcVar15 = local_30;
        *(undefined4 *)((int)ppppiVar10 + (int)local_30 * 4) = 0;
        if (local_1b8 <= local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_30,local_1b8,&DAT_018941b8);
        }
        piVar3 = (int *)(local_1bc + (int)local_30 * 0x14);
                    /* WARNING: Could not recover jumptable at 0x013b55b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_013b55b8 + *(int *)(&DAT_013b55b8 + *piVar3 * 4)))(piVar3,local_19c);
        return;
      }
      *(undefined4 *)(local_198 + (int)local_194 * 4) = uVar35;
      if (local_194 != (int ***)0xffffffff) goto LAB_013b5514;
      local_194 = (int ***)0x0;
      puVar11 = puVar16;
    } while (puVar16 != local_1b0 + local_1ac);
    local_194 = (int ***)0x0;
  }
  FUN_016dd1aa(&local_188,&local_2f8,0x158);
  local_18c = (code *)0x1;
  local_190 = (int ***)0x1;
  iVar6 = thunk_FUN_016d4a50(0x160);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x160);
  }
  FUN_016dd1aa(iVar6,&local_190,0x160);
  if (pppiVar32 != (int ***)0x0) {
    thunk_FUN_016d3fb4(pcVar15);
  }
  if (pcVar2 != (code *)0x0) {
    thunk_FUN_016d3fb4(ppppiVar10);
  }
  if (local_19c != (int ***)0x0) {
    thunk_FUN_016d3fb4(local_198);
  }
  *param_1 = 0x2a;
  param_1[1] = iVar6;
  if (local_4c0 != 0) {
    thunk_FUN_016d3fb4(iVar23);
  }
  if (local_304 != 0) {
    thunk_FUN_016d3fb4(local_300);
  }
  if (local_310 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_30c);
  return;
LAB_013b43ec:
  uVar19 = uVar19 - 1 & uVar19;
  if (uVar19 == 0) goto LAB_013b4414;
  goto LAB_013b4390;
LAB_013b45cc:
  uVar19 = (uint)*(char *)((int)puVar5 + local_4f4);
  uVar12 = local_4f4;
  if (-1 < (int)uVar19) {
    uVar12 = *puVar5 & 0x80808080;
    uVar12 = LZCOUNT((*puVar5 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
    uVar19 = (uint)*(byte *)((int)puVar5 + (uVar12 >> 3));
    uVar12 = uVar12 >> 3;
  }
  iVar29 = piVar37[3];
  iVar9 = piVar37[2];
  bVar1 = (byte)(uVar25 >> 0x19);
  *(byte *)((int)puVar5 + uVar12) = bVar1;
  piVar37[2] = iVar9 - (uVar19 & 1);
  piVar37[3] = iVar29 + 1;
  *(byte *)((int)puVar5 + (uVar13 & uVar12 - 4) + 4) = bVar1;
  *(longlong *)(puVar5 + uVar12 * -3 + -3) = lVar44;
  puVar5[uVar12 * -3 + -1] = (uint)local_49c;
  iVar29 = local_2dc;
  uVar25 = local_2d8;
joined_r0x013b450c:
  local_2dc = iVar29;
  local_2d8 = uVar25;
  if (uVar25 <= uVar4) {
LAB_013b5b34:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,uVar25,local_4e8);
  }
  piVar3 = (int *)(iVar29 + uVar4 * 0xc);
  iVar9 = piVar3[2];
  if (iVar9 == *piVar3) {
    FUN_013c3fcc(piVar3);
  }
  *(longlong *)(piVar3[1] + iVar9 * 8) = lVar44;
  piVar3[2] = iVar9 + 1;
  local_2d4 = local_2d4 + (int)pppiVar33 * 2 + 0x14;
LAB_013b4558:
  local_28 = (int ****)((int)local_49c + 1);
  uVar12 = *(int *)(pcVar15 + uVar4 * 8 + 4) - *(int *)(pcVar15 + uVar4 * 8);
  local_190 = (int ***)((uVar12 >> 1) + 1);
  if (local_49c == (int ***)(uVar12 >> 1)) {
    local_190 = (int ***)local_28;
    if (uVar25 <= uVar4) {
      local_4e4 = &DAT_01893e10;
LAB_013b5b54:
LAB_013b5b58:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar25,local_4e4);
    }
    local_19c = *(int ****)(iVar29 + uVar4 * 0xc + 8);
    if (local_28 == (int ****)local_19c) {
      pppiVar28 = pppiVar32 + 2;
      pppiVar33 = pppiVar32;
      local_49c = (int ***)local_28;
      if (pppiVar32 + 2 == pppiVar7) goto LAB_013b3e30;
      goto LAB_013b3e68;
    }
    ppppiVar10 = &local_19c;
    ppppiVar17 = (int ****)&local_190;
  }
  else {
    ppppiVar17 = (int ****)&local_28;
    ppppiVar10 = (int ****)&local_190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb3aac(0,ppppiVar17,ppppiVar10,0);
LAB_013b4fe8:
  if (uVar4 < local_2fc) {
    if (uVar31 < local_2fc) {
      *(undefined4 *)(local_300 + uVar31 * 4) = *(undefined4 *)(local_300 + uVar4 * 4);
      *(undefined1 *)(iVar23 + uVar31) = 1;
      do {
        piVar3 = piVar37 + uVar25 * 4;
        iVar6 = *piVar3;
        if (iVar6 == 7 || iVar6 == 6) {
          if (piVar3[3] != 1) goto LAB_013b4f64;
          puVar26 = (uint *)piVar3[2];
        }
        else {
          if (iVar6 != 0) goto LAB_013b4f64;
          puVar26 = (uint *)(piVar3 + 1);
        }
        if (local_2fc <= uVar25) {
          puVar20 = &DAT_018938e0;
          uVar27 = local_2fc;
          uVar4 = uVar25;
          goto LAB_013b5908;
        }
        uVar31 = *puVar26;
        *(undefined4 *)(local_300 + uVar25 * 4) = *(undefined4 *)(local_300 + uVar4 * 4);
        if (uVar27 <= uVar25) {
          puVar20 = &DAT_018938f0;
          uVar4 = uVar25;
          goto LAB_013b5908;
        }
        *(undefined1 *)(iVar23 + uVar25) = 1;
        uVar25 = uVar31;
        if (uVar27 <= uVar31) {
          puVar20 = &DAT_018938d0;
          uVar4 = uVar31;
          goto LAB_013b5908;
        }
      } while( true );
    }
    puVar20 = &DAT_018938c0;
    uVar27 = local_2fc;
    uVar4 = uVar31;
  }
  else {
    puVar20 = &DAT_018938b0;
    uVar27 = local_2fc;
  }
LAB_013b5908:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar4,uVar27,puVar20);
}

