// FUN_0060466c @ 0060466c size=288 calls_out=0 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

int FUN_0060466c(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  if (param_2 != 0) {
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
      if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) goto LAB_006046a8;
      if (uVar3 < 0x80) goto LAB_00604784;
      uVar6 = uVar3 >> 8;
      if (uVar6 < 0x20) {
        if (uVar6 == 0) {
          bVar1 = (&DAT_0041951b)[uVar3 & 0xff] & 1;
          goto joined_r0x0060476c;
        }
        if ((uVar6 != 0x16) || (uVar3 != 0x1680)) goto LAB_00604784;
      }
      else if (uVar6 == 0x20) {
        bVar1 = (&DAT_0041951b)[uVar3 & 0xff] & 2;
joined_r0x0060476c:
        if (bVar1 == 0) {
LAB_00604784:
          return (int)pbVar4 - (int)param_1;
        }
      }
      else if (uVar6 != 0x30 || uVar3 != 0x3000) goto LAB_00604784;
LAB_006046a8:
      pbVar4 = pbVar5;
    } while (param_1 != pbVar5);
  }
  return 0;
}

