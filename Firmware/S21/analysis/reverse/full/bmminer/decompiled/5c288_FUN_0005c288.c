// FUN_0005c288 @ 0005c288  size=1580  callers=0
// program: bmminer


int FUN_0005c288(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint in_fpscr;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  uint local_2184;
  uint local_2168;
  uint local_2164 [15];
  float local_2128 [60];
  undefined4 local_2038;
  char acStack_2034 [16];
  undefined4 uStack_2024;
  undefined4 local_2020;
  undefined1 local_201c;
  
  if (3 < DAT_000be63c) {
    local_2038._0_1_ = 'D';
    local_2038._1_1_ = 'o';
    local_2038._2_1_ = ' ';
    local_2038._3_1_ = 'f';
    builtin_strncpy(acStack_2034,"req tuning basic",0x10);
    uStack_2024._0_1_ = '.';
    uStack_2024._1_1_ = '\n';
    uStack_2024._2_1_ = '\0';
    FUN_0004948c(3,&local_2038,0);
  }
  piVar2 = DAT_00944b88;
  memset(DAT_00944b88 + 1,0,0x30);
  *piVar2 = param_1;
  FUN_0005a81c();
  FUN_00057a04(*(undefined4 *)*DAT_00944b88);
  iVar3 = FUN_0005bbac();
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar12 = VectorUnsignedToFloat(*(undefined4 *)(*DAT_00944b88 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_00025da0(uVar12,0xff,DAT_008c7044,*(undefined1 *)(*DAT_00944b88 + 0x14));
  if (3 < DAT_000be63c) {
    memset(&local_2038,0,0x2000);
    local_2038._0_1_ = '\n';
    local_2038._1_1_ = '\0';
    FUN_0004a3a4(3,&local_2038,0);
    if (3 < DAT_000be63c) {
      local_2038._0_1_ = '>';
      local_2038._1_1_ = '>';
      local_2038._2_1_ = '>';
      local_2038._3_1_ = '>';
      builtin_strncpy(acStack_2034," Do tuning paral",0x10);
      uStack_2024._0_1_ = 'l';
      uStack_2024._1_1_ = 'e';
      uStack_2024._2_1_ = 'l';
      uStack_2024._3_1_ = '.';
      local_2020._0_1_ = '\n';
      local_2020._1_1_ = '\0';
      FUN_0004948c(3,&local_2038,0);
    }
  }
  iVar3 = 0;
  do {
    iVar4 = FUN_0002a6f0(iVar3);
    if (iVar4 != 0) {
      FUN_0005a3cc(iVar3,1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  iVar4 = *DAT_00944b88;
  local_2184 = *(uint *)(iVar4 + 4);
  iVar3 = *(int *)(iVar4 + 0x10);
  uVar8 = *(uint *)(iVar4 + 0xc);
  if (3 < DAT_000be63c) {
    snprintf((char *)&local_2038,0x2000,
             "freq_prev = %d, freq_start = %d, freq_step = %d, freq_min = %d\n",local_2184,
             local_2184,iVar3,uVar8);
    FUN_0004948c(3,&local_2038,0);
  }
  local_2168 = local_2184;
  if (local_2184 < uVar8) {
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    iVar9 = 0;
    do {
      if (DAT_000be63c < 4) {
LAB_0005c3c8:
        iVar4 = FUN_0005a738();
      }
      else {
        memset(&local_2038,0,0x2000);
        local_2038._0_1_ = '\n';
        local_2038._1_1_ = '\0';
        FUN_0004a3a4(3,&local_2038,0);
        if (DAT_000be63c < 4) goto LAB_0005c3c8;
        snprintf((char *)&local_2038,0x2000,">>>> freq_curr = %d\n",local_2168);
        FUN_0004948c(3,&local_2038,0);
        iVar4 = FUN_0005a738();
      }
      if (iVar4 == 0) {
        iVar4 = 0;
        if (3 < DAT_000be63c) {
          local_2038._0_1_ = 'A';
          local_2038._1_1_ = 'l';
          local_2038._2_1_ = 'l';
          local_2038._3_1_ = ' ';
          builtin_strncpy(acStack_2034,"ready chain done",0x10);
          uStack_2024._0_1_ = ',';
          uStack_2024._1_1_ = ' ';
          uStack_2024._2_1_ = 'e';
          uStack_2024._3_1_ = 'x';
          local_2020._0_1_ = 'i';
          local_2020._1_1_ = 't';
          local_2020._2_1_ = '.';
          local_2020._3_1_ = '\n';
          local_201c = 0;
          FUN_0004948c(3,&local_2038,0);
        }
        goto LAB_0005c4dc;
      }
      iVar4 = 0;
      do {
        iVar5 = FUN_0002a6f0(iVar4);
        if ((iVar5 != 0) && (iVar5 = FUN_0005a540(iVar4), iVar5 == 1)) {
          uVar12 = VectorSignedToFloat(DAT_000be8f0,(byte)(in_fpscr >> 0x16) & 3);
          FUN_0002683c(uVar12,iVar4,DAT_008c7044,local_2184,local_2168,
                       *(undefined1 *)(*DAT_00944b88 + 0x15),100);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
      local_2184 = local_2168;
      iVar4 = FUN_0005bbac();
      if (iVar4 != 0) {
        if (3 < DAT_000be63c) {
          local_2038._0_1_ = 'S';
          local_2038._1_1_ = 'e';
          local_2038._2_1_ = 't';
          local_2038._3_1_ = ' ';
          builtin_strncpy(acStack_2034,"voltage failed, ",0x10);
          uStack_2024._0_1_ = 'e';
          uStack_2024._1_1_ = 'x';
          uStack_2024._2_1_ = 'i';
          uStack_2024._3_1_ = 't';
          local_2020._0_1_ = '.';
          local_2020._1_1_ = '\n';
          local_2020._2_1_ = '\0';
          FUN_0004948c(3,&local_2038,0);
        }
        goto LAB_0005c4dc;
      }
      FUN_0004ef68(local_2168,DAT_000be5ec,0x14);
      FUN_0005b784(&local_2168);
      iVar5 = FUN_00059f94();
      iVar4 = 0;
      do {
        iVar6 = FUN_0002a6f0(iVar4);
        if ((iVar6 != 0) && (iVar6 = FUN_0005a540(iVar4), iVar6 == 1)) {
          FUN_0005adf4(iVar4,iVar5);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
      iVar4 = 0;
      do {
        iVar6 = FUN_0002a6f0(iVar4);
        if ((iVar6 != 0) && (iVar6 = FUN_0005a540(iVar4), iVar6 == 1)) {
          iVar6 = *DAT_00944b88;
          iVar6 = FUN_0005a900(*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 0x20),
                               *(undefined4 *)(iVar6 + 0x24),iVar4);
          if (iVar6 == 0) {
            DAT_00944b88[iVar4 + 5] = 1;
          }
          else {
            FUN_0005a3cc(iVar4,2);
          }
          fVar13 = (float)FUN_0005b740(iVar4,iVar5);
          fVar14 = (float)DAT_00944b88[iVar4 + 9];
          uVar7 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar14) << 0x1f |
                  (uint)(fVar13 == fVar14) << 0x1e;
          in_fpscr = uVar7 | (uint)(NAN(fVar13) || NAN(fVar14)) << 0x1c;
          bVar1 = (byte)(uVar7 >> 0x18);
          if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            DAT_00944b88[iVar4 + 9] = (int)fVar13;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
      iVar4 = 0;
      pfVar10 = (float *)(&DAT_00ffa894 + iVar5);
      pfVar11 = local_2128 + iVar9 * 4;
      do {
        iVar5 = FUN_0002a6f0(iVar4);
        iVar4 = iVar4 + 1;
        if (iVar5 != 0) {
          *pfVar11 = *pfVar10;
          local_2164[iVar9] = local_2168;
        }
        pfVar11 = pfVar11 + 1;
        pfVar10 = pfVar10 + 1;
      } while (iVar4 != 4);
      iVar9 = iVar9 + 1;
      local_2168 = local_2168 - iVar3;
    } while (uVar8 <= local_2168);
    iVar4 = 0;
  }
LAB_0005c4dc:
  iVar3 = 0;
  iVar5 = FUN_0002a6f0(0);
  uVar8 = DAT_000be63c;
  do {
    DAT_000be63c = uVar8;
    if (iVar5 != 0) {
      pfVar10 = local_2128 + iVar3;
      iVar6 = 0;
      iVar5 = 0;
      while (iVar6 < iVar9 + -1) {
        fVar13 = *pfVar10;
        if (fVar13 < 5.0) {
          iVar5 = iVar6;
          break;
        }
        pfVar10 = pfVar10 + 4;
        iVar6 = iVar6 + 1;
        if (*pfVar10 * 1.5 < fVar13) {
          iVar5 = iVar6;
        }
      }
      uVar7 = local_2164[iVar5];
      DAT_00944b88[iVar3 + 1] = uVar7;
      if (3 < uVar8) {
        snprintf((char *)&local_2038,0x2000,"chain %d best level %d, freq %d\n",iVar3,iVar5,uVar7);
        FUN_0004948c(3,&local_2038,0);
      }
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 4) {
      return iVar4;
    }
    iVar5 = FUN_0002a6f0(iVar3);
    uVar8 = DAT_000be63c;
  } while( true );
}

