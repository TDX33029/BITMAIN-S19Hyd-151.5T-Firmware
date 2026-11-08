// FUN_01b2314c @ 01b2314c size=164 calls_out=0 calls_in=1
// strings: 

uint FUN_01b2314c(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  while (iVar4 != 0x88 && param_2 < 0x100) {
    pbVar2 = (byte *)(param_3 + iVar4);
    iVar4 = iVar4 + 1;
    uVar3 = *pbVar2 & 0xf;
    uVar1 = (uint)(*pbVar2 >> 4);
    if (uVar3 != 0xf) {
      *(uint *)(param_1 + param_2 * 4) = 2 - uVar3 % 5;
      param_2 = param_2 + 1;
    }
    if (uVar1 != 0xf && param_2 != 0x100) {
      *(uint *)(param_1 + param_2 * 4) = 2 - uVar1 % 5;
      param_2 = param_2 + 1;
    }
  }
  return param_2;
}

