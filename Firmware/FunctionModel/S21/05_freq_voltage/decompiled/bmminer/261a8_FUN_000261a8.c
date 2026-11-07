// FUN_000261a8 @ 000261a8  size=1664  callers=2
// program: bmminer


void FUN_000261a8(float param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6,
                 uint param_7,byte param_8)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  uint uVar11;
  float fVar12;
  longlong lVar10;
  uint local_2070;
  int local_206c;
  uint local_205c;
  undefined1 local_204c [4];
  undefined4 local_2048;
  undefined4 local_2044;
  char acStack_2040 [8196];
  
  local_205c = param_6;
  dVar9 = (double)param_1;
  if (3 < DAT_000be63c) {
    snprintf(acStack_2040,0x2000,"fixed step freq_start = %d, freq_end = %d, freq_step = %.2f",
             param_3,param_4,dVar9);
    FUN_0004948c(3,acStack_2040,0);
  }
  iVar4 = 0;
  do {
    iVar2 = FUN_0002a6f0(iVar4);
    if (iVar2 != 0) {
      FUN_0002cef8(iVar4,1,0,param_2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (param_3 < param_4) {
    iVar4 = param_4 - param_3;
  }
  else {
    iVar4 = param_3 - param_4;
  }
  fVar7 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  dVar6 = ((double)(fVar7 + param_1) - 0.01) / dVar9;
  local_2070 = (uint)(0.0 < dVar6) * (int)(longlong)dVar6;
  if ((local_2070 & 1) != 0) {
    local_2070 = local_2070 + 1;
  }
  pcVar3 = (char *)FUN_0002a4e4();
  iVar4 = strcmp(pcVar3,"H6HB70601");
  if (iVar4 == 0) {
LAB_00026288:
    if ((0x195 < param_4) &&
       (fVar7 = (float)VectorUnsignedToFloat(param_4 - 0x192,(byte)(in_fpscr >> 0x16) & 3),
       dVar9 = ((double)(fVar7 + param_1) - 0.01) / dVar9,
       (uint)(0.0 < dVar9) * (int)(longlong)dVar9 != 0 && param_7 < param_6)) {
      local_206c = FUN_000983e0(param_6 - param_7);
      goto LAB_000262ec;
    }
  }
  else {
    pcVar3 = (char *)FUN_0002a4e4();
    iVar4 = strcmp(pcVar3,"H6HB70602");
    if (iVar4 == 0) goto LAB_00026288;
    pcVar3 = (char *)FUN_0002a4e4();
    iVar4 = strcmp(pcVar3,"H6HB70501");
    if (iVar4 == 0) goto LAB_00026288;
    pcVar3 = (char *)FUN_0002a4e4();
    iVar4 = strcmp(pcVar3,"H6HB70801");
    if (iVar4 == 0) goto LAB_00026288;
    pcVar3 = (char *)FUN_0002a4e4();
    iVar4 = strcmp(pcVar3,"H6HB70802");
    if (iVar4 == 0) goto LAB_00026288;
  }
  local_206c = 0;
LAB_000262ec:
  if (local_2070 != 0) {
    uVar11 = VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    lVar10 = (ulonglong)uVar11 << 0x20;
    uVar11 = 1;
    fVar7 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    do {
      if (param_2 == 0) {
        param_2 = 2;
      }
      else {
        param_2 = 0;
      }
      fVar12 = (float)((ulonglong)lVar10 >> 0x20);
      fVar8 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      local_2048 = 0;
      local_2044 = 0;
      if (param_3 < param_4) {
        fVar8 = fVar7 + fVar8 * param_1;
        lVar10 = CONCAT44(fVar12,fVar8);
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar12 < fVar8) {
          lVar10 = CONCAT44(fVar12,fVar12);
        }
      }
      else {
        fVar8 = fVar7 - fVar8 * param_1;
        uVar5 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar8) << 0x1f |
                (uint)(fVar12 == fVar8) << 0x1e;
        in_fpscr = uVar5 | (uint)(NAN(fVar12) || NAN(fVar8)) << 0x1c;
        bVar1 = (byte)(uVar5 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar8 = fVar12;
        }
        lVar10 = CONCAT44(fVar12,fVar8);
      }
      iVar4 = 0;
      do {
        iVar2 = FUN_0002a6f0(iVar4);
        fVar8 = (float)lVar10;
        if (iVar2 != 0) {
          FUN_00081ee8(fVar8,&local_2048,local_204c,0);
          local_2044._0_3_ = CONCAT12(local_204c[0],(undefined2)local_2044);
          FUN_0002d6b0(iVar4,1,0,param_2,local_2048);
          if (3 < DAT_000be63c) {
            snprintf(acStack_2040,0x2000,"chain = %d set freq to %.2f",iVar4,(double)fVar8);
            FUN_0004948c(3,acStack_2040,0);
          }
          (&DAT_000c0430)[iVar4] = (int)fVar8;
          (&DAT_000c044c)[iVar4] = (int)fVar8;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
      pcVar3 = (char *)FUN_0002a4e4();
      iVar4 = strcmp(pcVar3,"H6HB70601");
      if (iVar4 == 0) {
LAB_000263d8:
        if ((local_206c != 0) &&
           (uVar5 = in_fpscr & 0xfffffff | (uint)(fVar8 < 500.0) << 0x1f |
                    (uint)(fVar8 == 500.0) << 0x1e, in_fpscr = uVar5 | (uint)NAN(fVar8) << 0x1c,
           bVar1 = (byte)(uVar5 >> 0x18),
           !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
          local_205c = local_205c - local_206c;
          if (param_8 != 0) {
            iVar4 = FUN_00024c74();
            FUN_000246cc(iVar4 - local_206c,4);
          }
          sleep(2);
        }
      }
      else {
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70602");
        if (iVar4 == 0) goto LAB_000263d8;
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70801");
        if (iVar4 == 0) goto LAB_000263d8;
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70802");
        if (iVar4 == 0) goto LAB_000263d8;
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70501");
        if (iVar4 == 0) goto LAB_000263d8;
      }
      iVar4 = FUN_0004eb34();
      if (iVar4 == 0) {
        usleep(param_5 * 1000);
      }
      else {
        sleep(5);
      }
      uVar5 = 0;
      do {
        iVar4 = FUN_0002a6f0(uVar5);
        if (iVar4 != 0) {
          FUN_000822e0(uVar5 & 0xff,0,param_2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != 4);
      pcVar3 = (char *)FUN_0002a4e4();
      iVar4 = strcmp(pcVar3,"H6HB70601");
      if (iVar4 == 0) {
LAB_00026460:
        if ((local_2070 << 1) / 3 == uVar11) {
          FUN_00018c0c();
        }
      }
      else {
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70801");
        if (iVar4 == 0) goto LAB_00026460;
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70802");
        if (iVar4 == 0) goto LAB_00026460;
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70602");
        if (iVar4 == 0) goto LAB_00026460;
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70501");
        if (iVar4 == 0) goto LAB_00026460;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 <= local_2070);
  }
  iVar4 = 0;
  do {
    iVar2 = FUN_0002a6f0(iVar4);
    if (iVar2 != 0) {
      (&DAT_000c0430)[iVar4] = param_4;
      (&DAT_000c044c)[iVar4] = param_4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  pcVar3 = (char *)FUN_0002a4e4();
  iVar4 = strcmp(pcVar3,"H6HB70601");
  if (iVar4 != 0) {
    pcVar3 = (char *)FUN_0002a4e4();
    iVar4 = strcmp(pcVar3,"H6HB70602");
    if (iVar4 != 0) {
      pcVar3 = (char *)FUN_0002a4e4();
      iVar4 = strcmp(pcVar3,"H6HB70501");
      if (iVar4 != 0) {
        pcVar3 = (char *)FUN_0002a4e4();
        iVar4 = strcmp(pcVar3,"H6HB70801");
        if (iVar4 != 0) {
          pcVar3 = (char *)FUN_0002a4e4();
          iVar4 = strcmp(pcVar3,"H6HB70802");
          if (iVar4 != 0) {
            return;
          }
        }
      }
    }
  }
  if (local_205c == param_7) {
    param_8 = 0;
  }
  else {
    param_8 = param_8 & 1;
  }
  if ((param_8 == 0) || (uVar11 = FUN_00024c74(), uVar11 <= param_7)) {
    return;
  }
  FUN_000246cc(param_7,4);
  return;
}

