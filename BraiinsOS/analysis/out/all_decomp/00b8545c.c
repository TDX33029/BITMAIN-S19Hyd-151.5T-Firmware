// FUN_00b8545c @ 00b8545c size=2996 calls_out=9 calls_in=2
// strings: 

void FUN_00b8545c(int *param_1,uint param_2,int *param_3,uint param_4,int param_5,int *param_6)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  int *local_5c;
  int local_54;
  int *local_34;
  int local_2c;
  int local_28;
  
  if (param_2 < 0x21) {
LAB_00b85480:
    uVar18 = param_2 >> 1;
    if (uVar18 != 0) {
      piVar3 = param_3 + param_2;
      if (param_2 < 0x10) {
        if (param_2 < 8) {
          iVar19 = *param_1;
          param_3[uVar18] = param_1[uVar18];
          uVar2 = 1;
          *param_3 = iVar19;
        }
        else {
          FUN_00b86484(param_1,param_3);
          FUN_00b86484(param_1 + uVar18,param_3 + uVar18);
          uVar2 = 4;
        }
      }
      else {
        FUN_00b86038(param_1,param_3,piVar3);
        FUN_00b86038(param_1 + uVar18,param_3 + uVar18,piVar3 + 8);
        uVar2 = 8;
      }
      if (uVar2 < uVar18) {
        iVar19 = uVar2 << 2;
        uVar15 = uVar2;
        do {
          iVar11 = param_1[uVar15];
          iVar5 = *(int *)(iVar11 + 4);
          param_3[uVar15] = iVar11;
          iVar13 = (param_3 + uVar15)[-1];
          uVar8 = *(uint *)(iVar5 + 0xc);
          uVar12 = *(uint *)(*(int *)(iVar13 + 4) + 0xc);
          uVar14 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
          uVar21 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
          uVar8 = ((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                  ^ *(uint *)(iVar5 + 8);
          bVar22 = uVar8 < (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar12 >> 0x1f) >> 1) ^ *(uint *)(*(int *)(iVar13 + 4) + 8))
          ;
          if ((int)(uVar14 - (uVar21 + bVar22)) < 0 !=
              (SBORROW4(uVar14,uVar21) != SBORROW4(uVar14 - uVar21,(uint)bVar22))) {
            iVar5 = iVar19;
            do {
              *(int *)((int)param_3 + iVar5) = iVar13;
              if (iVar5 == 4) {
                piVar4 = param_3;
                goto LAB_00b85bf0;
              }
              iVar6 = iVar5 + -4;
              iVar13 = *(int *)((int)param_3 + iVar5 + -8);
              uVar12 = *(uint *)(*(int *)(iVar13 + 4) + 0xc);
              uVar21 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
              bVar22 = uVar8 < (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f |
                                (uint)((int)uVar12 >> 0x1f) >> 1) ^
                               *(uint *)(*(int *)(iVar13 + 4) + 8));
              iVar5 = iVar6;
            } while ((int)(uVar14 - (uVar21 + bVar22)) < 0 !=
                     (SBORROW4(uVar14,uVar21) != SBORROW4(uVar14 - uVar21,(uint)bVar22)));
            piVar4 = (int *)((int)param_3 + iVar6);
LAB_00b85bf0:
            *piVar4 = iVar11;
          }
          uVar15 = uVar15 + 1;
          iVar19 = iVar19 + 4;
        } while (uVar15 != uVar18);
      }
      piVar4 = param_3 + uVar18;
      if (uVar2 < param_2 - uVar18) {
        local_2c = 4;
        uVar15 = uVar2;
        local_34 = piVar4;
        do {
          iVar5 = param_1[uVar18 + uVar15];
          iVar19 = *(int *)(iVar5 + 4);
          piVar4[uVar15] = iVar5;
          iVar11 = (piVar4 + uVar15)[-1];
          uVar8 = *(uint *)(iVar19 + 0xc);
          uVar12 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
          uVar14 = *(uint *)(*(int *)(iVar11 + 4) + 0xc);
          uVar21 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
          uVar8 = ((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                  ^ *(uint *)(iVar19 + 8);
          bVar22 = uVar8 < (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar14 >> 0x1f) >> 1) ^ *(uint *)(*(int *)(iVar11 + 4) + 8))
          ;
          if ((int)(uVar12 - (uVar21 + bVar22)) < 0 !=
              (SBORROW4(uVar12,uVar21) != SBORROW4(uVar12 - uVar21,(uint)bVar22))) {
            iVar19 = local_2c;
            piVar7 = local_34;
            do {
              piVar7[uVar2] = iVar11;
              if (uVar2 * 4 == iVar19) {
                piVar7 = piVar4;
                goto LAB_00b85cf4;
              }
              iVar19 = iVar19 + 4;
              piVar9 = piVar7 + -1;
              iVar11 = piVar7[uVar2 - 2];
              uVar21 = *(uint *)(*(int *)(iVar11 + 4) + 0xc);
              uVar14 = (uint)((int)uVar21 >> 0x1f) >> 1 ^ uVar21;
              bVar22 = uVar8 < (((uint)((byte)((int)uVar21 >> 0x1f) & 1) << 0x1f |
                                (uint)((int)uVar21 >> 0x1f) >> 1) ^
                               *(uint *)(*(int *)(iVar11 + 4) + 8));
              piVar7 = piVar9;
            } while ((int)(uVar12 - (uVar14 + bVar22)) < 0 !=
                     (SBORROW4(uVar12,uVar14) != SBORROW4(uVar12 - uVar14,(uint)bVar22)));
            piVar7 = piVar9 + uVar2;
LAB_00b85cf4:
            *piVar7 = iVar5;
          }
          uVar15 = uVar15 + 1;
          local_2c = local_2c + -4;
          local_34 = local_34 + 1;
        } while (uVar15 != param_2 - uVar18);
      }
      piVar9 = piVar4 + -1;
      piVar3 = piVar3 + -1;
      piVar7 = (int *)0x0;
      do {
        iVar19 = *(int *)(*piVar9 + 4);
        iVar5 = *(int *)(*piVar4 + 4);
        iVar11 = *(int *)(*piVar3 + 4);
        uVar15 = *(uint *)(iVar19 + 0xc);
        iVar13 = *(int *)(*param_3 + 4);
        uVar8 = *(uint *)(iVar11 + 0xc);
        uVar2 = *(uint *)(iVar5 + 0xc);
        uVar14 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
        uVar12 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        uVar21 = *(uint *)(iVar13 + 0xc);
        bVar22 = (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                 ^ *(uint *)(iVar11 + 8)) <
                 (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar15 >> 0x1f) >> 1) ^ *(uint *)(iVar19 + 8));
        bVar24 = SBORROW4(uVar12,uVar14) != SBORROW4(uVar12 - uVar14,(uint)bVar22);
        bVar22 = (int)(uVar12 - (uVar14 + bVar22)) < 0;
        iVar19 = *piVar3;
        if (bVar22 != bVar24) {
          iVar19 = *piVar9;
        }
        uVar8 = (uint)((int)uVar21 >> 0x1f) >> 1 ^ uVar21;
        uVar15 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
        bVar23 = (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1)
                 ^ *(uint *)(iVar5 + 8)) <
                 (((uint)((byte)((int)uVar21 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar21 >> 0x1f) >> 1) ^ *(uint *)(iVar13 + 8));
        bVar25 = SBORROW4(uVar15,uVar8) != SBORROW4(uVar15 - uVar8,(uint)bVar23);
        bVar23 = (int)(uVar15 - (uVar8 + bVar23)) < 0;
        uVar2 = (uint)(bVar23 != bVar25);
        iVar5 = *param_3;
        if (uVar2 != 0) {
          iVar5 = *piVar4;
        }
        *(int *)((int)param_1 + (int)piVar7) = iVar5;
        iVar5 = 0;
        if (bVar22 != bVar24) {
          iVar5 = -1;
        }
        iVar11 = 0;
        if (bVar22 == bVar24) {
          iVar11 = -1;
        }
        *(int *)((int)param_1 + ((param_2 * 4 + -4) - (int)piVar7)) = iVar19;
        piVar3 = piVar3 + iVar11;
        param_3 = param_3 + (bVar23 == bVar25);
        piVar4 = piVar4 + uVar2;
        piVar7 = piVar7 + 1;
        uVar18 = uVar18 - 1;
        piVar9 = piVar9 + iVar5;
      } while (uVar18 != 0);
      piVar9 = piVar9 + 1;
      if ((param_2 & 1) != 0) {
        bVar22 = piVar9 <= param_3;
        piVar10 = piVar4;
        if (!bVar22) {
          piVar10 = param_3;
        }
        *(int *)((int)param_1 + (int)piVar7) = *piVar10;
        piVar4 = piVar4 + bVar22;
        param_3 = param_3 + !bVar22;
      }
      if (param_3 == piVar9) {
        piVar7 = piVar3 + 1;
      }
      if (param_3 != piVar9 || piVar4 != piVar7) {
        FUN_00fb7254();
LAB_00b85ff4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb85ff4);
        (*pcVar1)();
      }
    }
    return;
  }
  local_5c = param_6;
  local_54 = param_5;
