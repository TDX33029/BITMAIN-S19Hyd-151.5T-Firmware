// FUN_012b3044 @ 012b3044 size=396 calls_out=4 calls_in=4
// strings: 

void FUN_012b3044(int *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  
  pbVar9 = (byte *)param_1[1];
  iVar7 = 0;
  iVar10 = 1;
  if (param_1[2] != 0) {
    pbVar4 = pbVar9 + param_1[2];
    do {
      pbVar5 = pbVar4 + -1;
      uVar6 = (uint)(char)*pbVar5;
      if (0x7fffffff < uVar6) {
        pbVar5 = pbVar4 + -2;
        bVar1 = *pbVar5;
        if ((char)bVar1 < -0x40) {
          pbVar5 = pbVar4 + -3;
          bVar2 = *pbVar5;
          if ((char)bVar2 < -0x40) {
            pbVar5 = pbVar4 + -4;
            uVar3 = (int)(char)bVar2 & 0x3fU | (*pbVar5 & 7) << 6;
          }
          else {
            uVar3 = bVar2 & 0xf;
          }
          uVar3 = (int)(char)bVar1 & 0x3fU | uVar3 << 6;
        }
        else {
          uVar3 = bVar1 & 0x1f;
        }
        uVar6 = uVar6 & 0x3f | uVar3 << 6;
      }
      if ((4 < uVar6 - 9) && (uVar6 != 0x20)) {
        if (0x7f < uVar6) {
          uVar3 = uVar6 >> 8;
          if (uVar3 < 0x20) {
            if (uVar3 == 0) {
              bVar1 = (&DAT_00533bcd)[uVar6 & 0xff] & 1;
              goto joined_r0x012b3160;
            }
            if ((uVar3 == 0x16) && (uVar6 == 0x1680)) goto LAB_012b30e4;
          }
          else if (uVar3 == 0x20) {
            bVar1 = (&DAT_00533bcd)[uVar6 & 0xff] & 2;
joined_r0x012b3160:
            if (bVar1 != 0) goto LAB_012b30e4;
          }
          else if (uVar3 == 0x30 && uVar6 == 0x3000) goto LAB_012b30e4;
        }
        iVar7 = (int)pbVar4 - (int)pbVar9;
        uVar8 = 0;
        if (-1 < iVar7) {
          if (iVar7 == 0) {
            iVar7 = 0;
            break;
          }
          uVar8 = 1;
          iVar10 = FUN_01298504(iVar7,1);
          if (iVar10 != 0) break;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,iVar7);
      }
LAB_012b30e4:
      pbVar4 = pbVar5;
    } while (pbVar9 != pbVar5);
  }
  FUN_01bed4e2(iVar10,pbVar9,iVar7);
  FUN_0134bd64(*param_1,pbVar9);
  *param_1 = iVar7;
  param_1[1] = iVar10;
  param_1[2] = iVar7;
  return;
}

