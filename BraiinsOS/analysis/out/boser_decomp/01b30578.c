// FUN_01b30578 @ 01b30578 size=288 calls_out=1 calls_in=12
// strings: 

/* WARNING: Removing unreachable block (ram,0x01b30600) */

void FUN_01b30578(int *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  if (param_4 == 0) {
    return;
  }
  uVar1 = 0;
  while (3 < param_4) {
    puVar3 = param_2 + 4;
    puVar4 = param_3 + 4;
    piVar7 = param_1 + 4;
    param_4 = param_4 - 4;
    uVar6 = *param_2 - *param_3;
    uVar2 = (uint)(*param_2 < *param_3);
    *param_1 = uVar6 - uVar1;
    if (uVar6 < uVar1) {
      uVar2 = 1;
    }
    uVar6 = param_2[1] - param_3[1];
    uVar1 = (uint)(param_2[1] < param_3[1]);
    param_1[1] = uVar6 - uVar2;
    if (uVar6 < uVar2) {
      uVar1 = 1;
    }
    uVar6 = param_2[2] - param_3[2];
    uVar2 = (uint)(param_2[2] < param_3[2]);
    param_1[2] = uVar6 - uVar1;
    if (uVar6 < uVar1) {
      uVar2 = 1;
    }
    uVar6 = param_2[3] - param_3[3];
    uVar1 = (uint)(param_2[3] < param_3[3]);
    param_1[3] = uVar6 - uVar2;
    param_2 = puVar3;
    param_3 = puVar4;
    param_1 = piVar7;
    if (uVar6 < uVar2) {
      uVar1 = 1;
    }
  }
  for (uVar6 = 0; param_4 != uVar6; uVar6 = uVar6 + 1) {
    uVar5 = param_2[uVar6] - param_3[uVar6];
    uVar2 = (uint)(param_2[uVar6] < param_3[uVar6]);
    param_1[uVar6] = uVar5 - uVar1;
    if (uVar5 < uVar1) {
      uVar2 = 1;
    }
    uVar1 = uVar2;
  }
  return;
}

