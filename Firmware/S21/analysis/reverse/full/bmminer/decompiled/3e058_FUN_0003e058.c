// FUN_0003e058 @ 0003e058  size=1048  callers=1
// program: bmminer


void FUN_0003e058(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  FILE *param0;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  __time_t local_2034;
  timeval local_2030;
  tm local_2028 [186];
  
  iVar2 = FUN_0003e028();
  iVar3 = DAT_00aaa90c;
  uVar7 = DAT_00aaa908;
  iVar6 = iVar2 - DAT_000c7f74;
  DAT_000c7f74 = iVar2;
  dVar9 = (double)FUN_00098c14(DAT_00aaa908 - DAT_00a54cc0,
                               DAT_00aaa90c - (DAT_00a54cc4 + (uint)(DAT_00aaa908 < DAT_00a54cc0)));
  DAT_00a54cc0 = uVar7;
  DAT_00a54cc4 = iVar3;
  DAT_00aaa900 = (dVar9 * 4294967295.0) / 1000000000.0;
  if (iVar6 != 0) {
    dVar9 = (double)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    DAT_00aaa900 = DAT_00aaa900 / dVar9;
  }
  iVar3 = FUN_0002c3f4();
  if ((iVar3 != 0) && (iVar3 = FUN_0002c474(), iVar3 != 0)) {
    uVar4 = FUN_0002c664();
    DAT_00aaa900 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  }
  uVar4 = FUN_00025728();
  dVar9 = (double)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  dVar9 = dVar9 * 0.75;
  uVar8 = in_fpscr & 0xfffffff | (uint)(dVar9 < DAT_00aaa900) << 0x1f |
          (uint)(dVar9 == DAT_00aaa900) << 0x1e;
  uVar7 = uVar8 | (uint)(NAN(dVar9) || NAN(DAT_00aaa900)) << 0x1c;
  bVar1 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar7 >> 0x1c) & 1)) {
LAB_0003e228:
    if (3 < DAT_000be63c) {
      snprintf((char *)local_2028,0x2000,"30m avg rate is %0.2f in %ld mins\n",DAT_00aaa900,
               iVar6 / 0x3c);
      FUN_0004948c(3,local_2028,0);
    }
  }
  else if (3 < DAT_000be63c) {
    snprintf((char *)local_2028,0x2000,"avg rate is lower than ideal rate, %0.2f in %ld mins\n",
             DAT_00aaa900,iVar6 / 0x3c);
    FUN_0004948c(3,local_2028,0);
    goto LAB_0003e228;
  }
  iVar3 = FUN_00025728();
  pcVar5 = (char *)FUN_0002a4e4();
  iVar2 = strcmp(pcVar5,"HHB56601");
  if (iVar2 != 0) {
    pcVar5 = (char *)FUN_0002a4e4();
    iVar2 = strcmp(pcVar5,"HHB56611");
    if (iVar2 != 0) goto LAB_0003e158;
  }
  if (259999 < iVar3) {
    iVar3 = 260000;
  }
LAB_0003e158:
  iVar2 = FUN_00053180();
  if (iVar2 != 0) {
    uVar8 = FUN_0005319c();
    if (iVar6 < 0x5dc) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar8 & 1;
    }
    if (uVar8 != 0) {
      dVar10 = (double)VectorSignedToFloat(DAT_000c7f78,(byte)(uVar7 >> 0x16) & 3);
      dVar9 = (double)VectorSignedToFloat(iVar3,(byte)(uVar7 >> 0x16) & 3);
      uVar7 = uVar7 & 0xfffffff;
      if (dVar10 + DAT_00aaa900 < dVar9) {
        DAT_000c7f7c = 0;
        FUN_00051d38();
        FUN_000531ac();
      }
      else {
        DAT_000c7f7c = DAT_000c7f7c + 1;
        if (2 < DAT_000c7f7c) {
          FUN_000531ac();
          DAT_000c7f7c = 0;
        }
      }
    }
  }
  if ((DAT_000bed28 != 0) && (DAT_000c94d8 == '\0')) {
    dVar9 = (double)VectorSignedToFloat(iVar3,(byte)(uVar7 >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(DAT_000c7f78,(byte)(uVar7 >> 0x16) & 3);
    dVar9 = dVar9 * 1.1;
    dVar10 = dVar10 + DAT_00aaa900;
    uVar7 = uVar7 & 0xfffffff | (uint)(dVar10 < dVar9) << 0x1f | (uint)(dVar10 == dVar9) << 0x1e;
    uVar8 = uVar7 | (uint)(NAN(dVar10) || NAN(dVar9)) << 0x1c;
    bVar1 = (byte)(uVar7 >> 0x18);
    if (0x6cb < iVar6 && (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar8 >> 0x1c) & 1))) {
      if (3 < DAT_000be63c) {
        snprintf((char *)local_2028,0x2000,"avg rate is abnormal, %0.2f in %ld mins\n",dVar10,
                 iVar6 / 0x3c);
        FUN_0004948c(3,local_2028,0);
      }
      iVar2 = FUN_0002d018(DAT_008c7044);
      param0 = fopen("/tmp/miner/hashrate.log","a");
      if (param0 != (FILE *)0x0) {
        local_2030.tv_sec = 0;
        local_2030.tv_usec = 0;
        gettimeofday(&local_2030,(__timezone_ptr_t)0x0);
        local_2034 = local_2030.tv_sec;
        localtime_r(&local_2034,local_2028);
        dVar9 = (double)VectorSignedToFloat(DAT_000c7f78,(byte)(uVar8 >> 0x16) & 3);
        fprintf(param0,"[%d-%02d-%02d %02d:%02d:%02d] %d %0.2f %d\n",local_2028[0].tm_year + 0x76c,
                local_2028[0].tm_mon + 1,local_2028[0].tm_mday,local_2028[0].tm_hour,
                local_2028[0].tm_min,local_2028[0].tm_sec,iVar3,dVar9 + DAT_00aaa900,iVar2);
        fclose(param0);
      }
      FUN_00056e88(0xe,0xff);
      FUN_0004e8c8(0x15,"hash rate abnormal");
    }
  }
  return;
}

