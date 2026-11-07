// FUN_016d38c8 @ 016d38c8 size=142 calls_out=4 calls_in=104
// strings: 

int FUN_016d38c8(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_2 != 0) && ((int)((ulonglong)param_2 * (ulonglong)param_1 >> 0x20) != 0)) {
    puVar3 = (undefined4 *)
             FUN_016d2bc8(param_1,param_2,(int)((ulonglong)param_2 * (ulonglong)param_1));
    *puVar3 = 0xc;
    return 0;
  }
  param_1 = param_1 * param_2;
  iVar1 = thunk_FUN_016d4a50(param_1);
  if ((iVar1 == 0) || ((DAT_018ddd50 == 0 && (iVar6 = FUN_016d4d70(), iVar6 != 0)))) {
    return iVar1;
  }
  if (0xfff < param_1) {
    uVar5 = iVar1 + param_1;
    uVar4 = uVar5 & 0xfff;
LAB_016d38f4:
    uVar5 = FUN_016dd606(uVar5 - uVar4,0);
    param_1 = uVar5 - iVar1;
    if (0xfff < param_1) {
      uVar2 = uVar5 - 0x1000;
      iVar6 = 0x1000 - uVar5;
      do {
        uVar4 = uVar5 + iVar6;
        if ((*(int *)(uVar5 - 8) != 0 || *(int *)(uVar5 - 0x10) != 0) ||
            (*(int *)(uVar5 - 4) != 0 || *(int *)(uVar5 - 0xc) != 0)) goto LAB_016d38f4;
        uVar5 = uVar5 - 0x10;
      } while (uVar2 != uVar5);
      uVar4 = 0;
      goto LAB_016d38f4;
    }
  }
  iVar1 = FUN_016dd606(iVar1,0,param_1);
  return iVar1;
}

