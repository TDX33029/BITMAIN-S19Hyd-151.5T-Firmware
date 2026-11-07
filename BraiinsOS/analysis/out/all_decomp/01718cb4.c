// FUN_01718cb4 @ 01718cb4 size=320 calls_out=0 calls_in=4
// strings: 

ulonglong FUN_01718cb4(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 4) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = param_3;
    puVar7 = param_2 + 4;
    puVar3 = param_1;
    do {
      uVar6 = uVar6 - 4;
      uVar1 = (ulonglong)param_4 * (ulonglong)puVar7[-4] + (ulonglong)uVar4;
      *puVar3 = (int)uVar1;
      uVar1 = (ulonglong)param_4 * (ulonglong)puVar7[-3] + (uVar1 >> 0x20);
      puVar3[1] = (int)uVar1;
      uVar1 = (ulonglong)param_4 * (ulonglong)puVar7[-2] + (uVar1 >> 0x20);
      puVar3[2] = (int)uVar1;
      lVar2 = (ulonglong)param_4 * (ulonglong)puVar7[-1] + (uVar1 >> 0x20);
      uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
      puVar3[3] = (int)lVar2;
      puVar7 = puVar7 + 4;
      puVar3 = puVar3 + 4;
    } while (3 < uVar6);
    if ((param_3 & 3) == 0) {
      return (ulonglong)uVar4;
    }
    iVar5 = (param_3 >> 2) - 1;
    param_1 = param_1 + iVar5 * 4 + 4;
    param_2 = param_2 + 4 + iVar5 * 4;
    param_3 = param_3 & 3;
  }
  lVar2 = (ulonglong)param_4 * (ulonglong)*param_2 + (ulonglong)uVar4;
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  *param_1 = (int)lVar2;
  if (param_3 != 1) {
    lVar2 = (ulonglong)param_2[1] * (ulonglong)param_4 + (ulonglong)uVar4;
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    param_1[1] = (int)lVar2;
    if (param_3 == 2) {
      return CONCAT44(param_2,uVar4);
    }
    lVar2 = (ulonglong)param_4 * (ulonglong)param_2[2] + (ulonglong)uVar4;
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    param_1[2] = (int)lVar2;
  }
  return (ulonglong)uVar4;
}

