// FUN_0154589c @ 0154589c size=992 calls_out=3 calls_in=4
// strings: 

void FUN_0154589c(int *param_1,char *param_2,int param_3,undefined4 param_4,uint param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  uint local_28;
  
  cVar2 = *param_2;
  local_28 = param_5;
  iVar3 = *(int *)(param_2 + 8);
  uVar8 = *(uint *)(param_2 + 0xc);
  while( true ) {
    if ((char)param_1[0x1b] != '\0') {
      if (*(int *)(param_3 + 8) == 0) {
        return;
      }
      FUN_01bed93e(*(undefined4 *)(param_3 + 4),1);
      return;
    }
    if (param_1[0x17] != 0) {
      FUN_0154589c(param_1[0x17],param_2,param_3,param_4,1);
    }
    iVar4 = param_1[0x19];
    if ((iVar4 != 0) && (DataMemoryBarrier(0xb), *(int *)(iVar4 + 0x78) == 0)) {
      FUN_0154589c(iVar4 + 8,param_2,param_3,param_4,1);
    }
    if (param_1[0x18] != 0) {
      FUN_0154589c(param_1[0x18],param_2,param_3,param_4,1);
    }
    pcVar9 = *(char **)(param_3 + 4);
    uVar11 = *(uint *)(param_3 + 8);
    if ((*param_1 == 1) && (param_1[1] != 0 && uVar11 != 0)) {
      uVar5 = param_1[1] - 1;
      if (uVar11 - 1 < uVar5) {
        uVar5 = uVar11 - 1;
      }
      FUN_01bed93e(pcVar9,1,uVar5 + 1);
      pcVar9 = *(char **)(param_3 + 4);
      uVar11 = *(uint *)(param_3 + 8);
    }
    if ((param_1[2] == 1) && (param_1[3] != 0 && uVar11 != 0)) {
      uVar5 = param_1[3] - 1;
      if (uVar11 - 1 < uVar5) {
        uVar5 = uVar11 - 1;
      }
      FUN_01bed93e(pcVar9,1,uVar5 + 1);
      pcVar9 = *(char **)(param_3 + 4);
      uVar11 = *(uint *)(param_3 + 8);
    }
    uVar5 = 0;
    do {
      if (uVar11 == uVar5) {
        return;
      }
      pcVar1 = pcVar9 + uVar5;
      uVar5 = uVar5 + 1;
    } while (*pcVar1 != '\0');
    if (cVar2 == '\x04') {
      if (uVar8 <= uVar11) {
        uVar11 = uVar8;
      }
      if (uVar11 != 0) {
        iVar4 = iVar3;
        do {
          if ((*pcVar9 == '\0') &&
             (((param_1[0x12] != 0 &&
               (iVar6 = FUN_01577618(param_1 + 0x12,iVar4,param_4), iVar6 != 0)) ||
              (((local_28 & 1) != 0 &&
               ((param_1[0xd] != 0 &&
                (iVar6 = FUN_01577618(param_1 + 0xd,iVar4,param_4), iVar6 != 0)))))))) {
            *pcVar9 = '\x01';
          }
          iVar4 = iVar4 + 0x18;
          pcVar9 = pcVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    iVar4 = param_1[0x1a];
    if (iVar4 != 0) {
      iVar6 = FUN_01577618(iVar4 + 0x150,param_2,param_4);
      if (iVar6 == 0) {
        piVar10 = (int *)(iVar4 + 0xe0);
        iVar4 = *piVar10;
      }
      else {
        FUN_0154589c(iVar4,param_2,param_3,param_4,1);
        piVar10 = (int *)(iVar4 + 0x70);
        iVar4 = *piVar10;
      }
      if (iVar4 != 2) {
        FUN_0154589c(piVar10,param_2,param_3,param_4,1);
      }
    }
    iVar4 = param_1[4];
    bVar12 = iVar4 != -0x80000000;
    if (bVar12) {
      iVar4 = param_1[6];
    }
    if (bVar12 && iVar4 != 0) {
      iVar6 = param_1[5];
      iVar4 = iVar4 * 0x84;
      do {
        iVar7 = FUN_01577618(iVar6,param_2,param_4);
        if (iVar7 != 0) {
          FUN_0154589c(iVar6 + 0x14,param_2,param_3,param_4,1);
        }
        iVar6 = iVar6 + 0x84;
        iVar4 = iVar4 + -0x84;
      } while (iVar4 != 0);
    }
    iVar4 = param_1[7];
    bVar12 = iVar4 != -0x80000000;
    if (bVar12) {
      iVar4 = param_1[9];
    }
    if (bVar12 && iVar4 != 0) {
      iVar6 = param_1[8];
      iVar4 = iVar4 * 0x84;
      do {
        iVar7 = FUN_01577618(iVar6,param_2,param_4);
        if (iVar7 != 0) {
          FUN_0154589c(iVar6 + 0x14,param_2,param_3,param_4,1);
        }
        iVar6 = iVar6 + 0x84;
        iVar4 = iVar4 + -0x84;
      } while (iVar4 != 0);
    }
    iVar4 = param_1[10];
    bVar12 = iVar4 == -0x80000000;
    if (!bVar12) {
      iVar4 = param_1[0xc];
    }
    if (bVar12 || iVar4 == 0) break;
    iVar6 = param_1[0xb];
    param_1 = (int *)0x0;
    bVar12 = false;
    iVar4 = iVar4 * 0x84;
    do {
      iVar7 = FUN_01577618(iVar6,param_2,param_4);
      if (iVar7 != 0) {
        if (bVar12) {
          return;
        }
        param_1 = (int *)(iVar6 + 0x14);
        bVar12 = true;
      }
      iVar6 = iVar6 + 0x84;
      iVar4 = iVar4 + -0x84;
    } while (iVar4 != 0);
    if (bVar12) {
      local_28 = 1;
    }
    if (!bVar12 || param_1 == (int *)0x0) {
      return;
    }
  }
  return;
}

