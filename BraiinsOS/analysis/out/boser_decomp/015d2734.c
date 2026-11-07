// FUN_015d2734 @ 015d2734 size=144 calls_out=0 calls_in=2
// strings: 

void FUN_015d2734(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar5;
  uint *puVar4;
  undefined4 uVar6;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x10);
    iVar1 = *(int *)(param_2 + 0xc);
    if (uVar3 == 0) {
      puVar4 = *(uint **)(param_2 + 0x14);
      do {
        puVar5 = puVar4 + 1;
        uVar3 = *puVar4;
        iVar1 = iVar1 + -0x20;
        puVar4 = puVar5;
      } while ((uVar3 & 0x80808080) == 0x80808080);
      uVar3 = uVar3 & 0x80808080 ^ 0x80808080;
      *(int *)(param_2 + 0xc) = iVar1;
      *(uint **)(param_2 + 0x14) = puVar5;
    }
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
    uVar6 = 1;
    *(uint *)(param_2 + 0x10) = uVar3 - 1 & uVar3;
    iVar1 = iVar1 - (LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                             (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) & 0x38U);
    uVar2 = *(undefined4 *)(iVar1 + -4);
    param_1[2] = *(undefined4 *)(iVar1 + -8);
    param_1[3] = uVar2;
  }
  *param_1 = uVar6;
  param_1[1] = 0;
  return;
}

