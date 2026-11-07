// FUN_0003fc20 @ 0003fc20  size=812  callers=1
// program: cgminer


int FUN_0003fc20(int param_1,int param_2,char *param_3,uint param_4)

{
  int iVar1;
  uint __n;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  uint local_42c;
  uint local_428 [257];
  
  uVar10 = param_4 - 1;
  if (param_4 < 3) {
    local_42c = 1;
    __n = uVar10;
  }
  else {
    __n = FUN_0003fb10(param_3,param_4,&local_42c);
  }
  uVar7 = local_42c;
  puVar5 = &local_42c;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = param_4;
  } while (puVar5 != local_428 + 0xff);
  if (param_4 != 0) {
    pbVar2 = (byte *)(param_3 + -1);
    uVar6 = uVar10;
    do {
      pbVar2 = pbVar2 + 1;
      local_428[*pbVar2] = uVar6;
      bVar13 = uVar6 != 0;
      uVar6 = uVar6 - 1;
    } while (bVar13);
  }
  iVar1 = memcmp(param_3,param_3 + local_42c,__n);
  if (iVar1 == 0) {
    uVar4 = __n - 1;
    uVar6 = 0;
    uVar8 = 0;
    do {
      while( true ) {
        uVar3 = local_428[*(byte *)(param_1 + uVar6 + uVar10)];
        if (uVar3 == 0) break;
        if (uVar8 != 0 && uVar3 < uVar7) {
          uVar3 = param_4 - uVar7;
        }
        uVar6 = uVar6 + uVar3;
LAB_0003fd00:
        uVar8 = 0;
        if (param_2 - param_4 < uVar6) {
          return 0;
        }
      }
      if (__n < uVar8) {
        uVar3 = uVar8;
      }
      else {
        uVar3 = __n;
      }
      if (uVar3 < uVar10) {
        pcVar12 = param_3 + uVar3;
        pcVar11 = (char *)(param_1 + uVar3 + uVar6);
        if (*(char *)(param_1 + uVar3 + uVar6) == param_3[uVar3]) {
          do {
            uVar3 = uVar3 + 1;
            if (uVar10 <= uVar3) goto LAB_0003fd78;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          } while (*pcVar12 == *pcVar11);
        }
        uVar6 = uVar3 + (1 - __n) + uVar6;
        goto LAB_0003fd00;
      }
LAB_0003fd78:
      if ((uVar8 < __n) &&
         (pcVar11 = (char *)(param_1 + uVar4 + uVar6),
         param_3[uVar4] == *(char *)(param_1 + uVar4 + uVar6))) {
        pcVar12 = param_3 + uVar4;
        uVar3 = uVar4;
        while (uVar3 - 1 != uVar8 - 1) {
          pcVar12 = pcVar12 + -1;
          pcVar11 = pcVar11 + -1;
          if (*pcVar12 != *pcVar11) break;
          uVar3 = uVar3 - 1;
        }
      }
      else {
        uVar3 = __n;
      }
      if (uVar3 < uVar8 + 1) {
        return param_1 + uVar6;
      }
      uVar6 = uVar6 + uVar7;
      uVar8 = param_4 - uVar7;
    } while (uVar6 <= param_2 - param_4);
  }
  else {
    uVar7 = param_4 - __n;
    if (param_4 - __n < __n) {
      uVar7 = __n;
    }
    uVar6 = 0;
    do {
      iVar1 = param_1 + uVar6;
      uVar8 = local_428[*(byte *)(iVar1 + uVar10)];
      if (local_428[*(byte *)(iVar1 + uVar10)] == 0) {
        if (uVar10 <= __n) {
LAB_0003feb4:
          if (__n == 0) {
            return iVar1;
          }
          iVar9 = (__n - 1) + uVar6;
          pcVar11 = (char *)(param_1 + iVar9);
          if (*(char *)(param_1 + iVar9) == param_3[__n - 1]) {
            pcVar12 = param_3 + (__n - 1);
            do {
              if (pcVar12 == param_3) {
                return iVar1;
              }
              pcVar12 = pcVar12 + -1;
              pcVar11 = pcVar11 + -1;
            } while (*pcVar12 == *pcVar11);
          }
          uVar8 = uVar7 + 1;
          goto LAB_0003fef8;
        }
        pcVar11 = (char *)(param_1 + __n + uVar6);
        uVar8 = __n;
        if (*(char *)(param_1 + __n + uVar6) == param_3[__n]) {
          pcVar12 = param_3 + __n;
          do {
            uVar8 = uVar8 + 1;
            if (uVar10 <= uVar8) goto LAB_0003feb4;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          } while (*pcVar12 == *pcVar11);
        }
        uVar6 = uVar8 + (1 - __n) + uVar6;
      }
      else {
LAB_0003fef8:
        uVar6 = uVar6 + uVar8;
      }
    } while (uVar6 <= param_2 - param_4);
  }
  return 0;
}

