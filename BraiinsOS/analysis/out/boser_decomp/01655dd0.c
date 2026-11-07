// FUN_01655dd0 @ 01655dd0 size=324 calls_out=0 calls_in=1
// strings: 

int FUN_01655dd0(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (param_1[1] == 0) {
    return 0;
  }
  pbVar7 = (byte *)*param_1;
  pbVar3 = pbVar7 + param_1[1];
  while( true ) {
    pbVar5 = pbVar3 + -1;
    uVar4 = (uint)(char)*pbVar5;
    if (0x7fffffff < uVar4) {
      pbVar5 = pbVar3 + -2;
      bVar1 = *pbVar5;
      if ((char)bVar1 < -0x40) {
        pbVar5 = pbVar3 + -3;
        bVar2 = *pbVar5;
        if ((char)bVar2 < -0x40) {
          pbVar5 = pbVar3 + -4;
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
      uVar4 = uVar4 & 0x3f | uVar6 << 6;
    }
    uVar6 = (int)pbVar5 - (int)pbVar7;
    if (uVar6 < (uint)param_1[2]) break;
    pbVar3 = pbVar5;
    if (pbVar7 == pbVar5) {
      return 0;
    }
  }
  if (uVar4 != 10) {
    do {
      if (pbVar7 == pbVar5) {
        return 0;
      }
      pbVar3 = pbVar5 + -1;
      uVar4 = (uint)(char)*pbVar3;
      if (0x7fffffff < uVar4) {
        pbVar3 = pbVar5 + -2;
        bVar1 = *pbVar3;
        if ((char)bVar1 < -0x40) {
          pbVar3 = pbVar5 + -3;
          bVar2 = *pbVar3;
          if ((char)bVar2 < -0x40) {
            pbVar3 = pbVar5 + -4;
            uVar6 = (int)(char)bVar2 & 0x3fU | (*pbVar3 & 7) << 6;
          }
          else {
            uVar6 = bVar2 & 0xf;
          }
          uVar6 = (int)(char)bVar1 & 0x3fU | uVar6 << 6;
        }
        else {
          uVar6 = bVar1 & 0x1f;
        }
        uVar4 = uVar4 & 0x3f | uVar6 << 6;
      }
      pbVar5 = pbVar3;
    } while (uVar4 != 10);
    uVar6 = (int)pbVar3 - (int)pbVar7;
  }
  return uVar6 + 1;
}

