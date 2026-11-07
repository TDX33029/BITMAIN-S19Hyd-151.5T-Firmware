// FUN_01bd59dc @ 01bd59dc size=236 calls_out=2 calls_in=2
// strings: 

void FUN_01bd59dc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(param_1 + 0x3fU & 0xffffffc0);
  uVar1 = FUN_01bd55c8(param_2);
  uVar2 = FUN_01bd55c8(param_2 + 4);
  uVar3 = FUN_01bd55c8(param_2 + 8);
  uVar4 = FUN_01bd55c8(param_2 + 0xc);
  *puVar6 = uVar1 & 0x3ffffff;
  uVar5 = ((uVar3 & 0x3fff) << 0xc | uVar2 >> 0x14) & 0xffffc0ff;
  uVar2 = ((uVar2 & 0xfffff) << 6 | uVar1 >> 0x1a) & 0xffffff03;
  uVar3 = ((uVar4 & 0xff) << 0x12 | uVar3 >> 0xe) & 0xfff03fff;
  uVar1 = (uVar4 & 0xfffffff) >> 8;
  puVar6[2] = uVar5;
  puVar6[6] = uVar5 * 5;
  puVar6[1] = uVar2;
  puVar6[3] = uVar3;
  puVar6[4] = uVar1;
  puVar6[5] = uVar2 * 5;
  puVar6[7] = uVar3 * 5;
  puVar6[8] = uVar1 * 5;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0x12] = 0;
  FUN_01bd558c(puVar6 + 0x13,param_2 + 0x10);
  return;
}

