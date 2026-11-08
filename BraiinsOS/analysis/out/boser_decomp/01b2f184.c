// FUN_01b2f184 @ 01b2f184 size=176 calls_out=0 calls_in=1
// strings: 

void FUN_01b2f184(longlong *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    return;
  }
  plVar2 = param_1;
  puVar1 = param_2;
  for (uVar3 = param_3; 3 < uVar3; uVar3 = uVar3 - 4) {
    *plVar2 = (ulonglong)*puVar1 * (ulonglong)*puVar1;
    plVar2[1] = (ulonglong)puVar1[1] * (ulonglong)puVar1[1];
    plVar2[2] = (ulonglong)puVar1[2] * (ulonglong)puVar1[2];
    plVar2[3] = (ulonglong)puVar1[3] * (ulonglong)puVar1[3];
    plVar2 = plVar2 + 4;
    puVar1 = puVar1 + 4;
  }
  uVar3 = param_3 >> 2;
  param_1 = param_1 + uVar3 * 4;
  plVar2 = param_1 + uVar3 * -4 + param_3;
  puVar1 = param_2 + uVar3 * 4;
  for (; param_1 != plVar2; param_1 = param_1 + 1) {
    *param_1 = (ulonglong)*puVar1 * (ulonglong)*puVar1;
    puVar1 = puVar1 + 1;
  }
  return;
}

