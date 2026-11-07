// FUN_01bcfaf8 @ 01bcfaf8 size=96 calls_out=0 calls_in=1
// strings: 

void FUN_01bcfaf8(undefined1 *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  uVar1 = param_4 << 2;
  puVar4 = param_1;
  for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 4) {
    uVar3 = *(undefined4 *)(param_3 + uVar2);
    *puVar4 = (char)uVar3;
    puVar4[1] = (char)((uint)uVar3 >> 8);
    puVar4[2] = (char)((uint)uVar3 >> 0x10);
    puVar4[3] = (char)((uint)uVar3 >> 0x18);
    puVar4 = puVar4 + 4;
  }
  for (; uVar1 < param_2; uVar1 = uVar1 + 1) {
    param_1[uVar1] = 0;
  }
  return;
}

