// FUN_01ac3460 @ 01ac3460 size=1732 calls_out=4 calls_in=1
// strings: 

void FUN_01ac3460(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  undefined *puVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uVar17;
  short *psVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  undefined *local_b8;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  FUN_01ac3bf0(&local_58,param_3,param_4,param_2);
  uVar10 = local_50;
  uVar7 = local_54;
  if ((local_58 & 1) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x28);
    if (uVar8 <= local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_50,uVar8,&DAT_01d2f42c);
    }
    iVar15 = *(int *)(param_2 + 0x24);
    puVar16 = (uint *)(iVar15 + local_50 * 0x34);
    if (*puVar16 != 0) {
      uVar23 = *(uint *)(param_2 + 0x34);
      uVar19 = puVar16[1];
      if (uVar19 < uVar23) {
        iVar20 = *(int *)(param_2 + 0x30);
        iVar3 = iVar20 + uVar23 * 0x24;
        local_b8 = &DAT_01d2f4fc;
        uVar6 = uVar19;
        do {
          iVar3 = iVar3 + -0x24;
          puVar22 = (uint *)(iVar20 + uVar6 * 0x24);
          uVar9 = puVar22[3];
          uVar19 = puVar22[1];
          if (*puVar22 == 1) {
            if (puVar22[2] != 0) {
              uVar17 = 1;
              if (uVar23 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar19,uVar23,&DAT_01d2f4cc);
              }
              iVar11 = iVar20 + uVar19 * 0x24;
              *(undefined4 *)(iVar11 + 8) = 1;
              *(uint *)(iVar11 + 0xc) = uVar9;
              if (uVar23 <= uVar9) {
                puVar14 = &DAT_01d2f4dc;
                goto LAB_01ac3aa8;
              }
              goto LAB_01ac35c0;
            }
            if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar9,uVar8,&DAT_01d2f49c);
            }
            piVar5 = (int *)(iVar15 + uVar9 * 0x34);
            if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2f4ac);
            }
            piVar5[2] = uVar19;
            if (uVar23 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar19,uVar23,&DAT_01d2f4bc);
            }
            iVar11 = iVar20 + uVar19 * 0x24;
            *(undefined4 *)(iVar11 + 8) = 0;
            *(uint *)(iVar11 + 0xc) = uVar9;
          }
          else if (puVar22[2] == 0) {
            if (uVar8 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar19,uVar8,&DAT_01d2f45c);
            }
            *(undefined4 *)(iVar15 + uVar19 * 0x34) = 0;
          }
          else {
            if (uVar8 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar19,uVar8,&DAT_01d2f46c);
            }
            piVar5 = (int *)(iVar15 + uVar19 * 0x34);
            if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2f47c);
            }
            piVar5[1] = uVar9;
            if (uVar23 <= uVar9) {
              puVar14 = &DAT_01d2f48c;
LAB_01ac3aa8:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar9,uVar23,puVar14);
            }
            uVar17 = 0;
LAB_01ac35c0:
            puVar12 = (undefined4 *)(iVar20 + uVar9 * 0x24);
            *puVar12 = uVar17;
            puVar12[1] = uVar19;
          }
          local_58 = *puVar22;
          local_54 = puVar22[1];
          local_50 = puVar22[2];
          local_4c = puVar22[3];
          local_48 = puVar22[4];
          uStack_44 = puVar22[5];
          uStack_40 = puVar22[6];
          uStack_3c = puVar22[7];
          local_38 = puVar22[8];
          FUN_01bed864(puVar22,iVar3,0x24);
          uVar23 = uVar23 - 1;
          *(uint *)(param_2 + 0x34) = uVar23;
          if ((local_58 != 0) && (uVar23 == local_54)) {
            local_58 = 1;
            local_54 = uVar6;
          }
          if ((local_50 != 0) && (uVar23 == local_4c)) {
            local_50 = 1;
            local_4c = uVar6;
          }
          uVar19 = local_4c;
          if (uVar23 == uVar6) goto LAB_01ac3768;
          if (uVar23 <= uVar6) {
            local_b8 = &DAT_01d2f4ec;
LAB_01ac3ac4:
            uVar9 = uVar6;
            uVar8 = uVar23;
LAB_01ac3ac8:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar9,uVar8,local_b8);
          }
          uVar4 = puVar22[3];
          uVar9 = puVar22[1];
          uVar21 = puVar22[2];
          if (*puVar22 == 1) {
            if (uVar23 <= uVar9) {
              local_b8 = &DAT_01d2f51c;
              uVar6 = uVar9;
              goto LAB_01ac3ac4;
            }
            iVar11 = iVar20 + uVar9 * 0x24;
            *(undefined4 *)(iVar11 + 8) = 1;
            *(uint *)(iVar11 + 0xc) = uVar6;
          }
          else {
            if (uVar8 <= uVar9) goto LAB_01ac3ac8;
            piVar5 = (int *)(iVar15 + uVar9 * 0x34);
            if (*piVar5 == 0) {
              puVar14 = &DAT_01d2f50c;
              goto LAB_01ac3a00;
            }
            piVar5[1] = uVar6;
          }
          if (uVar21 == 0) {
            if (uVar8 <= uVar4) {
              local_b8 = &DAT_01d2f52c;
              uVar6 = uVar4;
              uVar23 = uVar8;
              goto LAB_01ac3ac4;
            }
            piVar5 = (int *)(iVar15 + uVar4 * 0x34);
            if (*piVar5 != 1) {
              puVar14 = &DAT_01d2f53c;
LAB_01ac3a00:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(puVar14);
            }
            piVar5[2] = uVar6;
          }
          else {
            if (uVar23 <= uVar4) {
              local_b8 = &DAT_01d2f54c;
              uVar6 = uVar4;
              goto LAB_01ac3ac4;
            }
            puVar12 = (undefined4 *)(iVar20 + uVar4 * 0x24);
            *puVar12 = 1;
            puVar12[1] = uVar6;
          }
