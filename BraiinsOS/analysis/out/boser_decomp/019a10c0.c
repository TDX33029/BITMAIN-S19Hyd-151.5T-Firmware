// FUN_019a10c0 @ 019a10c0 size=324 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_019a10c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar2 = (byte *)0x0;
    pbVar4 = param_1;
    do {
      pbVar5 = pbVar4 + 1;
      uVar6 = (uint)*pbVar4;
      if (0x7fffffff < (uint)(int)(char)*pbVar4) {
        if (uVar6 < 0xe0) {
          uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
          pbVar5 = pbVar4 + 2;
        }
        else {
          uVar7 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (uVar6 < 0xf0) {
            uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
            pbVar5 = pbVar4 + 3;
          }
          else {
            uVar6 = pbVar4[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
            pbVar5 = pbVar4 + 4;
          }
        }
      }
      if ((4 < uVar6 - 9) && (uVar6 != 0x20)) {
        pbVar3 = pbVar2;
        if (uVar6 < 0x80) break;
        uVar7 = uVar6 >> 8;
        if (uVar7 < 0x20) {
          if (uVar7 == 0) {
            bVar1 = (&DAT_00533bcd)[uVar6 & 0xff] & 1;
joined_r0x019a11e0:
            if (bVar1 == 0) break;
          }
          else if ((uVar7 != 0x16) || (uVar6 != 0x1680)) break;
        }
        else {
          if (uVar7 == 0x20) {
            bVar1 = (&DAT_00533bcd)[uVar6 & 0xff] & 2;
            goto joined_r0x019a11e0;
          }
          if ((uVar7 != 0x30) || (uVar6 != 0x3000)) break;
        }
      }
      pbVar2 = pbVar5 + ((int)pbVar2 - (int)pbVar4);
      pbVar3 = param_2;
      pbVar4 = pbVar5;
    } while (pbVar5 != param_1 + (int)param_2);
  }
  return CONCAT44((int)param_2 - (int)pbVar3,param_1 + (int)pbVar3);
}

