// FUN_01aa4e44 @ 01aa4e44 size=712 calls_out=2 calls_in=2
// strings: 

uint FUN_01aa4e44(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined4 local_14;
  
  local_14 = 3;
  uStack_30 = 0;
  local_18 = 1;
  local_24 = 1;
  local_20 = 0;
  local_28 = 0x2e;
  local_3c = 0x2e;
  local_38 = param_1;
  uStack_34 = param_2;
  local_2c = param_2;
  local_1c = param_2;
  uVar13 = FUN_01aa510c(&local_3c);
  if ((int)uVar13 == 0) {
    uVar13 = 1;
  }
  iVar6 = (int)(uVar13 >> 0x20);
  pcVar3 = (char *)uVar13;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      cVar8 = *pcVar3;
      uVar5 = 1;
      if (cVar8 == '+') goto LAB_01aa4fcc;
      uVar11 = 1;
      if (cVar8 == '-') goto LAB_01aa4fd0;
    }
    else {
      cVar8 = *pcVar3;
    }
    if (cVar8 == '+') {
      uVar13 = CONCAT44(iVar6 + -1,pcVar3 + 1);
    }
    iVar6 = (int)(uVar13 >> 0x20);
    pbVar7 = (byte *)uVar13;
    if (uVar13 < 0x300000000) {
      if (iVar6 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        bVar4 = iVar6 == 1;
        do {
          bVar1 = *pbVar7;
          if (9 < bVar1 - 0x30) goto LAB_01aa5038;
          pbVar7 = pbVar7 + 1;
          bVar2 = !bVar4;
          bVar4 = true;
          uVar10 = (bVar1 - 0x30) + uVar10 * 10;
        } while (bVar2);
      }
LAB_01aa4f80:
      uVar13 = FUN_01aa510c(&local_3c);
      if ((int)uVar13 == 0) {
        uVar13 = 1;
      }
      iVar6 = (int)(uVar13 >> 0x20);
      pcVar3 = (char *)uVar13;
      if (iVar6 == 0) goto LAB_01aa4fc8;
      if (iVar6 == 1) {
        cVar8 = *pcVar3;
        uVar5 = 1;
        if (cVar8 == '+') goto LAB_01aa4fcc;
        uVar11 = 1;
        if (cVar8 == '-') goto LAB_01aa4fd0;
      }
      else {
        cVar8 = *pcVar3;
      }
      if (cVar8 == '+') {
        uVar13 = CONCAT44(iVar6 + -1,pcVar3 + 1);
      }
      iVar6 = (int)(uVar13 >> 0x20);
      pbVar7 = (byte *)uVar13;
      if (uVar13 < 0x300000000) {
        if (iVar6 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          bVar4 = iVar6 == 1;
          do {
            bVar1 = *pbVar7;
            if (9 < bVar1 - 0x30) goto LAB_01aa5038;
            pbVar7 = pbVar7 + 1;
            bVar2 = !bVar4;
            bVar4 = true;
            uVar12 = (bVar1 - 0x30) + uVar12 * 10;
          } while (bVar2);
        }
LAB_01aa50a4:
        uVar14 = FUN_01aa510c(&local_3c);
        uVar11 = 0;
        uVar5 = 0;
        if ((int)uVar14 != 0) {
          uVar13 = FUN_0130a354((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
          uVar5 = (uint)(uVar13 >> 0x20);
          if ((uVar13 & 1) != 0) {
            uVar5 = uVar5 & 0xff;
            goto LAB_01aa4fcc;
          }
        }
        uVar5 = (uVar5 & 0xff) << 0x10 | (uVar12 & 0xff) << 8 | uVar10 & 0xff;
        goto LAB_01aa4fd0;
      }
      uVar12 = 0;
      do {
        iVar6 = (int)(uVar13 >> 0x20);
        if (iVar6 == 0) goto LAB_01aa50a4;
        uVar9 = (uint)*(byte *)uVar13;
        uVar5 = (uVar12 & 0xff) * 4 + (uVar12 & 0xff);
        if (uVar5 >> 7 != 0) goto LAB_01aa50f4;
        if (9 < uVar9 - 0x30) goto LAB_01aa5098;
        uVar13 = CONCAT44(iVar6 + -1,(byte *)uVar13 + 1);
        uVar12 = (uVar5 * 2 & 0xff) + (uVar9 - 0x30 & 0xff);
      } while ((uVar12 & 0xffffff00) == 0);
    }
    else {
      uVar10 = 0;
      do {
        iVar6 = (int)(uVar13 >> 0x20);
        if (iVar6 == 0) goto LAB_01aa4f80;
        uVar9 = (uint)*(byte *)uVar13;
        uVar5 = (uVar10 & 0xff) * 4 + (uVar10 & 0xff);
        if (uVar5 >> 7 != 0) goto LAB_01aa50f4;
        if (9 < uVar9 - 0x30) goto LAB_01aa5098;
        uVar10 = (uVar5 * 2 & 0xff) + (uVar9 - 0x30 & 0xff);
        uVar13 = CONCAT44(iVar6 + -1,(byte *)uVar13 + 1);
      } while ((uVar10 & 0xffffff00) == 0);
    }
    uVar11 = 1;
    uVar5 = 2;
    goto LAB_01aa4fd0;
  }
LAB_01aa4fc8:
  uVar5 = 0;
LAB_01aa4fcc:
  uVar11 = 1;
LAB_01aa4fd0:
  return uVar11 | uVar5 << 8;
LAB_01aa5038:
  uVar5 = 1;
  goto LAB_01aa4fcc;
LAB_01aa50f4:
  uVar11 = 1;
  uVar5 = 1;
  if (uVar9 - 0x30 < 10) {
    uVar5 = 2;
  }
  goto LAB_01aa4fd0;
LAB_01aa5098:
  uVar11 = 1;
  uVar5 = 1;
  goto LAB_01aa4fd0;
}

