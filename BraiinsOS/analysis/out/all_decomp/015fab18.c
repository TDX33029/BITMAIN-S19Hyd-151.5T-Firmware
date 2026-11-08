// FUN_015fab18 @ 015fab18 size=616 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_015fab18(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  
  pbVar5 = param_1 + param_2;
  if (param_2 != 0) {
    pbVar9 = (byte *)0x0;
    pbVar4 = param_1;
    do {
      pbVar7 = pbVar4 + 1;
      uVar6 = (uint)*pbVar4;
      if (0x7fffffff < (uint)(int)(char)*pbVar4) {
        if (uVar6 < 0xe0) {
          uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
          pbVar7 = pbVar4 + 2;
        }
        else {
          uVar8 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (uVar6 < 0xf0) {
            uVar6 = uVar8 | (uVar6 & 0x1f) << 0xc;
            pbVar7 = pbVar4 + 3;
          }
          else {
            pbVar7 = pbVar4 + 4;
            uVar6 = pbVar4[3] & 0x3f | uVar8 << 6 | (uVar6 & 7) << 0x12;
          }
        }
      }
      pbVar4 = pbVar7 + ((int)pbVar9 - (int)pbVar4);
      if ((4 < uVar6 - 9) && (uVar6 != 0x20)) {
        if (uVar6 < 0x80) goto joined_r0x015fac68;
        uVar8 = uVar6 >> 8;
        if (uVar8 < 0x20) {
          if (uVar8 == 0) {
            bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 1;
joined_r0x015fac3c:
            if (bVar1 == 0) goto joined_r0x015fac68;
          }
          else if ((uVar8 != 0x16) || (uVar6 != 0x1680)) goto joined_r0x015fac68;
        }
        else {
          if (uVar8 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 2;
            goto joined_r0x015fac3c;
          }
          if ((uVar8 != 0x30) || (uVar6 != 0x3000)) goto joined_r0x015fac68;
        }
      }
      pbVar9 = pbVar4;
      pbVar4 = pbVar7;
    } while (pbVar7 != pbVar5);
    pbVar9 = (byte *)0x0;
    pbVar4 = (byte *)0x0;
LAB_015fac4c:
    return CONCAT44((int)pbVar4 - (int)pbVar9,param_1 + (int)pbVar9);
  }
  pbVar4 = (byte *)0x0;
  pbVar9 = (byte *)0x0;
  pbVar7 = param_1;
joined_r0x015fac68:
  do {
    do {
      pbVar3 = pbVar5;
      if (pbVar7 == pbVar3) goto LAB_015fac4c;
      pbVar5 = pbVar3 + -1;
      uVar6 = (uint)(char)*pbVar5;
      if (0x7fffffff < uVar6) {
        pbVar5 = pbVar3 + -2;
        bVar1 = *pbVar5;
        if ((char)bVar1 < -0x40) {
          pbVar5 = pbVar3 + -3;
          bVar2 = *pbVar5;
          if ((char)bVar2 < -0x40) {
            pbVar5 = pbVar3 + -4;
            uVar8 = (int)(char)bVar2 & 0x3fU | (*pbVar5 & 7) << 6;
          }
          else {
            uVar8 = bVar2 & 0xf;
          }
          uVar8 = (int)(char)bVar1 & 0x3fU | uVar8 << 6;
        }
        else {
          uVar8 = bVar1 & 0x1f;
        }
        uVar6 = uVar6 & 0x3f | uVar8 << 6;
      }
    } while ((uVar6 - 9 < 5) || (uVar6 == 0x20));
    if (uVar6 < 0x80) goto LAB_015fad6c;
    uVar8 = uVar6 >> 8;
    if (uVar8 < 0x20) {
      if (uVar8 == 0) {
        bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 1;
joined_r0x015fad68:
        if (bVar1 == 0) goto LAB_015fad6c;
      }
      else if ((uVar8 != 0x16) || (uVar6 != 0x1680)) goto LAB_015fad6c;
      goto joined_r0x015fac68;
    }
    if (uVar8 == 0x20) {
      bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 2;
      goto joined_r0x015fad68;
    }
    if (uVar8 != 0x30 || uVar6 != 0x3000) {
LAB_015fad6c:
      return CONCAT44(pbVar3 + (int)(pbVar4 + (-(int)pbVar9 - (int)pbVar7)),param_1 + (int)pbVar9);
    }
  } while( true );
}

