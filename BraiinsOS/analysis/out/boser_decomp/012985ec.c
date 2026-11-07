// FUN_012985ec @ 012985ec size=132 calls_out=2 calls_in=14
// strings: 

/* WARNING: Removing unreachable block (ram,0x01be3ff4) */

int FUN_012985ec(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int local_14;
  
  bVar8 = 7 < param_2;
  bVar7 = param_2 == 8;
  if (param_2 < 9) {
    bVar8 = param_1 <= param_2;
    bVar7 = param_2 == param_1;
  }
  if (bVar8 && !bVar7) {
    if (param_2 < 5) {
      param_2 = 4;
    }
    local_14 = 0;
    iVar1 = FUN_01be5878(&local_14,param_2,param_1);
    iVar2 = local_14;
    iVar6 = 0;
    if ((iVar1 == 0) && (local_14 != 0)) {
      FUN_01bed93e(local_14,0,param_1);
      iVar6 = iVar2;
    }
    return iVar6;
  }
  iVar2 = thunk_FUN_01be5118(param_1);
  if ((iVar2 == 0) || ((DAT_01d537b8 == 0 && (iVar6 = FUN_01be5438(), iVar6 != 0)))) {
    return iVar2;
  }
  if (0xfff < param_1) {
    uVar5 = iVar2 + param_1;
    uVar4 = uVar5 & 0xfff;
LAB_01be3fb8:
    uVar5 = FUN_01bed93e(uVar5 - uVar4,0);
    param_1 = uVar5 - iVar2;
    if (0xfff < param_1) {
      uVar3 = uVar5 - 0x1000;
      iVar6 = 0x1000 - uVar5;
      do {
        uVar4 = uVar5 + iVar6;
        if ((*(int *)(uVar5 - 8) != 0 || *(int *)(uVar5 - 0x10) != 0) ||
            (*(int *)(uVar5 - 4) != 0 || *(int *)(uVar5 - 0xc) != 0)) goto LAB_01be3fb8;
        uVar5 = uVar5 - 0x10;
      } while (uVar3 != uVar5);
      uVar4 = 0;
      goto LAB_01be3fb8;
    }
  }
  iVar2 = FUN_01bed93e(iVar2,0,param_1);
  return iVar2;
}

