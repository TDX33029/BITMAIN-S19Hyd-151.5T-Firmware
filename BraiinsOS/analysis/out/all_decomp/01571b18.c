// FUN_01571b18 @ 01571b18 size=380 calls_out=2 calls_in=1
// strings: 

void FUN_01571b18(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  
  uVar7 = *(uint *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar11 = *(uint *)(param_1 + 0x14);
  uVar9 = uVar7;
  if (uVar11 < uVar7) {
    uVar9 = uVar11;
  }
  iVar1 = FUN_016dd50a(uVar10,*(undefined4 *)(param_1 + 4),uVar9);
  if (iVar1 == 0) {
    iVar1 = uVar11 - uVar7;
  }
  if (iVar1 < 0) {
    puVar12 = (uint *)(param_1 + 0x20);
    uVar9 = 2;
    do {
      uVar6 = puVar12[-1];
      uVar8 = *puVar12;
      uVar7 = uVar11;
      if (uVar8 < uVar11) {
        uVar7 = uVar8;
      }
      uVar10 = FUN_016dd50a(uVar6,uVar10,uVar7);
      if (uVar10 == 0) {
        uVar10 = uVar8 - uVar11;
      }
      if (uVar10 < 0x80000000) goto LAB_01571c00;
      uVar9 = uVar9 + 1;
      puVar12 = puVar12 + 3;
      uVar10 = uVar6;
      uVar11 = uVar8;
    } while (param_2 != uVar9);
  }
  else {
    puVar12 = (uint *)(param_1 + 0x20);
    uVar9 = 2;
    do {
      uVar6 = puVar12[-1];
      uVar8 = *puVar12;
      uVar7 = uVar11;
      if (uVar8 < uVar11) {
        uVar7 = uVar8;
      }
      iVar2 = FUN_016dd50a(uVar6,uVar10,uVar7);
      if (iVar2 == 0) {
        iVar2 = uVar8 - uVar11;
      }
      if (iVar2 < 0) goto LAB_01571c00;
      uVar9 = uVar9 + 1;
      puVar12 = puVar12 + 3;
      uVar10 = uVar6;
      uVar11 = uVar8;
    } while (param_2 != uVar9);
  }
LAB_01571c08:
  if (iVar1 < 0) {
    uVar9 = param_2 >> 1;
    puVar3 = (undefined4 *)(param_1 + param_2 * 0xc + -4);
    puVar4 = (undefined4 *)(param_1 + 8);
    do {
      uVar5 = puVar4[-2];
      uVar9 = uVar9 - 1;
      puVar4[-2] = puVar3[-2];
      puVar3[-2] = uVar5;
      uVar5 = puVar3[-1];
      puVar3[-1] = puVar4[-1];
      puVar4[-1] = uVar5;
      uVar5 = *puVar4;
      *puVar4 = *puVar3;
      *puVar3 = uVar5;
      puVar3 = puVar3 + -3;
      puVar4 = puVar4 + 3;
    } while (uVar9 != 0);
  }
  return;
LAB_01571c00:
  if (uVar9 != param_2) {
    FUN_0156ed8c(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  goto LAB_01571c08;
}

