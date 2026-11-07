// FUN_016754c8 @ 016754c8 size=156 calls_out=0 calls_in=4
// strings: 

void FUN_016754c8(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    if (param_2 == 0) {
      return;
    }
    param_2 = param_1 + param_2;
    pbVar3 = (byte *)(param_2 + -1);
    uVar5 = (uint)(char)*pbVar3;
    if (0x7fffffff < uVar5) {
      pbVar3 = (byte *)(param_2 + -2);
      bVar1 = *pbVar3;
      if ((char)bVar1 < -0x40) {
        pbVar3 = (byte *)(param_2 + -3);
        bVar2 = *pbVar3;
        if ((char)bVar2 < -0x40) {
          pbVar3 = (byte *)(param_2 + -4);
          uVar4 = (int)(char)bVar2 & 0x3fU | (*pbVar3 & 7) << 6;
        }
        else {
          uVar4 = bVar2 & 0xf;
        }
        uVar4 = (int)(char)bVar1 & 0x3fU | uVar4 << 6;
      }
      else {
        uVar4 = bVar1 & 0x1f;
      }
      uVar5 = uVar5 & 0x3f | uVar4 << 6;
    }
    param_2 = (int)pbVar3 - param_1;
  } while (uVar5 == 0x23);
  return;
}

