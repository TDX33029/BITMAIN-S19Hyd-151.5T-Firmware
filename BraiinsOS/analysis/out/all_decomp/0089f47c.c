// FUN_0089f47c @ 0089f47c size=728 calls_out=2 calls_in=1
// strings: 

void FUN_0089f47c(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 in_d16;
  undefined8 uVar12;
  byte local_38;
  undefined1 local_37;
  undefined8 local_30;
  
  uVar12 = FUN_00f2aacc(param_2);
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  pbVar4 = (byte *)uVar12;
  if (pbVar4 == (byte *)0x0) {
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  pbVar7 = pbVar4 + iVar5;
  pbVar6 = (byte *)0x0;
  if (iVar5 == 0) {
    pbVar11 = (byte *)0x0;
    pbVar8 = pbVar4;
joined_r0x0089f5f0:
    do {
      do {
        pbVar3 = pbVar7;
        if (pbVar8 == pbVar3) goto LAB_0089f6fc;
        pbVar7 = pbVar3 + -1;
        uVar10 = (uint)(char)*pbVar7;
        if (0x7fffffff < uVar10) {
          pbVar7 = pbVar3 + -2;
          bVar1 = *pbVar7;
          if ((char)bVar1 < -0x40) {
            pbVar7 = pbVar3 + -3;
            bVar2 = *pbVar7;
            if ((char)bVar2 < -0x40) {
              pbVar7 = pbVar3 + -4;
              uVar9 = (int)(char)bVar2 & 0x3fU | (*pbVar7 & 7) << 6;
            }
            else {
              uVar9 = bVar2 & 0xf;
            }
            uVar9 = (int)(char)bVar1 & 0x3fU | uVar9 << 6;
          }
          else {
            uVar9 = bVar1 & 0x1f;
          }
          uVar10 = uVar10 & 0x3f | uVar9 << 6;
        }
      } while ((uVar10 - 9 < 5) || (uVar10 == 0x20));
      if (uVar10 < 0x80) goto LAB_0089f6f4;
      uVar9 = uVar10 >> 8;
      if (0x1f < uVar9) {
        if (uVar9 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar10 & 0xff] & 2;
joined_r0x0089f6dc:
          if (bVar1 == 0) goto LAB_0089f6f4;
        }
        else if (uVar9 != 0x30 || uVar10 != 0x3000) goto LAB_0089f6f4;
        goto joined_r0x0089f5f0;
      }
      if (uVar9 == 0) {
        bVar1 = (&DAT_0041951b)[uVar10 & 0xff] & 1;
        goto joined_r0x0089f6dc;
      }
      if ((uVar9 != 0x16) || (uVar10 != 0x1680)) goto LAB_0089f6f4;
    } while( true );
  }
  pbVar11 = pbVar6;
  pbVar6 = pbVar4;
  do {
    pbVar8 = pbVar6 + 1;
    uVar10 = (uint)*pbVar6;
    if (0x7fffffff < (uint)(int)(char)*pbVar6) {
      if (uVar10 < 0xe0) {
        uVar10 = pbVar6[1] & 0x3f | (uVar10 & 0x1f) << 6;
        pbVar8 = pbVar6 + 2;
      }
      else {
        uVar9 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
        if (uVar10 < 0xf0) {
          uVar10 = uVar9 | (uVar10 & 0x1f) << 0xc;
          pbVar8 = pbVar6 + 3;
        }
        else {
          pbVar8 = pbVar6 + 4;
          uVar10 = pbVar6[3] & 0x3f | uVar9 << 6 | (uVar10 & 7) << 0x12;
        }
      }
    }
    pbVar6 = pbVar11 + ((int)pbVar8 - (int)pbVar6);
    if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
      if (uVar10 < 0x80) goto joined_r0x0089f5f0;
      uVar9 = uVar10 >> 8;
      if (uVar9 < 0x20) {
        if (uVar9 == 0) {
          bVar1 = (&DAT_0041951b)[uVar10 & 0xff] & 1;
joined_r0x0089f5bc:
          if (bVar1 == 0) goto joined_r0x0089f5f0;
        }
        else if ((uVar9 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x0089f5f0;
      }
      else {
        if (uVar9 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar10 & 0xff] & 2;
          goto joined_r0x0089f5bc;
        }
        if ((uVar9 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x0089f5f0;
      }
    }
    pbVar11 = pbVar6;
    pbVar6 = pbVar8;
  } while (pbVar8 != pbVar7);
  pbVar11 = (byte *)0x0;
  pbVar6 = (byte *)0x0;
LAB_0089f6fc:
  FUN_00fb63d8(&local_38,pbVar4 + (int)pbVar11,(int)pbVar6 - (int)pbVar11);
  if ((local_38 & 1) == 0) {
    *(undefined8 *)(param_1 + 2) = local_30;
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  *param_3 = local_37;
  *(undefined8 *)(param_1 + 2) = in_d16;
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_0089f6f4:
  pbVar6 = pbVar3 + ((int)pbVar6 - (int)pbVar8);
  goto LAB_0089f6fc;
}

