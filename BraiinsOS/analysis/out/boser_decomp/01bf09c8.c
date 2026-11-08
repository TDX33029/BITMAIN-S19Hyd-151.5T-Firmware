// FUN_01bf09c8 @ 01bf09c8 size=280 calls_out=0 calls_in=7
// strings: 

int FUN_01bf09c8(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_30 [4];
  
  local_30[0] = param_1;
  local_30[1] = param_2;
  local_30[2] = param_3;
  local_30[3] = param_4;
  iVar6 = LZCOUNT(param_1) + 0x20;
  uVar5 = LZCOUNT(param_3) + 0x20;
  if (param_4 != 0) {
    uVar5 = LZCOUNT(param_4);
  }
  if (param_2 != 0) {
    iVar6 = LZCOUNT(param_2);
  }
  if (param_3 == 0 && param_4 == 0) {
    uVar5 = iVar6 + 0x40;
  }
  uVar3 = uVar5 & 0x1f;
  iVar6 = -(uVar5 >> 3 & 0xc);
  uVar7 = *(uint *)((int)local_30 + iVar6);
  uVar1 = *(uint *)((int)local_30 + iVar6 + 4);
  uVar4 = *(uint *)((int)local_30 + iVar6 + 8);
  uVar5 = uVar3 ^ 0x1f;
  uVar2 = uVar4 << uVar3 | (uVar1 >> 1) >> uVar5;
  uVar1 = uVar1 << uVar3 | (uVar7 >> 1) >> uVar5;
  uVar5 = uVar2 >> 0xb |
          (*(int *)((int)local_30 + iVar6 + 0xc) << uVar3 | (uVar4 >> 1) >> uVar5) << 0x15;
  return uVar5 - ((int)((uVar1 >> 0xb | uVar2 << 0x15) -
                       (uint)(((uVar7 << uVar3) >> 0xb | uVar1 << 0x15 | uVar7 << uVar3) <
                             (~uVar5 & (uVar2 & 0x7ff) >> 10))) >> 0x1f);
}

