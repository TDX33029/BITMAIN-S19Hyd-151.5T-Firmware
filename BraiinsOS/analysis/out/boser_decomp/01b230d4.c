// FUN_01b230d4 @ 01b230d4 size=120 calls_out=0 calls_in=1
// strings: 

uint FUN_01b230d4(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  while( true ) {
    bVar5 = 0xfe < param_2;
    if (param_2 < 0x100) {
      bVar5 = param_4 <= uVar4;
    }
    if (bVar5) break;
    pbVar2 = (byte *)(param_3 + uVar4);
    uVar4 = uVar4 + 1;
    uVar3 = *pbVar2 & 0xf;
    uVar1 = (uint)(*pbVar2 >> 4);
    if (uVar3 < 9) {
      *(uint *)(param_1 + param_2 * 4) = 4 - uVar3;
      param_2 = param_2 + 1;
    }
    if (param_2 != 0x100 && uVar1 < 9) {
      *(uint *)(param_1 + param_2 * 4) = 4 - uVar1;
      param_2 = param_2 + 1;
    }
  }
  return param_2;
}

