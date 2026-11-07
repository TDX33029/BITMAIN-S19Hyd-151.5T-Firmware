// FUN_0159d934 @ 0159d934 size=212 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0159d934(uint param_1,uint param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  param_2 = param_2 & 0xffff;
  param_1 = param_1 & 0xffff;
  uVar2 = (param_4 / 0x15b0) * 0x15b0;
  uVar5 = param_4 % 0x15b0;
  if (0x15af < uVar2) {
    iVar3 = param_3;
    do {
      iVar4 = 0;
      do {
        pbVar1 = (byte *)(iVar3 - iVar4);
        iVar4 = iVar4 + -1;
        param_1 = param_1 + *pbVar1;
        param_2 = param_1 + param_2;
      } while (iVar4 != -0x15b0);
      uVar2 = uVar2 - 0x15b0;
      iVar3 = iVar3 + 0x15b0;
      param_2 = param_2 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    } while (0x15af < uVar2);
  }
  if (uVar5 != 0) {
    pbVar1 = (byte *)((param_4 / 0x15b0) * 0x15b0 + param_3);
    do {
      uVar5 = uVar5 - 1;
      param_1 = param_1 + *pbVar1;
      param_2 = param_1 + param_2;
      pbVar1 = pbVar1 + 1;
    } while (uVar5 != 0);
  }
  return CONCAT44(param_2 % 0xfff1,param_1 % 0xfff1);
}

