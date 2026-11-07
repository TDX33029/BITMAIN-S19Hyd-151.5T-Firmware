// FUN_00050390 @ 00050390  size=652
// callers: [FUN_0001cc60]

int FUN_00050390(void)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  double in_d0;
  double dVar9;
  double dVar10;
  float fVar11;
  uint local_834;
  undefined4 local_830;
  undefined1 local_82c;
  undefined1 local_82b;
  char acStack_828 [2048];
  
  uVar7 = DAT_0050fac0;
  uVar4 = DAT_0050fac0 - 100;
  bVar8 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar8 = 1 < uVar4;
  }
  if (bVar8 && (DAT_0050fac0 != 0x62 && uVar4 != 2)) {
    if ((DAT_0050fabc == 0) && (iVar1 = FUN_0004f1d4(), iVar1 < 0)) {
      snprintf(acStack_828,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               DAT_00050638);
      FUN_00032218(0,acStack_828,0);
    }
    else {
      uVar7 = FUN_0004fff4();
      if (uVar7 < 0x100) {
        iVar1 = FUN_0004ee20(DAT_0050fab8,uVar7 & 0xff);
      }
      else {
        iVar1 = -0x7ffffcff;
      }
    }
  }
  else {
    fVar11 = (float)in_d0;
    local_834 = *DAT_00050630;
    local_830 = DAT_00050630[1];
    memset(acStack_828,0,0x20);
    if ((DAT_0050fac4 == '\0') || (DAT_0050fc40 == '\0')) {
      uVar6 = (uint)fVar11 & 0xff;
      uVar5 = ((uint)fVar11 & 0xffff) >> 8;
      uVar4 = ((uint)fVar11 & 0xffffff) >> 0x10;
      uVar7 = (uint)fVar11 >> 0x18;
    }
    else {
      if ((uVar7 == 0x62) ||
         (((0x61 < uVar7 && (uVar4 < 3)) && ((uVar7 == 0x62 || (0x61 < uVar7)))))) {
        if (1 < DAT_0050fadc) {
          iVar1 = 0;
          pdVar3 = DAT_00050634;
          do {
            dVar10 = *pdVar3;
            pdVar3 = pdVar3 + 1;
            iVar2 = iVar1 + 1;
            if (((dVar10 - DAT_00050628 < in_d0) && (dVar9 = *pdVar3, in_d0 < dVar9 + DAT_00050628))
               || ((in_d0 < dVar10 + DAT_00050628 && (dVar9 = *pdVar3, dVar9 - DAT_00050628 < in_d0)
                   ))) {
              dVar10 = (double)(&DAT_0050fae0)[iVar1] +
                       (((double)(&DAT_0050fae0)[iVar2] - (double)(&DAT_0050fae0)[iVar1]) /
                       (dVar9 - dVar10)) * (in_d0 - dVar10);
              if (DAT_00050620 + 0.5 < dVar10) {
                return -1;
              }
              if (dVar10 < 16.5) {
                return -1;
              }
              fVar11 = (float)dVar10;
              if (fVar11 < 0.0) {
                return -1;
              }
              uVar6 = (uint)fVar11 & 0xff;
              uVar5 = ((uint)fVar11 & 0xffff) >> 8;
              uVar4 = ((uint)fVar11 & 0xffffff) >> 0x10;
              uVar7 = (uint)fVar11 >> 0x18;
              goto LAB_00050404;
            }
            iVar1 = iVar2;
          } while (DAT_0050fadc + -1 != iVar2);
        }
        return -1;
      }
      uVar7 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
LAB_00050404:
    local_830 = uVar4 << 0x10;
    local_830 = CONCAT13((char)uVar7,(undefined3)local_830);
    local_830._0_2_ = CONCAT11((char)uVar5,(char)uVar6);
    uVar7 = (local_834 >> 0x10) + uVar4 + uVar6 + uVar5 * 0x100 + uVar7 * 0x100 & 0xffff;
    local_82c = (undefined1)uVar7;
    local_82b = (undefined1)(uVar7 >> 8);
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_834,10,acStack_828,10);
  }
  return iVar1;
}


