// FUN_005eddbc @ 005eddbc size=1564 calls_out=11 calls_in=2
// strings: 

void FUN_005eddbc(int param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  undefined *local_58;
  uint local_54;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar16 = *(uint *)(param_1 + 0x2fc);
  local_3c = *(uint *)(param_1 + 0x300);
  if (local_3c <= uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0033d50e,0x2f,&DAT_01856c78);
  }
  if (local_3c != 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&DAT_00567910,&local_3c,&DAT_0033d53d,0x53,&DAT_01856cb8);
  }
  uVar13 = *(uint *)(param_1 + 0x1ac);
  bVar21 = 0x3ffffffe < uVar13;
  bVar20 = uVar13 == 0x3fffffff;
  uVar14 = uVar13 * 4;
  if (uVar13 < 0x40000000) {
    bVar21 = 0x7ffffffb < uVar14;
    bVar20 = uVar14 == 0x7ffffffc;
  }
  if (bVar21 && !bVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  uVar18 = 0;
  if (uVar14 == 0) {
    iVar2 = 4;
    local_54 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar14);
    local_54 = uVar13;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar14);
    }
  }
  if (uVar13 != 0) {
    uVar14 = 0;
    do {
      *(uint *)(iVar2 + uVar14 * 4) = uVar14;
      uVar14 = uVar14 + 1;
    } while (uVar13 != uVar14);
    uVar18 = uVar13;
  }
  puVar3 = *(uint **)(param_1 + 0x1a8);
  uVar19 = 4;
  uVar14 = 4;
  do {
    local_58 = &DAT_018569a8;
    uVar5 = uVar13;
    puVar6 = puVar3 + uVar19 * 5 + 2;
    if (uVar13 < uVar19) {
      uVar5 = uVar19;
    }
    do {
      uVar17 = uVar19;
      if (uVar5 == uVar17) {
        uVar19 = uVar14 - 1;
        if (uVar19 == 3) {
LAB_005ee030:
          local_58 = (undefined *)(uVar14 - 2);
          if ((undefined *)uVar16 == local_58) {
LAB_005ee0c8:
            if (uVar14 < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_01856c98);
            }
            *(uint *)(param_1 + 0x2f8) = uVar14 - 3;
            *(undefined **)(param_1 + 0x2fc) = local_58;
            *(uint *)(param_1 + 0x300) = uVar19;
            if (uVar13 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar19,uVar13,&DAT_01856c88);
            }
            iVar8 = uVar18 << 2;
            if (puVar3[uVar19 * 5 + 2] != 0) {
              *(uint *)(param_1 + 0x2f8) = uVar19;
            }
            uVar7 = 0;
            if (0x1fffffff < uVar18) {
LAB_005ee110:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar7,iVar8);
            }
            uVar16 = 0;
            if (uVar18 == 0) {
              iVar4 = 4;
              local_40 = 0;
            }
            else {
              iVar4 = thunk_FUN_016d4a50(iVar8);
              local_40 = uVar18;
              if (iVar4 == 0) {
                uVar7 = 4;
                goto LAB_005ee110;
              }
            }
            FUN_016dd1aa(iVar4,iVar2,iVar8);
            goto LAB_005ee184;
          }
          puVar10 = &DAT_018569a8;
          if (uVar13 <= uVar16) {
            local_58 = (undefined *)uVar16;
            goto LAB_005ee3c0;
          }
          if (uVar13 <= local_58) goto LAB_005ee3c0;
          puVar6 = puVar3 + uVar16 * 5;
          local_38 = *puVar6;
          local_34 = puVar6[1];
          uStack_30 = puVar6[2];
          uStack_2c = puVar6[3];
          uStack_28 = puVar6[4];
          puVar15 = puVar3 + (int)local_58 * 5;
          FUN_016dd52c(puVar6,puVar15,0x14);
          *puVar15 = local_38;
          puVar15[1] = local_34;
          puVar15[2] = uStack_30;
          puVar15[3] = uStack_2c;
          puVar15[4] = uStack_28;
          if (uVar16 < uVar18) {
            if (local_58 < uVar18) {
              uVar7 = *(undefined4 *)(iVar2 + uVar16 * 4);
              *(undefined4 *)(iVar2 + uVar16 * 4) = *(undefined4 *)(iVar2 + (int)local_58 * 4);
              *(undefined4 *)(iVar2 + (int)local_58 * 4) = uVar7;
              goto LAB_005ee0c8;
            }
          }
          else {
            local_58 = (undefined *)uVar16;
          }
        }
        else {
          puVar10 = &DAT_018569a8;
          if (uVar13 < 4) {
            local_58 = (undefined *)0x3;
            goto LAB_005ee3c0;
          }
          local_58 = (undefined *)0x3;
          if (uVar13 <= uVar19) {
            local_58 = (undefined *)uVar19;
            goto LAB_005ee3c0;
          }
          local_38 = puVar3[0xf];
          local_34 = puVar3[0x10];
          uStack_30 = puVar3[0x11];
          uStack_2c = puVar3[0x12];
          uStack_28 = puVar3[0x13];
          puVar6 = puVar3 + uVar19 * 5;
          FUN_016dd52c(puVar3 + 0xf,puVar6,0x14);
          *puVar6 = local_38;
          puVar6[1] = local_34;
          puVar6[2] = uStack_30;
          puVar6[3] = uStack_2c;
          puVar6[4] = uStack_28;
          if (3 < uVar18) {
            if (uVar19 < uVar18) {
              uVar7 = *(undefined4 *)(iVar2 + 0xc);
              *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + uVar19 * 4);
              *(undefined4 *)(iVar2 + uVar19 * 4) = uVar7;
              goto LAB_005ee030;
            }
            local_58 = (undefined *)uVar19;
          }
        }
        puVar10 = &DAT_01857478;
        uVar13 = uVar18;
