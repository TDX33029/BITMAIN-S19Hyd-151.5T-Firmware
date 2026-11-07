// FUN_01013738 @ 01013738 size=196 calls_out=1 calls_in=2
// strings: 

void FUN_01013738(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar4 = param_2[2];
  uVar7 = *(uint *)(param_2[-1] + 0x54);
  uVar5 = *(uint *)(iVar4 + 0x54);
  uVar1 = uVar7;
  if (uVar5 < uVar7) {
    uVar1 = uVar5;
  }
  uVar1 = FUN_01bed842(*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(param_2[-1] + 0x50),uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar5 - uVar7;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = *param_2;
    uVar8 = param_2[1];
    do {
      puVar6 = param_2;
      param_2 = puVar6 + -3;
      *puVar6 = *param_2;
      puVar6[1] = puVar6[-2];
      puVar6[2] = puVar6[-1];
      if (param_2 == param_1) break;
      uVar7 = *(uint *)(iVar4 + 0x54);
      uVar5 = *(uint *)(puVar6[-4] + 0x54);
      uVar1 = uVar5;
      if (uVar7 < uVar5) {
        uVar1 = uVar7;
      }
      iVar3 = FUN_01bed842(*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(puVar6[-4] + 0x50),uVar1);
      if (iVar3 == 0) {
        iVar3 = uVar7 - uVar5;
      }
    } while (iVar3 < 0);
    puVar6[-3] = uVar2;
    puVar6[-2] = uVar8;
    puVar6[-1] = iVar4;
  }
  return;
}

