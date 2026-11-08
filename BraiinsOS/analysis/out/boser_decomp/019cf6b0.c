// FUN_019cf6b0 @ 019cf6b0 size=188 calls_out=0 calls_in=0
// strings: 

byte * FUN_019cf6b0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar1 = param_1[2];
  uVar2 = *param_1;
  pbVar3 = (byte *)0x0;
  *param_1 = 0;
  if ((uVar2 & 1) == 0) {
    pbVar4 = (byte *)param_1[3];
    if (pbVar4 == (byte *)param_1[4]) goto LAB_019cf744;
    uVar1 = param_1[5];
    param_1[3] = (uint)(pbVar4 + 1);
    param_1[5] = uVar1 + 1;
  }
  else {
    pbVar4 = (byte *)param_1[1];
    if ((byte *)param_1[1] == (byte *)0x0) goto LAB_019cf744;
  }
  pbVar3 = pbVar4;
  if (2 < *pbVar3 - 0x5b) {
    uVar2 = *pbVar3 - 9;
    if ((uVar2 < 0x18) && ((1 << (uVar2 & 0xff) & 0x80001bU) != 0)) {
      if ((param_2 & 1) != 0) {
        return pbVar3;
      }
    }
    else if ((param_2 & 1) == 0) {
      return pbVar3;
    }
  }
LAB_019cf744:
  param_1[2] = uVar1;
  *param_1 = 1;
  param_1[1] = (uint)pbVar3;
  return (byte *)0x0;
}

