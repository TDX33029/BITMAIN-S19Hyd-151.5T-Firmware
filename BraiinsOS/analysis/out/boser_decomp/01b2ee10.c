// FUN_01b2ee10 @ 01b2ee10 size=284 calls_out=0 calls_in=3
// strings: 

uint FUN_01b2ee10(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar5 = 0;
  puVar3 = param_2;
  puVar6 = param_1;
  for (uVar4 = param_3; 3 < uVar4; uVar4 = uVar4 - 4) {
    uVar1 = (ulonglong)*puVar3 * (ulonglong)param_4 + (ulonglong)*puVar6 + (ulonglong)uVar5;
    *puVar6 = (uint)uVar1;
    uVar1 = (ulonglong)puVar3[1] * (ulonglong)param_4 + (ulonglong)puVar6[1] + (uVar1 >> 0x20);
    puVar6[1] = (uint)uVar1;
    uVar1 = (ulonglong)puVar3[2] * (ulonglong)param_4 + (ulonglong)puVar6[2] + (uVar1 >> 0x20);
    puVar6[2] = (uint)uVar1;
    lVar2 = (ulonglong)puVar3[3] * (ulonglong)param_4 + (ulonglong)puVar6[3] + (uVar1 >> 0x20);
    puVar6[3] = (uint)lVar2;
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    puVar3 = puVar3 + 4;
    puVar6 = puVar6 + 4;
  }
  puVar3 = param_2 + (param_3 >> 2) * 4;
  puVar6 = puVar3 + (param_3 >> 2) * -4 + param_3;
  for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
    lVar2 = (ulonglong)*puVar3 * (ulonglong)param_4 + (ulonglong)uVar5 +
            (ulonglong)*(uint *)((int)puVar3 + ((int)param_1 - (int)param_2));
    *(int *)((int)puVar3 + ((int)param_1 - (int)param_2)) = (int)lVar2;
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  }
  return uVar5;
}

