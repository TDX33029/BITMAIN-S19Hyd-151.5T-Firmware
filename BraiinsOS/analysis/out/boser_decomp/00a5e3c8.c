// FUN_00a5e3c8 @ 00a5e3c8 size=436 calls_out=1 calls_in=2
// strings: 

byte * FUN_00a5e3c8(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    return (byte *)0x0;
  }
  if (*(char *)(param_1 + 7) == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar8 = FUN_00a5e3c8(param_1);
    if ((byte *)uVar8 != (byte *)0x0 && (int)((ulonglong)uVar8 >> 0x20) != 0) {
      return (byte *)uVar8;
    }
    if (*(char *)((int)param_1 + 0x1d) == '\x01') {
      return (byte *)0x0;
    }
  }
  pbVar4 = (byte *)param_1[4];
  if (pbVar4 != (byte *)param_1[5]) {
    pbVar5 = (byte *)param_1[5];
    do {
      pbVar6 = pbVar5 + -1;
      uVar7 = (uint)(char)*pbVar6;
      if (0x7fffffff < uVar7) {
        pbVar6 = pbVar5 + -2;
        bVar1 = *pbVar6;
        if ((char)bVar1 < -0x40) {
          pbVar6 = pbVar5 + -3;
          bVar2 = *pbVar6;
          if ((char)bVar2 < -0x40) {
            pbVar6 = pbVar5 + -4;
            uVar3 = (int)(char)bVar2 & 0x3fU | (*pbVar6 & 7) << 6;
          }
          else {
            uVar3 = bVar2 & 0xf;
          }
          uVar3 = (int)(char)bVar1 & 0x3fU | uVar3 << 6;
        }
        else {
          uVar3 = bVar1 & 0x1f;
        }
        uVar7 = uVar7 & 0x3f | uVar3 << 6;
      }
      if ((uVar7 - 9 < 0x18) && ((1 << (uVar7 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_00a5e54c:
        param_1[1] = pbVar6 + (param_1[6] - (int)pbVar4);
        pbVar5 = pbVar5 + (param_1[6] - (int)pbVar4);
        param_1[5] = pbVar6;
        goto LAB_00a5e568;
      }
      if (0x7f < uVar7) {
        uVar3 = uVar7 >> 8;
        if (uVar3 < 0x20) {
          if (uVar3 == 0) {
            bVar1 = (&DAT_00533bcd)[uVar7 & 0xff] & 1;
joined_r0x00a5e528:
            if (bVar1 != 0) goto LAB_00a5e54c;
          }
          else if ((uVar3 == 0x16) && (uVar7 == 0x1680)) goto LAB_00a5e54c;
        }
        else {
          if (uVar3 == 0x20) {
            bVar1 = (&DAT_00533bcd)[uVar7 & 0xff] & 2;
            goto joined_r0x00a5e528;
          }
          if (uVar3 == 0x30 && uVar7 == 0x3000) goto LAB_00a5e54c;
        }
      }
      pbVar5 = pbVar6;
    } while (pbVar4 != pbVar6);
    param_1[5] = pbVar6;
  }
  pbVar5 = (byte *)*param_1;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
LAB_00a5e568:
  return pbVar5 + param_1[2];
}

