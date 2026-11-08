// FUN_000534b8 @ 000534b8  size=3084  callers=1
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x00053cdc) */
/* WARNING: Removing unreachable block (ram,0x00053670) */
/* WARNING: Removing unreachable block (ram,0x00053660) */
/* WARNING: Removing unreachable block (ram,0x00053f80) */

undefined4 FUN_000534b8(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar22;
  double dVar21;
  double dVar23;
  undefined4 local_2058;
  undefined4 uStack_2054;
  double dStack_2050;
  char local_2048 [8196];
  
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70801");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70802");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70601");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70602");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70501");
          if (iVar3 != 0) {
            return 0;
          }
        }
      }
    }
  }
  iVar4 = FUN_00018aa0();
  iVar3 = DAT_008c706c;
  if (DAT_008c706c < 1) {
    return 0;
  }
  iVar5 = FUN_00024c74();
  if (4 < DAT_000be63c) {
    snprintf(local_2048,0x2000,"entrance_temp = %d, current_voltage = %d, work_wol = %d\n",iVar4,
             iVar5,iVar3);
    FUN_0004948c(4,local_2048,0);
  }
  FUN_0004bd34(&DAT_008c7224);
  if (DAT_000bed28 == 0) {
    return 0;
  }
  DAT_008c722c = DAT_008c722c + 1;
  uVar6 = FUN_00024f30();
  if (uVar6 == 0) {
    return 0;
  }
  if (3 < DAT_008c7048) {
    return 0;
  }
  if (DAT_000bed2c == 0xff) {
    DAT_000bed2c = iVar4;
    FUN_0004bd34(&DAT_008c7230);
  }
  if (0x14 < DAT_008c7224 - DAT_008c7230) {
    if (DAT_000bed2c < 0x30 && 4 < DAT_000bed2c - iVar4) {
      if (3 < DAT_000be63c) {
        snprintf(local_2048,0x2000,"water temp drop 5 degree in 20 secs, now:%d, before:%d",iVar4,
                 DAT_000bed2c);
        FUN_0004948c(3,local_2048,0);
      }
      iVar3 = FUN_00024c74();
      if (DAT_008c706c - 0x6bdU < 0x1c8) {
        iVar5 = DAT_008c706c;
        if (iVar4 < 0x2e) {
          iVar5 = DAT_008c706c + -0x14;
          if (iVar5 <= iVar3) {
            iVar5 = DAT_008c706c;
            if (iVar4 < 0x29) {
              iVar5 = DAT_008c706c + -10;
              if (iVar3 < iVar5) goto LAB_00053d90;
              iVar5 = DAT_008c706c;
              if (iVar4 < 0x24) {
                if (iVar3 < DAT_008c706c) goto LAB_00053d90;
                if ((0x1e < iVar4) || (DAT_008c706c + 0x13 < iVar3)) goto LAB_000535d0;
                iVar5 = DAT_008c706c + 0x14;
                if (0x883 < iVar5) {
                  iVar5 = 0x884;
                }
              }
            }
            goto LAB_00053d88;
          }
        }
        else {
LAB_00053d88:
          if (iVar5 <= iVar3) goto LAB_000535d0;
        }
LAB_00053d90:
        if (3 < DAT_000be63c) {
          builtin_strncpy(local_2048,"rise vol by sudden temp drop.",0x1e);
          FUN_0004948c(3,local_2048,0);
        }
        if (iVar4 < 0x2d) {
          if (iVar3 + 0x1d < iVar5) {
            iVar5 = iVar3 + 0x1e;
          }
          FUN_000246cc(iVar5,3);
        }
      }
    }
LAB_000535d0:
    DAT_000bed2c = iVar4;
    FUN_0004bd34(&DAT_008c7230);
  }
  pthread_setcancelstate(1,(int *)0x0);
  fVar16 = (float)FUN_00024efc();
  pthread_setcancelstate(0,(int *)0x0);
  FUN_0004bd34(&DAT_008c7238);
  local_2058 = 0;
  uStack_2054 = 0x402e0000;
  FUN_0001c934(0,(undefined1)DAT_000c94e8);
  uVar17 = FUN_0002a71c();
  in_fpscr = in_fpscr & 0xfffffff;
  if ((double)CONCAT44(extraout_s1,uVar17) == 0.0) {
    FUN_00024c74();
    return 0;
  }
  dVar23 = (double)VectorSignedToFloat(DAT_000bed30,(byte)(in_fpscr >> 0x16) & 3);
  memcpy(local_2048,&DAT_000a4608,0x78);
  dStack_2050 = dVar23;
  FUN_0004e5e8(local_2048,iVar4,&local_2058,&dStack_2050);
  iVar5 = (int)fVar16;
  iVar3 = (int)(longlong)dStack_2050;
  uVar7 = FUN_00024c74();
  dVar23 = (double)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
  dVar20 = (double)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  DAT_008c7240 = DAT_008c7240 + 1;
  FUN_0002a554();
  FUN_0002a6e0();
  FUN_0002a514();
  iVar8 = FUN_0002a554();
  iVar9 = FUN_0002a6e0();
  iVar10 = FUN_0002a514();
  dVar23 = ((dVar20 * 0.955) / dVar23) * 100.0;
  in_fpscr = in_fpscr & 0xfffffff;
  uVar11 = in_fpscr | (uint)(dVar23 < 303.0) << 0x1f | (uint)(dVar23 == 303.0) << 0x1e;
  uVar14 = uVar11 | (uint)NAN(dVar23) << 0x1c;
  bVar1 = (byte)(uVar11 >> 0x18);
  uVar11 = uVar6;
  if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar14 >> 0x1c) & 1)) {
    bVar12 = DAT_000c8b18 != '\0';
    dVar23 = 0.99;
    if (bVar12) {
      dVar23 = 0.98;
    }
    dVar18 = (double)VectorSignedToFloat(DAT_000be5f8,(byte)(uVar14 >> 0x16) & 3);
    dVar20 = 0.985;
    if (bVar12) {
      dVar20 = 0.975;
    }
    dVar21 = (double)VectorUnsignedToFloat
                               (iVar8 * iVar10 * iVar9 * 0x259,(byte)(uVar14 >> 0x16) & 3);
    dVar19 = 0.975;
    if (bVar12) {
      dVar19 = 0.965;
    }
    dVar18 = (double)CONCAT44(extraout_s1,uVar17) / (((dVar21 / 1000.0) * dVar18) / 100.0);
    if ((dVar18 <= dVar23) || (iVar5 < iVar3 + -99)) {
      uVar14 = in_fpscr | (uint)(dVar18 < dVar20) << 0x1f;
      uVar15 = uVar14 | (uint)(NAN(dVar18) || NAN(dVar20)) << 0x1c;
      if (((byte)(uVar14 >> 0x1f) != ((byte)(uVar15 >> 0x1c) & 1)) ||
         (((uVar15 = in_fpscr, dVar23 <= dVar18 || (iVar3 + -0x14 <= iVar5)) ||
          (dVar18 == DAT_008c7258)))) {
        in_fpscr = uVar15 & 0xfffffff;
        uVar11 = in_fpscr | (uint)(dVar18 < dVar19) << 0x1f;
        uVar14 = uVar11 | (uint)(NAN(dVar18) || NAN(dVar19)) << 0x1c;
        if ((((byte)(uVar11 >> 0x1f) == ((byte)(uVar14 >> 0x1c) & 1)) &&
            (uVar14 = in_fpscr, dVar18 < dVar20)) && (iVar5 < iVar3 + -0x28)) {
          uVar11 = (uint)(DAT_008c7258 != dVar18);
          if (iVar4 < 0x23) {
            uVar11 = 0;
          }
          if (uVar11 != 0) {
            DAT_008c7250 = DAT_008c7250 + 1;
            if (DAT_008c7250 < 2) {
              iVar5 = iVar5 + 0x19;
              DAT_008c7258 = dVar18;
              iVar10 = FUN_0004bd34(&DAT_008c7244);
            }
            else {
              iVar5 = iVar5 + 0x28;
              DAT_008c7250 = 0;
              DAT_008c7258 = dVar18;
              iVar10 = FUN_0004bd34(&DAT_008c7244);
            }
            goto LAB_0005375c;
          }
        }
        uVar17 = FUN_0002a740();
        dVar23 = (double)CONCAT44(extraout_s1_00,uVar17);
        in_fpscr = uVar14 & 0xfffffff;
        if (dVar23 < 0.01) {
          uVar17 = FUN_0002e320();
          dVar23 = (double)CONCAT44(extraout_s1_01,uVar17);
        }
        iVar10 = FUN_0002e388();
        iVar5 = iVar3;
        if (iVar10 < 0x4b1) {
LAB_00053cfc:
          if (0x1856 < DAT_000bed30) {
            DAT_000bed30 = 0x1856;
          }
          if (DAT_000c8b68 != '\0') goto LAB_00053e3c;
        }
        else {
          dVar20 = (double)VectorSignedToFloat(500,(byte)(in_fpscr >> 0x16) & 3);
          dVar20 = dVar20 + 310000.0;
          uVar11 = in_fpscr & 0xfffffff | (uint)(dVar20 < dVar23) << 0x1f |
                   (uint)(dVar20 == dVar23) << 0x1e;
          in_fpscr = uVar11 | (uint)(NAN(dVar20) || NAN(dVar23)) << 0x1c;
          bVar1 = (byte)(uVar11 >> 0x18);
          if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
          goto LAB_00053cfc;
          if (DAT_000c8b68 == '\0') {
            if (DAT_008c7264 == 0) {
              DAT_008c7264 = FUN_0002e388();
            }
            iVar5 = FUN_0002e388();
            if (0x3c < iVar5 - DAT_008c7264) {
              DAT_000bed38 = DAT_000bed38 + 0.01;
              DAT_008c7264 = FUN_0002e388();
            }
            dVar23 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
            dVar20 = dVar23 * 1.02;
            DAT_000bed30 = (int)(longlong)((DAT_000bed38 + 1.0) * dVar23);
            dVar23 = (double)VectorSignedToFloat(DAT_000bed30,(byte)(in_fpscr >> 0x16) & 3);
            uVar11 = in_fpscr & 0xfffffff | (uint)(dVar23 < dVar20) << 0x1f;
            in_fpscr = uVar11 | (uint)(NAN(dVar23) || NAN(dVar20)) << 0x1c;
            if ((byte)(uVar11 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
              DAT_000c8b68 = '\x01';
              DAT_000bed30 = (int)(longlong)dVar20;
            }
            iVar5 = DAT_000bed30;
            goto LAB_00053cfc;
          }
          if (0x1856 < DAT_000bed30) {
            DAT_000bed30 = 0x1856;
          }
LAB_00053e3c:
          if (iVar5 < DAT_000bed30) {
            iVar5 = DAT_000bed30;
          }
        }
        if (0x1855 < iVar5) {
          iVar5 = 0x1856;
        }
        iVar10 = FUN_0004bd34(&DAT_008c7244);
        uVar11 = uVar6;
      }
      else {
        DAT_008c7250 = 0;
        DAT_008c724c = DAT_008c724c + 1;
        if (DAT_008c724c < 2) {
          uVar11 = 0;
          DAT_008c7258 = dVar18;
        }
        else {
          iVar5 = iVar5 + 0x14;
          DAT_008c724c = 0;
          DAT_008c7258 = dVar18;
          iVar10 = FUN_0004bd34(&DAT_008c7244);
        }
      }
    }
    else {
      DAT_008c724c = 0;
      DAT_008c7250 = 0;
      uVar6 = in_fpscr | (uint)(dVar18 < 1.0045) << 0x1f | (uint)(dVar18 == 1.0045) << 0x1e;
      uVar14 = uVar6 | (uint)NAN(dVar18) << 0x1c;
      bVar1 = (byte)(uVar6 >> 0x18);
      if (((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar14 >> 0x1c) & 1)) ||
         (uVar14 = in_fpscr, dVar18 == DAT_008c7258)) {
        in_fpscr = uVar14;
        DAT_008c7260 = 0;
        uVar11 = 0;
      }
      else {
        DAT_008c7260 = DAT_008c7260 + 1;
        if (DAT_008c7260 < 2) {
          uVar11 = 0;
          DAT_008c7258 = dVar18;
        }
        else {
          iVar5 = iVar5 + -0x14;
          DAT_008c7258 = dVar18;
          iVar10 = FUN_0004bd34(&DAT_008c7244);
          DAT_008c7260 = 0;
        }
      }
    }
  }
  else {
    in_fpscr = uVar14;
    if (3 < DAT_000be63c) {
      snprintf(local_2048,0x2000,"over current 303 which is : %f  ",dVar23);
      FUN_0004948c(3,local_2048,0);
      in_fpscr = uVar14;
    }
    iVar5 = iVar5 + -0x14;
    iVar10 = FUN_0004bd34(&DAT_008c7244);
  }
