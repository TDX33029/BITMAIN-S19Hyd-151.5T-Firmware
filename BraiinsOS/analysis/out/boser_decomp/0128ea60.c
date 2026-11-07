// FUN_0128ea60 @ 0128ea60 size=396 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0128ea60(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  
  pbVar9 = param_1 + param_2;
  if (param_2 == 0) {
    pbVar3 = (byte *)0x0;
    pbVar4 = (byte *)0x0;
    pbVar5 = param_1;
LAB_0128eb34:
    if (pbVar5 != pbVar9) {
      do {
        pbVar6 = pbVar9 + -1;
        uVar7 = (uint)(char)*pbVar6;
        if (0x7fffffff < uVar7) {
          pbVar6 = pbVar9 + -2;
          bVar1 = *pbVar6;
          if ((char)bVar1 < -0x40) {
            pbVar6 = pbVar9 + -3;
            bVar2 = *pbVar6;
            if ((char)bVar2 < -0x40) {
              pbVar6 = pbVar9 + -4;
              uVar8 = (int)(char)bVar2 & 0x3fU | (*pbVar6 & 7) << 6;
            }
            else {
              uVar8 = bVar2 & 0xf;
            }
            uVar8 = (int)(char)bVar1 & 0x3fU | uVar8 << 6;
          }
          else {
            uVar8 = bVar1 & 0x1f;
          }
          uVar7 = uVar7 & 0x3f | uVar8 << 6;
        }
        if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x80001bU) == 0)) {
          pbVar3 = pbVar9 + ((int)pbVar3 - (int)pbVar5);
          break;
        }
        pbVar9 = pbVar6;
      } while (pbVar5 != pbVar6);
    }
  }
  else {
    pbVar4 = (byte *)0x0;
    pbVar3 = param_1;
    do {
      pbVar5 = pbVar3 + 1;
      uVar7 = (uint)*pbVar3;
      if (0x7fffffff < (uint)(int)(char)*pbVar3) {
        if (uVar7 < 0xe0) {
          uVar7 = pbVar3[1] & 0x3f | (uVar7 & 0x1f) << 6;
          pbVar5 = pbVar3 + 2;
        }
        else {
          uVar8 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
          if (uVar7 < 0xf0) {
            uVar7 = uVar8 | (uVar7 & 0x1f) << 0xc;
            pbVar5 = pbVar3 + 3;
          }
          else {
            uVar7 = pbVar3[3] & 0x3f | uVar8 << 6 | (uVar7 & 7) << 0x12;
            pbVar5 = pbVar3 + 4;
          }
        }
      }
      pbVar3 = pbVar4 + ((int)pbVar5 - (int)pbVar3);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x80001bU) == 0)) goto LAB_0128eb34;
      pbVar4 = pbVar3;
      pbVar3 = pbVar5;
    } while (pbVar5 != pbVar9);
    pbVar4 = (byte *)0x0;
    pbVar3 = (byte *)0x0;
  }
  return CONCAT44((int)pbVar3 - (int)pbVar4,param_1 + (int)pbVar4);
}

