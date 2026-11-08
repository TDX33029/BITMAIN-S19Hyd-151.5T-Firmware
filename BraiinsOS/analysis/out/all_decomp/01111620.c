// FUN_01111620 @ 01111620 size=140 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01111620(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  uVar9 = *puVar2;
  uVar1 = puVar2[1];
  uVar3 = puVar2[2];
  uVar4 = puVar2[3];
  uVar5 = puVar2[4];
  uVar7 = puVar2[5];
  piVar6 = (int *)param_1[1];
  *puVar2 = 0x80000000;
  piVar8 = (int *)*piVar6;
  if (*piVar8 != -0x80000000) {
    if (*piVar8 != 0) {
      thunk_FUN_016d3fb4(piVar8[1]);
    }
    if (piVar8[3] != 0) {
      thunk_FUN_016d3fb4(piVar8[4]);
    }
  }
  puVar2 = (undefined4 *)*piVar6;
  *puVar2 = uVar9;
  puVar2[1] = uVar1;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  puVar2[4] = uVar5;
  puVar2[5] = uVar7;
  return 1;
}

