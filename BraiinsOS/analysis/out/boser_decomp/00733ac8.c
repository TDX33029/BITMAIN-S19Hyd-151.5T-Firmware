// FUN_00733ac8 @ 00733ac8 size=212 calls_out=0 calls_in=2
// strings: 

void FUN_00733ac8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar8 = param_2[4];
  puVar6 = param_2 + -6;
  if (uVar8 < param_2[-2]) {
    uVar4 = *param_2;
    uVar5 = param_2[1];
  }
  else {
    if (param_2[-2] < uVar8) {
      return;
    }
    uVar4 = *param_2;
    uVar5 = param_2[1];
    if (param_2[-5] < uVar5 || uVar5 - param_2[-5] < (uint)(*puVar6 <= uVar4)) {
      return;
    }
  }
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  uVar2 = param_2[5];
  *param_2 = *puVar6;
  param_2[1] = param_2[-5];
  param_2[2] = param_2[-4];
  param_2[3] = param_2[-3];
  param_2[4] = param_2[-2];
  param_2[5] = param_2[-1];
  if (puVar6 == param_1) {
LAB_00733b70:
    puVar7 = puVar6;
  }
  else {
    do {
      puVar7 = puVar6 + -6;
      if ((puVar6[-2] <= uVar8) &&
         ((puVar6[-2] < uVar8 ||
          (puVar6[-5] < uVar5 || uVar5 - puVar6[-5] < (uint)(*puVar7 <= uVar4)))))
      goto LAB_00733b70;
      *puVar6 = *puVar7;
      puVar6[1] = puVar6[-5];
      puVar6[2] = puVar6[-4];
      puVar6[3] = puVar6[-3];
      puVar6[4] = puVar6[-2];
      puVar6[5] = puVar6[-1];
      puVar6 = puVar7;
    } while (puVar7 != param_1);
  }
  puVar7[2] = uVar3;
  puVar7[3] = uVar1;
  *puVar7 = uVar4;
  puVar7[1] = uVar5;
  puVar7[4] = uVar8;
  puVar7[5] = uVar2;
  return;
}

