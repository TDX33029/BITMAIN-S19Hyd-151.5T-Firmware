// FUN_00a5e24c @ 00a5e24c size=2652 calls_out=8 calls_in=2
// strings: 

void FUN_00a5e24c(float *param_1,uint param_2,float *param_3,uint param_4,int param_5,float *param_6
                 )

{
  code *pcVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  byte in_Q;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float *local_3c;
  float local_2c;
  float local_28;
  
  if (0x20 < param_2) {
    local_3c = param_6;
    do {
      uVar23 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00a748dc(param_1,uVar23,param_3,param_4,1);
          return;
        }
        pfVar4 = param_1 + (uVar23 >> 3) * 8;
        if (uVar23 < 0x40) {
          fVar9 = param_1[((uVar23 >> 3) * 8 - (uVar23 >> 3)) * 2];
          fVar17 = *pfVar4;
          fVar18 = *param_1;
          if (fVar18 < fVar17 != fVar17 < fVar9) {
            pfVar4 = param_1 + ((uVar23 >> 3) * 8 - (uVar23 >> 3)) * 2;
          }
          if (fVar18 < fVar17 != fVar18 < fVar9) {
            pfVar4 = param_1;
          }
        }
        else {
          pfVar4 = (float *)FUN_00a5ecd0(param_1,pfVar4);
        }
        local_28 = pfVar4[1];
        param_5 = param_5 + -1;
        local_2c = *pfVar4;
        uVar19 = (uint)((int)pfVar4 - (int)param_1) >> 3;
        if ((local_3c != (float *)0x0) && (local_2c <= *local_3c)) break;
        if (param_4 < uVar23) goto LAB_00a5ec8c;
        pfVar7 = param_3 + uVar23 * 2;
        param_2 = 0;
        pfVar11 = param_1;
        uVar20 = uVar19;
        while( true ) {
          iVar21 = uVar20 - 3;
          if (uVar20 < 3) {
            iVar21 = 0;
          }
          if (pfVar11 < param_1 + iVar21 * 2) {
            fVar9 = *pfVar4;
            do {
              fVar25 = *pfVar11;
              fVar26 = pfVar11[2];
              fVar27 = pfVar11[4];
              fVar17 = pfVar11[2];
              fVar18 = pfVar11[4];
              fVar28 = pfVar11[6];
              pfVar5 = param_3;
              if (fVar9 <= fVar25) {
                pfVar5 = pfVar7 + -2;
              }
              iVar13 = param_2 * 2;
              pfVar5[iVar13] = *pfVar11;
              if (fVar9 > fVar25) {
                param_2 = param_2 + 1;
              }
              (pfVar5 + iVar13)[1] = pfVar11[1];
              fVar25 = pfVar11[6];
              pfVar5 = param_3;
              if (fVar9 <= fVar26) {
                pfVar5 = pfVar7 + -4;
              }
              iVar13 = param_2 * 2;
              pfVar5[iVar13] = fVar17;
              if (fVar9 > fVar26) {
                param_2 = param_2 + 1;
              }
              (pfVar5 + iVar13)[1] = pfVar11[3];
              fVar17 = pfVar11[7];
              pfVar5 = param_3;
              if (fVar9 <= fVar27) {
                pfVar5 = pfVar7 + -6;
              }
              pfVar7 = pfVar7 + -8;
              iVar13 = param_2 * 2;
              pfVar5[iVar13] = fVar18;
              if (fVar9 > fVar27) {
                param_2 = param_2 + 1;
              }
              (pfVar5 + iVar13)[1] = pfVar11[5];
              pfVar11 = pfVar11 + 8;
              pfVar5 = pfVar7;
              if (fVar28 < fVar9) {
                pfVar5 = param_3;
              }
              iVar13 = param_2 * 2;
              pfVar5[iVar13] = fVar25;
              if (fVar28 < fVar9) {
                param_2 = param_2 + 1;
              }
              (pfVar5 + iVar13)[1] = fVar17;
            } while (pfVar11 < param_1 + iVar21 * 2);
          }
          if (pfVar11 < param_1 + uVar20 * 2) {
            fVar9 = *pfVar4;
            do {
              fVar25 = *pfVar11;
              pfVar7 = pfVar7 + -2;
              fVar17 = *pfVar11;
              fVar18 = pfVar11[1];
              pfVar11 = pfVar11 + 2;
              pfVar5 = pfVar7;
              if (fVar25 < fVar9) {
                pfVar5 = param_3;
              }
              iVar21 = param_2 * 2;
              pfVar5[iVar21] = fVar17;
              if (fVar25 < fVar9) {
                param_2 = param_2 + 1;
              }
              (pfVar5 + iVar21)[1] = fVar18;
            } while (pfVar11 < param_1 + uVar20 * 2);
          }
          if (uVar20 == uVar23) break;
          pfVar7 = pfVar7 + -2;
          fVar9 = *pfVar11;
          fVar17 = pfVar11[1];
          pfVar11 = pfVar11 + 2;
          pfVar7[param_2 * 2] = fVar9;
          (pfVar7 + param_2 * 2)[1] = fVar17;
          uVar20 = uVar23;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 3);
        iVar21 = uVar23 - param_2;
        if (iVar21 != 0) {
          pfVar7 = param_1 + param_2 * 2;
          pfVar11 = param_3 + uVar23 * 2 + -2;
          iVar13 = iVar21;
          do {
            fVar9 = *pfVar11;
            fVar17 = pfVar11[1];
            pfVar11 = pfVar11 + -2;
            *pfVar7 = fVar9;
            pfVar7[1] = fVar17;
            pfVar7 = pfVar7 + 2;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        if (param_2 == 0) break;
        if (uVar23 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00a5e24c(param_1 + param_2 * 2,iVar21,param_3,param_4,param_5,&local_2c);
        uVar23 = param_2;
        if (param_2 < 0x21) goto LAB_00a5e26c;
      }
      if (param_4 < uVar23) goto LAB_00a5ec8c;
      pfVar7 = param_3 + uVar23 * 2;
      uVar20 = 0;
      pfVar11 = param_1;
      while( true ) {
        iVar21 = uVar19 - 3;
        if (uVar19 < 3) {
          iVar21 = 0;
        }
        if (pfVar11 < param_1 + iVar21 * 2) {
          fVar9 = *pfVar4;
          do {
            fVar25 = *pfVar11;
            fVar26 = pfVar11[2];
            fVar27 = pfVar11[4];
            fVar18 = pfVar11[2];
            fVar17 = pfVar11[4];
            fVar28 = pfVar11[6];
            pfVar5 = param_3;
            if (fVar9 < fVar25) {
              pfVar5 = pfVar7 + -2;
            }
            iVar13 = uVar20 * 2;
            pfVar5[iVar13] = *pfVar11;
            if (fVar9 >= fVar25) {
              uVar20 = uVar20 + 1;
            }
            (pfVar5 + iVar13)[1] = pfVar11[1];
            fVar25 = pfVar11[6];
            pfVar5 = param_3;
            if (fVar9 < fVar26) {
              pfVar5 = pfVar7 + -4;
            }
            iVar13 = uVar20 * 2;
            pfVar5[iVar13] = fVar18;
            if (fVar9 >= fVar26) {
              uVar20 = uVar20 + 1;
            }
            (pfVar5 + iVar13)[1] = pfVar11[3];
            fVar18 = pfVar11[7];
            pfVar5 = param_3;
            if (fVar9 < fVar27) {
              pfVar5 = pfVar7 + -6;
            }
            pfVar7 = pfVar7 + -8;
            iVar13 = uVar20 * 2;
            pfVar5[iVar13] = fVar17;
            if (fVar9 >= fVar27) {
              uVar20 = uVar20 + 1;
            }
            (pfVar5 + iVar13)[1] = pfVar11[5];
            pfVar11 = pfVar11 + 8;
            pfVar5 = pfVar7;
            if (fVar28 <= fVar9) {
              pfVar5 = param_3;
            }
            iVar13 = uVar20 * 2;
            pfVar5[iVar13] = fVar25;
            if (fVar28 <= fVar9) {
              uVar20 = uVar20 + 1;
            }
            (pfVar5 + iVar13)[1] = fVar18;
          } while (pfVar11 < param_1 + iVar21 * 2);
        }
        if (pfVar11 < param_1 + uVar19 * 2) {
          fVar9 = *pfVar4;
          do {
            fVar25 = *pfVar11;
            pfVar7 = pfVar7 + -2;
            fVar18 = *pfVar11;
            fVar17 = pfVar11[1];
            pfVar11 = pfVar11 + 2;
            pfVar5 = pfVar7;
            if (fVar25 <= fVar9) {
              pfVar5 = param_3;
            }
            iVar21 = uVar20 * 2;
            pfVar5[iVar21] = fVar18;
            if (fVar25 <= fVar9) {
              uVar20 = uVar20 + 1;
            }
            (pfVar5 + iVar21)[1] = fVar17;
          } while (pfVar11 < param_1 + uVar19 * 2);
        }
        if (uVar19 == uVar23) break;
        fVar9 = *pfVar11;
        fVar17 = pfVar11[1];
        pfVar11 = pfVar11 + 2;
        iVar21 = uVar20 * 2;
        param_3[iVar21] = fVar9;
        uVar20 = uVar20 + 1;
        pfVar7 = pfVar7 + -2;
        (param_3 + iVar21)[1] = fVar17;
        uVar19 = uVar23;
      }
      FUN_016dd1aa(param_1,param_3,uVar20 << 3);
      param_2 = uVar23 - uVar20;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar20 * 2;
      pfVar11 = param_3 + uVar23 * 2 + -2;
      uVar19 = param_2;
      pfVar4 = param_1;
      do {
        fVar17 = *pfVar11;
        uVar19 = uVar19 - 1;
        fVar9 = pfVar11[1];
        pfVar11 = pfVar11 + -2;
        *pfVar4 = fVar17;
        pfVar4[1] = fVar9;
        pfVar4 = pfVar4 + 2;
      } while (uVar19 != 0);
      if (uVar23 < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar20,uVar23,uVar23,&DAT_018af348);
      }
      local_3c = (float *)0x0;
    } while (0x20 < param_2);
  }
LAB_00a5e26c:
  uVar23 = param_2 >> 1;
  if (uVar23 == 0) {
    return;
  }
  pfVar4 = param_3 + param_2 * 2;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      fVar9 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = fVar9;
      uVar19 = 1;
      param_3[uVar23 * 2] = param_1[uVar23 * 2];
      (param_3 + uVar23 * 2)[1] = (param_1 + uVar23 * 2)[1];
      local_3c = (float *)(param_2 - uVar23);
      if (uVar23 < 2) goto LAB_00a5ea68;
    }
    else {
      iVar13 = 0x18;
      iVar6 = 0x10;
      iVar22 = 0x18;
      pfVar7 = param_1 + (uint)(*param_1 <= param_1[2]) * 2;
      pfVar11 = param_1 + (uint)(*param_1 > param_1[2]) * 2;
      iVar21 = 0x10;
      if (param_1[6] < param_1[4]) {
        iVar21 = 0x18;
      }
      pfVar5 = (float *)((int)param_1 + iVar21);
      if (param_1[6] < param_1[4]) {
        iVar13 = 0x10;
      }
      pfVar10 = (float *)((int)param_1 + iVar13);
      pfVar8 = pfVar5;
      if (*pfVar5 < *pfVar11) {
        pfVar8 = pfVar7;
      }
      pfVar15 = pfVar7;
      pfVar2 = pfVar10;
      if (*pfVar10 < *pfVar7) {
        pfVar15 = pfVar5;
        pfVar2 = pfVar7;
        pfVar8 = pfVar10;
      }
      bVar24 = ((byte)((*pfVar5 < *pfVar11) << 4 | in_Q) & 0x1f) >> 4 != 0;
      if (bVar24) {
        pfVar15 = pfVar11;
      }
      fVar9 = *pfVar8;
      fVar17 = *pfVar15;
      if (!bVar24) {
        pfVar5 = pfVar11;
      }
      fVar18 = pfVar5[1];
      *param_3 = *pfVar5;
      param_3[1] = fVar18;
      pfVar11 = pfVar15;
      if (fVar9 < fVar17) {
        pfVar11 = pfVar8;
        pfVar8 = pfVar15;
      }
      fVar17 = pfVar8[1];
      param_3[4] = *pfVar8;
      fVar9 = *pfVar11;
      fVar18 = pfVar11[1];
      pfVar11 = param_1 + uVar23 * 2;
      param_3[5] = fVar17;
      fVar17 = *pfVar11;
      fVar25 = pfVar11[2];
      fVar26 = pfVar11[4];
      fVar27 = pfVar11[6];
      param_3[2] = fVar9;
      param_3[3] = fVar18;
      pfVar7 = pfVar11 + (uint)(fVar17 > fVar25) * 2;
      pfVar5 = pfVar11 + (uint)(fVar17 <= fVar25) * 2;
      if (fVar27 < fVar26) {
        iVar6 = 0x18;
      }
      pfVar8 = (float *)((int)pfVar11 + iVar6);
      if (fVar27 < fVar26) {
        iVar22 = 0x10;
      }
      pfVar11 = (float *)((int)pfVar11 + iVar22);
      bVar24 = *pfVar8 < *pfVar7;
      pfVar10 = pfVar8;
      if (bVar24) {
        pfVar10 = pfVar5;
      }
      pfVar16 = pfVar5;
      pfVar15 = pfVar11;
      if (*pfVar11 < *pfVar5) {
        pfVar16 = pfVar8;
        pfVar15 = pfVar5;
        pfVar10 = pfVar11;
      }
      if (bVar24) {
        pfVar16 = pfVar7;
      }
      fVar9 = *pfVar10;
      fVar17 = *pfVar16;
      if (!bVar24) {
        pfVar8 = pfVar7;
      }
      fVar18 = pfVar2[1];
      fVar25 = *pfVar8;
      param_3[6] = *pfVar2;
      param_3[7] = fVar18;
      uVar19 = 4;
      fVar18 = pfVar8[1];
      pfVar11 = param_3 + uVar23 * 2;
      *pfVar11 = fVar25;
      fVar25 = *pfVar15;
      fVar26 = pfVar15[1];
      pfVar11[1] = fVar18;
      pfVar11[7] = fVar26;
      pfVar11[6] = fVar25;
      if (fVar9 < fVar17) {
        pfVar7 = pfVar16;
        pfVar16 = pfVar10;
      }
      else {
        pfVar7 = pfVar10;
      }
      fVar18 = *pfVar16;
      pfVar11[3] = pfVar16[1];
      fVar17 = *pfVar7;
      fVar9 = pfVar7[1];
      pfVar11[2] = fVar18;
      pfVar11[4] = fVar17;
      pfVar11[5] = fVar9;
      local_3c = (float *)(param_2 - uVar23);
      if (uVar23 < 5) goto LAB_00a5ea68;
    }
  }
  else {
    FUN_00a74500(param_1,param_3,pfVar4);
    FUN_00a74500(param_1 + uVar23 * 2,param_3 + uVar23 * 2,pfVar4 + 0x10);
    uVar19 = 8;
    local_3c = (float *)(param_2 - uVar23);
    if (uVar23 < 9) goto LAB_00a5ea68;
  }
  iVar13 = uVar19 * -8 + 8;
  iVar21 = uVar19 << 3;
  uVar20 = uVar19;
  do {
    fVar9 = param_1[uVar20 * 2];
    pfVar11 = param_3 + uVar20 * 2;
    *pfVar11 = fVar9;
    fVar17 = (param_1 + uVar20 * 2)[1];
    pfVar11[1] = fVar17;
    if (fVar9 < pfVar11[-2]) {
      iVar6 = iVar13;
      iVar22 = iVar21;
      do {
        uVar14 = ((undefined4 *)((int)param_3 - iVar6))[1];
        *(undefined4 *)((int)param_3 + iVar22) = *(undefined4 *)((int)param_3 - iVar6);
        ((undefined4 *)((int)param_3 + iVar22))[1] = uVar14;
        if (iVar22 == 8) {
          pfVar11 = param_3;
          goto LAB_00a5e9d4;
        }
        iVar6 = iVar6 + 8;
        iVar12 = iVar22 + -8;
        iVar3 = iVar22 + -0x10;
        iVar22 = iVar12;
      } while (fVar9 < *(float *)((int)param_3 + iVar3));
      pfVar11 = (float *)((int)param_3 + iVar12);
LAB_00a5e9d4:
      *pfVar11 = fVar9;
      pfVar11[1] = fVar17;
    }
    uVar20 = uVar20 + 1;
    iVar13 = iVar13 + -8;
    iVar21 = iVar21 + 8;
  } while (uVar20 != uVar23);
