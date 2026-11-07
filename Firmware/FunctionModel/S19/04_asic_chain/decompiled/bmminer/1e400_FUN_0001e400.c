// FUN_0001e400 @ 0001e400  size=1336  callers=2
// program: bmminer


uint FUN_0001e400(float param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  void *__ptr;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar17;
  int *piVar16;
  size_t sVar18;
  int *piVar19;
  size_t __nmemb;
  int iVar20;
  uint in_fpscr;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_1888;
  uint local_1884;
  undefined4 local_1878;
  undefined1 local_1874 [4];
  undefined4 local_1870;
  undefined4 local_186c;
  uint local_1868 [12];
  char local_1838 [2048];
  int local_1038 [1025];
  
  iVar12 = 0;
  local_1884 = 0;
  local_1878 = 0;
  memset(local_1038,0,0x1000);
  local_1868[4] = 0;
  local_1868[8] = 0;
  local_1870 = 0;
  local_1868[1] = 0xffffffff;
  local_1868[2] = 0xffffffff;
  local_1868[3] = 0xffffffff;
  local_186c = 0;
  local_1868[0] = 0xffffffff;
  local_1868[5] = 0;
  local_1868[6] = 0;
  local_1868[7] = 0;
  local_1868[9] = 0;
  local_1868[10] = 0;
  local_1868[0xb] = 0;
  sVar18 = 0;
  do {
    iVar5 = FUN_000201d8(iVar12);
    __nmemb = sVar18;
    if (iVar5 != 0) {
      piVar15 = (int *)(param_2 + iVar12 * 0x400);
      FUN_0001d520(piVar15,local_1868 + iVar12,local_1868 + iVar12 + 4,&local_1878);
      __nmemb = sVar18 + 1;
      uVar11 = local_1868[iVar12 + 4];
      if (local_1868[iVar12 + 4] <= local_1884) {
        uVar11 = local_1884;
      }
      local_1868[sVar18 + 8] = local_1868[iVar12];
      iVar5 = FUN_0002002c();
      uVar21 = local_1878;
      if (iVar5 != 0) {
        uVar10 = local_1868[iVar12];
        piVar16 = piVar15;
        piVar19 = local_1038 + iVar12 * 0x100;
        do {
          piVar17 = piVar16 + 1;
          *piVar19 = *piVar16 - uVar10;
          piVar16 = piVar17;
          piVar19 = piVar19 + 1;
        } while (piVar17 != piVar15 + iVar5);
      }
      if (DAT_00087dec == 2) {
        (&DAT_000891dc)[iVar12] = DAT_0048d398;
      }
      uVar9 = FUN_0002002c();
      uVar21 = FUN_00067190(uVar21,uVar9);
      (&DAT_000891f8)[iVar12] = uVar21;
      local_1884 = uVar11;
    }
    iVar12 = iVar12 + 1;
    sVar18 = __nmemb;
  } while (iVar12 != 4);
  qsort(local_1868 + 8,__nmemb,4,(__compar_fn_t)&LAB_0001d510);
  uVar21 = VectorUnsignedToFloat(local_1868[8],(byte)(in_fpscr >> 0x16) & 3);
  FUN_0001db34(uVar21,0xff,param_3,param_4);
  if (local_1868[8] != local_1884) {
    if (1 < __nmemb) {
      puVar14 = local_1868 + 8;
      sVar18 = 1;
      do {
        iVar12 = 0;
        do {
          iVar5 = FUN_000201d8(iVar12);
          if ((iVar5 != 0) && (puVar14[1] <= local_1868[iVar12])) {
            FUN_0001e1dc(param_1,iVar12,param_3,*puVar14,puVar14[1],param_4);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 4);
        sVar18 = sVar18 + 1;
        puVar14 = puVar14 + 1;
      } while (__nmemb != sVar18);
    }
    iVar12 = 0;
    do {
      iVar5 = FUN_000201d8(iVar12);
      if ((iVar5 != 0) && (uVar11 = local_1868[iVar12], uVar11 != local_1868[iVar12 + 4])) {
        if (3 < DAT_00087bbc) {
          snprintf(local_1838,0x800,"chain = %d, start = %d, freq_step = %.2f\n",iVar12,uVar11,
                   (double)param_1);
          FUN_00032218(3,local_1838,0);
        }
        sVar18 = FUN_0002002c();
        __ptr = calloc(sVar18,8);
        if (__ptr == (void *)0x0) {
          if (3 < DAT_00087bbc) {
            builtin_strncpy(local_1838,"failed alloc memory!\n",0x16);
            FUN_00032218(3,local_1838,0);
          }
        }
        else {
          iVar13 = 0;
          piVar15 = local_1038 + iVar12 * 0x100;
          local_1838[0] = '\0';
          local_1838[1] = '\0';
          local_1838[2] = '\0';
          local_1838[3] = '\0';
          local_1838[4] = '\0';
          local_1838[5] = '\0';
          local_1838[6] = '\0';
          local_1838[7] = '\0';
          iVar5 = FUN_0002001c();
          if (iVar5 != 0) {
            do {
              iVar6 = FUN_0002003c();
              if (iVar6 != 0) {
                iVar20 = 0;
                do {
                  iVar7 = FUN_0002003c();
                  iVar7 = iVar13 * iVar7 + iVar20;
                  iVar20 = iVar20 + 1;
                  *(int *)((int)__ptr + iVar7 * 8 + 4) = piVar15[iVar7];
                  *(int *)((int)__ptr + iVar7 * 8) = iVar7;
                } while (iVar6 != iVar20);
              }
              iVar6 = iVar13 * 8;
              iVar13 = iVar13 + 1;
              iVar20 = FUN_0002003c();
              sVar18 = FUN_0002003c();
              qsort((void *)(iVar20 * iVar6 + (int)__ptr),sVar18,8,(__compar_fn_t)&LAB_0001d4f0);
            } while (iVar5 != iVar13);
          }
          iVar5 = FUN_0002002c();
          fVar23 = 0.0;
          if (iVar5 != 0) {
            piVar16 = piVar15 + iVar5;
            fVar23 = 0.0;
            do {
              iVar5 = *piVar15;
              piVar15 = piVar15 + 1;
              fVar24 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
              uVar10 = in_fpscr & 0xfffffff | (uint)(fVar24 < fVar23) << 0x1f |
                       (uint)(fVar24 == fVar23) << 0x1e;
              in_fpscr = uVar10 | (uint)(NAN(fVar24) || NAN(fVar23)) << 0x1c;
              bVar2 = (byte)(uVar10 >> 0x18);
              if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                fVar23 = fVar24;
              }
            } while (piVar16 != piVar15);
          }
          fVar23 = ((param_1 + fVar23) - 1.0) / param_1;
          iVar5 = (uint)(0.0 < fVar23) * (int)fVar23;
          if (iVar5 != 0) {
            local_1888 = 0;
            do {
              local_1888 = local_1888 + 1;
              fVar23 = (float)VectorUnsignedToFloat(local_1888,(byte)(in_fpscr >> 0x16) & 3);
              iVar13 = FUN_0002003c();
              fVar23 = fVar23 * param_1;
              if (iVar13 != 0) {
                iVar6 = 0;
                do {
                  iVar20 = FUN_0002001c();
                  if (iVar20 != 0) {
                    iVar7 = 0;
                    do {
                      iVar8 = FUN_0002003c();
                      uVar21 = *(undefined4 *)((int)__ptr + (iVar7 * iVar8 + iVar6) * 8);
                      iVar8 = FUN_0002003c();
                      fVar24 = (float)VectorUnsignedToFloat
                                                (*(undefined4 *)
                                                  ((int)__ptr + (iVar7 * iVar8 + iVar6) * 8 + 4),
                                                 (byte)(in_fpscr >> 0x16) & 3);
                      uVar10 = in_fpscr & 0xfffffff;
                      uVar1 = uVar10 | (uint)(fVar23 < fVar24) << 0x1f |
                              (uint)(fVar23 == fVar24) << 0x1e;
                      in_fpscr = uVar1 | (uint)(NAN(fVar23) || NAN(fVar24)) << 0x1c;
                      bVar2 = (byte)(uVar1 >> 0x18);
                      if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
                         || (uVar10 = uVar10 | (uint)(param_1 == fVar23 - fVar24) << 0x1e,
                            in_fpscr = uVar10 | (uint)(fVar23 - fVar24 <= param_1) << 0x1d,
                            (bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar10 >> 0x1e,0))) {
                        fVar22 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
                        in_fpscr = in_fpscr & 0xfffffff;
                        fVar3 = fVar23;
                        if (fVar24 <= fVar23) {
                          fVar3 = fVar24;
                        }
                        FUN_00057ae4(fVar3 + fVar22,local_1838,local_1874,0);
                        local_1838[6] = local_1874[0];
                        sVar4 = FUN_0002009c();
                        FUN_000210e4(iVar12,0,(int)sVar4 * (int)(short)uVar21 & 0xff,param_3,
                                     local_1838._0_4_,local_1838._4_4_);
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar20 != iVar7);
                  }
                  iVar6 = iVar6 + 1;
                  usleep(100000);
                } while (iVar13 != iVar6);
              }
            } while (iVar5 != local_1888);
          }
          free(__ptr);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 4);
  }
  return local_1884;
}

