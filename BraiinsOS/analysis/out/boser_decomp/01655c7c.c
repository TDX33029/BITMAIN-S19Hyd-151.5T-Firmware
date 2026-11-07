// FUN_01655c7c @ 01655c7c size=340 calls_out=0 calls_in=1
// strings: 

byte * FUN_01655c7c(undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar1 = (byte *)param_1[1];
  if (pbVar1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if ((byte *)param_1[2] == pbVar1 + -1) {
    return pbVar1;
  }
  pbVar9 = (byte *)*param_1 + (int)pbVar1;
  pbVar3 = (byte *)*param_1;
  pbVar8 = (byte *)0x0;
  do {
    pbVar4 = pbVar8;
    if (pbVar3 == pbVar9) {
      return pbVar1;
    }
    pbVar2 = pbVar3 + 1;
    uVar6 = (uint)*pbVar3;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar3[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar2 = pbVar3 + 2;
      }
      else {
        uVar7 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
          pbVar2 = pbVar3 + 3;
        }
        else {
          uVar6 = pbVar3[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
          pbVar2 = pbVar3 + 4;
        }
      }
    }
    pbVar8 = pbVar4 + ((int)pbVar2 - (int)pbVar3);
    pbVar3 = pbVar2;
  } while (pbVar4 < (byte *)param_1[2]);
  while( true ) {
    if (uVar6 == 10) {
      return pbVar4 + 1;
    }
    if (pbVar2 == pbVar9) break;
    pbVar3 = pbVar2 + 1;
    uVar6 = (uint)*pbVar2;
    if (0x7fffffff < (uint)(int)(char)*pbVar2) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar2[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar3 = pbVar2 + 2;
      }
      else {
        uVar7 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
          pbVar3 = pbVar2 + 3;
        }
        else {
          uVar6 = pbVar2[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
          pbVar3 = pbVar2 + 4;
        }
      }
    }
    iVar5 = (int)pbVar8 - (int)pbVar2;
    pbVar2 = pbVar3;
    pbVar4 = pbVar8;
    pbVar8 = pbVar3 + iVar5;
  }
  return pbVar1;
}

