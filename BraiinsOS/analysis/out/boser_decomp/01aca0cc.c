// FUN_01aca0cc @ 01aca0cc size=3612 calls_out=14 calls_in=5
// strings: 

undefined8
FUN_01aca0cc(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  undefined *puVar7;
  byte bVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  byte *local_3c;
  byte *local_30;
  uint local_2c;
  undefined *local_28;
  
  bVar1 = *param_3;
  pbVar5 = param_4 + 1;
  pbVar13 = param_5;
  pbVar17 = *(byte **)(param_1 + 8);
joined_r0x01aca110:
  do {
    pbVar16 = pbVar17;
    pbVar14 = param_5;
    pbVar15 = pbVar14;
    if (pbVar14 == param_6) {
LAB_01aca3d0:
      pbVar17 = *(byte **)(param_1 + 8);
      iVar12 = *(int *)(param_1 + 4);
      pbVar14 = pbVar17;
      if ((pbVar17 < pbVar16) ||
         (((bVar4 = false, pbVar16 != (byte *)0x0 && (pbVar16 < pbVar17)) &&
          ((char)pbVar16[iVar12] < -0x40)))) {
        puVar7 = &DAT_01d2fad8;
LAB_01acae24:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar12,pbVar17,pbVar16,pbVar14,puVar7);
      }
      pbVar13 = pbVar17;
      param_5 = pbVar15;
    }
    else {
      param_5 = pbVar14 + 1;
      puVar10 = (undefined1 *)(uint)*pbVar14;
      if (0x7fffffff < (uint)(int)(char)*pbVar14) {
        if (puVar10 < (undefined1 *)0xe0) {
          puVar10 = (undefined1 *)(pbVar14[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
          param_5 = pbVar14 + 2;
        }
        else {
          uVar11 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
          if (puVar10 < (undefined1 *)0xf0) {
            puVar10 = (undefined1 *)(uVar11 | ((uint)puVar10 & 0x1f) << 0xc);
            param_5 = pbVar14 + 3;
          }
          else {
            param_5 = pbVar14 + 4;
            puVar10 = (undefined1 *)(pbVar14[3] & 0x3f | uVar11 << 6 | ((uint)puVar10 & 7) << 0x12);
          }
        }
      }
      if (puVar10 < (undefined1 *)0xe) {
        pbVar17 = pbVar16;
        if ((1 << ((uint)puVar10 & 0xff) & 0x2600U) != 0) goto joined_r0x01aca110;
      }
      pbVar15 = param_5;
      if (puVar10 == &DAT_00110000) goto LAB_01aca3d0;
      uVar11 = 1;
      if ((undefined1 *)0x7f < puVar10) {
        uVar11 = 2;
      }
      if (((undefined1 *)0x7ff < puVar10) && (uVar11 = 4, puVar10 < (undefined1 *)0x10000)) {
        uVar11 = 3;
      }
      uVar9 = (int)param_6 - (int)pbVar14;
      if (uVar11 < uVar9) {
        if ((char)pbVar14[uVar11] < -0x40) goto LAB_01acae48;
      }
      else if (uVar11 != uVar9) {
LAB_01acae48:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar14,uVar9,0,uVar11,0x1d2fa78);
      }
      if ((undefined1 *)0x3e < puVar10) {
        if (puVar10 == (undefined1 *)0x3f) goto LAB_01aca264;
        if (puVar10 == (undefined1 *)0x5c) {
          if (param_1[0x20] == 2) goto LAB_01aca28c;
          if (((uint)param_2 & 0xff) != 2) {
            if (*(int *)(param_1 + 0x18) != 0) {
              (**(code **)(*(int *)(param_1 + 0x1c) + 0x14))(*(int *)(param_1 + 0x18),0);
            }
            goto LAB_01acaaa8;
          }
          FUN_01acaf80(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x5c,param_5,
                       param_6);
          if (param_1[0x20] == 2) goto LAB_01aca348;
LAB_01aca35c:
          local_28 = &DAT_005681e8;
        }
        else {
          if (puVar10 == &DAT_00110000) goto LAB_01aca3d0;
LAB_01aca28c:
          FUN_01acaf80(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),puVar10,
                       param_5,param_6);
          if ((((uint)param_2 & 0xff) == 0) &&
             (pbVar13 = *(byte **)(param_1 + 8), param_4 < pbVar13)) {
            iVar12 = *(int *)(param_1 + 4);
            pbVar17 = pbVar5 + iVar12;
            if ((pbVar5 < pbVar13) && ((char)*pbVar17 < -0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar12,pbVar13,pbVar5,pbVar13,&DAT_01d2fac8);
            }
            if ((((int)pbVar13 - (int)pbVar5 == 2) && ((*pbVar17 & 0xdf) - 0x41 < 0x1a)) &&
               (pbVar17[1] == 0x3a)) {
              pbVar17 = pbVar13;
              if (*(byte **)param_1 == pbVar13) {
                FUN_01af7b44(param_1,pbVar13,1,1,1);
                iVar12 = *(int *)(param_1 + 4);
                pbVar17 = *(byte **)(param_1 + 8);
              }
              pbVar16 = pbVar16 + 1;
              pbVar17[iVar12] = 0x2f;
              *(byte **)(param_1 + 8) = pbVar13 + 1;
            }
          }
          if (param_1[0x20] != 2) goto LAB_01aca35c;
          if (((uint)param_2 & 0xff) == 2) {
LAB_01aca348:
            local_28 = &DAT_00569af8;
          }
          else {
            local_28 = &DAT_0056a3d8;
          }
        }
        local_30 = pbVar14;
        local_2c = uVar11;
        FUN_01655840(&local_30,param_1);
        pbVar13 = param_5;
        pbVar17 = pbVar16;
        goto joined_r0x01aca110;
      }
      if (puVar10 == (undefined1 *)0x23) {
LAB_01aca264:
        pbVar15 = pbVar13;
        if (param_1[0x20] != 0) goto LAB_01aca28c;
        goto LAB_01aca3d0;
      }
      if ((puVar10 != (undefined1 *)0x2f) || (param_1[0x20] == 2)) goto LAB_01aca28c;
LAB_01acaaa8:
      pbVar14 = *(byte **)(param_1 + 8);
      pbVar13 = pbVar14;
      if (*(byte **)param_1 == pbVar14) {
        FUN_01af7b44(param_1,pbVar14,1,1,1);
        pbVar13 = *(byte **)(param_1 + 8);
      }
      iVar12 = *(int *)(param_1 + 4);
      pbVar17 = pbVar14 + 1;
      pbVar13[iVar12] = 0x2f;
      *(byte **)(param_1 + 8) = pbVar17;
      if (pbVar14 < pbVar16) {
LAB_01acaed0:
        puVar7 = &DAT_01d2fae8;
        goto LAB_01acae24;
      }
      if (pbVar16 != (byte *)0x0) {
        if (-0x41 < (char)pbVar16[iVar12]) goto LAB_01acab00;
        goto LAB_01acaed0;
      }
      if (pbVar14 == (byte *)0x0) {
        pbVar13 = &DAT_00000001;
        pbVar16 = (byte *)0x0;
        bVar4 = true;
        pbVar14 = (byte *)0x0;
      }
      else {
LAB_01acab00:
        bVar4 = true;
        if ((char)pbVar14[iVar12] < -0x40) goto LAB_01acaed0;
        pbVar13 = pbVar17;
      }
    }
    if (pbVar14 + ~(uint)pbVar16 < &DAT_00000006) {
      pbVar15 = pbVar16 + iVar12;
      switch(pbVar14 + ~(uint)pbVar16) {
      case (byte *)0x0:
        if (*pbVar15 == 0x2e) goto LAB_01aca49c;
        break;
      case (byte *)0x1:
        if (*(short *)pbVar15 == 0x2e2e) goto LAB_01aca620;
        bVar18 = ((uint)param_2 & 0xff) == 0;
        pbVar13 = param_2;
        if (bVar18) {
          pbVar13 = pbVar5;
        }
        if (bVar18 && pbVar16 == pbVar13) {
          puVar10 = (undefined1 *)(uint)*pbVar15;
          if (((uint)puVar10 & 0xdf) - 0x41 < 0x1a) {
            uVar11 = (uint)pbVar15[1];
            if (uVar11 == 0x7c || uVar11 == 0x3a) {
              if ((uint)(int)(char)*pbVar15 < 0x80000000) {
LAB_01aca864:
                if (pbVar5 <= pbVar17) {
                  if (((pbVar5 != (byte *)0x0) && (pbVar5 < pbVar17)) &&
                     ((char)pbVar5[iVar12] < -0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d2faf8);
                  }
                  *(byte **)(param_1 + 8) = pbVar5;
                  pbVar17 = pbVar5;
                }
                uVar11 = 1;
                if ((undefined1 *)0x7f < puVar10) {
                  uVar11 = 2;
                }
                if (((undefined1 *)0x7ff < puVar10) && (uVar11 = 4, puVar10 < (undefined1 *)0x10000)
                   ) {
                  uVar11 = 3;
                }
                pbVar13 = pbVar17;
                if ((uint)(*(int *)param_1 - (int)pbVar17) < uVar11) {
                  FUN_01af7b44(param_1,pbVar17,uVar11,1,1);
                  iVar12 = *(int *)(param_1 + 4);
                  pbVar13 = *(byte **)(param_1 + 8);
                }
                pbVar13 = pbVar13 + iVar12;
                if (puVar10 < (undefined1 *)0x80) {
LAB_01aca8cc:
                  *pbVar13 = (byte)puVar10;
                }
                else {
                  bVar2 = (byte)puVar10 & 0x3f | 0x80;
                  bVar8 = (byte)((uint)puVar10 >> 6);
                  if (puVar10 < (undefined1 *)0x800) {
                    bVar8 = bVar8 | 0xc0;
                    pbVar13[1] = bVar2;
                  }
                  else {
                    bVar3 = bVar8 & 0x3f | 0x80;
                    bVar8 = (byte)((uint)puVar10 >> 0xc);
                    if ((uint)puVar10 >> 0x10 != 0) {
                      puVar10 = (undefined1 *)((uint)puVar10 >> 0x12 | 0xfffffff0);
                      pbVar13[3] = bVar2;
                      pbVar13[2] = bVar3;
                      pbVar13[1] = bVar8 & 0x3f | 0x80;
                      goto LAB_01aca8cc;
                    }
                    pbVar13[1] = bVar3;
                    bVar8 = bVar8 | 0xe0;
                    pbVar13[2] = bVar2;
                  }
                  *pbVar13 = bVar8;
                }
                pbVar16 = pbVar17 + uVar11;
                *(byte **)(param_1 + 8) = pbVar16;
                pbVar13 = pbVar16;
                if (*(byte **)param_1 == pbVar16) {
                  FUN_01af7b44(param_1,pbVar16,1,1,1);
                  pbVar13 = *(byte **)(param_1 + 8);
                }
                iVar12 = *(int *)(param_1 + 4);
                pbVar17 = pbVar16 + 1;
                pbVar13[iVar12] = 0x3a;
                *(byte **)(param_1 + 8) = pbVar17;
                if (bVar4) {
                  if (*(byte **)param_1 == pbVar17) {
                    FUN_01af7b44(param_1,pbVar17,1,1,1);
                    iVar12 = *(int *)(param_1 + 4);
                    pbVar17 = *(byte **)(param_1 + 8);
                  }
                  pbVar17[iVar12] = 0x2f;
                  pbVar17 = pbVar16 + 2;
                  *(byte **)(param_1 + 8) = pbVar17;
                }
              }
              else {
                if (puVar10 < (undefined1 *)0xe0) {
                  puVar10 = (undefined1 *)(uVar11 & 0x3f | ((uint)puVar10 & 0x1f) << 6);
                  goto LAB_01aca864;
                }
                uVar11 = pbVar15[2] & 0x3f | (uVar11 & 0x3f) << 6;
                if (puVar10 < (undefined1 *)0xf0) {
                  puVar10 = (undefined1 *)(uVar11 | ((uint)puVar10 & 0x1f) << 0xc);
                  goto LAB_01aca864;
                }
                puVar10 = (undefined1 *)
                          (pbVar15[3] & 0x3f | uVar11 << 6 | ((uint)puVar10 & 7) << 0x12);
                if (puVar10 != &DAT_00110000) goto LAB_01aca864;
              }
              pbVar16 = param_1;
              if ((bVar1 & 1) == 0) {
                bVar1 = 0;
              }
              else {
                if (*(int *)(param_1 + 0x18) != 0) {
                  (**(code **)(*(int *)(param_1 + 0x1c) + 0x14))(*(int *)(param_1 + 0x18),5);
                }
                bVar1 = 0;
                *param_3 = 0;
              }
            }
          }
        }
        break;
      case (byte *)0x2:
        iVar6 = thunk_FUN_01bed842(pbVar15,&DAT_005327b0,3);
        if (iVar6 != 0) {
          iVar6 = thunk_FUN_01bed842(pbVar15,&DAT_005327b3,3);
          if (iVar6 != 0) break;
        }
LAB_01aca49c:
        if (pbVar13 < pbVar16) {
          pbVar16 = pbVar17;
        }
        else {
          if (((pbVar16 != (byte *)0x0) && (pbVar16 < pbVar13)) && ((char)*pbVar15 < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d2fb08);
          }
          *(byte **)(param_1 + 8) = pbVar16;
          pbVar13 = pbVar16;
        }
        if ((pbVar13 == (byte *)0x0) || (pbVar17 = pbVar16, pbVar13[iVar12 + -1] != 0x2f)) {
          pbVar13 = pbVar16;
          if (*(byte **)param_1 == pbVar16) {
            FUN_01af7b44(param_1,pbVar16,1,1,1);
            iVar12 = *(int *)(param_1 + 4);
            pbVar13 = *(byte **)(param_1 + 8);
          }
          pbVar13[iVar12] = 0x2f;
          *(byte **)(param_1 + 8) = pbVar16 + 1;
          pbVar17 = pbVar16 + 1;
        }
        break;
      case (byte *)0x3:
        if (((*(int *)pbVar15 == 0x2e653225) || (*(int *)pbVar15 == 0x2e453225)) ||
           ((*(int *)pbVar15 == 0x6532252e || (*(int *)pbVar15 == 0x4532252e)))) goto LAB_01aca620;
        break;
      case (byte *)0x5:
        iVar6 = thunk_FUN_01bed842(pbVar15,&DAT_00532798,6);
        if (((iVar6 != 0) && (iVar6 = thunk_FUN_01bed842(pbVar15,&DAT_0053279e,6), iVar6 != 0)) &&
           (iVar6 = thunk_FUN_01bed842(pbVar15,&DAT_005327a4,6), iVar6 != 0)) {
          iVar6 = thunk_FUN_01bed842(pbVar15,&DAT_005327aa,6);
          if (iVar6 != 0) break;
        }
LAB_01aca620:
        if (pbVar13 < pbVar16) {
          pbVar16 = pbVar13;
        }
        else {
          if (((pbVar16 != (byte *)0x0) && (pbVar16 < pbVar13)) && ((char)*pbVar15 < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d2fb18);
          }
          *(byte **)(param_1 + 8) = pbVar16;
          pbVar17 = pbVar16;
        }
        if ((pbVar16 != (byte *)0x0) && (pbVar16[iVar12 + -1] == 0x2f)) {
          pbVar13 = pbVar17 + -1;
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            if (pbVar17 == (byte *)0x0) {
              pbVar17 = (byte *)0x0;
LAB_01acae80:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar12,pbVar17,0,pbVar13,&DAT_01d2fc78);
            }
            if ((char)pbVar13[iVar12] < -0x40) goto LAB_01acae80;
          }
          while( true ) {
            uVar19 = FUN_01307268(0x2f,iVar12,pbVar16);
            pbVar16 = (byte *)(uVar19 >> 0x20);
            if ((uVar19 & 1) == 0) break;
            if ((pbVar16 < pbVar13) && (pbVar16[iVar12] == 0x2f)) {
              if (pbVar16 < param_4) break;
              if (pbVar17 < pbVar16) {
                puVar7 = &DAT_01d2fc88;
                pbVar14 = pbVar17;
                goto LAB_01acae24;
              }
              pbVar13 = pbVar16;
              if (pbVar17 != pbVar16) {
                pbVar13 = pbVar17 + -(int)pbVar16;
              }
              if (pbVar17 != pbVar16 && pbVar13 != &DAT_00000001) {
                pbVar16 = pbVar16 + iVar12;
                if ((char)pbVar16[1] < -0x40) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb514(pbVar16,pbVar13,1,pbVar13,0x1d2fa68);
                }
                if (((&DAT_00000001 < pbVar13 + -1) && ((pbVar16[1] & 0xdf) - 0x41 < 0x1a)) &&
                   (pbVar16[2] == 0x7c || pbVar16[2] == 0x3a)) {
                  if (pbVar13 + -1 == (byte *)0x2) break;
                  uVar11 = pbVar16[3] - 0x23;
                  if (((uVar11 < 0x1d) && ((1 << (uVar11 & 0xff) & 0x10001001U) != 0)) ||
                     (pbVar16[3] == 0x5c)) break;
                }
              }
              if (pbVar17 != (byte *)0x0) {
                iVar6 = -1;
                if ((char)pbVar17[iVar12 + -1] < '\0') {
                  bVar2 = pbVar17[iVar12 + -2];
                  if ((char)bVar2 < -0x40) {
                    bVar8 = pbVar17[iVar12 + -3];
                    if ((char)bVar8 < -0x40) {
                      uVar11 = (int)(char)bVar8 & 0x3fU | (pbVar17[iVar12 + -4] & 7) << 6;
                    }
                    else {
                      uVar11 = bVar8 & 0xf;
                    }
                    uVar11 = (int)(char)bVar2 & 0x3fU | uVar11 << 6;
                  }
                  else {
                    uVar11 = bVar2 & 0x1f;
                  }
                  if (1 < uVar11) {
                    iVar6 = -2;
                  }
                  if ((0x1f < uVar11) && (iVar6 = -4, uVar11 < 0x400)) {
                    iVar6 = -3;
                  }
                }
                *(byte **)(param_1 + 8) = pbVar17 + iVar6;
              }
              break;
            }
            if (pbVar13 < pbVar16) break;
          }
        }
        FUN_01acb16c(param_1,param_2,param_4);
        pbVar16 = pbVar17;
        if (!bVar4) goto LAB_01acac48;
        pbVar17 = *(byte **)(param_1 + 8);
        iVar12 = *(int *)(param_1 + 4);
        if ((pbVar17 == (byte *)0x0) || (pbVar17[iVar12 + -1] != 0x2f)) {
          pbVar13 = pbVar17;
          if (*(byte **)param_1 == pbVar17) {
            FUN_01af7b44(param_1,pbVar17,1,1,1);
            iVar12 = *(int *)(param_1 + 4);
            pbVar13 = *(byte **)(param_1 + 8);
          }
          pbVar13[iVar12] = 0x2f;
          *(byte **)(param_1 + 8) = pbVar17 + 1;
          pbVar17 = pbVar17 + 1;
        }
      }
    }
    pbVar13 = param_5;
  } while (bVar4);
