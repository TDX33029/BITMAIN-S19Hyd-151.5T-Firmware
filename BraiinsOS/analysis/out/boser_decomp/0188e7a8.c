// FUN_0188e7a8 @ 0188e7a8 size=540 calls_out=3 calls_in=1
// strings: 

void FUN_0188e7a8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  iVar1 = param_2[2];
  pbVar12 = (byte *)param_2[4];
  pbVar2 = (byte *)param_2[6];
  bVar7 = *(byte *)((int)param_2 + 0x1d);
  pbVar13 = (byte *)param_2[1];
  pbVar11 = (byte *)*param_2;
  while (pbVar10 = pbVar11, (bVar7 & 1) == 0) {
    pbVar3 = pbVar2;
    pbVar11 = pbVar12;
    if (pbVar12 != (byte *)param_2[5]) {
      do {
        pbVar12 = pbVar11 + 1;
        uVar8 = (uint)*pbVar11;
        if (0x7fffffff < (uint)(int)(char)*pbVar11) {
          if (uVar8 < 0xe0) {
            uVar8 = pbVar11[1] & 0x3f | (uVar8 & 0x1f) << 6;
            pbVar12 = pbVar11 + 2;
          }
          else {
            uVar5 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
            if (uVar8 < 0xf0) {
              uVar8 = uVar5 | (uVar8 & 0x1f) << 0xc;
              pbVar12 = pbVar11 + 3;
            }
            else {
              pbVar12 = pbVar11 + 4;
              uVar8 = pbVar11[3] & 0x3f | uVar5 << 6 | (uVar8 & 7) << 0x12;
            }
          }
        }
        pbVar2 = pbVar12 + ((int)pbVar3 - (int)pbVar11);
        if ((uVar8 - 9 < 0x18) && ((1 << (uVar8 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_0188e930:
          param_2[6] = pbVar2;
          bVar7 = 0;
          param_2[4] = pbVar12;
          *param_2 = pbVar2;
          pbVar11 = pbVar2;
          goto LAB_0188e950;
        }
        if (0x7f < uVar8) {
          uVar5 = uVar8 >> 8;
          if (uVar5 < 0x20) {
            if (uVar5 == 0) {
              bVar7 = (&DAT_00533bcd)[uVar8 & 0xff] & 1;
              goto joined_r0x0188e8f8;
            }
            if ((uVar5 == 0x16) && (uVar8 == 0x1680)) goto LAB_0188e930;
          }
          else if (uVar5 == 0x20) {
            bVar7 = (&DAT_00533bcd)[uVar8 & 0xff] & 2;
joined_r0x0188e8f8:
            if (bVar7 != 0) goto LAB_0188e930;
          }
          else if (uVar5 == 0x30 && uVar8 == 0x3000) goto LAB_0188e930;
        }
        pbVar3 = pbVar2;
        pbVar11 = pbVar12;
      } while (pbVar12 != (byte *)param_2[5]);
      param_2[6] = pbVar2;
      param_2[4] = pbVar12;
    }
    bVar7 = 1;
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
    pbVar3 = pbVar13;
    pbVar11 = pbVar10;
    if ((*(char *)(param_2 + 7) == '\0') && (pbVar13 == pbVar10)) break;
LAB_0188e950:
    if (pbVar3 != pbVar10) {
      iVar6 = (int)pbVar3 - (int)pbVar10;
      uVar9 = 0;
      if (-1 < iVar6) {
        uVar9 = 1;
        iVar4 = FUN_01298504(iVar6,1);
        if (iVar4 != 0) {
          FUN_01bed4e2(iVar4,pbVar10 + iVar1,iVar6);
          *param_1 = iVar6;
          param_1[1] = iVar4;
          param_1[2] = iVar6;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,iVar6);
    }
  }
  *param_1 = -0x80000000;
  return;
}

