// FUN_0065fbd8 @ 0065fbd8 size=336 calls_out=0 calls_in=3
// strings: 

void FUN_0065fbd8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_50 [12];
  
  if ((param_2 & 0xff) != 0) {
    param_2 = param_2 - 1;
    local_50[8] = 1;
    local_50[0xb] = 0;
    local_50[10] = 0;
    local_50[9] = 0;
    local_50[7] = 0;
    local_50[6] = 0;
    local_50[5] = 0;
    local_50[4] = 0;
    iVar7 = -((param_2 & 0x60) >> 3);
    uVar4 = *(uint *)((int)local_50 + iVar7 + 0x20);
    uVar1 = param_2 & 0x1f;
    puVar3 = (uint *)(param_1 + ((param_2 & 0x80) >> 3));
    uVar2 = *(uint *)((int)local_50 + iVar7 + 0x24);
    uVar6 = *(uint *)((int)local_50 + iVar7 + 0x28);
    iVar7 = *(int *)((int)local_50 + iVar7 + 0x2c);
    uVar5 = uVar1 ^ 0x1f;
    *puVar3 = *puVar3 | uVar4 << uVar1;
    puVar3[1] = puVar3[1] | uVar2 << uVar1 | (uVar4 >> 1) >> uVar5;
    puVar3[2] = puVar3[2] | uVar6 << uVar1 | (uVar2 >> 1) >> uVar5;
    puVar3[3] = puVar3[3] | iVar7 << uVar1 | (uVar6 >> 1) >> uVar5;
  }
  local_50[3] = 0;
  local_50[2] = 0;
  local_50[1] = 0;
  local_50[0] = 1;
  uVar1 = param_3 & 0x1f;
  puVar3 = (uint *)(param_1 + ((param_3 & 0x80) >> 3));
  uVar5 = uVar1 ^ 0x1f;
  iVar7 = -((param_3 & 0x60) >> 3);
  uVar2 = *(uint *)((int)local_50 + iVar7);
  uVar6 = *(uint *)((int)local_50 + iVar7 + 4);
  uVar4 = *(uint *)((int)local_50 + iVar7 + 8);
  iVar7 = *(int *)((int)local_50 + iVar7 + 0xc);
  *puVar3 = *puVar3 | uVar2 << uVar1;
  puVar3[1] = puVar3[1] | uVar6 << uVar1 | (uVar2 >> 1) >> uVar5;
  puVar3[2] = puVar3[2] | uVar4 << uVar1 | (uVar6 >> 1) >> uVar5;
  puVar3[3] = puVar3[3] | iVar7 << uVar1 | (uVar4 >> 1) >> uVar5;
  return;
}

