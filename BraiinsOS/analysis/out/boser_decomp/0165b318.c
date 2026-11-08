// FUN_0165b318 @ 0165b318 size=392 calls_out=2 calls_in=3
// strings: 

void FUN_0165b318(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2[8] == 0) {
    uVar2 = param_2[3];
    uVar8 = *param_2;
    piVar3 = (int *)param_2[1];
    *param_2 = 0;
    if ((uVar8 & 1) != 0) {
      piVar4 = (int *)param_2[2];
      if (piVar3 == (int *)0x0) {
        for (; piVar3 = piVar4, uVar2 != 0; uVar2 = uVar2 - 1) {
          piVar4 = (int *)piVar3[0x18];
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
  uVar2 = param_2[1];
  if (uVar2 == 0) {
    uVar2 = param_2[2];
    for (uVar8 = param_2[3]; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar2 = *(uint *)(uVar2 + 0x60);
    }
    uVar9 = 0;
    uVar8 = 0;
    *param_2 = 1;
    param_2[1] = uVar2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    uVar8 = param_2[2];
    uVar9 = param_2[3];
  }
  puVar6 = (uint *)uVar2;
  if (*(ushort *)(uVar2 + 0x5e) <= uVar9) {
    do {
      uVar2 = *puVar6;
      if (uVar2 == 0) {
        thunk_FUN_01be4678();
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d30454);
      }
      uVar9 = (uint)*(ushort *)(puVar6 + 0x17);
      thunk_FUN_01be4678();
      uVar8 = uVar8 + 1;
      puVar6 = (uint *)uVar2;
    } while (*(ushort *)(uVar2 + 0x5e) <= uVar9);
  }
  if (uVar8 == 0) {
    uVar7 = uVar9 + 1;
    uVar5 = uVar2;
  }
  else {
    puVar6 = (uint *)(uVar2 + uVar9 * 4 + 100);
    uVar7 = uVar8;
    do {
      uVar5 = *puVar6;
      uVar7 = uVar7 - 1;
      puVar6 = (uint *)(uVar5 + 0x60);
    } while (uVar7 != 0);
    uVar7 = 0;
  }
  param_2[1] = uVar5;
  param_2[2] = 0;
  param_2[3] = uVar7;
  *param_1 = uVar2;
  param_1[1] = uVar8;
  param_1[2] = uVar9;
  return;
}

