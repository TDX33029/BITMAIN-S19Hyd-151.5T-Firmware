// FUN_0152faa4 @ 0152faa4 size=292 calls_out=1 calls_in=1
// strings: 

void FUN_0152faa4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar8 = param_1[2];
  uVar2 = param_1[3];
  iVar5 = 0;
  bVar9 = *param_1 <= uVar8;
  if (uVar8 == *param_1) {
    bVar9 = param_1[1] <= uVar2;
  }
  if (bVar9) {
    do {
      uVar6 = param_1[iVar5 * 2 + 4];
      iVar1 = iVar5 * 2;
      bVar10 = uVar8 <= uVar6;
      if (uVar6 == uVar8) {
        bVar10 = uVar2 <= param_1[iVar1 + 5];
      }
      if (!bVar10) goto LAB_0152fb68;
      iVar5 = iVar5 + 1;
      uVar2 = param_1[iVar1 + 5];
      uVar8 = uVar6;
    } while (param_2 - 2 != iVar5);
  }
  else {
    do {
      uVar6 = param_1[iVar5 * 2 + 4];
      iVar1 = iVar5 * 2;
      bVar10 = uVar8 <= uVar6;
      if (uVar6 == uVar8) {
        bVar10 = uVar2 <= param_1[iVar1 + 5];
      }
      if (bVar10) goto LAB_0152fb68;
      iVar5 = iVar5 + 1;
      uVar2 = param_1[iVar1 + 5];
      uVar8 = uVar6;
    } while (param_2 - 2 != iVar5);
  }
LAB_0152fb74:
  if (!bVar9) {
    uVar2 = param_2 >> 1;
    puVar4 = param_1 + param_2 * 2;
    do {
      puVar3 = puVar4 + -2;
      uVar8 = *puVar3;
      uVar6 = puVar4[-1];
      uVar2 = uVar2 - 1;
      uVar7 = param_1[1];
      *puVar3 = *param_1;
      puVar4[-1] = uVar7;
      *param_1 = uVar8;
      param_1[1] = uVar6;
      param_1 = param_1 + 2;
      puVar4 = puVar3;
    } while (uVar2 != 0);
  }
  return;
LAB_0152fb68:
  if (iVar5 + 2U != param_2) {
    FUN_0152fbc8(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  goto LAB_0152fb74;
}

