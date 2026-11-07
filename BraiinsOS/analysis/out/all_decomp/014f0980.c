// FUN_014f0980 @ 014f0980 size=484 calls_out=0 calls_in=2
// strings: 

byte * FUN_014f0980(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  
  pbVar1 = (byte *)param_1[1];
  pbVar8 = (byte *)param_1[4];
  pbVar6 = (byte *)param_1[6];
  bVar10 = *(byte *)((int)param_1 + 0x1d);
  pbVar7 = (byte *)*param_1;
  do {
    pbVar4 = pbVar7;
    if ((bVar10 & 1) != 0) {
      return (byte *)0x0;
    }
    pbVar5 = pbVar6;
    pbVar9 = pbVar8;
    if (pbVar8 != (byte *)param_1[5]) {
      do {
        pbVar8 = pbVar9 + 1;
        uVar2 = (uint)*pbVar9;
        if (0x7fffffff < (uint)(int)(char)*pbVar9) {
          if (uVar2 < 0xe0) {
            uVar2 = pbVar9[1] & 0x3f | (uVar2 & 0x1f) << 6;
            pbVar8 = pbVar9 + 2;
          }
          else {
            uVar3 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (uVar2 < 0xf0) {
              uVar2 = uVar3 | (uVar2 & 0x1f) << 0xc;
              pbVar8 = pbVar9 + 3;
            }
            else {
              pbVar8 = pbVar9 + 4;
              uVar2 = pbVar9[3] & 0x3f | uVar3 << 6 | (uVar2 & 7) << 0x12;
            }
          }
        }
        pbVar7 = pbVar8 + ((int)pbVar5 - (int)pbVar9);
        pbVar6 = pbVar7;
        if ((uVar2 - 9 < 0x18) && ((1 << (uVar2 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_014f09cc:
          param_1[6] = pbVar7;
          bVar10 = 0;
          param_1[4] = pbVar8;
          *param_1 = pbVar7;
          goto LAB_014f09e0;
        }
        if (0x7f < uVar2) {
          uVar3 = uVar2 >> 8;
          if (uVar3 < 0x20) {
            if (uVar3 == 0) {
              bVar10 = (&DAT_0041951b)[uVar2 & 0xff] & 1;
joined_r0x014f0a38:
              if (bVar10 != 0) goto LAB_014f09cc;
            }
            else if ((uVar3 == 0x16) && (uVar2 == 0x1680)) goto LAB_014f09cc;
          }
          else {
            if (uVar3 == 0x20) {
              bVar10 = (&DAT_0041951b)[uVar2 & 0xff] & 2;
              goto joined_r0x014f0a38;
            }
            if (uVar3 == 0x30 && uVar2 == 0x3000) goto LAB_014f09cc;
          }
        }
        pbVar5 = pbVar7;
        pbVar9 = pbVar8;
      } while (pbVar8 != (byte *)param_1[5]);
      param_1[6] = pbVar7;
      param_1[4] = pbVar8;
    }
    bVar10 = 1;
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    pbVar7 = pbVar4;
    pbVar5 = pbVar1;
    if (*(char *)(param_1 + 7) == '\0') {
      if (pbVar1 == pbVar4) {
        return (byte *)0x0;
      }
    }
    else {
    }
LAB_014f09e0:
    if (pbVar5 != pbVar4) {
      return pbVar4 + param_1[2];
    }
  } while( true );
}

