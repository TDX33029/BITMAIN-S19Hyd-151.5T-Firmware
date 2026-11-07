// FUN_013182f8 @ 013182f8 size=472 calls_out=0 calls_in=8
// strings: 

byte * FUN_013182f8(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  
  pbVar1 = (byte *)param_1[1];
  pbVar8 = (byte *)param_1[4];
  pbVar7 = (byte *)param_1[6];
  bVar9 = *(byte *)((int)param_1 + 0x1d);
  pbVar5 = (byte *)*param_1;
  do {
    pbVar4 = pbVar5;
    if ((bVar9 & 1) != 0) {
      return (byte *)0x0;
    }
    pbVar6 = pbVar7;
    pbVar5 = pbVar8;
    if (pbVar8 != (byte *)param_1[5]) {
      do {
        pbVar8 = pbVar5 + 1;
        uVar2 = (uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (uVar2 < 0xe0) {
            uVar2 = pbVar5[1] & 0x3f | (uVar2 & 0x1f) << 6;
            pbVar8 = pbVar5 + 2;
          }
          else {
            uVar3 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (uVar2 < 0xf0) {
              uVar2 = uVar3 | (uVar2 & 0x1f) << 0xc;
              pbVar8 = pbVar5 + 3;
            }
            else {
              pbVar8 = pbVar5 + 4;
              uVar2 = pbVar5[3] & 0x3f | uVar3 << 6 | (uVar2 & 7) << 0x12;
            }
          }
        }
        pbVar7 = pbVar8 + ((int)pbVar6 - (int)pbVar5);
        if ((uVar2 - 9 < 0x18) && ((1 << (uVar2 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_01318494:
          param_1[6] = pbVar7;
          bVar9 = 0;
          param_1[4] = pbVar8;
          *param_1 = pbVar7;
          pbVar5 = pbVar7;
          goto LAB_013184b4;
        }
        if (0x7f < uVar2) {
          uVar3 = uVar2 >> 8;
          if (uVar3 < 0x20) {
            if (uVar3 == 0) {
              bVar9 = (&DAT_00533bcd)[uVar2 & 0xff] & 1;
              goto joined_r0x01318458;
            }
            if ((uVar3 == 0x16) && (uVar2 == 0x1680)) goto LAB_01318494;
          }
          else if (uVar3 == 0x20) {
            bVar9 = (&DAT_00533bcd)[uVar2 & 0xff] & 2;
joined_r0x01318458:
            if (bVar9 != 0) goto LAB_01318494;
          }
          else if (uVar3 == 0x30 && uVar2 == 0x3000) goto LAB_01318494;
        }
        pbVar6 = pbVar7;
        pbVar5 = pbVar8;
      } while (pbVar8 != (byte *)param_1[5]);
      param_1[6] = pbVar7;
      param_1[4] = pbVar8;
    }
    bVar9 = 1;
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    pbVar5 = pbVar4;
    pbVar6 = pbVar1;
    if ((*(char *)(param_1 + 7) == '\0') && (pbVar1 == pbVar4)) {
      return (byte *)0x0;
    }
LAB_013184b4:
    if (pbVar6 != pbVar4) {
      return pbVar4 + param_1[2];
    }
  } while( true );
}

