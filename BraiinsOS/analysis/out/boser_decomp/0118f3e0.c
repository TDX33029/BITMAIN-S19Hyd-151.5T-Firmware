// FUN_0118f3e0 @ 0118f3e0 size=168 calls_out=0 calls_in=2
// strings: 

void FUN_0118f3e0(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  
  iVar3 = *param_2;
  iVar1 = iVar3 - param_3 >> 6;
  puVar12 = (uint *)(iVar3 + (iVar1 - 4U & param_2[1]));
  uVar9 = *puVar12;
  uVar6 = *(uint *)(iVar3 + iVar1) & *(uint *)(iVar3 + iVar1) << 1;
  uVar2 = 0x80;
  uVar7 = uVar6 & 0x80808080;
  if (((uint)LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) +
      ((uint)LZCOUNT(uVar9 & uVar9 << 1 & 0x80808080) >> 3) < 4) {
    param_2[2] = param_2[2] + 1;
    uVar2 = 0xff;
  }
  *(undefined1 *)(iVar3 + iVar1) = uVar2;
  iVar3 = param_2[3];
  *(undefined1 *)(puVar12 + 1) = uVar2;
  param_2[3] = iVar3 + -1;
  uVar4 = *(undefined4 *)(param_3 + -0x3c);
  uVar5 = *(undefined4 *)(param_3 + -0x38);
  uVar8 = *(undefined4 *)(param_3 + -0x34);
  uVar10 = *(undefined4 *)(param_3 + -0x30);
  *param_1 = *(undefined4 *)(param_3 + -0x40);
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar8;
  param_1[4] = uVar10;
  uVar4 = *(undefined4 *)(param_3 + -0x28);
  uVar5 = *(undefined4 *)(param_3 + -0x24);
  uVar8 = *(undefined4 *)(param_3 + -0x20);
  uVar10 = *(undefined4 *)(param_3 + -0x1c);
  param_1[5] = *(undefined4 *)(param_3 + -0x2c);
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar8;
  param_1[9] = uVar10;
  uVar4 = *(undefined4 *)(param_3 + -0x14);
  uVar5 = *(undefined4 *)(param_3 + -0x10);
  uVar8 = *(undefined4 *)(param_3 + -0xc);
  uVar10 = *(undefined4 *)(param_3 + -8);
  uVar11 = *(undefined4 *)(param_3 + -4);
  param_1[10] = *(undefined4 *)(param_3 + -0x18);
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar8;
  param_1[0xe] = uVar10;
  param_1[0xf] = uVar11;
  param_1[0x10] = iVar1;
  return;
}

