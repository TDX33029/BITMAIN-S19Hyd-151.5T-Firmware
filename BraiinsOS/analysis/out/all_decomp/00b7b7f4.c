// FUN_00b7b7f4 @ 00b7b7f4 size=2228 calls_out=8 calls_in=2
// strings: 

void FUN_00b7b7f4(double *param_1,uint param_2,double *param_3,uint param_4,int param_5,
                 double *param_6)

{
  code *pcVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  double *pdVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  bool bVar22;
  byte in_Q;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double *local_38;
  double local_30;
  
  if (0x20 < param_2) {
    local_38 = param_6;
    uVar10 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_00b7b2b4(param_1,uVar10,param_3,param_4,1);
          return;
        }
        pdVar2 = param_1 + (uVar10 >> 3) * 4;
        if (uVar10 < 0x40) {
          dVar24 = param_1[(uVar10 >> 3) * 8 - (uVar10 >> 3)];
          dVar25 = *pdVar2;
          dVar26 = *param_1;
          if (dVar26 < dVar25 != dVar25 < dVar24) {
            pdVar2 = param_1 + ((uVar10 >> 3) * 8 - (uVar10 >> 3));
          }
          if (dVar26 < dVar25 != dVar26 < dVar24) {
            pdVar2 = param_1;
          }
        }
        else {
          pdVar2 = (double *)FUN_00b7c430(param_1,pdVar2);
        }
        local_30 = *pdVar2;
        param_5 = param_5 + -1;
        uVar6 = (uint)((int)pdVar2 - (int)param_1) >> 3;
        if ((local_38 == (double *)0x0) || (*local_38 < local_30)) break;
LAB_00b7badc:
        if (param_4 < uVar10) goto LAB_00b7c08c;
        pdVar4 = param_3 + uVar10;
        uVar19 = 0;
        pdVar3 = param_1;
        while( true ) {
          iVar14 = uVar6 - 3;
          if (uVar6 < 3) {
            iVar14 = 0;
          }
          if (pdVar3 < param_1 + iVar14) {
            dVar26 = *pdVar2;
            do {
              dVar24 = *pdVar3;
              dVar25 = pdVar3[1];
              dVar23 = pdVar3[2];
              dVar27 = pdVar3[3];
              pdVar3 = pdVar3 + 4;
              pdVar11 = param_3;
              if (dVar26 < dVar24) {
                pdVar11 = pdVar4 + -1;
              }
              pdVar11 = pdVar11 + uVar19;
              if (dVar26 >= dVar24) {
                uVar19 = uVar19 + 1;
              }
              *pdVar11 = dVar24;
              pdVar11 = param_3;
              if (dVar26 < dVar25) {
                pdVar11 = pdVar4 + -2;
              }
              pdVar11 = pdVar11 + uVar19;
              if (dVar26 >= dVar25) {
                uVar19 = uVar19 + 1;
              }
              *pdVar11 = dVar25;
              pdVar11 = param_3;
              if (dVar26 < dVar23) {
                pdVar11 = pdVar4 + -3;
              }
              pdVar4 = pdVar4 + -4;
              pdVar11 = pdVar11 + uVar19;
              if (dVar26 >= dVar23) {
                uVar19 = uVar19 + 1;
              }
              *pdVar11 = dVar23;
              pdVar11 = pdVar4;
              if (dVar27 <= dVar26) {
                pdVar11 = param_3;
              }
              pdVar11 = pdVar11 + uVar19;
              if (dVar27 <= dVar26) {
                uVar19 = uVar19 + 1;
              }
              *pdVar11 = dVar27;
            } while (pdVar3 < param_1 + iVar14);
          }
          if (pdVar3 < param_1 + uVar6) {
            dVar26 = *pdVar2;
            do {
              dVar24 = *pdVar3;
              pdVar3 = pdVar3 + 1;
              pdVar4 = pdVar4 + -1;
              pdVar11 = pdVar4;
              if (dVar24 <= dVar26) {
                pdVar11 = param_3;
              }
              pdVar11 = pdVar11 + uVar19;
              if (dVar24 <= dVar26) {
                uVar19 = uVar19 + 1;
              }
              *pdVar11 = dVar24;
            } while (pdVar3 < param_1 + uVar6);
          }
          if (uVar6 == uVar10) break;
          uVar17 = *(undefined4 *)((int)pdVar3 + 4);
          pdVar11 = param_3 + uVar19;
          *(undefined4 *)pdVar11 = *(undefined4 *)pdVar3;
          pdVar3 = pdVar3 + 1;
          uVar19 = uVar19 + 1;
          pdVar4 = pdVar4 + -1;
          *(undefined4 *)((int)pdVar11 + 4) = uVar17;
          uVar6 = uVar10;
        }
        FUN_016dd1aa(param_1,param_3,uVar19 << 3);
        param_2 = uVar10 - uVar19;
        if (param_2 == 0) {
          return;
        }
        param_1 = param_1 + uVar19;
        pdVar3 = param_3 + (uVar10 - 1);
        uVar6 = param_2;
        pdVar2 = param_1;
        do {
          uVar18 = *(undefined4 *)pdVar3;
          uVar6 = uVar6 - 1;
          uVar17 = *(undefined4 *)((int)pdVar3 + 4);
          pdVar3 = pdVar3 + -1;
          *(undefined4 *)pdVar2 = uVar18;
          *(undefined4 *)((int)pdVar2 + 4) = uVar17;
          pdVar2 = pdVar2 + 1;
        } while (uVar6 != 0);
        if (uVar10 < uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar19,uVar10,uVar10,&DAT_018af348);
        }
        local_38 = (double *)0x0;
        uVar10 = param_2;
        if (param_2 < 0x21) goto LAB_00b7b814;
      }
      if (param_4 < uVar10) goto LAB_00b7c08c;
      pdVar4 = param_3 + uVar10;
      param_2 = 0;
      pdVar3 = param_1;
      uVar19 = uVar6;
      while( true ) {
        iVar14 = uVar19 - 3;
        if (uVar19 < 3) {
          iVar14 = 0;
        }
        if (pdVar3 < param_1 + iVar14) {
          dVar26 = *pdVar2;
          do {
            dVar24 = *pdVar3;
            dVar25 = pdVar3[1];
            dVar23 = pdVar3[2];
            dVar27 = pdVar3[3];
            pdVar3 = pdVar3 + 4;
            pdVar11 = param_3;
            if (dVar26 <= dVar24) {
              pdVar11 = pdVar4 + -1;
            }
            pdVar11 = pdVar11 + param_2;
            if (dVar26 > dVar24) {
              param_2 = param_2 + 1;
            }
            *pdVar11 = dVar24;
            pdVar11 = param_3;
            if (dVar26 <= dVar25) {
              pdVar11 = pdVar4 + -2;
            }
            pdVar11 = pdVar11 + param_2;
            if (dVar26 > dVar25) {
              param_2 = param_2 + 1;
            }
            *pdVar11 = dVar25;
            pdVar11 = param_3;
            if (dVar26 <= dVar23) {
              pdVar11 = pdVar4 + -3;
            }
            pdVar4 = pdVar4 + -4;
            pdVar11 = pdVar11 + param_2;
            if (dVar26 > dVar23) {
              param_2 = param_2 + 1;
            }
            *pdVar11 = dVar23;
            pdVar11 = pdVar4;
            if (dVar27 < dVar26) {
              pdVar11 = param_3;
            }
            pdVar11 = pdVar11 + param_2;
            if (dVar27 < dVar26) {
              param_2 = param_2 + 1;
            }
            *pdVar11 = dVar27;
          } while (pdVar3 < param_1 + iVar14);
        }
        if (pdVar3 < param_1 + uVar19) {
          dVar26 = *pdVar2;
          do {
            dVar24 = *pdVar3;
            pdVar3 = pdVar3 + 1;
            pdVar4 = pdVar4 + -1;
            pdVar11 = pdVar4;
            if (dVar24 < dVar26) {
              pdVar11 = param_3;
            }
            pdVar11 = pdVar11 + param_2;
            if (dVar24 < dVar26) {
              param_2 = param_2 + 1;
            }
            *pdVar11 = dVar24;
          } while (pdVar3 < param_1 + uVar19);
        }
        if (uVar19 == uVar10) break;
        pdVar4 = pdVar4 + -1;
        uVar17 = *(undefined4 *)pdVar3;
        uVar18 = *(undefined4 *)((int)pdVar3 + 4);
        pdVar3 = pdVar3 + 1;
        *(undefined4 *)(pdVar4 + param_2) = uVar17;
        *(undefined4 *)((int)(pdVar4 + param_2) + 4) = uVar18;
        uVar19 = uVar10;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 3);
      iVar14 = uVar10 - param_2;
      if (iVar14 != 0) {
        pdVar4 = param_1 + param_2;
        pdVar3 = param_3 + (uVar10 - 1);
        iVar15 = iVar14;
        do {
          uVar17 = *(undefined4 *)pdVar3;
          uVar18 = *(undefined4 *)((int)pdVar3 + 4);
          pdVar3 = pdVar3 + -1;
          *(undefined4 *)pdVar4 = uVar17;
          *(undefined4 *)((int)pdVar4 + 4) = uVar18;
          pdVar4 = pdVar4 + 1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      if (param_2 == 0) goto LAB_00b7badc;
      if (uVar10 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_00b7b7f4(param_1 + param_2,iVar14,param_3,param_4,param_5,&local_30);
      uVar10 = param_2;
    } while (0x20 < param_2);
  }
LAB_00b7b814:
  uVar10 = param_2 >> 1;
  if (uVar10 == 0) {
    return;
  }
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar17 = *(undefined4 *)((int)param_1 + 4);
      *(undefined4 *)param_3 = *(undefined4 *)param_1;
      *(undefined4 *)((int)param_3 + 4) = uVar17;
      *(undefined4 *)(param_3 + uVar10) = *(undefined4 *)(param_1 + uVar10);
      *(undefined4 *)((int)(param_3 + uVar10) + 4) = *(undefined4 *)((int)(param_1 + uVar10) + 4);
      uVar6 = 1;
      uVar19 = param_2 - uVar10;
      if (uVar10 < 2) goto LAB_00b7bf0c;
    }
    else {
      pdVar2 = param_1 + uVar10;
      iVar14 = 0x10;
      iVar15 = 0x18;
      iVar21 = 0x10;
      iVar16 = 0x18;
      if (pdVar2[3] < pdVar2[2]) {
        iVar14 = 0x18;
        iVar15 = 0x10;
      }
      pdVar11 = (double *)((int)pdVar2 + iVar14);
      dVar24 = *(double *)((int)pdVar2 + iVar15);
      pdVar4 = pdVar2 + (*pdVar2 <= pdVar2[1]);
      dVar25 = *pdVar4;
      pdVar3 = pdVar4;
      dVar26 = dVar24;
      if (dVar24 < dVar25) {
        pdVar3 = pdVar11;
        dVar26 = dVar25;
      }
      dVar23 = pdVar2[*pdVar2 > pdVar2[1]];
      pdVar12 = pdVar11;
      if (*pdVar11 < dVar23) {
        pdVar12 = pdVar4;
        pdVar3 = pdVar2 + (*pdVar2 > pdVar2[1]);
        dVar23 = *pdVar11;
      }
      if (((byte)((dVar24 < dVar25) << 4 | in_Q) & 0x1f) >> 4 != 0) {
        pdVar12 = (double *)((int)pdVar2 + iVar15);
      }
      pdVar2 = param_1 + (*param_1 <= param_1[1]);
      dVar24 = param_1[*param_1 > param_1[1]];
      if (param_1[3] < param_1[2]) {
        iVar21 = 0x18;
      }
      pdVar4 = (double *)((int)param_1 + iVar21);
      if (param_1[3] < param_1[2]) {
        iVar16 = 0x10;
      }
      dVar27 = *pdVar4;
      dVar25 = *(double *)((int)param_1 + iVar16);
      bVar22 = dVar27 < dVar24;
      pdVar11 = pdVar4;
      if (bVar22) {
        pdVar11 = pdVar2;
      }
      pdVar5 = pdVar2;
      if (dVar25 < *pdVar2) {
        pdVar11 = (double *)((int)param_1 + iVar16);
        pdVar5 = pdVar4;
        dVar25 = *pdVar2;
      }
      if (bVar22) {
        pdVar5 = param_1 + (*param_1 > param_1[1]);
      }
      param_3[3] = dVar25;
      dVar25 = *pdVar11;
      pdVar2 = param_3 + uVar10;
      dVar28 = *pdVar5;
      uVar17 = (undefined4)((ulonglong)dVar25 >> 0x20);
      pdVar2[3] = dVar26;
      if (bVar22) {
        dVar24 = dVar27;
      }
      dVar26 = *pdVar3;
      uVar7 = (undefined4)((ulonglong)dVar28 >> 0x20);
      dVar27 = *pdVar12;
      *param_3 = dVar24;
      uVar20 = (undefined4)((ulonglong)dVar27 >> 0x20);
      uVar8 = SUB84(dVar28,0);
      uVar18 = uVar7;
      uVar13 = SUB84(dVar25,0);
      if (dVar25 < dVar28) {
        uVar8 = SUB84(dVar25,0);
        uVar18 = uVar17;
        uVar13 = SUB84(dVar28,0);
        uVar17 = uVar7;
      }
      uVar7 = (undefined4)((ulonglong)dVar26 >> 0x20);
      *(undefined4 *)((int)param_3 + 0xc) = uVar18;
      *(undefined4 *)(param_3 + 2) = uVar13;
      *(undefined4 *)(param_3 + 1) = uVar8;
      *(undefined4 *)((int)param_3 + 0x14) = uVar17;
      *pdVar2 = dVar23;
      uVar13 = uVar7;
      uVar17 = SUB84(dVar26,0);
      uVar18 = SUB84(dVar27,0);
      if (dVar27 < dVar26) {
        uVar13 = uVar20;
        uVar17 = SUB84(dVar27,0);
        uVar18 = SUB84(dVar26,0);
        uVar20 = uVar7;
      }
      *(undefined4 *)(pdVar2 + 2) = uVar18;
      uVar6 = 4;
      *(undefined4 *)(pdVar2 + 1) = uVar17;
      *(undefined4 *)((int)pdVar2 + 0xc) = uVar13;
      *(undefined4 *)((int)pdVar2 + 0x14) = uVar20;
      uVar19 = param_2 - uVar10;
      if (uVar10 < 5) goto LAB_00b7bf0c;
    }
  }
  else {
    FUN_00b7c0d0(param_1,param_3,param_3 + param_2);
    FUN_00b7c0d0(param_1 + uVar10,param_3 + uVar10,param_3 + param_2 + 8);
    uVar6 = 8;
    uVar19 = param_2 - uVar10;
    if (uVar10 < 9) goto LAB_00b7bf0c;
  }
  iVar14 = uVar6 << 3;
  uVar9 = uVar6;
  do {
    pdVar2 = param_1 + uVar9;
    uVar18 = *(undefined4 *)pdVar2;
    uVar17 = *(undefined4 *)((int)pdVar2 + 4);
    dVar26 = *pdVar2;
    pdVar2 = param_3 + uVar9;
    *(undefined4 *)pdVar2 = uVar18;
    dVar24 = pdVar2[-1];
    *(undefined4 *)((int)pdVar2 + 4) = uVar17;
    if (dVar26 < dVar24) {
      iVar15 = iVar14;
      do {
        *(double *)((int)param_3 + iVar15) = dVar24;
        if (iVar15 == 8) {
          pdVar2 = param_3;
          goto LAB_00b7be98;
        }
        dVar24 = ((double *)((int)param_3 + iVar15))[-2];
        iVar15 = iVar15 + -8;
      } while (dVar26 < dVar24);
      pdVar2 = (double *)((int)param_3 + iVar15);
LAB_00b7be98:
      *(undefined4 *)pdVar2 = uVar18;
      *(undefined4 *)((int)pdVar2 + 4) = uVar17;
    }
    uVar9 = uVar9 + 1;
    iVar14 = iVar14 + 8;
  } while (uVar9 != uVar10);