LAB_00b854dc:
  uVar18 = param_2;
  do {
    if (local_54 == 0) {
      FUN_00b84d90(param_1,uVar18,param_3,param_4,1);
      return;
    }
    piVar3 = param_1 + (uVar18 >> 3) * 4;
    if (uVar18 < 0x40) {
      iVar19 = *(int *)(param_1[(uVar18 >> 3) * 8 - (uVar18 >> 3)] + 4);
      uVar2 = *(uint *)(*(int *)(*param_1 + 4) + 0xc);
      uVar15 = *(uint *)(iVar19 + 0xc);
      uVar14 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
      uVar12 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
      uVar21 = ((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
               *(uint *)(*(int *)(*param_1 + 4) + 8);
      uVar15 = ((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar15 >> 0x1f) >> 1)
               ^ *(uint *)(iVar19 + 8);
      uVar2 = *(uint *)(*(int *)(*piVar3 + 4) + 0xc);
      uVar8 = ((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
              *(uint *)(*(int *)(*piVar3 + 4) + 8);
      uVar2 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
      bVar22 = (int)(uVar14 - (uVar2 + (uVar21 < uVar8))) < 0 !=
               (SBORROW4(uVar14,uVar2) != SBORROW4(uVar14 - uVar2,(uint)(uVar21 < uVar8)));
      if (bVar22 != ((int)(uVar2 - (uVar12 + (uVar8 < uVar15))) < 0 !=
                    (SBORROW4(uVar2,uVar12) != SBORROW4(uVar2 - uVar12,(uint)(uVar8 < uVar15))))) {
        piVar3 = param_1 + ((uVar18 >> 3) * 8 - (uVar18 >> 3));
      }
      if (bVar22 != ((int)(uVar14 - (uVar12 + (uVar21 < uVar15))) < 0 !=
                    (SBORROW4(uVar14,uVar12) != SBORROW4(uVar14 - uVar12,(uint)(uVar21 < uVar15)))))
      {
        piVar3 = param_1;
      }
    }
    else {
      piVar3 = (int *)FUN_00b866c8(param_1,piVar3);
    }
    uVar2 = (int)piVar3 - (int)param_1;
    local_28 = *piVar3;
    local_54 = local_54 + -1;
    if (local_5c != (int *)0x0) {
      uVar12 = *(uint *)(*(int *)(local_28 + 4) + 0xc);
      uVar14 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
      uVar15 = *(uint *)(*(int *)(*local_5c + 4) + 0xc);
      uVar8 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
      bVar22 = (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar15 >> 0x1f) >> 1)
               ^ *(uint *)(*(int *)(*local_5c + 4) + 8)) <
               (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar12 >> 0x1f) >> 1)
               ^ *(uint *)(*(int *)(local_28 + 4) + 8));
      if ((int)(uVar8 - (uVar14 + bVar22)) < 0 ==
          (SBORROW4(uVar8,uVar14) != SBORROW4(uVar8 - uVar14,(uint)bVar22))) break;
    }
    if (param_4 < uVar18) goto LAB_00b85ff4;
    piVar3 = param_3 + uVar18;
    param_2 = 0;
    piVar4 = param_1;
    uVar15 = uVar2 >> 2;
    while( true ) {
      iVar19 = uVar15 - 3;
      if (uVar15 < 3) {
        iVar19 = 0;
      }
      if (piVar4 < param_1 + iVar19) {
        iVar5 = *(int *)(*(int *)((int)param_1 + uVar2) + 4);
        uVar8 = *(uint *)(iVar5 + 0xc);
        uVar12 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        uVar8 = ((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1) ^
                *(uint *)(iVar5 + 8);
        do {
          iVar11 = *piVar4;
          iVar13 = piVar4[3];
          iVar6 = *(int *)(iVar11 + 4);
          iVar5 = piVar4[1];
          iVar20 = piVar4[2];
          piVar4 = piVar4 + 4;
          uVar21 = *(uint *)(iVar6 + 0xc);
          uVar14 = (uint)((int)uVar21 >> 0x1f) >> 1 ^ uVar21;
          bVar22 = (((uint)((byte)((int)uVar21 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar21 >> 0x1f) >> 1) ^ *(uint *)(iVar6 + 8)) < uVar8;
          bVar24 = SBORROW4(uVar14,uVar12) != SBORROW4(uVar14 - uVar12,(uint)bVar22);
          bVar22 = (int)(uVar14 - (uVar12 + bVar22)) < 0;
          piVar7 = param_3;
          if (bVar22 == bVar24) {
            piVar7 = piVar3 + -1;
          }
          piVar7[param_2] = iVar11;
          if (bVar22 != bVar24) {
            param_2 = param_2 + 1;
          }
          iVar11 = *(int *)(iVar5 + 4);
          uVar14 = *(uint *)(iVar11 + 0xc);
          uVar21 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
          bVar22 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar14 >> 0x1f) >> 1) ^ *(uint *)(iVar11 + 8)) < uVar8;
          bVar24 = SBORROW4(uVar21,uVar12) != SBORROW4(uVar21 - uVar12,(uint)bVar22);
          bVar22 = (int)(uVar21 - (uVar12 + bVar22)) < 0;
          piVar7 = param_3;
          if (bVar22 == bVar24) {
            piVar7 = piVar3 + -2;
          }
          piVar7[param_2] = iVar5;
          if (bVar22 != bVar24) {
            param_2 = param_2 + 1;
          }
          iVar5 = *(int *)(iVar20 + 4);
          uVar14 = *(uint *)(iVar5 + 0xc);
          uVar21 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
          bVar22 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar14 >> 0x1f) >> 1) ^ *(uint *)(iVar5 + 8)) < uVar8;
          bVar24 = SBORROW4(uVar21,uVar12) != SBORROW4(uVar21 - uVar12,(uint)bVar22);
          bVar22 = (int)(uVar21 - (uVar12 + bVar22)) < 0;
          piVar7 = param_3;
          if (bVar22 == bVar24) {
            piVar7 = piVar3 + -3;
          }
          piVar3 = piVar3 + -4;
          piVar7[param_2] = iVar20;
          if (bVar22 != bVar24) {
            param_2 = param_2 + 1;
          }
          iVar5 = *(int *)(iVar13 + 4);
          uVar14 = *(uint *)(iVar5 + 0xc);
          uVar21 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
          bVar22 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar14 >> 0x1f) >> 1) ^ *(uint *)(iVar5 + 8)) < uVar8;
          bVar24 = SBORROW4(uVar21,uVar12) != SBORROW4(uVar21 - uVar12,(uint)bVar22);
          bVar22 = (int)(uVar21 - (uVar12 + bVar22)) < 0;
          piVar7 = piVar3;
          if (bVar22 != bVar24) {
            piVar7 = param_3;
          }
          piVar7[param_2] = iVar13;
          if (bVar22 != bVar24) {
            param_2 = param_2 + 1;
          }
        } while (piVar4 < param_1 + iVar19);
      }
      piVar7 = piVar4;
      if (piVar4 < param_1 + uVar15) {
        iVar19 = *(int *)(*(int *)((int)param_1 + uVar2) + 4);
        uVar8 = *(uint *)(iVar19 + 8);
        uVar12 = *(uint *)(iVar19 + 0xc);
        uVar14 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
        do {
          piVar7 = piVar4 + 1;
          piVar3 = piVar3 + -1;
          iVar19 = *(int *)(*piVar4 + 4);
          uVar16 = *(uint *)(iVar19 + 0xc);
          uVar21 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
          bVar22 = (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar16 >> 0x1f) >> 1) ^ *(uint *)(iVar19 + 8)) <
                   (((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar12 >> 0x1f) >> 1) ^ uVar8);
          bVar24 = SBORROW4(uVar21,uVar14) != SBORROW4(uVar21 - uVar14,(uint)bVar22);
          bVar22 = (int)(uVar21 - (uVar14 + bVar22)) < 0;
          piVar9 = piVar3;
          if (bVar22 != bVar24) {
            piVar9 = param_3;
          }
          piVar9[param_2] = *piVar4;
          if (bVar22 != bVar24) {
            param_2 = param_2 + 1;
          }
          piVar4 = piVar7;
        } while (piVar7 < param_1 + uVar15);
      }
      if (uVar15 == uVar18) break;
      piVar3 = piVar3 + -1;
      piVar4 = piVar7 + 1;
      piVar3[param_2] = *piVar7;
      uVar15 = uVar18;
    }
    FUN_016dd1aa(param_1,param_3,param_2 << 2);
    iVar19 = uVar18 - param_2;
    if (iVar19 != 0) {
      piVar3 = param_3 + (uVar18 - 1);
      piVar4 = param_1 + param_2;
      iVar5 = iVar19;
      do {
        iVar5 = iVar5 + -1;
        *piVar4 = *piVar3;
        piVar3 = piVar3 + -1;
        piVar4 = piVar4 + 1;
      } while (iVar5 != 0);
    }
    if (param_2 == 0) break;
    if (uVar18 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_00b8545c(param_1 + param_2,iVar19,param_3,param_4,local_54,&local_28);
    uVar18 = param_2;
    if (param_2 < 0x21) goto LAB_00b85480;
  } while( true );
  if (param_4 < uVar18) goto LAB_00b85ff4;
  piVar3 = param_3 + uVar18;
  uVar15 = 0;
  piVar4 = param_1;
  uVar8 = uVar2 >> 2;
  while( true ) {
    iVar19 = uVar8 - 3;
    if (uVar8 < 3) {
      iVar19 = 0;
    }
    if (piVar4 < param_1 + iVar19) {
      iVar5 = *(int *)(*(int *)((int)param_1 + uVar2) + 4);
      uVar12 = *(uint *)(iVar5 + 0xc);
      uVar14 = (uint)((int)uVar12 >> 0x1f) >> 1 ^ uVar12;
      uVar12 = ((uint)((byte)((int)uVar12 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar12 >> 0x1f) >> 1)
               ^ *(uint *)(iVar5 + 8);
      do {
        iVar5 = *piVar4;
        iVar13 = piVar4[1];
        iVar6 = piVar4[2];
        iVar20 = piVar4[3];
        piVar4 = piVar4 + 4;
        iVar11 = *(int *)(iVar5 + 4);
        uVar16 = *(uint *)(iVar11 + 0xc);
        uVar21 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
        bVar22 = uVar12 < (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f |
                           (uint)((int)uVar16 >> 0x1f) >> 1) ^ *(uint *)(iVar11 + 8));
        bVar24 = SBORROW4(uVar14,uVar21) != SBORROW4(uVar14 - uVar21,(uint)bVar22);
        bVar22 = (int)(uVar14 - (uVar21 + bVar22)) < 0;
        piVar7 = param_3;
        if (bVar22 != bVar24) {
          piVar7 = piVar3 + -1;
        }
        piVar7[uVar15] = iVar5;
        if (bVar22 == bVar24) {
          uVar15 = uVar15 + 1;
        }
        iVar5 = *(int *)(iVar13 + 4);
        uVar21 = *(uint *)(iVar5 + 0xc);
        uVar16 = (uint)((int)uVar21 >> 0x1f) >> 1 ^ uVar21;
        bVar22 = uVar12 < (((uint)((byte)((int)uVar21 >> 0x1f) & 1) << 0x1f |
                           (uint)((int)uVar21 >> 0x1f) >> 1) ^ *(uint *)(iVar5 + 8));
        bVar24 = SBORROW4(uVar14,uVar16) != SBORROW4(uVar14 - uVar16,(uint)bVar22);
        bVar22 = (int)(uVar14 - (uVar16 + bVar22)) < 0;
        piVar7 = param_3;
        if (bVar22 != bVar24) {
          piVar7 = piVar3 + -2;
        }
        piVar7[uVar15] = iVar13;
        if (bVar22 == bVar24) {
          uVar15 = uVar15 + 1;
        }
        iVar5 = *(int *)(iVar6 + 4);
        uVar21 = *(uint *)(iVar5 + 0xc);
        uVar16 = (uint)((int)uVar21 >> 0x1f) >> 1 ^ uVar21;
        bVar22 = uVar12 < (((uint)((byte)((int)uVar21 >> 0x1f) & 1) << 0x1f |
                           (uint)((int)uVar21 >> 0x1f) >> 1) ^ *(uint *)(iVar5 + 8));
        bVar24 = SBORROW4(uVar14,uVar16) != SBORROW4(uVar14 - uVar16,(uint)bVar22);
        bVar22 = (int)(uVar14 - (uVar16 + bVar22)) < 0;
        piVar7 = param_3;
        if (bVar22 != bVar24) {
          piVar7 = piVar3 + -3;
        }
        piVar3 = piVar3 + -4;
        piVar7[uVar15] = iVar6;
        if (bVar22 == bVar24) {
          uVar15 = uVar15 + 1;
        }
        iVar5 = *(int *)(iVar20 + 4);
        uVar21 = *(uint *)(iVar5 + 0xc);
        uVar16 = (uint)((int)uVar21 >> 0x1f) >> 1 ^ uVar21;
        bVar22 = uVar12 < (((uint)((byte)((int)uVar21 >> 0x1f) & 1) << 0x1f |
                           (uint)((int)uVar21 >> 0x1f) >> 1) ^ *(uint *)(iVar5 + 8));
        bVar24 = SBORROW4(uVar14,uVar16) != SBORROW4(uVar14 - uVar16,(uint)bVar22);
        bVar22 = (int)(uVar14 - (uVar16 + bVar22)) < 0;
        piVar7 = piVar3;
        if (bVar22 == bVar24) {
          piVar7 = param_3;
        }
        piVar7[uVar15] = iVar20;
        if (bVar22 == bVar24) {
          uVar15 = uVar15 + 1;
        }
      } while (piVar4 < param_1 + iVar19);
    }
    piVar7 = piVar4;
    if (piVar4 < param_1 + uVar8) {
      iVar19 = *(int *)(*(int *)((int)param_1 + uVar2) + 4);
      uVar12 = *(uint *)(iVar19 + 8);
      uVar14 = *(uint *)(iVar19 + 0xc);
      uVar21 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
      do {
        piVar7 = piVar4 + 1;
        piVar3 = piVar3 + -1;
        iVar19 = *(int *)(*piVar4 + 4);
        uVar17 = *(uint *)(iVar19 + 0xc);
        uVar16 = (uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17;
        bVar22 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar14 >> 0x1f) >> 1) ^ uVar12) <
                 (((uint)((byte)((int)uVar17 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar17 >> 0x1f) >> 1) ^ *(uint *)(iVar19 + 8));
        bVar24 = SBORROW4(uVar21,uVar16) != SBORROW4(uVar21 - uVar16,(uint)bVar22);
        bVar22 = (int)(uVar21 - (uVar16 + bVar22)) < 0;
        piVar9 = piVar3;
        if (bVar22 == bVar24) {
          piVar9 = param_3;
        }
        piVar9[uVar15] = *piVar4;
        if (bVar22 == bVar24) {
          uVar15 = uVar15 + 1;
        }
        piVar4 = piVar7;
      } while (piVar7 < param_1 + uVar8);
    }
    if (uVar8 == uVar18) break;
    piVar4 = piVar7 + 1;
    piVar3 = piVar3 + -1;
    param_3[uVar15] = *piVar7;
    uVar15 = uVar15 + 1;
    uVar8 = uVar18;
  }
  FUN_016dd1aa(param_1,param_3,uVar15 << 2);
  param_2 = uVar18 - uVar15;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar15;
  piVar3 = param_3 + (uVar18 - 1);
  uVar2 = param_2;
  piVar4 = param_1;
  do {
    uVar2 = uVar2 - 1;
    *piVar4 = *piVar3;
    piVar3 = piVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (uVar2 != 0);
  if (uVar18 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar15,uVar18,uVar18,&DAT_018af348);
  }
  local_5c = (int *)0x0;
  if (param_2 < 0x21) goto LAB_00b85480;
  goto LAB_00b854dc;
}

