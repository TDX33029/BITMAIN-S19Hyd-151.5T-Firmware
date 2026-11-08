// FUN_019cf1a8 @ 019cf1a8 size=400 calls_out=2 calls_in=5
// strings: 

void FUN_019cf1a8(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2[8] == 0) {
    uVar8 = param_2[3];
    uVar9 = *param_2;
    piVar3 = (int *)param_2[1];
    *param_2 = 0;
    if ((uVar9 & 1) != 0) {
      piVar4 = (int *)param_2[2];
      if (piVar3 == (int *)0x0) {
        for (; piVar3 = piVar4, uVar8 != 0; uVar8 = uVar8 - 1) {
          piVar4 = (int *)piVar3[0x44];
        }
      }
      piVar4 = piVar3;
      piVar1 = (int *)*piVar3;
      if ((int *)*piVar3 != (int *)0x0) {
        do {
          piVar3 = piVar1;
          thunk_FUN_01be4678(piVar4);
          piVar4 = piVar3;
          piVar1 = (int *)*piVar3;
        } while ((int *)*piVar3 != (int *)0x0);
      }
      thunk_FUN_01be4678(piVar3);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] - 1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d30464);
  }
  puVar2 = (uint *)param_2[1];
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)param_2[2];
    for (uVar8 = param_2[3]; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar2 = (uint *)puVar2[0x44];
    }
    uVar9 = 0;
    uVar8 = 0;
    *param_2 = 1;
    param_2[1] = (uint)puVar2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    uVar8 = param_2[2];
    uVar9 = param_2[3];
  }
  if (uVar9 < *(ushort *)((int)puVar2 + 0x10e)) {
    puVar7 = puVar2;
  }
  else {
    do {
      puVar7 = (uint *)*puVar2;
      if (puVar7 == (uint *)0x0) {
        thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d30454);
      }
      uVar9 = (uint)(ushort)puVar2[0x43];
      thunk_FUN_01be4678();
      uVar8 = uVar8 + 1;
      puVar2 = puVar7;
    } while (*(ushort *)((int)puVar7 + 0x10e) <= uVar9);
  }
  if (uVar8 == 0) {
    uVar6 = uVar9 + 1;
    puVar2 = puVar7;
  }
  else {
    puVar5 = puVar7 + uVar9 + 0x45;
    uVar6 = uVar8;
    do {
      puVar2 = (uint *)*puVar5;
      uVar6 = uVar6 - 1;
      puVar5 = puVar2 + 0x44;
    } while (uVar6 != 0);
    uVar6 = 0;
  }
  *param_1 = (uint)puVar7;
  param_1[1] = uVar8;
  param_1[2] = uVar9;
  param_2[1] = (uint)puVar2;
  param_2[2] = 0;
  param_2[3] = uVar6;
  return;
}

