// FUN_01a31070 @ 01a31070 size=132 calls_out=0 calls_in=1
// strings: 

void FUN_01a31070(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *param_1;
  iVar3 = iVar2 - param_2 >> 5;
  puVar1 = (uint *)(iVar2 + (iVar3 - 4U & param_1[1]));
  uVar7 = *puVar1;
  uVar6 = *(uint *)(iVar2 + iVar3) & *(uint *)(iVar2 + iVar3) << 1;
  uVar5 = uVar6 & 0x80808080;
  uVar4 = 0x80;
  if (((uint)LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) +
      ((uint)LZCOUNT(uVar7 & uVar7 << 1 & 0x80808080) >> 3) < 4) {
    param_1[2] = param_1[2] + 1;
    uVar4 = 0xff;
  }
  *(undefined1 *)(iVar2 + iVar3) = uVar4;
  iVar3 = param_1[3];
  *(undefined1 *)(puVar1 + 1) = uVar4;
  param_1[3] = iVar3 + -1;
  return;
}

