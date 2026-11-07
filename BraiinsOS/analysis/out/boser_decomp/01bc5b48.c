// FUN_01bc5b48 @ 01bc5b48 size=116 calls_out=0 calls_in=1
// strings: 

ulonglong FUN_01bc5b48(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(param_1 + -4);
  puVar3 = (uint *)(param_1 + param_2 * 4);
  uVar2 = 0;
  puVar4 = puVar6;
  do {
    puVar4 = puVar4 + 1;
    uVar2 = uVar2 + *puVar4;
  } while (puVar4 != puVar3);
  uVar1 = uVar2 >> (param_3 & 0xff);
  if (uVar1 < 2) {
    return CONCAT44(puVar3,uVar2);
  }
  uVar2 = 0;
  do {
    puVar6 = puVar6 + 1;
    uVar5 = (*puVar6 >> (0x1fU - LZCOUNT(uVar1) & 0xff)) + 1;
    *puVar6 = uVar5;
    uVar2 = uVar2 + uVar5;
  } while (puVar6 != puVar3);
  return (ulonglong)uVar2;
}