LAB_00b7bf0c:
  pdVar2 = param_3 + uVar10;
  if (uVar6 < uVar19) {
    iVar14 = uVar6 << 3;
    do {
      pdVar3 = param_1 + uVar10 + uVar6;
      uVar17 = *(undefined4 *)pdVar3;
      uVar18 = *(undefined4 *)((int)pdVar3 + 4);
      dVar26 = *pdVar3;
      pdVar3 = pdVar2 + uVar6;
      *(undefined4 *)pdVar3 = uVar17;
      dVar24 = pdVar3[-1];
      *(undefined4 *)((int)pdVar3 + 4) = uVar18;
      if (dVar26 < dVar24) {
        iVar15 = iVar14;
        do {
          *(double *)((int)pdVar2 + iVar15) = dVar24;
          if (iVar15 == 8) {
            pdVar3 = pdVar2;
            goto LAB_00b7bf28;
          }
          dVar24 = ((double *)((int)pdVar2 + iVar15))[-2];
          iVar15 = iVar15 + -8;
        } while (dVar26 < dVar24);
        pdVar3 = (double *)((int)pdVar2 + iVar15);
LAB_00b7bf28:
        *(undefined4 *)pdVar3 = uVar17;
        *(undefined4 *)((int)pdVar3 + 4) = uVar18;
      }
      uVar6 = uVar6 + 1;
      iVar14 = iVar14 + 8;
    } while (uVar6 != uVar19);
  }
  pdVar11 = param_3 + (param_2 - 1);
  pdVar4 = param_1 + (param_2 - 1);
  pdVar3 = pdVar2 + -1;
  do {
    pdVar12 = param_1;
    dVar24 = *pdVar11;
    bVar22 = *pdVar2 < *param_3;
    dVar26 = *param_3;
    if (bVar22) {
      dVar26 = *pdVar2;
    }
    pdVar2 = pdVar2 + bVar22;
    param_3 = param_3 + !bVar22;
    iVar14 = 0;
    dVar25 = *pdVar3;
    *pdVar12 = dVar26;
    dVar26 = dVar24;
    if (dVar24 < dVar25) {
      iVar14 = -1;
      dVar26 = dVar25;
    }
    pdVar3 = pdVar3 + iVar14;
    pdVar5 = (double *)0x0;
    if (dVar24 >= dVar25) {
      pdVar5 = (double *)0xffffffff;
    }
    uVar10 = uVar10 - 1;
    pdVar11 = pdVar11 + (int)pdVar5;
    *pdVar4 = dVar26;
    pdVar4 = pdVar4 + -1;
    param_1 = pdVar12 + 1;
  } while (uVar10 != 0);
  pdVar3 = pdVar3 + 1;
  if ((param_2 & 1) != 0) {
    bVar22 = param_3 < pdVar3;
    pdVar4 = pdVar2;
    if (bVar22) {
      pdVar4 = param_3;
    }
    uVar17 = *(undefined4 *)((int)pdVar4 + 4);
    *(undefined4 *)(pdVar12 + 1) = *(undefined4 *)pdVar4;
    *(undefined4 *)((int)pdVar12 + 0xc) = uVar17;
    pdVar5 = (double *)(uint)bVar22;
    param_3 = param_3 + (int)pdVar5;
    pdVar2 = pdVar2 + !bVar22;
  }
  if (param_3 == pdVar3) {
    pdVar5 = pdVar11 + 1;
  }
  if (param_3 == pdVar3 && pdVar2 == pdVar5) {
    return;
  }
  FUN_00fb7254();
LAB_00b7c08c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xb7c08c);
  (*pcVar1)();
}