LAB_0005375c:
  if (iVar3 != 0) {
    dVar20 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    dVar20 = dVar20 * 1.02;
    dVar23 = (double)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
    uVar6 = in_fpscr & 0xfffffff | (uint)(dVar23 < dVar20) << 0x1f |
            (uint)(dVar23 == dVar20) << 0x1e;
    in_fpscr = uVar6 | (uint)(NAN(dVar23) || NAN(dVar20)) << 0x1c;
    bVar1 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      iVar5 = (int)(longlong)dVar20;
    }
  }
  if (DAT_000be5f8 < 0x5a) {
    iVar5 = iVar5 * (DAT_000be5f8 + 10);
    iVar10 = iVar5 * 0x51eb851f;
    iVar5 = iVar5 / 100;
  }
  iVar3 = FUN_00024c74(iVar10);
  if (uVar11 == 0) {
    return 0;
  }
  pthread_setcancelstate(1,(int *)0x0);
  fVar16 = (float)FUN_00024efc();
  iVar10 = (int)fVar16;
  pthread_setcancelstate(0,(int *)0x0);
  if (iVar10 < 0x1901) {
    DAT_008c7268 = 0;
LAB_00053d3c:
    if ((10 < iVar10) || (iVar8 = FUN_000245fc(), iVar8 == 0)) goto LAB_00053838;
  }
  else {
    iVar9 = DAT_008c7268 + 1;
    bVar13 = SBORROW4(iVar10,0x193c);
    iVar8 = iVar10 + -0x193c;
    bVar12 = iVar10 == 0x193c;
    if (iVar10 < 0x193d) {
      bVar13 = SBORROW4(iVar9,0xf);
      iVar8 = DAT_008c7268 + -0xe;
      bVar12 = iVar9 == 0xf;
    }
    DAT_008c7268 = iVar9;
    if (bVar12 || iVar8 < 0 != bVar13) goto LAB_00053d3c;
  }
  if (3 < DAT_000be63c) {
    snprintf(local_2048,0x2000,"miner power:%d",iVar10);
    FUN_0004948c(3,local_2048,0);
  }
  FUN_0004e8c8(0x10,"power is err.");
  FUN_00056e88(0x1b,0xff);
  FUN_0002ff38(1);
