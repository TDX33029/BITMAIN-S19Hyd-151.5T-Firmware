// FUN_01b2ef2c @ 01b2ef2c size=236 calls_out=0 calls_in=4
// strings: 

uint FUN_01b2ef2c(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar6 = 0;
  puVar3 = param_1;
  puVar4 = param_2;
  for (uVar5 = param_3; 3 < uVar5; uVar5 = uVar5 - 4) {
    uVar1 = (ulonglong)*puVar4 * (ulonglong)param_4 + (ulonglong)uVar6;
    *puVar3 = (int)uVar1;
    uVar1 = (ulonglong)puVar4[1] * (ulonglong)param_4 + (uVar1 >> 0x20);
    puVar3[1] = (int)uVar1;
    uVar1 = (ulonglong)puVar4[2] * (ulonglong)param_4 + (uVar1 >> 0x20);
    puVar3[2] = (int)uVar1;
    lVar2 = (ulonglong)puVar4[3] * (ulonglong)param_4 + (uVar1 >> 0x20);
    uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
    puVar3[3] = (int)lVar2;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 4;
  }
  puVar4 = param_2 + (param_3 >> 2) * 4;
  puVar7 = puVar4 + (param_3 >> 2) * -4 + param_3;
  for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
    lVar2 = (ulonglong)*puVar4 * (ulonglong)param_4 + (ulonglong)uVar6;
    uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
    *(int *)((int)puVar4 + ((int)param_1 - (int)param_2)) = (int)lVar2;
  }
  return uVar6;
}

