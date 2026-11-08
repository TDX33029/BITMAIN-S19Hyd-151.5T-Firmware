// FUN_0002683c @ 0002683c  size=636
// callers: [FUN_0003fcec, FUN_00027a64, FUN_00026ce8, FUN_00026ac0, FUN_0005c288]

void FUN_0002683c(float param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                 char param_6,int param_7)

{
  uint uVar1;
  byte bVar2;
  char *param7;
  int iVar3;
  char *unaff_r7;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  double dVar6;
  float fVar7;
  uint uVar9;
  longlong lVar8;
  float fVar10;
  uint local_2058;
  undefined1 local_2044 [12];
  char acStack_2038 [8196];
  
  if (DAT_000be63c < 5) {
    unaff_r7 = acStack_2038;
  }
  if (4 < DAT_000be63c) {
    unaff_r7 = acStack_2038;
    param7 = "false";
    if (param_6 != '\0') {
      param7 = "true";
    }
    snprintf(unaff_r7,0x2000,
             "fixed step chain = %d, freq_start = %d, freq_end = %d, freq_step = %.2f, is_higher_voltage = %s\n"
             ,param_2,param_4,param_5,(double)param_1,param7);
    FUN_0004948c(4,unaff_r7,0);
  }
  FUN_0002cef8(param_2,1,0,param_3);
  unaff_r7[-0xffffffff00000008] = '\0';
  unaff_r7[-0xffffffff00000007] = '\0';
  unaff_r7[-0xffffffff00000006] = '\0';
  unaff_r7[-0xffffffff00000005] = '\0';
  unaff_r7[-0xffffffff00000004] = '\0';
  unaff_r7[-0xffffffff00000003] = '\0';
  unaff_r7[-0xffffffff00000002] = '\0';
  unaff_r7[-0xffffffff00000001] = '\0';
  if (param_4 < param_5) {
    iVar3 = param_5 - param_4;
  }
  else {
    iVar3 = param_4 - param_5;
  }
  fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  dVar6 = ((double)(fVar7 + param_1) - DAT_00026ab8) / (double)param_1;
  local_2058 = (uint)(0.0 < dVar6) * (int)(longlong)dVar6;
  if ((local_2058 & 1) != 0) {
    local_2058 = local_2058 + 1;
  }
  if (local_2058 != 0) {
    iVar3 = 0;
    uVar9 = VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    lVar8 = (ulonglong)uVar9 << 0x20;
    uVar9 = 1;
    fVar7 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    do {
      fVar5 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = (float)((ulonglong)lVar8 >> 0x20);
      if (param_4 < param_5) {
        fVar5 = fVar5 * param_1 + fVar7;
        lVar8 = CONCAT44(fVar10,fVar5);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < fVar10) << 0x1f |
                (uint)(fVar5 == fVar10) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar5) || NAN(fVar10)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          lVar8 = CONCAT44(fVar10,fVar10);
        }
      }
      else {
        fVar5 = fVar7 - fVar5 * param_1;
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar5 < fVar10) {
          fVar5 = fVar10;
        }
        lVar8 = CONCAT44(fVar10,fVar5);
      }
      bVar4 = iVar3 == 0;
      iVar3 = 0;
      if (bVar4) {
        iVar3 = 2;
      }
      uVar9 = uVar9 + 1;
      FUN_00081ee8((float)lVar8,unaff_r7 + -8,local_2044,0);
      unaff_r7[-2] = unaff_r7[-0xc];
      FUN_0002d6b0(param_2,1,0,iVar3,*(undefined4 *)(unaff_r7 + -8));
      if (4 < DAT_000be63c) {
        snprintf(unaff_r7,0x2000,"chain = %d set freq to %.2f",param_2,(double)(float)lVar8);
        FUN_0004948c(4,unaff_r7,0);
      }
      usleep(param_7 * 1000);
      FUN_000822e0(param_2 & 0xff,0,iVar3);
    } while (uVar9 <= local_2058);
  }
  if (DAT_000c045c != '\0') {
    (&DAT_000c0430)[param_2] = param_5;
    (&DAT_000c044c)[param_2] = param_5;
  }
  return;
}