LAB_01ac3768:
          uStack_74 = uStack_3c;
          local_70 = local_38;
          if ((local_50 & 1) == 0) {
            (**(code **)(local_48 + 0x10))(&uStack_74,uStack_44,uStack_40);
            goto LAB_01ac37e4;
          }
          (**(code **)(local_48 + 0x10))(&uStack_74,uStack_44,uStack_40);
          uVar6 = uVar19;
        } while (uVar19 < uVar23);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar19,uVar23,&DAT_01d2f44c);
    }
LAB_01ac37e4:
    uVar19 = *(uint *)(param_2 + 0x1c);
    if (uVar19 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar19,&DAT_01d2f3cc);
    }
    iVar3 = *(int *)(param_2 + 0x18);
    uVar8 = uVar8 - 1;
    *(undefined4 *)(iVar3 + uVar7 * 4) = 0xffff;
    local_58 = *puVar16;
    local_54 = puVar16[1];
    local_50 = puVar16[2];
    local_4c = puVar16[3];
    local_48 = puVar16[4];
    uStack_44 = puVar16[5];
    uStack_40 = puVar16[6];
    uStack_3c = puVar16[7];
    local_38 = puVar16[8];
    uStack_34 = puVar16[9];
    uStack_30 = puVar16[10];
    uStack_2c = puVar16[0xb];
    uVar23 = puVar16[0xc];
    uStack_28 = uVar23;
    FUN_01bed864(puVar16,uVar8 * 0x34 + iVar15,0x34);
    *(uint *)(param_2 + 0x28) = uVar8;
    if (uVar10 < uVar8) {
      uVar6 = (uint)((ushort)puVar16[0xc] & *(ushort *)(param_2 + 0x38));
      while( true ) {
        do {
          uVar9 = uVar6;
          uVar6 = 0;
        } while (uVar19 <= uVar9);
        puVar13 = (ushort *)(iVar3 + uVar9 * 4);
        if ((*puVar13 != 0xffff) && (uVar8 <= *puVar13)) break;
        uVar6 = uVar9 + 1;
      }
      puVar13[1] = (ushort)puVar16[0xc];
      *puVar13 = (ushort)uVar10;
      if (*puVar16 == 1) {
        uVar6 = puVar16[1];
        uVar9 = *(uint *)(param_2 + 0x34);
        if (uVar9 <= uVar6) {
          puVar14 = &DAT_01d2f3dc;
LAB_01ac3b2c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,uVar9,puVar14);
        }
        uVar4 = puVar16[2];
        uVar23 = uVar6 * 9;
        iVar15 = *(int *)(param_2 + 0x30);
        puVar12 = (undefined4 *)(iVar15 + uVar6 * 0x24);
        *puVar12 = 0;
        puVar12[1] = uVar10;
        if (uVar9 <= uVar4) {
          puVar14 = &DAT_01d2f3ec;
          uVar6 = uVar4;
          goto LAB_01ac3b2c;
        }
        iVar15 = iVar15 + uVar4 * 0x24;
        *(undefined4 *)(iVar15 + 8) = 0;
        *(uint *)(iVar15 + 0xc) = uVar10;
      }
    }
    if (uVar8 != 0) {
      uVar1 = *(ushort *)(param_2 + 0x38);
      uVar10 = uVar7 + 1;
      while( true ) {
        do {
          uVar8 = uVar10;
          uVar10 = 0;
        } while (uVar19 <= uVar8);
        uVar10 = uVar8 * 4;
        psVar18 = (short *)(iVar3 + uVar10);
        sVar2 = *psVar18;
        if (sVar2 != -1) {
          uVar10 = (uint)(ushort)psVar18[1];
          uVar23 = uVar8 - (psVar18[1] & uVar1);
        }
        if (sVar2 == -1 || (uVar23 & uVar1) == 0) break;
        if (uVar19 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,uVar19,&DAT_01d2f3fc);
        }
        uVar23 = uVar7 * 4;
        *(short *)(iVar3 + uVar23) = sVar2;
        *psVar18 = -1;
        ((short *)(iVar3 + uVar23))[1] = (short)uVar10;
        psVar18[1] = 0;
        uVar7 = uVar8;
        uVar10 = uVar8 + 1;
      }
    }
    uStack_74 = uStack_3c;
    local_70 = local_38;
    local_6c = uStack_34;
    local_68 = uStack_30;
    uStack_64 = uStack_2c;
    uStack_60 = uStack_28;
    *param_1 = local_4c;
    param_1[1] = local_48;
    param_1[2] = uStack_44;
    param_1[3] = uStack_40;
    param_1[4] = uStack_3c;
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x10))(&uStack_64,uStack_34,uStack_30);
    }
  }
  return;
}

