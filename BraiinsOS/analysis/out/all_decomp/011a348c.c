// FUN_011a348c @ 011a348c size=272 calls_out=2 calls_in=0
// strings: 

void FUN_011a348c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = param_1[4];
  if (iVar6 != 0) {
    puVar3 = (uint *)param_1[2];
    iVar2 = *param_1;
    uVar7 = param_1[1];
    do {
      puVar4 = puVar3;
      if (uVar7 == 0) {
        do {
          puVar3 = puVar4 + 1;
          uVar7 = *puVar4;
          iVar2 = iVar2 + -0xe0;
          puVar4 = puVar3;
        } while ((uVar7 & 0x80808080) == 0x80808080);
        uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
        *param_1 = iVar2;
        param_1[2] = (int)puVar3;
      }
      iVar1 = iVar2 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) * -0x38;
      if (*(int *)(iVar1 + -0x38) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + -0x34));
      }
      if (*(int *)(iVar1 + -0x2c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + -0x28));
      }
      iVar6 = iVar6 + -1;
      uVar7 = uVar7 - 1 & uVar7;
    } while (iVar6 != 0);
    param_1[1] = uVar7;
    param_1[4] = 0;
  }
  uVar7 = param_1[6];
  if (uVar7 != 0) {
    FUN_016dd606(param_1[5],0xff,uVar7 + 5);
  }
  iVar6 = param_1[6];
  piVar5 = (int *)param_1[9];
  if (7 < uVar7) {
    uVar7 = (uVar7 + 1 & 0xfffffff8) - (uVar7 + 1 >> 3);
  }
  param_1[7] = uVar7;
  param_1[8] = 0;
  iVar2 = param_1[7];
  iVar1 = param_1[8];
  *piVar5 = param_1[5];
  piVar5[1] = iVar6;
  piVar5[2] = iVar2;
  piVar5[3] = iVar1;
  return;
}