LAB_01acac48:
  if (((uint)param_2 & 0xff) != 0) goto LAB_01acad60;
  iVar12 = *(int *)(param_1 + 4);
  pbVar13 = *(byte **)(param_1 + 8);
  if (param_4 != (byte *)0x0) {
    if (param_4 < pbVar13) {
      if ((char)param_4[iVar12] < -0x40) goto LAB_01acac80;
    }
    else if (pbVar13 != param_4) {
LAB_01acac80:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_005328b6,0x2b,&DAT_01d2fb28);
    }
  }
  if (pbVar13 < param_4) {
    FUN_00666560(param_4,pbVar13,&DAT_01d2fb28);
    pbVar13 = param_6;
    pbVar17 = param_1;
LAB_01acadb0:
    FUN_01af7b44(param_1,param_4,1,1,1);
    pbVar14 = *(byte **)param_1;
    iVar12 = *(int *)(param_1 + 4);
    local_3c = *(byte **)(param_1 + 8);
  }
  else {
    pbVar13 = pbVar13 + -(int)param_4;
    if (pbVar13 == (byte *)0x0) {
      pbVar16 = &DAT_00000001;
      pbVar17 = (byte *)0x0;
    }
    else {
      pbVar16 = (byte *)FUN_01298504(pbVar13,1);
      pbVar17 = pbVar13;
      if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,pbVar13);
      }
    }
    *(byte **)(param_1 + 8) = param_4;
    FUN_01bed4e2(pbVar16,param_4 + iVar12,pbVar13);
    pbVar14 = *(byte **)param_1;
    local_3c = param_4;
    if (pbVar14 == param_4) goto LAB_01acadb0;
  }
  local_3c[iVar12] = 0x2f;
  *(byte **)(param_1 + 8) = pbVar5;
  uVar20 = FUN_01ad01f0(pbVar16,pbVar13,0x2f);
  uVar11 = (uint)((ulonglong)uVar20 >> 0x20);
  if ((uint)((int)pbVar14 - (int)pbVar5) < uVar11) {
    FUN_01af7b44(param_1,pbVar5,uVar11,1,1);
    pbVar5 = *(byte **)(param_1 + 8);
    iVar12 = *(int *)(param_1 + 4);
  }
  FUN_01bed4e2(pbVar5 + iVar12,(int)uVar20,uVar11);
  *(byte **)(param_1 + 8) = pbVar5 + uVar11;
  FUN_019bb7e0(pbVar17,pbVar16);
LAB_01acad60:
  return CONCAT44(param_6,param_5);
}

