// FUN_012fbc58 @ 012fbc58 size=316 calls_out=0 calls_in=31
// strings: 

void FUN_012fbc58(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 < 8) {
    uVar1 = 0;
    do {
      if (*(char *)(param_2 + uVar1) == '\0') goto LAB_012fbd60;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
    goto LAB_012fbd44;
  }
  uVar2 = param_2 + 3U & 0xfffffffc;
  uVar1 = uVar2 - param_2;
  if (uVar1 == 0) {
    uVar1 = 0;
LAB_012fbca4:
    do {
      uVar3 = *(uint *)(param_2 + uVar1);
      uVar2 = ((uint *)(param_2 + uVar1))[1];
      if (((0x1010100 - uVar3 | uVar3) & 0x80808080 & (0x1010100 - uVar2 | uVar2)) != 0x80808080)
      break;
      uVar1 = uVar1 + 8;
    } while (uVar1 <= param_3 - 8);
  }
  else {
    iVar4 = 0;
    do {
      if (*(char *)(param_2 - iVar4) == '\0') {
        uVar1 = -iVar4;
        goto LAB_012fbd60;
      }
      iVar4 = iVar4 + -1;
    } while (param_2 - uVar2 != iVar4);
    if (uVar1 <= param_3 - 8) goto LAB_012fbca4;
  }
  if (param_3 != uVar1) {
    iVar4 = 0;
    do {
      if (*(char *)(param_2 + uVar1 + iVar4) == '\0') {
        uVar1 = iVar4 + uVar1;
LAB_012fbd60:
        if (uVar1 + 1 == param_3) {
          param_1[1] = param_2;
          param_1[2] = param_3;
          *param_1 = 0;
          return;
        }
        param_1[1] = 0;
        param_1[2] = uVar1;
        *param_1 = 1;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (param_3 - uVar1 != iVar4);
  }
LAB_012fbd44:
  param_1[1] = 1;
  *param_1 = 1;
  return;
}