LAB_005ee3c0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_58,uVar13,puVar10);
      }
      uVar9 = *puVar6;
      uVar19 = uVar17 + 1;
      puVar6 = puVar6 + 5;
    } while (uVar9 == 0);
    if (uVar17 != uVar14) {
      if (uVar13 <= uVar17) {
LAB_005ee3e8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,uVar13,local_58);
      }
      if (uVar13 <= uVar14) {
        uVar17 = uVar14;
        goto LAB_005ee3e8;
      }
      puVar6 = puVar3 + uVar17 * 5;
      local_38 = *puVar6;
      local_34 = puVar6[1];
      uStack_30 = puVar6[2];
      uStack_2c = puVar6[3];
      uStack_28 = puVar6[4];
      puVar15 = puVar3 + uVar14 * 5;
      FUN_016dd52c(puVar6,puVar15,0x14);
      *puVar15 = local_38;
      puVar15[1] = local_34;
      puVar15[2] = uStack_30;
      puVar15[3] = uStack_2c;
      puVar15[4] = uStack_28;
      if (uVar18 <= uVar17) {
        local_58 = &DAT_01857478;
        uVar13 = uVar18;
        goto LAB_005ee3e8;
      }
      uVar7 = *(undefined4 *)(iVar2 + uVar17 * 4);
      *(undefined4 *)(iVar2 + uVar17 * 4) = *(undefined4 *)(iVar2 + uVar14 * 4);
      *(undefined4 *)(iVar2 + uVar14 * 4) = uVar7;
    }
    bVar20 = uVar14 == 0x7ffffffe;
    uVar14 = uVar14 + 1;
    if (bVar20) {
      local_34 = 0;
      local_38 = 0x7fffffff;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01856ce8,&DAT_01856ca8);
    }
  } while( true );
  while( true ) {
    uVar19 = *(uint *)(iVar4 + uVar16 * 4);
    if (uVar16 != uVar19) {
      do {
        uVar14 = uVar19;
        if (uVar18 <= uVar14) {
          puVar10 = &DAT_01857498;
          goto LAB_005ee368;
        }
        uVar19 = *(uint *)(iVar4 + uVar14 * 4);
      } while (uVar16 != uVar19);
      *(uint *)(iVar2 + uVar16 * 4) = uVar14;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == uVar13) break;
LAB_005ee184:
    puVar10 = &DAT_01857488;
    uVar14 = uVar13;
    if (uVar16 == uVar13) {
LAB_005ee368:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,uVar18,puVar10);
    }
  }
  iVar12 = *(int *)(param_1 + 0x1b4);
  iVar8 = *(int *)(param_1 + 0x1c0);
  uVar16 = *(uint *)(param_1 + 0x1c4);
  bVar1 = *(byte *)(param_1 + 0x2eb);
  uVar19 = *(uint *)(param_1 + 0x1b8);
  puVar6 = puVar3 + uVar13 * 5;
  uVar13 = bVar1 + 1;
  do {
    uVar5 = puVar3[3];
    if (uVar18 <= uVar5) {
LAB_005ee32c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,uVar18,&DAT_01856cc8);
    }
    uVar14 = *puVar3;
    puVar3[3] = *(uint *)(iVar2 + uVar5 * 4);
    while (uVar14 != 0) {
      if (uVar19 <= uVar14) {
        puVar10 = &DAT_01856af8;
        uVar18 = uVar19;
        goto LAB_005ee368;
      }
      iVar11 = iVar12 + uVar14 * 9;
      uVar5 = *(uint *)(iVar11 + 1);
      if (uVar18 <= uVar5) goto LAB_005ee32c;
      uVar14 = *(uint *)(iVar11 + 5);
      *(undefined4 *)(iVar11 + 1) = *(undefined4 *)(iVar2 + uVar5 * 4);
    }
    uVar14 = puVar3[1];
    if (uVar14 != 0) {
      if (uVar16 < uVar14) {
        puVar10 = &DAT_01856ae8;
        uVar5 = uVar16;
LAB_005ee2dc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar14,uVar16,uVar5,puVar10);
      }
      uVar5 = uVar16 - uVar14;
      if (uVar5 <= bVar1) {
        uVar14 = 0;
        puVar10 = &DAT_01856ad8;
        uVar16 = uVar13;
        goto LAB_005ee2dc;
      }
      iVar11 = uVar13 * 4;
      puVar15 = (uint *)(iVar8 + uVar14 * 4);
      do {
        uVar5 = *puVar15;
        if (uVar18 <= uVar5) goto LAB_005ee32c;
        iVar11 = iVar11 + -4;
        *puVar15 = *(uint *)(iVar2 + uVar5 * 4);
        puVar15 = puVar15 + 1;
      } while (iVar11 != 0);
    }
    puVar3 = puVar3 + 5;
    if (puVar3 == puVar6) {
      if (local_40 != 0) {
        thunk_FUN_016d3fb4(iVar4);
      }
      if (local_54 != 0) {
        thunk_FUN_016d3fb4(iVar2);
      }
      return;
    }
  } while( true );
}

