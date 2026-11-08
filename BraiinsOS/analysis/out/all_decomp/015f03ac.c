// FUN_015f03ac @ 015f03ac size=520 calls_out=2 calls_in=3
// strings: 

void FUN_015f03ac(undefined4 *param_1,char *param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_90 [112];
  
  FUN_016dd606(auStack_90,0,0x6c);
  if (param_3 < 8) {
    if (param_3 == 0) {
      iVar4 = 2;
      goto LAB_015f0588;
    }
    puVar1 = &DAT_018aabe4;
    if ((*param_2 == '\0') ||
       ((param_3 != 1 &&
        ((param_2[1] == '\0' ||
         ((param_3 != 2 &&
          ((param_2[2] == '\0' ||
           ((param_3 != 3 &&
            ((param_2[3] == '\0' ||
             ((param_3 != 4 &&
              ((param_2[4] == '\0' ||
               ((param_3 != 5 && ((param_2[5] == '\0' || ((param_3 != 6 && (param_2[6] == '\0'))))))
               )))))))))))))))))) goto LAB_015f0540;
  }
  else {
    uVar2 = ((uint)(param_2 + 3) & 0xfffffffc) - (int)param_2;
    if (uVar2 == 0) {
      uVar2 = 0;
LAB_015f048c:
      do {
        uVar5 = *(uint *)(param_2 + uVar2);
        uVar6 = *(uint *)((int)(param_2 + uVar2) + 4);
        if (((0x1010100 - uVar5 | uVar5) & 0x80808080 & (0x1010100 - uVar6 | uVar6)) != 0x80808080)
        break;
        uVar2 = uVar2 + 8;
      } while (uVar2 <= param_3 - 8);
    }
    else {
      iVar4 = (int)param_2 - ((uint)(param_2 + 3) & 0xfffffffc);
      puVar1 = &DAT_018aabe4;
      pcVar3 = param_2;
      do {
        if (*pcVar3 == '\0') goto LAB_015f0540;
        bVar7 = iVar4 != -1;
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar7);
      if (uVar2 <= param_3 - 8) goto LAB_015f048c;
    }
    iVar4 = param_3 - uVar2;
    if (iVar4 != 0) {
      puVar1 = &DAT_018aabe4;
      pcVar3 = param_2 + uVar2;
      do {
        if (*pcVar3 == '\0') goto LAB_015f0540;
        iVar4 = iVar4 + -1;
        pcVar3 = pcVar3 + 1;
      } while (iVar4 != 0);
    }
    if (0x6b < param_3) {
      puVar1 = &DAT_018aabf0;
LAB_015f0540:
      param_1[2] = puVar1;
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 1;
      return;
    }
  }
  FUN_016dd1aa(auStack_90,param_2,param_3);
  iVar4 = 3;
  if (*param_2 == '\0') {
    iVar4 = 2;
  }
  iVar4 = iVar4 + param_3;
LAB_015f0588:
  FUN_016dd1aa((int)param_1 + 6,auStack_90,0x6c);
  param_1[0x1d] = iVar4;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}

