// FUN_01111598 @ 01111598 size=136 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01111598(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  
  piVar9 = (int *)param_1[1];
  puVar1 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  uVar6 = puVar1[5];
  *puVar1 = 0x80000000;
  piVar7 = (int *)*piVar9;
  if (*piVar7 != -0x80000000) {
    if (*piVar7 != 0) {
      thunk_FUN_016d3fb4(piVar7[1]);
    }
    if (piVar7[3] != 0) {
      thunk_FUN_016d3fb4(piVar7[4]);
    }
  }
  puVar1 = (undefined4 *)*piVar9;
  *puVar1 = uVar8;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  return 1;
}

