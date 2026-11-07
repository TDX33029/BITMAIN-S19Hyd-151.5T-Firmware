// FUN_00039f4c @ 00039f4c  size=1640  callers=1
// program: bmminer


undefined4 FUN_00039f4c(void)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  char acStack_820 [2048];
  
  pcVar4 = (char *)FUN_0001fffc();
  iVar5 = strcmp(pcVar4,"HHB28601");
  if (iVar5 == 0) {
LAB_00039f84:
    iVar6 = FUN_00018864();
    iVar5 = DAT_0048d3d4;
    if (0 < DAT_0048d3d4) {
      iVar7 = FUN_0001cf54();
      iVar12 = DAT_0048d3d4;
      if (iVar6 < 0x1e) {
        uVar11 = (uint)((0x1e - iVar6) * 100) / 0x1e;
        if (uVar11 + 0x14 < 0x65) {
          iVar12 = iVar5 + uVar11 + 0x14;
        }
        else {
          iVar12 = iVar5 + 100;
        }
        if (0x851 < iVar12) {
          iVar12 = 0x852;
        }
        iVar10 = iVar7 - iVar12;
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        bVar14 = SBORROW4(uVar11,0x4f);
        iVar2 = uVar11 - 0x4f;
        bVar13 = uVar11 == 0x4f;
        if (uVar11 < 0x50) {
          bVar14 = SBORROW4(iVar10,9);
          iVar2 = iVar10 + -9;
          bVar13 = iVar10 == 9;
        }
        if (!bVar13 && iVar2 < 0 == bVar14) {
          if ((iVar7 != iVar12) && (3 < DAT_00087bbc)) {
            snprintf(acStack_820,0x800,
                     "entrance_temp = %d, work_vol = %d, curr_vol = %d, ->tgt_volt = %d\n",iVar6,
                     iVar5,iVar7,iVar12);
            FUN_00032218(3,acStack_820,0);
          }
          while (iVar5 = iVar7 + -10, iVar12 < iVar5) {
            FUN_0001cc60(iVar5);
            usleep(200000);
            iVar7 = iVar5;
          }
          while (iVar5 = iVar7 + 0x14, iVar5 < iVar12) {
            FUN_0001cc60(iVar5);
            usleep(200000);
            iVar7 = iVar5;
          }
          if (iVar12 != iVar7) {
            FUN_0001cc60(iVar12);
          }
        }
      }
      else if ((iVar6 - 0x20U & 0xffff) < 0xd) {
        if ((iVar5 != iVar7) && (3 < DAT_00087bbc)) {
          snprintf(acStack_820,0x800,"entrance_temp = %d, ->work_vol = %d, curr_vol = %d\n",iVar6,
                   iVar5,iVar7);
          FUN_00032218(3,acStack_820,0);
        }
        while (iVar6 = iVar7 + -10, iVar5 < iVar6) {
          FUN_0001cc60(iVar6);
          usleep(200000);
          iVar7 = iVar6;
        }
        while (iVar6 = iVar7 + 0x14, iVar6 < iVar5) {
          FUN_0001cc60(iVar6);
          usleep(200000);
          iVar7 = iVar6;
        }
        if (iVar5 != iVar7) {
          FUN_0001cc60(iVar5);
        }
      }
      else if (0x2c < iVar6) {
        iVar5 = FUN_0001cf54();
        if (iVar12 == iVar5) {
          DAT_0048d3d8 = 0;
        }
        iVar5 = 0;
        piVar9 = &DAT_00087e08;
        do {
          if (iVar6 <= *piVar9) goto LAB_0003a290;
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar5 < DAT_00087e48 + -1);
        iVar5 = DAT_00087e48 + -1;
LAB_0003a290:
        piVar8 = (int *)0x87e24;
        iVar7 = (&DAT_00087e28)[iVar5];
        iVar5 = 0;
        piVar9 = piVar8;
        do {
          piVar9 = piVar9 + 1;
          if (DAT_0048d3d8 <= *piVar9) goto LAB_0003a2c4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_00087e48 + -1);
        iVar5 = DAT_00087e48 + -1;
LAB_0003a2c4:
        iVar10 = 0;
        do {
          piVar8 = piVar8 + 1;
          if (iVar7 <= *piVar8) goto LAB_0003a2e8;
          iVar10 = iVar10 + 1;
        } while (iVar10 < DAT_00087e48 + -1);
        iVar10 = DAT_00087e48 + -1;
LAB_0003a2e8:
        uVar11 = iVar5 - iVar10;
        if ((int)uVar11 < 0) {
          iVar5 = 5;
          DAT_0048d3dc = DAT_0048d3dc + 1;
        }
        else if ((int)uVar11 < 2) {
          if (iVar7 == 0) {
            uVar11 = uVar11 & 1;
          }
          else {
            uVar11 = 0;
          }
          if (uVar11 == 0) {
            DAT_0048d3dc = 0;
            return 0;
          }
          iVar7 = 0;
          if (iVar6 < DAT_00087e08 + -2) {
            DAT_0048d3dc = DAT_0048d3dc + 1;
            iVar5 = 0xf;
          }
          else {
            iVar5 = 0x3c;
          }
        }
        else {
          iVar5 = 0xf;
          DAT_0048d3dc = DAT_0048d3dc + 1;
          iVar7 = DAT_00087e2c;
        }
        if (iVar5 <= DAT_0048d3dc) {
          if (3 < DAT_00087bbc) {
            snprintf(acStack_820,0x800,
                     "entrance_temp = %d, work_vol = %d, dec_vol = %d, ->new_dec_vol = %d\n",iVar6,
                     iVar12,DAT_0048d3d8,iVar7);
            FUN_00032218(3,acStack_820,0);
          }
          DAT_0048d3dc = 0;
          FUN_0001cc60(iVar12 - iVar7);
          DAT_0048d3d8 = iVar7;
        }
      }
    }
    return 0;
  }
  pcVar4 = (char *)FUN_0001fffc();
  iVar5 = strcmp(pcVar4,"HHB28602");
  if (iVar5 == 0) goto LAB_00039f84;
  uVar3 = FUN_00018cb8();
  sVar1 = uVar3 - 10;
  iVar5 = (int)sVar1;
  if (DAT_00087e4c == 0xff) {
    DAT_00087e4c = sVar1;
LAB_0003a340:
    DAT_0048d3e0 = 0;
  }
  else {
    if (DAT_00087e4c - iVar5 < 6) goto LAB_0003a340;
    DAT_0048d3e0 = DAT_0048d3e0 + 1;
  }
  if (DAT_0048d3d4 < 1) {
    return 0;
  }
  if (DAT_0008a848 == 1) {
    return 0;
  }
  if ((iVar5 < 0x14) || ((1 < DAT_0048d3e0 && (uVar3 - 0x15 < 9)))) {
    iVar7 = FUN_0001cf54();
    iVar6 = 100;
    iVar5 = (0x14 - iVar5) * 100;
    if (iVar5 < 4000) {
      iVar6 = iVar5 / 0x28;
    }
    if (4 < DAT_00087bbc) {
      iVar5 = (iVar7 - DAT_0048d3d4) + iVar6;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      snprintf(acStack_820,0x800,"curr_vol = %d, g_voltage = %d,compensate_voltage = %d, abs = %d",
               iVar7,DAT_0048d3d4,iVar6,iVar5);
      FUN_00032218(4,acStack_820,0);
    }
    iVar12 = iVar6 + DAT_0048d3d4;
    iVar5 = iVar7 - iVar12;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x14) {
      DAT_00087e4c = sVar1;
      return 0;
    }
    iVar5 = iVar7;
    if (iVar7 < 0x803 && iVar7 + 0x31 < iVar12) {
      do {
        iVar7 = iVar5 + 0x14;
        FUN_0001cc60(iVar7);
        usleep(200000);
        iVar10 = iVar5 + 0x45;
        iVar12 = iVar6 + DAT_0048d3d4;
        iVar5 = iVar7;
      } while (iVar7 < 0x803 && iVar10 < iVar12);
    }
  }
  else {
    if (0x15 < uVar3 - 0x1e) {
      pcVar4 = (char *)FUN_0001fffc();
      iVar6 = strcmp(pcVar4,"NBS1902L");
      if (iVar6 != 0) {
        iVar5 = iVar5 + 10;
      }
      if (iVar5 < 0x32) {
        DAT_00087e4c = sVar1;
        return 0;
      }
      iVar5 = FUN_0001cf54();
      iVar12 = DAT_0048d3d4 + -0x14;
      if (iVar12 == iVar5) {
        DAT_00087e4c = sVar1;
        return 0;
      }
      goto LAB_0003a22c;
    }
    iVar7 = FUN_0001cf54();
    iVar12 = DAT_0048d3d4;
    iVar5 = iVar7;
    if (DAT_0048d3d4 < iVar7 + -0x13) {
      do {
        iVar7 = iVar5 + -0x14;
        FUN_0001cc60(iVar7);
        usleep(200000);
        iVar6 = iVar5 + -0x27;
        iVar12 = DAT_0048d3d4;
        iVar5 = iVar7;
      } while (DAT_0048d3d4 < iVar6);
    }
  }
  if (iVar7 == iVar12) {
    DAT_00087e4c = sVar1;
    return 0;
  }
LAB_0003a22c:
  FUN_0001cc60(iVar12);
  DAT_00087e4c = sVar1;
  return 0;
}