LAB_00053838:
  fVar16 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
  iVar8 = DAT_008c726c;
  if (0 < DAT_008c726c) {
    iVar8 = DAT_008c726c + -1;
  }
  dVar23 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  if (0 < DAT_008c726c) {
    DAT_008c726c = iVar8;
  }
  if (4 < DAT_000be63c) {
    snprintf(local_2048,0x2000,
             "HEM power adjust current v: %d  I :%f miner power %d target_power %d entrance_temp :%d g_target_power: %d"
             ,iVar3,(double)(float)((((double)fVar16 * 0.955) / dVar23) * 100.0),iVar10,iVar5,iVar4,
             DAT_000bed30);
    FUN_0004948c(4,local_2048,0);
  }
  pthread_setcancelstate(1,(int *)0x0);
  if (iVar5 + 10 <= iVar10) {
    if (DAT_008c726c != 0) {
      return 0;
    }
    fVar22 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar20 = (double)(fVar16 / fVar22);
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar20 < 0.0) {
      sqrt(dVar20);
    }
    iVar4 = (int)(longlong)(dVar23 / SQRT(dVar20));
    if (4 < DAT_000be63c) {
      snprintf(local_2048,0x2000,"set to target_vol = %d",iVar4);
      FUN_0004948c(4,local_2048,0);
    }
    iVar8 = iVar3 - iVar4;
    if (iVar8 < 0xf) {
      if (iVar8 < 10) {
        if (iVar8 < 8) {
          if (iVar8 < 5) {
            if (iVar8 < 3) {
              if (iVar8 == 2) {
                iVar4 = iVar3 + -2;
              }
            }
            else {
              iVar4 = iVar3 + -3;
            }
          }
          else {
            iVar4 = iVar3 + -5;
          }
        }
        else {
          iVar4 = iVar3 + -8;
        }
      }
      else {
        iVar4 = iVar3 + -10;
      }
    }
    else {
      iVar4 = iVar3 + -0xf;
    }
    if (iVar4 < 0x6bd) {
      iVar4 = 0x6bd;
    }
    if (iVar4 < iVar3) {
      FUN_0004bd34(&DAT_008c7270);
      iVar5 = DAT_008c7270 - DAT_008c7278;
      bVar13 = SBORROW4(iVar10,0x17d4);
      iVar3 = iVar10 + -0x17d4;
      bVar12 = iVar10 == 0x17d4;
      if (iVar10 < 0x17d5) {
        bVar13 = SBORROW4(iVar5,5);
        iVar3 = iVar5 + -5;
        bVar12 = iVar5 == 5;
      }
      if (!bVar12 && iVar3 < 0 == bVar13) {
        FUN_0004bd34(&DAT_008c7278);
        FUN_000246cc(iVar4,3);
      }
      DAT_008c726c = 2;
      return 0;
    }
  }
  if ((iVar10 <= iVar5 + -0x28) && (DAT_008c726c == 0)) {
    fVar22 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar20 = (double)(fVar16 / fVar22);
    if (dVar20 < 0.0) {
      sqrt(dVar20);
    }
    iVar4 = (int)(longlong)(dVar23 / SQRT(dVar20));
    if (4 < DAT_000be63c) {
      snprintf(local_2048,0x2000,"set to target_vol = %d",iVar4);
      FUN_0004948c(4,local_2048,0);
    }
    iVar5 = iVar4 - iVar3;
    if (iVar5 < 0x14) {
      if (iVar5 < 0xf) {
        if (iVar5 < 10) {
          if (iVar5 < 8) {
            if (iVar5 < 5) {
              if (iVar5 < 3) {
                if (iVar5 == 2) {
                  iVar4 = iVar3 + 2;
                }
              }
              else {
                iVar4 = iVar3 + 3;
              }
            }
            else {
              iVar4 = iVar3 + 5;
            }
          }
          else {
            iVar4 = iVar3 + 8;
          }
        }
        else {
          iVar4 = iVar3 + 10;
        }
      }
      else {
        iVar4 = iVar3 + 0xf;
      }
    }
    else {
      iVar4 = iVar3 + 0x14;
    }
    iVar5 = 0x884;
    if (iVar4 < 0x884) {
      iVar5 = iVar4;
    }
    if (iVar3 < iVar5) {
      FUN_000246cc(iVar5,3);
    }
  }
  return 0;
}

