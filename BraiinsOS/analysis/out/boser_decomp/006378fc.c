// FUN_006378fc @ 006378fc size=480 calls_out=1 calls_in=5
// strings: 

undefined4 FUN_006378fc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r2;
  int extraout_r2_00;
  int iVar7;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  
  uVar13 = 0;
  if ((param_2 == param_4) && (uVar13 = 1, param_2 != 0)) {
    iVar14 = 0;
    do {
      puVar8 = (uint *)(param_1 + iVar14 * 0x30);
      puVar11 = (uint *)(param_3 + iVar14 * 0x30);
      if ((puVar8[6] != puVar11[6]) ||
         (iVar1 = thunk_FUN_01bed842(puVar8[5],puVar11[5]), iVar1 != 0)) {
        return 0;
      }
      uVar2 = *puVar8;
      uVar6 = *puVar11;
      if (uVar2 == 2 || uVar6 == 2) {
        if (uVar2 != 2 || uVar6 != 2) {
          return 0;
        }
      }
      else {
        if (uVar2 != uVar6) {
          return 0;
        }
        if ((uVar2 & 1) == 0) {
          if (puVar8[1] != puVar11[1]) {
            return 0;
          }
        }
        else if (*(double *)(puVar8 + 2) != *(double *)(puVar11 + 2)) {
          return 0;
        }
      }
      if (puVar8[8] == 0x80000000 || puVar11[8] == 0x80000000) {
        if (puVar8[8] != 0x80000000 || puVar11[8] != 0x80000000) {
          return 0;
        }
      }
      else {
        uVar2 = puVar8[10];
        if (uVar2 != puVar11[10]) {
          return 0;
        }
        if (uVar2 != 0) {
          uVar3 = puVar11[9];
          iVar1 = 0;
          uVar10 = puVar8[9];
          uVar6 = extraout_r2;
          do {
            iVar9 = uVar10 + iVar1;
            iVar12 = uVar3 + iVar1;
            uVar4 = (uint)*(byte *)(iVar9 + 0x24);
            bVar15 = *(byte *)(iVar12 + 0x24) != uVar4;
            if (!bVar15) {
              uVar6 = *(uint *)(iVar9 + 8);
              uVar4 = *(uint *)(iVar12 + 8);
            }
            if (bVar15 || uVar6 != uVar4) {
              return 0;
            }
            iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar12 + 4));
            bVar15 = iVar5 != 0;
            iVar7 = extraout_r2_00;
            if (!bVar15) {
              iVar7 = *(int *)(iVar9 + 0x14);
              iVar5 = *(int *)(iVar12 + 0x14);
            }
            if (bVar15 || iVar7 != iVar5) {
              return 0;
            }
            iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar9 + 0x10),*(undefined4 *)(iVar12 + 0x10))
            ;
            if (iVar5 != 0) {
              return 0;
            }
            if (*(int *)(iVar9 + 0x18) == -0x80000000 || *(int *)(iVar12 + 0x18) == -0x80000000) {
              if (*(int *)(iVar9 + 0x18) != -0x80000000) {
                return 0;
              }
              uVar6 = extraout_r2_01;
              if (*(int *)(iVar12 + 0x18) != -0x80000000) {
                return 0;
              }
            }
            else {
              if (*(int *)(iVar9 + 0x20) != *(int *)(iVar12 + 0x20)) {
                return 0;
              }
              iVar9 = thunk_FUN_01bed842(*(undefined4 *)(iVar9 + 0x1c),
                                         *(undefined4 *)(iVar12 + 0x1c));
              uVar6 = extraout_r2_02;
              if (iVar9 != 0) {
                return 0;
              }
            }
            iVar1 = iVar1 + 0x28;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != param_2);
  }
  return uVar13;
}

