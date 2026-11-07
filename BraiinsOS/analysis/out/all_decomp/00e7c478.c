// FUN_00e7c478 @ 00e7c478 size=516 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00e7c478(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  uVar9 = 0;
  if (param_2 == param_4) {
    if (param_2 != 0) {
      iVar6 = 0;
      do {
        puVar10 = (uint *)(param_1 + iVar6 * 0x30);
        puVar7 = (uint *)(param_3 + iVar6 * 0x30);
        if ((puVar10[6] != puVar7[6]) ||
           (iVar1 = thunk_FUN_016dd50a(puVar10[5],puVar7[5]), iVar1 != 0)) {
          return 0;
        }
        uVar2 = *puVar10;
        if (uVar2 == 2) {
          if (*puVar7 != 2) {
            return 0;
          }
        }
        else {
          if (uVar2 != *puVar7) {
            return 0;
          }
          if ((uVar2 & 1) == 0) {
            if (puVar10[1] != puVar7[1]) {
              return 0;
            }
          }
          else if (*(double *)(puVar10 + 2) != *(double *)(puVar7 + 2)) {
            return 0;
          }
        }
        if (puVar10[8] == 0x80000000 || puVar7[8] == 0x80000000) {
          if (puVar10[8] != 0x80000000) {
            return 0;
          }
          if (puVar7[8] != 0x80000000) {
            return 0;
          }
        }
        else {
          uVar2 = puVar10[10];
          if (uVar2 != puVar7[10]) {
            return 0;
          }
          if (uVar2 != 0) {
            uVar3 = puVar7[9];
            iVar1 = 0;
            uVar12 = puVar10[9];
            do {
              iVar11 = uVar12 + iVar1;
              iVar8 = uVar3 + iVar1;
              if (*(char *)(iVar11 + 0x24) == '\x02') {
                if (*(char *)(iVar8 + 0x24) != '\x02') {
                  return 0;
                }
              }
              else if (*(char *)(iVar11 + 0x24) != *(char *)(iVar8 + 0x24)) {
                return 0;
              }
              if (*(int *)(iVar11 + 8) != *(int *)(iVar8 + 8)) {
                return 0;
              }
              iVar4 = thunk_FUN_016dd50a(*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar8 + 4));
              bVar13 = iVar4 != 0;
              iVar5 = extraout_r2;
              if (!bVar13) {
                iVar5 = *(int *)(iVar11 + 0x14);
                iVar4 = *(int *)(iVar8 + 0x14);
              }
              if (bVar13 || iVar5 != iVar4) {
                return 0;
              }
              iVar4 = thunk_FUN_016dd50a(*(undefined4 *)(iVar11 + 0x10),
                                         *(undefined4 *)(iVar8 + 0x10));
              if (iVar4 != 0) {
                return 0;
              }
              if (*(int *)(iVar11 + 0x18) == -0x80000000 || *(int *)(iVar8 + 0x18) == -0x80000000) {
                if (*(int *)(iVar11 + 0x18) != -0x80000000) {
                  return 0;
                }
                if (*(int *)(iVar8 + 0x18) != -0x80000000) {
                  return 0;
                }
              }
              else {
                if (*(int *)(iVar11 + 0x20) != *(int *)(iVar8 + 0x20)) {
                  return 0;
                }
                iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar11 + 0x1c),
                                           *(undefined4 *)(iVar8 + 0x1c));
                if (iVar8 != 0) {
                  return 0;
                }
              }
              iVar1 = iVar1 + 0x28;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != param_2);
    }
    uVar9 = 1;
  }
  return uVar9;
}

