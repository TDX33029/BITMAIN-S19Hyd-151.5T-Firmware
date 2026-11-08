// FUN_016bcd54 @ 016bcd54 size=752 calls_out=1 calls_in=1
// strings: 

longlong FUN_016bcd54(byte *param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  short sVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  bool bVar14;
  
  uVar3 = 2;
  if (param_2 == 0) goto LAB_016bcd94;
  if (param_2 != 1) {
    sVar2 = *(short *)param_1;
    sVar10 = 0x7830;
    bVar14 = sVar2 != 0x7830;
    if (bVar14) {
      sVar2 = *(short *)param_1;
      sVar10 = 0x5830;
    }
    if (!bVar14 || sVar2 == sVar10) {
      if (param_2 < 3) {
        return 1;
      }
      pbVar11 = param_1 + 2;
      bVar13 = *pbVar11;
      if ((char)bVar13 < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_1,param_2,2,param_2,&DAT_018af100);
      }
      uVar6 = param_2 - 2;
      param_2 = param_2 - 2;
      pbVar8 = pbVar11;
      do {
        if (param_2 == 0) {
          uVar12 = 0x10;
          bVar14 = true;
          param_2 = 0;
          goto joined_r0x016bce98;
        }
        pbVar7 = pbVar8 + 1;
        bVar1 = *pbVar8;
        param_2 = param_2 - 1;
        pbVar8 = pbVar7;
      } while ((bVar1 - 0x30 < 10) || ((bVar1 & 0xdf) - 0x41 < 6));
      goto LAB_016bcd94;
    }
    if (*param_1 == 0x30) {
      pbVar11 = param_1 + 1;
      bVar13 = *pbVar11;
      if ((char)bVar13 < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_1,param_2,1,param_2,&DAT_018af0f0);
      }
      uVar6 = param_2 - 1;
      param_2 = param_2 - 1;
      pbVar8 = pbVar11;
      do {
        if (param_2 == 0) {
          uVar12 = 8;
          bVar14 = false;
          param_2 = 0;
          if (uVar6 != 1) goto LAB_016bcec4;
          goto LAB_016bceb0;
        }
        bVar1 = *pbVar8;
        param_2 = param_2 - 1;
        pbVar8 = pbVar8 + 1;
      } while ((bVar1 & 0xf8) == 0x30);
      goto LAB_016bcd94;
    }
  }
  uVar6 = 0;
  do {
    if (param_2 == uVar6) {
      bVar13 = *param_1;
      uVar12 = 10;
      bVar14 = false;
      pbVar11 = param_1;
      uVar6 = param_2;
joined_r0x016bce98:
      if (uVar6 == 1) {
LAB_016bceb0:
        uVar3 = 0;
        if (bVar13 == 0x2b) break;
        if (bVar13 == 0x2d) goto LAB_016bcfe0;
      }
LAB_016bcec4:
      if (bVar13 == 0x2b) {
        pbVar11 = pbVar11 + 1;
        uVar6 = uVar6 - 1;
      }
      if (uVar6 < 9) {
        uVar3 = 1;
        param_2 = 0;
        if (uVar6 != 0) {
          if (bVar14) {
            do {
              uVar4 = (uint)*pbVar11;
              uVar9 = uVar4 - 0x30;
              if (0x39 < uVar4) {
                uVar9 = (uVar4 - 0x41 & 0xffffffdf) + 10;
              }
              if (uVar12 <= uVar9) {
LAB_016bcfe8:
                return (ulonglong)param_2 << 0x20;
              }
              param_2 = param_2 * uVar12 + uVar9;
              pbVar11 = pbVar11 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          else {
            do {
              if (uVar12 <= *pbVar11 - 0x30) goto LAB_016bcfe8;
              param_2 = param_2 * uVar12 + (*pbVar11 - 0x30);
              pbVar11 = pbVar11 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
LAB_016bcfe0:
        return CONCAT44(param_2,uVar3);
      }
      param_2 = 0;
      if (!bVar14) {
        while (uVar6 != 0) {
          uVar4 = (uint)((ulonglong)uVar12 * (ulonglong)param_2);
          if ((int)((ulonglong)uVar12 * (ulonglong)param_2 >> 0x20) != 0) goto LAB_016bd000;
          uVar9 = *pbVar11 - 0x30;
          uVar3 = 0;
          param_2 = uVar9 + uVar4;
          if (uVar12 <= uVar9) goto LAB_016bcd94;
          uVar6 = uVar6 - 1;
          pbVar11 = pbVar11 + 1;
          if (CARRY4(uVar9,uVar4)) goto LAB_016bcfe0;
        }
LAB_016bcff4:
        return CONCAT44(param_2,1);
      }
      do {
        if (uVar6 == 0) goto LAB_016bcff4;
        uVar4 = (uint)((ulonglong)uVar12 * (ulonglong)param_2);
        if ((int)((ulonglong)uVar12 * (ulonglong)param_2 >> 0x20) != 0) {
LAB_016bd000:
          return (ulonglong)uVar4 << 0x20;
        }
        uVar9 = (uint)*pbVar11;
        uVar5 = uVar9 - 0x30;
        if (0x39 < uVar9) {
          uVar5 = (uVar9 - 0x41 & 0xffffffdf) + 10;
        }
        uVar3 = 0;
        param_2 = uVar5 + uVar4;
        if (uVar12 <= uVar5) goto LAB_016bcd94;
        uVar6 = uVar6 - 1;
        pbVar11 = pbVar11 + 1;
        if (CARRY4(uVar5,uVar4)) goto LAB_016bcfe0;
      } while( true );
    }
    pbVar11 = param_1 + uVar6;
    uVar6 = uVar6 + 1;
  } while (*pbVar11 - 0x30 < 10);
LAB_016bcd94:
  return CONCAT44(param_2,uVar3);
}

