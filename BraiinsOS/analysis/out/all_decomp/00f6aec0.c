// FUN_00f6aec0 @ 00f6aec0 size=332 calls_out=0 calls_in=5
// strings: 

ulonglong FUN_00f6aec0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == (byte *)0x0) {
    return ZEXT48(param_1);
  }
  pbVar2 = (byte *)0x0;
  pbVar3 = param_1;
  do {
    pbVar4 = pbVar3 + 1;
    uVar5 = (uint)*pbVar3;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      if (uVar5 < 0xe0) {
        uVar5 = pbVar3[1] & 0x3f | (uVar5 & 0x1f) << 6;
        pbVar4 = pbVar3 + 2;
      }
      else {
        uVar6 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (uVar5 < 0xf0) {
          uVar5 = uVar6 | (uVar5 & 0x1f) << 0xc;
          pbVar4 = pbVar3 + 3;
        }
        else {
          uVar5 = pbVar3[3] & 0x3f | uVar6 << 6 | (uVar5 & 7) << 0x12;
          pbVar4 = pbVar3 + 4;
        }
      }
    }
    if ((4 < uVar5 - 9) && (uVar5 != 0x20)) {
      if (uVar5 < 0x80) goto LAB_00f6afec;
      uVar6 = uVar5 >> 8;
      if (uVar6 < 0x20) {
        if (uVar6 == 0) {
          bVar1 = (&DAT_0041951b)[uVar5 & 0xff] & 1;
joined_r0x00f6afe0:
          if (bVar1 == 0) goto LAB_00f6afec;
        }
        else if ((uVar6 != 0x16) || (uVar5 != 0x1680)) goto LAB_00f6afec;
      }
      else {
        if (uVar6 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar5 & 0xff] & 2;
          goto joined_r0x00f6afe0;
        }
        if ((uVar6 != 0x30) || (uVar5 != 0x3000)) goto LAB_00f6afec;
      }
    }
    pbVar2 = pbVar4 + ((int)pbVar2 - (int)pbVar3);
    pbVar3 = pbVar4;
  } while (pbVar4 != param_1 + (int)param_2);
  pbVar2 = param_2;
LAB_00f6afec:
  return CONCAT44((int)param_2 - (int)pbVar2,param_1 + (int)pbVar2);
}

