// FUN_006cbd90 @ 006cbd90 size=256 calls_out=3 calls_in=0
// strings: 

void FUN_006cbd90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int unaff_r8;
  uint *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    param_2 = *(int *)(param_1 + 0x14);
  }
  if ((iVar1 != 0 && param_2 != 0) && (iVar2 = param_2 * 0x10 + 0x10, param_2 + iVar2 != -5)) {
    thunk_FUN_01be4678(iVar1 - iVar2);
  }
  puVar7 = *(uint **)(param_1 + 0x30);
  if (puVar7 != (uint *)0x0) {
    unaff_r8 = *(int *)(param_1 + 0x34);
  }
  if (puVar7 != (uint *)0x0 && unaff_r8 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 != 0) {
      puVar6 = puVar7 + 1;
      uVar3 = ~*puVar7 & 0x80808080;
      puVar4 = puVar7;
      do {
        puVar5 = puVar6;
        if (uVar3 == 0) {
          do {
            puVar6 = puVar5 + 1;
            uVar3 = *puVar5;
            puVar4 = puVar4 + -0x38;
            puVar5 = puVar6;
          } while ((uVar3 & 0x80808080) == 0x80808080);
          uVar3 = uVar3 & 0x80808080 ^ 0x80808080;
        }
        FUN_00fe40e4(puVar4 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                             (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) *
                              -0xe + -0xc);
        iVar1 = iVar1 + -1;
        uVar3 = uVar3 - 1 & uVar3;
      } while (iVar1 != 0);
    }
    iVar1 = unaff_r8 * 0x38 + 0x38;
    if (unaff_r8 + iVar1 != -5) {
      thunk_FUN_01be4678((int)puVar7 - iVar1);
      return;
    }
  }
  return;
}

