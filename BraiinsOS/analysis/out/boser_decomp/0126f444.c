// FUN_0126f444 @ 0126f444 size=140 calls_out=0 calls_in=2
// strings: 

void FUN_0126f444(int *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = *param_1;
  iVar7 = (iVar3 - param_2 >> 3) * -0x33333333;
  puVar4 = (uint *)(iVar3 + (iVar7 - 4U & param_1[1]));
  uVar2 = *puVar4;
  uVar5 = *(uint *)(iVar3 + iVar7) & *(uint *)(iVar3 + iVar7) << 1;
  uVar6 = uVar5 & 0x80808080;
  uVar1 = 0x80;
  if (((uint)LZCOUNT((uVar5 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                     (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) +
      ((uint)LZCOUNT(uVar2 & uVar2 << 1 & 0x80808080) >> 3) < 4) {
    param_1[2] = param_1[2] + 1;
    uVar1 = 0xff;
  }
  *(undefined1 *)(iVar3 + iVar7) = uVar1;
  iVar3 = param_1[3];
  *(undefined1 *)(puVar4 + 1) = uVar1;
  param_1[3] = iVar3 + -1;
  return;
}

