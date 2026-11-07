// FUN_007b2164 @ 007b2164 size=824 calls_out=6 calls_in=1
// strings: 

void FUN_007b2164(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  
  FUN_019a66e4(&local_3c);
  FUN_019a5900(&local_30,local_38,local_34);
  if (local_30 == -0x80000000) {
    *param_1 = local_3c;
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = local_2c;
    param_1[4] = local_28;
    return;
  }
  pbVar6 = (byte *)0x0;
  pbVar4 = local_2c + local_28;
  if (local_28 == 0) {
    pbVar10 = (byte *)0x0;
    pbVar7 = local_2c;
joined_r0x007b230c:
    do {
      do {
        pbVar3 = pbVar4;
        if (pbVar7 == pbVar3) goto LAB_007b2418;
        pbVar4 = pbVar3 + -1;
        uVar12 = (uint)(char)*pbVar4;
        if (0x7fffffff < uVar12) {
          pbVar4 = pbVar3 + -2;
          bVar1 = *pbVar4;
          if ((char)bVar1 < -0x40) {
            pbVar4 = pbVar3 + -3;
            bVar2 = *pbVar4;
            if ((char)bVar2 < -0x40) {
              pbVar4 = pbVar3 + -4;
              uVar11 = (int)(char)bVar2 & 0x3fU | (*pbVar4 & 7) << 6;
            }
            else {
              uVar11 = bVar2 & 0xf;
            }
            uVar11 = (int)(char)bVar1 & 0x3fU | uVar11 << 6;
          }
          else {
            uVar11 = bVar1 & 0x1f;
          }
          uVar12 = uVar12 & 0x3f | uVar11 << 6;
        }
      } while ((uVar12 - 9 < 5) || (uVar12 == 0x20));
      if (uVar12 < 0x80) break;
      uVar11 = uVar12 >> 8;
      if (uVar11 < 0x20) {
        if (uVar11 == 0) {
          bVar1 = (&DAT_00533bcd)[uVar12 & 0xff] & 1;
joined_r0x007b240c:
          if (bVar1 == 0) break;
        }
        else if ((uVar11 != 0x16) || (uVar12 != 0x1680)) break;
        goto joined_r0x007b230c;
      }
      if (uVar11 == 0x20) {
        bVar1 = (&DAT_00533bcd)[uVar12 & 0xff] & 2;
        goto joined_r0x007b240c;
      }
    } while (uVar11 == 0x30 && uVar12 == 0x3000);
    pbVar6 = pbVar3 + ((int)pbVar6 - (int)pbVar7);
  }
  else {
    pbVar10 = pbVar6;
    pbVar6 = local_2c;
    do {
      pbVar7 = pbVar6 + 1;
      uVar12 = (uint)*pbVar6;
      if (0x7fffffff < (uint)(int)(char)*pbVar6) {
        if (uVar12 < 0xe0) {
          uVar12 = pbVar6[1] & 0x3f | (uVar12 & 0x1f) << 6;
          pbVar7 = pbVar6 + 2;
        }
        else {
          uVar11 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar12 < 0xf0) {
            uVar12 = uVar11 | (uVar12 & 0x1f) << 0xc;
            pbVar7 = pbVar6 + 3;
          }
          else {
            pbVar7 = pbVar6 + 4;
            uVar12 = pbVar6[3] & 0x3f | uVar11 << 6 | (uVar12 & 7) << 0x12;
          }
        }
      }
      pbVar6 = pbVar10 + ((int)pbVar7 - (int)pbVar6);
      if ((4 < uVar12 - 9) && (uVar12 != 0x20)) {
        if (uVar12 < 0x80) goto joined_r0x007b230c;
        uVar11 = uVar12 >> 8;
        if (uVar11 < 0x20) {
          if (uVar11 == 0) {
            bVar1 = (&DAT_00533bcd)[uVar12 & 0xff] & 1;
joined_r0x007b22ec:
            if (bVar1 == 0) goto joined_r0x007b230c;
          }
          else if ((uVar11 != 0x16) || (uVar12 != 0x1680)) goto joined_r0x007b230c;
        }
        else {
          if (uVar11 == 0x20) {
            bVar1 = (&DAT_00533bcd)[uVar12 & 0xff] & 2;
            goto joined_r0x007b22ec;
          }
          if ((uVar11 != 0x30) || (uVar12 != 0x3000)) goto joined_r0x007b230c;
        }
      }
      pbVar10 = pbVar6;
      pbVar6 = pbVar7;
    } while (pbVar7 != pbVar4);
    pbVar10 = (byte *)0x0;
    pbVar6 = (byte *)0x0;
  }
LAB_007b2418:
  iVar13 = (int)pbVar6 - (int)pbVar10;
  if (iVar13 < 0) {
    uVar8 = 0;
LAB_007b2428:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,iVar13);
  }
  if (iVar13 == 0) {
    iVar5 = 1;
    iVar9 = 0;
  }
  else {
    uVar8 = 1;
    iVar5 = FUN_01298504(iVar13,1);
    if (iVar5 == 0) goto LAB_007b2428;
    iVar9 = iVar13;
  }
  FUN_01bed4e2(iVar5,local_2c + (int)pbVar10,iVar13);
  FUN_0134bd64(local_30,local_2c);
  *param_1 = 0x80000001;
  param_1[1] = iVar9;
  param_1[2] = iVar5;
  param_1[3] = iVar13;
  FUN_0134bd64(local_3c,local_38);
  return;
}

