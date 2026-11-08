// FUN_010d2864 @ 010d2864 size=404 calls_out=0 calls_in=1
// strings: 

longlong FUN_010d2864(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (*(byte *)((int)param_1 + 0x1d) != 0) {
    return (ulonglong)(uint)*(byte *)((int)param_1 + 0x1d) << 0x20;
  }
  if ((byte *)param_1[4] != (byte *)param_1[5]) {
    pbVar4 = (byte *)param_1[6];
    pbVar6 = (byte *)param_1[4];
    do {
      pbVar7 = pbVar6 + 1;
      uVar9 = (uint)*pbVar6;
      if (0x7fffffff < (uint)(int)(char)*pbVar6) {
        if (uVar9 < 0xe0) {
          uVar9 = pbVar6[1] & 0x3f | (uVar9 & 0x1f) << 6;
          pbVar7 = pbVar6 + 2;
        }
        else {
          uVar8 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar9 < 0xf0) {
            uVar9 = uVar8 | (uVar9 & 0x1f) << 0xc;
            pbVar7 = pbVar6 + 3;
          }
          else {
            pbVar7 = pbVar6 + 4;
            uVar9 = pbVar6[3] & 0x3f | uVar8 << 6 | (uVar9 & 7) << 0x12;
          }
        }
      }
      pbVar5 = pbVar7 + ((int)pbVar4 - (int)pbVar6);
      if ((uVar9 - 9 < 0x18) && ((1 << (uVar9 - 9 & 0xff) & 0x80001fU) != 0)) goto LAB_010d29a8;
      if (0x7f < uVar9) {
        uVar8 = uVar9 >> 8;
        if (uVar8 < 0x20) {
          if (uVar8 == 0) {
            bVar1 = (&DAT_0041951b)[uVar9 & 0xff] & 1;
joined_r0x010d28b8:
            if (bVar1 != 0) {
LAB_010d29a8:
              iVar2 = *param_1;
              param_1[6] = (int)pbVar5;
              param_1[4] = (int)pbVar7;
              *param_1 = (int)pbVar5;
              return CONCAT44((int)pbVar4 - iVar2,param_1[2] + iVar2);
            }
          }
          else if ((uVar8 == 0x16) && (uVar9 == 0x1680)) goto LAB_010d29a8;
        }
        else {
          if (uVar8 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar9 & 0xff] & 2;
            goto joined_r0x010d28b8;
          }
          if (uVar8 == 0x30 && uVar9 == 0x3000) goto LAB_010d29a8;
        }
      }
      pbVar4 = pbVar5;
      pbVar6 = pbVar7;
    } while (pbVar7 != (byte *)param_1[5]);
    param_1[6] = (int)pbVar5;
    param_1[4] = (int)pbVar7;
  }
  iVar3 = *param_1;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  iVar10 = param_1[2] + iVar3;
  iVar2 = 0;
  if (param_1[1] != iVar3) {
    iVar2 = iVar10;
  }
  if ((char)param_1[7] != '\0') {
    iVar2 = iVar10;
  }
  return CONCAT44(param_1[1] - iVar3,iVar2);
}