LAB_00a5ea68:
  pfVar11 = param_3 + uVar23 * 2;
  if (uVar19 < local_3c) {
    iVar21 = 8;
    pfVar5 = param_3 + uVar23 * 2 + -2;
    pfVar7 = pfVar11;
    uVar20 = uVar19;
    do {
      fVar17 = param_1[uVar23 * 2 + uVar20 * 2];
      pfVar8 = pfVar11 + uVar20 * 2;
      *pfVar8 = fVar17;
      fVar9 = (param_1 + uVar23 * 2 + uVar20 * 2)[1];
      pfVar8[1] = fVar9;
      if (fVar17 < pfVar8[-2]) {
        iVar13 = iVar21;
        pfVar8 = pfVar5;
        pfVar10 = pfVar7;
        do {
          fVar18 = (pfVar8 + uVar19 * 2)[1];
          pfVar10[uVar19 * 2] = pfVar8[uVar19 * 2];
          (pfVar10 + uVar19 * 2)[1] = fVar18;
          if (uVar19 * 8 == iVar13) {
            pfVar8 = pfVar11;
            goto LAB_00a5eaa0;
          }
          pfVar8 = pfVar8 + -2;
          iVar13 = iVar13 + 8;
          pfVar15 = pfVar10 + -2;
          pfVar2 = pfVar10 + uVar19 * 2 + -4;
          pfVar10 = pfVar15;
        } while (fVar17 < *pfVar2);
        pfVar8 = pfVar15 + uVar19 * 2;
LAB_00a5eaa0:
        *pfVar8 = fVar17;
        pfVar8[1] = fVar9;
      }
      uVar20 = uVar20 + 1;
      pfVar5 = pfVar5 + 2;
      iVar21 = iVar21 + -8;
      pfVar7 = pfVar7 + 2;
    } while ((float *)uVar20 != local_3c);
  }
  pfVar7 = pfVar11 + -2;
  iVar21 = 0;
  pfVar4 = pfVar4 + -2;
  do {
    fVar9 = *pfVar7;
    bVar24 = *pfVar11 < *param_3;
    fVar17 = *pfVar4;
    pfVar5 = param_3;
    if (bVar24) {
      pfVar5 = pfVar11;
    }
    fVar18 = pfVar5[1];
    *(float *)((int)param_1 + iVar21) = *pfVar5;
    ((float *)((int)param_1 + iVar21))[1] = fVar18;
    pfVar11 = pfVar11 + (uint)bVar24 * 2;
    iVar13 = 0;
    param_3 = param_3 + (uint)!bVar24 * 2;
    pfVar5 = pfVar4;
    if (fVar17 < fVar9) {
      iVar13 = -1;
      pfVar5 = pfVar7;
    }
    pfVar7 = pfVar7 + iVar13 * 2;
    fVar18 = pfVar5[1];
    pfVar8 = (float *)0x0;
    if (fVar17 >= fVar9) {
      pfVar8 = (float *)0xffffffff;
    }
    pfVar4 = pfVar4 + (int)pfVar8 * 2;
    uVar23 = uVar23 - 1;
    pfVar10 = (float *)((int)param_1 + ((param_2 * 8 + -8) - iVar21));
    *pfVar10 = *pfVar5;
    iVar21 = iVar21 + 8;
    pfVar10[1] = fVar18;
  } while (uVar23 != 0);
  pfVar7 = pfVar7 + 2;
  if ((param_2 & 1) != 0) {
    bVar24 = param_3 < pfVar7;
    pfVar5 = pfVar11;
    if (bVar24) {
      pfVar5 = param_3;
    }
    fVar9 = pfVar5[1];
    *(float *)((int)param_1 + iVar21) = *pfVar5;
    pfVar8 = (float *)(uint)bVar24;
    ((float *)((int)param_1 + iVar21))[1] = fVar9;
    param_3 = param_3 + (int)pfVar8 * 2;
    pfVar11 = pfVar11 + (uint)!bVar24 * 2;
  }
  if (param_3 == pfVar7) {
    pfVar8 = pfVar4 + 2;
  }
  if (param_3 == pfVar7 && pfVar11 == pfVar8) {
    return;
  }
  FUN_00fb7254();
LAB_00a5ec8c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xa5ec8c);
  (*pcVar1)();
}

