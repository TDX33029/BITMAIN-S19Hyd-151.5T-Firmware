// FUN_01718b54 @ 01718b54 size=352 calls_out=0 calls_in=3
// strings: 

uint FUN_01718b54(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    if (param_3 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar4 = param_3;
      puVar5 = param_2 + 4;
      puVar2 = param_1;
      do {
        uVar4 = uVar4 - 4;
        uVar3 = (ulonglong)param_4 * (ulonglong)puVar5[-4] + (ulonglong)*puVar2 + (ulonglong)uVar7;
        *puVar2 = (uint)uVar3;
        uVar3 = (ulonglong)param_4 * (ulonglong)puVar5[-3] + (ulonglong)puVar2[1] + (uVar3 >> 0x20);
        puVar2[1] = (uint)uVar3;
        uVar3 = (ulonglong)param_4 * (ulonglong)puVar5[-2] + (ulonglong)puVar2[2] + (uVar3 >> 0x20);
        puVar2[2] = (uint)uVar3;
        lVar1 = (ulonglong)param_4 * (ulonglong)puVar5[-1] + (ulonglong)puVar2[3] + (uVar3 >> 0x20);
        puVar2[3] = (uint)lVar1;
        uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
        puVar5 = puVar5 + 4;
        puVar2 = puVar2 + 4;
      } while (3 < uVar4);
      if ((param_3 & 3) == 0) {
        return uVar7;
      }
      iVar6 = (param_3 >> 2) - 1;
      param_1 = param_1 + iVar6 * 4 + 4;
      param_2 = param_2 + 4 + iVar6 * 4;
      param_3 = param_3 & 3;
    }
    lVar1 = (ulonglong)param_4 * (ulonglong)*param_2 +
            (ulonglong)CONCAT14(CARRY4(*param_1,uVar7),*param_1 + uVar7);
    uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
    *param_1 = (uint)lVar1;
    if (param_3 != 1) {
      lVar1 = (ulonglong)param_4 * (ulonglong)param_2[1] + (ulonglong)param_1[1] + (ulonglong)uVar7;
      param_1[1] = (uint)lVar1;
      uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      if (param_3 != 2) {
        lVar1 = (ulonglong)param_4 * (ulonglong)param_2[2] + (ulonglong)param_1[2] +
                (ulonglong)uVar7;
        param_1[2] = (uint)lVar1;
        uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      }
    }
  }
  return uVar7;
}

