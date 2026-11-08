// FUN_019a8a34 @ 019a8a34 size=256 calls_out=3 calls_in=8
// strings: 

void FUN_019a8a34(undefined4 *param_1,char *param_2,uint param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_88 [112];
  
  FUN_01bed93e(auStack_88,0,0x6c);
  if (param_3 < 8) {
    if (param_3 == 0) {
      iVar4 = 2;
    }
    else {
      puVar1 = &DAT_01d277e4;
      pcVar3 = param_2;
      uVar5 = param_3;
      do {
        if (*pcVar3 == '\0') goto LAB_019a8ac8;
        uVar5 = uVar5 - 1;
        pcVar3 = pcVar3 + 1;
      } while (uVar5 != 0);
LAB_019a8ab8:
      if (0x6b < param_3) {
        puVar1 = &DAT_01d277f0;
        goto LAB_019a8ac8;
      }
      FUN_01bed4e2(auStack_88,param_2,param_3);
      iVar4 = 3;
      if (*param_2 == '\0') {
        iVar4 = 2;
      }
      iVar4 = iVar4 + param_3;
    }
    FUN_01bed4e2((int)param_1 + 6,auStack_88,0x6c);
    param_1[0x1d] = iVar4;
    *(undefined2 *)(param_1 + 1) = 1;
    uVar2 = 0;
  }
  else {
    iVar4 = FUN_01307168(0,param_2,param_3);
    if (iVar4 != 1) goto LAB_019a8ab8;
    puVar1 = &DAT_01d277e4;
LAB_019a8ac8:
    param_1[2] = puVar1;
    *(undefined1 *)(param_1 + 1) = 2;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}

