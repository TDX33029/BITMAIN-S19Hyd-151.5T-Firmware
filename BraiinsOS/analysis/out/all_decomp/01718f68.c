// FUN_01718f68 @ 01718f68 size=268 calls_out=0 calls_in=1
// strings: 

ulonglong FUN_01718f68(longlong *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (3 < param_3) {
    param_1 = param_1 + 4;
    uVar1 = param_3;
    plVar3 = param_1;
    puVar4 = param_2 + 4;
    do {
      uVar1 = uVar1 - 4;
      plVar3[-4] = (ulonglong)puVar4[-4] * (ulonglong)puVar4[-4];
      plVar3[-3] = (ulonglong)puVar4[-3] * (ulonglong)puVar4[-3];
      plVar3[-2] = (ulonglong)puVar4[-2] * (ulonglong)puVar4[-2];
      plVar3[-1] = (ulonglong)puVar4[-1] * (ulonglong)puVar4[-1];
      plVar3 = plVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (3 < uVar1);
    if ((param_3 & 3) == 0) {
      return ZEXT48(param_1);
    }
    iVar2 = (param_3 >> 2) - 1;
    param_1 = param_1 + iVar2 * 4;
    param_2 = param_2 + 4 + iVar2 * 4;
    param_3 = param_3 & 3;
  }
  *param_1 = (ulonglong)*param_2 * (ulonglong)*param_2;
  if (param_3 == 1) {
    return CONCAT44(param_2,param_1);
  }
  param_1[1] = (ulonglong)param_2[1] * (ulonglong)param_2[1];
  if (param_3 != 2) {
    param_1[2] = (ulonglong)param_2[2] * (ulonglong)param_2[2];
  }
  return 0;
}

