// FUN_000405b4 @ 000405b4  size=1544  callers=0
// program: bmminer


int FUN_000405b4(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  uint in_fpscr;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  uint local_968;
  uint local_964 [15];
  float local_928 [60];
  undefined4 local_838;
  char acStack_834 [16];
  undefined4 uStack_824;
  undefined4 local_820;
  undefined1 local_81c;
  
  if (3 < DAT_00087bbc) {
    local_838._0_1_ = 'D';
    local_838._1_1_ = 'o';
    local_838._2_1_ = ' ';
    local_838._3_1_ = 'f';
    builtin_strncpy(acStack_834,"req tuning basic",0x10);
    uStack_824._0_1_ = '.';
    uStack_824._1_1_ = '\n';
    uStack_824._2_1_ = '\0';
    FUN_00032218(3,&local_838,0);
  }
  piVar2 = DAT_00507490;
  memset(DAT_00507490 + 1,0,0x30);
  *piVar2 = param_1;
  FUN_0003ed98();
  FUN_0003b500(*(undefined4 *)*DAT_00507490);
  iVar4 = FUN_0003ff88();
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar13 = VectorUnsignedToFloat(*(undefined4 *)(*DAT_00507490 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_0001db34(uVar13,0xff,DAT_0048d39c,*(undefined1 *)(*DAT_00507490 + 0x14));
  if (3 < DAT_00087bbc) {
    local_838._0_1_ = '\n';
    local_838._1_1_ = '\0';
    FUN_00032eb0(3,&local_838,0);
    if (3 < DAT_00087bbc) {
      local_838._0_1_ = '>';
      local_838._1_1_ = '>';
      local_838._2_1_ = '>';
      local_838._3_1_ = '>';
      builtin_strncpy(acStack_834," Do tuning paral",0x10);
      uStack_824._0_1_ = 'l';
      uStack_824._1_1_ = 'e';
      uStack_824._2_1_ = 'l';
      uStack_824._3_1_ = '.';
      local_820._0_1_ = '\n';
      local_820._1_1_ = '\0';
      FUN_00032218(3,&local_838,0);
    }
  }
  iVar4 = 0;
  do {
    iVar5 = FUN_000201d8(iVar4);
    if (iVar5 != 0) {
      FUN_0003e948(iVar4,1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  iVar5 = *DAT_00507490;
  uVar10 = *(uint *)(iVar5 + 4);
  iVar4 = *(int *)(iVar5 + 0x10);
  uVar8 = *(uint *)(iVar5 + 0xc);
  if (3 < DAT_00087bbc) {
    snprintf((char *)&local_838,0x800,
             "freq_prev = %d, freq_start = %d, freq_step = %d, freq_min = %d\n",uVar10,uVar10,iVar4,
             uVar8);
    FUN_00032218(3,&local_838,0);
  }
  local_968 = uVar10;
  if (uVar10 < uVar8) {
    iVar9 = 0;
    iVar5 = 0;
  }
  else {
    iVar9 = 0;
    do {
      if (DAT_00087bbc < 4) {
LAB_000406e8:
        iVar5 = FUN_0003ecb4();
      }
      else {
        local_838._0_1_ = '\n';
        local_838._1_1_ = '\0';
        FUN_00032eb0(3,&local_838,0);
        if (DAT_00087bbc < 4) goto LAB_000406e8;
        snprintf((char *)&local_838,0x800,">>>> freq_curr = %d\n",local_968);
        FUN_00032218(3,&local_838,0);
        iVar5 = FUN_0003ecb4();
      }
      if (iVar5 == 0) {
        iVar5 = 0;
        if (DAT_00087bbc < 4) {
        }
        else {
          local_838._0_1_ = 'A';
          local_838._1_1_ = 'l';
          local_838._2_1_ = 'l';
          local_838._3_1_ = ' ';
          builtin_strncpy(acStack_834,"ready chain done",0x10);
          uStack_824._0_1_ = ',';
          uStack_824._1_1_ = ' ';
          uStack_824._2_1_ = 'e';
          uStack_824._3_1_ = 'x';
          local_820._0_1_ = 'i';
          local_820._1_1_ = 't';
          local_820._2_1_ = '.';
          local_820._3_1_ = '\n';
          local_81c = 0;
          FUN_00032218(3,&local_838,0);
        }
        goto LAB_000407fc;
      }
      iVar5 = 0;
      do {
        iVar6 = FUN_000201d8(iVar5);
        if ((iVar6 != 0) && (iVar6 = FUN_0003eabc(iVar5), iVar6 == 1)) {
          uVar13 = VectorSignedToFloat(DAT_00087df4,(byte)(in_fpscr >> 0x16) & 3);
          FUN_0001e1dc(uVar13,iVar5,DAT_0048d39c,uVar10,local_968,
                       *(undefined1 *)(*DAT_00507490 + 0x15));
        }
        uVar3 = local_968;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      iVar5 = FUN_0003ff88();
      if (iVar5 != 0) {
        if (3 < DAT_00087bbc) {
          local_838._0_1_ = 'S';
          local_838._1_1_ = 'e';
          local_838._2_1_ = 't';
          local_838._3_1_ = ' ';
          builtin_strncpy(acStack_834,"voltage failed, ",0x10);
          uStack_824._0_1_ = 'e';
          uStack_824._1_1_ = 'x';
          uStack_824._2_1_ = 'i';
          uStack_824._3_1_ = 't';
          local_820._0_1_ = '.';
          local_820._1_1_ = '\n';
          local_820._2_1_ = '\0';
          FUN_00032218(3,&local_838,0);
        }
        goto LAB_000407fc;
      }
      FUN_000368b4(local_968,DAT_00087b68,0x14);
      FUN_0003fb88(&local_968);
      iVar6 = FUN_0003e510();
      iVar5 = 0;
      do {
        iVar7 = FUN_000201d8(iVar5);
        if ((iVar7 != 0) && (iVar7 = FUN_0003eabc(iVar5), iVar7 == 1)) {
          FUN_0003f370(iVar5,iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      iVar5 = 0;
      do {
        iVar7 = FUN_000201d8(iVar5);
        if ((iVar7 != 0) && (iVar7 = FUN_0003eabc(iVar5), iVar7 == 1)) {
          iVar7 = *DAT_00507490;
          iVar7 = FUN_0003ee7c(*(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 0x20),
                               *(undefined4 *)(iVar7 + 0x24),iVar5);
          if (iVar7 == 0) {
            DAT_00507490[iVar5 + 5] = 1;
          }
          else {
            FUN_0003e948(iVar5,2);
          }
          fVar14 = (float)FUN_0003fb44(iVar5,iVar6);
          fVar15 = (float)DAT_00507490[iVar5 + 9];
          uVar10 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar15) << 0x1f |
                   (uint)(fVar14 == fVar15) << 0x1e;
          in_fpscr = uVar10 | (uint)(NAN(fVar14) || NAN(fVar15)) << 0x1c;
          bVar1 = (byte)(uVar10 >> 0x18);
          if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            DAT_00507490[iVar5 + 9] = (int)fVar14;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 4);
      iVar5 = 0;
      pfVar12 = (float *)(&DAT_0080a894 + iVar6);
      pfVar11 = local_928 + iVar9 * 4;
      do {
        iVar6 = FUN_000201d8(iVar5);
        iVar5 = iVar5 + 1;
        if (iVar6 != 0) {
          *pfVar11 = *pfVar12;
          local_964[iVar9] = local_968;
        }
        pfVar11 = pfVar11 + 1;
        pfVar12 = pfVar12 + 1;
      } while (iVar5 != 4);
      iVar9 = iVar9 + 1;
      local_968 = local_968 - iVar4;
      uVar10 = uVar3;
    } while (uVar8 <= local_968);
    iVar5 = 0;
  }
LAB_000407fc:
  iVar4 = 0;
  iVar6 = FUN_000201d8(0);
  uVar10 = DAT_00087bbc;
  do {
    DAT_00087bbc = uVar10;
    if (iVar6 != 0) {
      pfVar12 = local_928 + iVar4;
      iVar7 = 0;
      iVar6 = 0;
      while (iVar7 < iVar9 + -1) {
        fVar14 = *pfVar12;
        if (fVar14 < 5.0) {
          iVar6 = iVar7;
          break;
        }
        pfVar12 = pfVar12 + 4;
        iVar7 = iVar7 + 1;
        if (*pfVar12 * 1.5 < fVar14) {
          iVar6 = iVar7;
        }
      }
      uVar8 = local_964[iVar6];
      DAT_00507490[iVar4 + 1] = uVar8;
      if (3 < uVar10) {
        snprintf((char *)&local_838,0x800,"chain %d best level %d, freq %d\n",iVar4,iVar6,uVar8);
        FUN_00032218(3,&local_838,0);
      }
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 4) {
      return iVar5;
    }
    iVar6 = FUN_000201d8(iVar4);
    uVar10 = DAT_00087bbc;
  } while( true );
}

