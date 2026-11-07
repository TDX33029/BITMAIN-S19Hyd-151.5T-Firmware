// FUN_010a8210 @ 010a8210 size=304 calls_out=4 calls_in=1
// strings: 

void FUN_010a8210(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  puVar5 = (uint *)*param_1;
  uVar1 = param_1[1];
  iVar12 = param_1[3];
  uVar2 = *puVar5;
  *param_1 = &DAT_0056d238;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar12 != 0) {
    uVar2 = ~uVar2 & 0x80808080;
    puVar8 = puVar5 + 1;
    puVar6 = puVar5;
    do {
      puVar7 = puVar8;
      if (uVar2 == 0) {
        do {
          puVar8 = puVar7 + 1;
          uVar2 = *puVar7;
          puVar6 = puVar6 + -8;
          puVar7 = puVar8;
        } while ((uVar2 & 0x80808080) == 0x80808080);
        uVar2 = uVar2 & 0x80808080 ^ 0x80808080;
      }
      iVar3 = *(int *)((int)puVar6 +
                      (-4 - (LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                     (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) & 0x38U)));
      uVar4 = *(undefined4 *)(iVar3 + 0xc);
      uVar11 = *(undefined4 *)(iVar3 + 8);
      uVar9 = *(undefined4 *)(iVar3 + 0x18);
      uVar10 = *(undefined4 *)(iVar3 + 0x1c);
      thunk_FUN_01be4678();
      FUN_019bb7e0(uVar9,uVar10);
      FUN_019bb7e0(uVar11,uVar4);
      iVar12 = iVar12 + -1;
      uVar2 = uVar2 - 1 & uVar2;
    } while (iVar12 != 0);
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    FUN_01bed93e(puVar5,0xff,uVar1 + 5);
    uVar2 = uVar1;
    if (7 < uVar1) {
      uVar2 = (uVar1 + 1 & 0xfffffff8) - (uVar1 + 1 >> 3);
    }
  }
  *param_1 = puVar5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  thunk_FUN_01be4678(param_1[7]);
  thunk_FUN_01be4678(param_1[8]);
  return;
}

