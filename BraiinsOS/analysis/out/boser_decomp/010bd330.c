// FUN_010bd330 @ 010bd330 size=168 calls_out=1 calls_in=1
// strings: 

void FUN_010bd330(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_2 + 4);
  iVar1 = *(int *)(param_2 + 0xc);
  uVar4 = ((uint)(iVar1 - iVar7) >> 2) * -0x55555555;
  uVar6 = uVar4;
  if (param_3 < uVar4) {
    uVar6 = param_3;
  }
  iVar8 = iVar1 + uVar6 * -0xc;
  *(int *)(param_2 + 0xc) = iVar8;
  puVar5 = (undefined4 *)(iVar1 + uVar6 * -0xc + 4);
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    FUN_019bb7e0(puVar5[-1],*puVar5);
    puVar5 = puVar5 + 3;
  }
  if ((uVar4 < param_3) || (iVar7 == iVar8)) {
    *param_1 = 0x80000000;
  }
  else {
    *(undefined4 **)(param_2 + 0xc) = (undefined4 *)(iVar8 + -0xc);
    uVar2 = *(undefined4 *)(iVar8 + -8);
    uVar3 = *(undefined4 *)(iVar8 + -4);
    *param_1 = *(undefined4 *)(iVar8 + -0xc);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

