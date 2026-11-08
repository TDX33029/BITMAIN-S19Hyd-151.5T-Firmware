// FUN_00bbbbb0 @ 00bbbbb0 size=2092 calls_out=5 calls_in=1
// strings: 

void FUN_00bbbbb0(uint *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 uVar26;
  int *piVar27;
  uint uVar28;
  int iVar29;
  undefined4 uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  bool bVar38;
  bool bVar39;
  undefined8 uVar40;
  int local_c4;
  uint local_bc;
  uint local_b4;
  int local_b0;
  uint local_a4;
  undefined4 local_a0;
  uint local_84;
  uint local_78;
  uint local_74;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar35 = *(uint *)(param_2 + 8);
  bVar39 = 0x1ffffffe < uVar35;
  bVar38 = uVar35 == 0x1fffffff;
  uVar31 = uVar35 * 8;
  if (uVar35 < 0x20000000) {
    bVar39 = 0x7ffffffb < uVar31;
    bVar38 = uVar31 == 0x7ffffffc;
  }
  if (bVar39 && !bVar38) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar31);
  }
  uVar26 = 0;
  if (uVar31 == 0) {
    uVar3 = 4;
    uVar7 = 1;
    uVar31 = 0;
  }
  else {
    puVar22 = *(undefined4 **)(param_2 + 4);
    uVar3 = thunk_FUN_016d4a50(uVar31);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar31);
    }
    uVar7 = (uint)(uVar35 == 0);
    if (uVar35 != 0) {
      uVar4 = 0;
      do {
        bVar38 = uVar31 != 0;
        if (bVar38) {
          uVar20 = puVar22[1];
          puVar12 = (undefined4 *)(uVar3 + uVar4 * 8);
          *puVar12 = *puVar22;
          uVar31 = uVar31 - 8;
          puVar22 = puVar22 + 2;
          uVar4 = uVar4 + 1;
          puVar12[1] = uVar20;
        }
      } while (bVar38 && uVar35 != uVar4);
    }
    uVar31 = uVar35;
  }
  uVar4 = *(uint *)(param_2 + 0x14);
  iVar25 = uVar4 * 0x3c;
  if (0x2222222 < uVar4) {
LAB_00bbbc70:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar26,iVar25);
  }
  if (iVar25 == 0) {
    uVar13 = 4;
    uVar11 = 0;
  }
  else {
    piVar27 = *(int **)(param_2 + 0x10);
    uVar40 = thunk_FUN_016d4a50(iVar25);
    uVar6 = (uint)((ulonglong)uVar40 >> 0x20);
    uVar13 = (uint)uVar40;
    if (uVar13 == 0) {
      uVar26 = 4;
      goto LAB_00bbbc70;
    }
    uVar11 = uVar4;
    if (uVar4 != 0) {
      piVar23 = piVar27 + uVar4 * 0xf;
      iVar25 = 0;
      uVar10 = uVar4;
      puVar19 = param_1;
      do {
        if (piVar27 == piVar23) break;
        uVar14 = piVar27[7];
        uVar26 = 0;
        bVar39 = 0x3ffffffe < uVar14;
        bVar38 = uVar14 == 0x3fffffff;
        if (uVar14 < 0x40000000) {
          uVar7 = uVar14 << 2;
          bVar39 = 0x7ffffffb < uVar7;
          bVar38 = uVar7 == 0x7ffffffc;
        }
        if (bVar39 && !bVar38) {
LAB_00bbc38c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar26,uVar6);
        }
        iVar32 = piVar27[6];
        uVar2 = *(undefined1 *)((int)piVar27 + 0x39);
        uVar5 = 0;
        if (uVar7 == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = thunk_FUN_016d4a50(uVar7);
          if (uVar6 == 0) {
            uVar26 = 4;
            uVar6 = uVar7;
            goto LAB_00bbc38c;
          }
          uVar5 = uVar14;
        }
        FUN_016dd1aa(uVar6,iVar32,uVar7);
        if (*piVar27 == 1) {
          local_40 = piVar27[1];
          local_3c = piVar27[2];
          local_38 = piVar27[3];
          local_34 = piVar27[4];
        }
        local_84 = (uint)(*piVar27 == 1);
        uVar7 = piVar27[10];
        if (0xaaaaaaa < uVar7) {
          uVar26 = 0;
LAB_00bbc308:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar26,local_78);
        }
        uVar37 = uVar7 * 0xc;
        local_a0 = 0;
        if (uVar37 == 0) {
          local_78 = 4;
LAB_00bbbf68:
          uVar37 = 0;
        }
        else {
          iVar32 = piVar27[9];
          local_78 = thunk_FUN_016d4a50(uVar37);
          if (local_78 == 0) {
            uVar26 = 4;
            local_78 = uVar37;
            goto LAB_00bbc308;
          }
          if (uVar7 == 0) goto LAB_00bbbf68;
          iVar15 = iVar32 + uVar7 * 0xc;
          uVar37 = local_74;
          iVar17 = 0;
          local_a4 = uVar7;
          do {
            local_74 = uVar37;
            if (iVar32 == iVar15) break;
            uVar28 = *(uint *)(iVar32 + 8);
            if (0x5555555 < uVar28) {
              uVar26 = 0;
LAB_00bbc318:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar26,uVar37);
            }
            uVar37 = uVar28 * 0x18;
            if (uVar37 == 0) {
              local_b4 = 0;
              local_74 = 4;
            }
            else {
              puVar22 = *(undefined4 **)(iVar32 + 4);
              local_74 = thunk_FUN_016d4a50();
              if (local_74 == 0) {
                uVar26 = 4;
                goto LAB_00bbc318;
              }
              if (uVar28 == 0) {
                local_b4 = 0;
              }
              else {
                iVar18 = 0;
                puVar12 = puVar22;
                uVar37 = uVar28;
                do {
                  if (puVar12 == puVar22 + uVar28 * 6) break;
                  piVar21 = (int *)*puVar12;
                  uVar37 = uVar37 - 1;
                  do {
                    iVar29 = *piVar21;
                    bVar38 = (bool)hasExclusiveAccess(piVar21);
                  } while (!bVar38);
                  *piVar21 = iVar29 + 1;
                  if (iVar29 < 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)software_udf(0xfdee,0xbbc3e0);
                    (*pcVar1)();
                  }
                  uVar26 = puVar12[1];
                  puVar24 = (undefined4 *)(local_74 + iVar18 * 0x18);
                  *puVar24 = piVar21;
                  puVar24[1] = uVar26;
                  uVar26 = puVar12[5];
                  uVar20 = puVar12[3];
                  uVar30 = puVar12[4];
                  puVar24[2] = puVar12[2];
                  puVar24[3] = uVar20;
                  puVar24[4] = uVar30;
                  puVar24[5] = uVar26;
                  iVar18 = iVar18 + 1;
                  puVar12 = puVar12 + 6;
                } while (uVar37 != 0);
                local_b4 = uVar28;
              }
            }
            local_a4 = local_a4 - 1;
            iVar32 = iVar32 + 0xc;
            puVar16 = (uint *)(local_78 + iVar17 * 0xc);
            *puVar16 = local_b4;
            puVar16[1] = local_74;
            puVar16[2] = uVar28;
            uVar37 = local_74;
            iVar17 = iVar17 + 1;
          } while (local_a4 != 0);
          uVar37 = uVar7;
        }
        uVar28 = piVar27[0xd];
        if (0xaaaaaaa < uVar28) {
LAB_00bbc3d4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_a0,puVar19);
        }
        puVar19 = (uint *)(uVar28 * 0xc);
        if (puVar19 == (uint *)0x0) {
          puVar16 = (uint *)&DAT_00000004;
LAB_00bbc158:
          uVar36 = 0;
        }
        else {
          iVar32 = piVar27[0xc];
          puVar16 = (uint *)thunk_FUN_016d4a50(puVar19);
          if (puVar16 == (uint *)0x0) {
            local_a0 = 4;
            goto LAB_00bbc3d4;
          }
          if (uVar28 == 0) goto LAB_00bbc158;
          iVar17 = iVar32 + uVar28 * 0xc;
          iVar15 = 0;
          uVar36 = uVar28;
          do {
            if (iVar32 == iVar17) break;
            uVar33 = *(uint *)(iVar32 + 8);
            if (0xaaaaaaa < uVar33) {
              uVar26 = 0;
LAB_00bbc338:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar26,local_bc);
            }
            local_bc = uVar33 * 0xc;
            uVar8 = 0;
            if (local_bc == 0) {
              local_bc = 4;
            }
            else {
              local_b0 = *(int *)(iVar32 + 4);
              uVar9 = thunk_FUN_016d4a50(local_bc);
              if (uVar9 == 0) {
                uVar26 = 4;
                goto LAB_00bbc338;
              }
              if (uVar33 == 0) {
                uVar8 = 0;
                local_bc = uVar9;
              }
              else {
                uVar8 = 0;
                uVar34 = 0;
                do {
                  if (local_bc == uVar8) break;
                  iVar18 = *(int *)(local_b0 + 8);
                  if (iVar18 < 0) {
                    uVar26 = 0;
LAB_00bbc344:
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(uVar26,local_c4);
                  }
                  uVar26 = *(undefined4 *)(local_b0 + 4);
                  if (iVar18 == 0) {
                    local_c4 = 1;
                    iVar29 = 0;
                  }
                  else {
                    local_c4 = thunk_FUN_016d4a50(iVar18);
                    iVar29 = iVar18;
                    if (local_c4 == 0) {
                      uVar26 = 1;
                      local_c4 = iVar18;
                      goto LAB_00bbc344;
                    }
                  }
                  local_b0 = local_b0 + 0xc;
                  uVar34 = uVar34 + 1;
                  FUN_016dd1aa(local_c4,uVar26);
                  piVar21 = (int *)(uVar9 + uVar8);
                  *piVar21 = iVar29;
                  uVar8 = uVar8 + 0xc;
                  piVar21[1] = local_c4;
                  piVar21[2] = iVar18;
                } while (uVar33 != uVar34);
                uVar8 = uVar33;
                local_bc = uVar9;
              }
            }
            uVar36 = uVar36 - 1;
            puVar19 = puVar16 + iVar15 * 3;
            *puVar19 = uVar8;
            iVar15 = iVar15 + 1;
            iVar32 = iVar32 + 0xc;
            puVar19[1] = local_bc;
            puVar19[2] = uVar33;
          } while (uVar36 != 0);
          uVar36 = uVar28;
        }
        iVar32 = piVar27[0xe];
        uVar10 = uVar10 - 1;
        piVar27 = piVar27 + 0xf;
        puVar19 = (uint *)(uVar13 + iVar25 * 0x3c);
        *puVar19 = local_84;
        *(undefined1 *)((int)puVar19 + 0x39) = uVar2;
        *(char *)(puVar19 + 0xe) = (char)iVar32;
        puVar19[9] = local_78;
        puVar19[2] = local_3c;
        puVar19[10] = uVar7;
        puVar19[0xb] = uVar36;
        puVar19[0xc] = (uint)puVar16;
        puVar19[0xd] = uVar28;
        puVar19[5] = uVar5;
        puVar19[7] = uVar14;
        puVar19[4] = local_34;
        puVar19[8] = uVar37;
        puVar19[1] = local_40;
        puVar19[3] = local_38;
        puVar19[6] = uVar6;
        iVar25 = iVar25 + 1;
        uVar7 = local_38;
        puVar19 = puVar16;
      } while (uVar10 != 0);
    }
  }
  iVar25 = *(int *)(param_2 + 0x18);
  piVar27 = (int *)0x0;
  if (iVar25 != 0) {
    piVar27 = (int *)thunk_FUN_016d4a50(0x28);
    if (piVar27 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x28);
    }
    uVar26 = *(undefined4 *)(iVar25 + 4);
    iVar32 = *(int *)(iVar25 + 8);
    if (iVar32 == 0) {
      iVar17 = 1;
    }
    else {
      iVar17 = thunk_FUN_016d4a50(iVar32);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar32);
      }
    }
    FUN_016dd1aa(iVar17,uVar26,iVar32);
    FUN_00bbbbb0(&local_40,iVar25 + 0xc);
    piVar27[3] = local_40;
    piVar27[4] = local_3c;
    piVar27[5] = local_38;
    piVar27[6] = local_34;
    piVar27[7] = iStack_30;
    piVar27[8] = iStack_2c;
    piVar27[9] = iStack_28;
    *piVar27 = iVar32;
    piVar27[1] = iVar17;
    piVar27[2] = iVar32;
  }
  *param_1 = uVar31;
  param_1[1] = uVar3;
  param_1[2] = uVar35;
  param_1[3] = uVar11;
  param_1[4] = uVar13;
  param_1[5] = uVar4;
  param_1[6] = (uint)piVar27;
  return;
}

