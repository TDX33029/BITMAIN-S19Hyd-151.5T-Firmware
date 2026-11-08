// FUN_006685f8 @ 006685f8 size=292 calls_out=0 calls_in=3
// strings: 

void FUN_006685f8(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    return;
  }
  pbVar4 = param_1 + param_2;
  do {
    pbVar5 = pbVar4 + -1;
    uVar3 = (uint)(char)*pbVar5;
    if (0x7fffffff < uVar3) {
      pbVar5 = pbVar4 + -2;
      bVar1 = *pbVar5;
      if ((char)bVar1 < -0x40) {
        pbVar5 = pbVar4 + -3;
        bVar2 = *pbVar5;
        if ((char)bVar2 < -0x40) {
          pbVar5 = pbVar4 + -4;
          uVar6 = (int)(char)bVar2 & 0x3fU | (*pbVar5 & 7) << 6;
        }
        else {
          uVar6 = bVar2 & 0xf;
        }
        uVar6 = (int)(char)bVar1 & 0x3fU | uVar6 << 6;
      }
      else {
        uVar6 = bVar1 & 0x1f;
      }
      uVar3 = uVar3 & 0x3f | uVar6 << 6;
    }
    if ((4 < uVar3 - 9) && (uVar3 != 0x20)) {
      if (uVar3 < 0x80) {
        return;
      }
      uVar6 = uVar3 >> 8;
      if (uVar6 < 0x20) {
        if (uVar6 == 0) {
          bVar1 = (&DAT_00533bcd)[uVar3 & 0xff] & 1;
joined_r0x0066870c:
          if (bVar1 == 0) {
            return;
          }
        }
        else {
          if (uVar6 != 0x16) {
            return;
          }
          if (uVar3 != 0x1680) {
            return;
          }
        }
      }
      else {
        if (uVar6 == 0x20) {
          bVar1 = (&DAT_00533bcd)[uVar3 & 0xff] & 2;
          goto joined_r0x0066870c;
        }
        if (uVar6 != 0x30 || uVar3 != 0x3000) {
          return;
        }
      }
    }
    pbVar4 = pbVar5;
    if (param_1 == pbVar5) {
      return;
    }
  } while( true );
}

