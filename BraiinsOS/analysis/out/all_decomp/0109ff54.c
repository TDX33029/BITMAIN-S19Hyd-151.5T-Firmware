// FUN_0109ff54 @ 0109ff54 size=476 calls_out=1 calls_in=4
// strings: 

void FUN_0109ff54(int *param_1,int param_2,uint param_3,char *param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  
  cVar7 = '\x03';
  if (param_3 == 0) goto LAB_010a0128;
  if (0x40 < param_3) {
    if (param_3 >> 0x10 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      *(char *)(param_1 + 2) = '\0';
      return;
    }
    goto LAB_010a0128;
  }
  uVar2 = 0;
  do {
    param_4[uVar2] = *(char *)(param_5 + (uint)*(byte *)(param_2 + uVar2));
    uVar2 = uVar2 + 1;
  } while (param_3 != uVar2);
  cVar1 = FUN_010a0130(param_4,param_3);
  if (cVar1 != 'Q') {
    *(char *)param_1 = cVar1;
    *(char *)(param_1 + 2) = '\x02';
    return;
  }
  if (param_3 < 8) {
    if ((*param_4 == '\0') ||
       ((param_3 != 1 &&
        ((param_4[1] == '\0' ||
         ((param_3 != 2 &&
          ((param_4[2] == '\0' ||
           ((param_3 != 3 &&
            ((param_4[3] == '\0' ||
             ((param_3 != 4 &&
              ((param_4[4] == '\0' ||
               ((param_3 != 5 && ((param_4[5] == '\0' || ((param_3 != 6 && (param_4[6] == '\0'))))))
               )))))))))))))))))) goto LAB_010a0128;
  }
  else {
    uVar2 = ((uint)(param_4 + 3) & 0xfffffffc) - (int)param_4;
    if (uVar2 == 0) {
      uVar2 = 0;
LAB_010a0088:
      do {
        uVar5 = *(uint *)(param_4 + uVar2);
        uVar6 = *(uint *)((int)(param_4 + uVar2) + 4);
        if (((0x1010100 - uVar5 | uVar5) & 0x80808080 & (0x1010100 - uVar6 | uVar6)) != 0x80808080)
        break;
        uVar2 = uVar2 + 8;
      } while (uVar2 <= param_3 - 8);
    }
    else {
      iVar4 = (int)param_4 - ((uint)(param_4 + 3) & 0xfffffffc);
      pcVar3 = param_4;
      do {
        if (*pcVar3 == '\0') goto LAB_010a0128;
        bVar8 = iVar4 != -1;
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar8);
      if (uVar2 <= param_3 - 8) goto LAB_010a0088;
    }
    iVar4 = param_3 - uVar2;
    if (iVar4 != 0) {
      pcVar3 = param_4 + uVar2;
      do {
        if (*pcVar3 == '\0') goto LAB_010a0128;
        iVar4 = iVar4 + -1;
        pcVar3 = pcVar3 + 1;
      } while (iVar4 != 0);
    }
  }
  cVar7 = '\x01';
  *param_1 = (int)param_4;
  param_1[1] = param_3;
LAB_010a0128:
  *(char *)(param_1 + 2) = cVar7;
  return;
}

