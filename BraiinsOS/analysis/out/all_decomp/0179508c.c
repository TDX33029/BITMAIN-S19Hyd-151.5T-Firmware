// FUN_0179508c @ 0179508c size=648 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_0179508c(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 uVar20;
  
  iVar15 = param_3 - param_2;
  if (iVar15 < 8) {
    if (1 < iVar15 + 1) {
      puVar9 = (uint *)(param_1 + param_2 * 8);
      iVar13 = -5;
      puVar1 = puVar9;
      do {
        puVar12 = puVar1 + 2;
        uVar14 = *puVar12;
        uVar19 = puVar1[3];
        uVar2 = *(undefined2 *)((int)puVar1 + 0xe);
        puVar6 = puVar12;
        if (*puVar1 < uVar14) {
          *puVar12 = *puVar1;
          puVar1[3] = puVar1[1];
          if (iVar13 != -5) {
            puVar6 = puVar1;
            if (uVar14 <= puVar1[-2]) goto LAB_017952d4;
            puVar6 = puVar1 + -2;
            *puVar1 = *puVar6;
            puVar1[1] = puVar1[-1];
            if (iVar13 != -4) {
              if (uVar14 <= puVar1[-4]) goto LAB_017952d4;
              puVar8 = puVar1 + -4;
              *puVar6 = *puVar8;
              puVar1[-1] = puVar1[-3];
              if (iVar13 != -3) {
                puVar6 = puVar8;
                if (uVar14 <= puVar1[-6]) goto LAB_017952d4;
                puVar6 = puVar1 + -6;
                *puVar8 = *puVar6;
                puVar1[-3] = puVar1[-5];
                if (iVar13 != -2) {
                  if (uVar14 <= puVar1[-8]) goto LAB_017952d4;
                  puVar8 = puVar1 + -8;
                  *puVar6 = *puVar8;
                  puVar1[-5] = puVar1[-7];
                  if (iVar13 != -1) {
                    puVar6 = puVar8;
                    if (uVar14 <= puVar1[-10]) goto LAB_017952d4;
                    puVar6 = puVar1 + -10;
                    *puVar8 = *puVar6;
                    puVar1[-7] = puVar1[-9];
                    if (iVar13 != 0) {
                      if (uVar14 <= puVar1[-0xc]) goto LAB_017952d4;
                      *puVar6 = puVar1[-0xc];
                      puVar1[-9] = puVar1[-0xb];
                    }
                  }
                }
              }
            }
          }
          puVar6 = puVar9;
        }
LAB_017952d4:
        iVar13 = iVar13 + 1;
        *puVar6 = uVar14;
        *(short *)(puVar6 + 1) = (short)uVar19;
        *(undefined2 *)((int)puVar6 + 6) = uVar2;
        puVar1 = puVar12;
      } while (iVar15 + -5 != iVar13);
    }
  }
  else if (param_2 < param_3) {
    iVar15 = param_2 + -1;
LAB_017950cc:
    iVar10 = param_2;
    iVar13 = iVar15;
    if (param_3 <= param_2) goto LAB_0179519c;
    do {
      puVar1 = (uint *)(param_1 + param_3 * 8);
      uVar19 = *puVar1;
      puVar9 = (uint *)(param_1 + param_2 * 8);
      iVar13 = iVar15;
      do {
        if (uVar19 < *puVar9) {
          iVar13 = iVar13 + 1;
          uVar4 = puVar9[1];
          puVar6 = (uint *)(param_1 + iVar13 * 8);
          uVar17 = *(uint *)(param_1 + iVar13 * 8);
          uVar14 = puVar6[1];
          uVar2 = *(undefined2 *)((int)puVar6 + 6);
          *puVar6 = *puVar9;
          puVar6[1] = uVar4;
          *puVar9 = uVar17;
          *(short *)(puVar9 + 1) = (short)uVar14;
          *(undefined2 *)((int)puVar9 + 6) = uVar2;
        }
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar1);
      iVar10 = iVar13 + 1;
      iVar3 = iVar10 - param_2;
      iVar16 = param_2;
      while( true ) {
        puVar18 = (undefined4 *)(param_1 + param_3 * 8);
        puVar7 = (undefined4 *)(param_1 + iVar10 * 8);
        uVar20 = *(undefined4 *)(param_1 + iVar10 * 8);
        param_2 = iVar13 + 2;
        uVar11 = puVar7[1];
        uVar5 = puVar18[1];
        *puVar7 = *puVar18;
        puVar7[1] = uVar5;
        *puVar18 = uVar20;
        puVar18[1] = uVar11;
        if (param_3 - iVar10 <= iVar3) {
          FUN_0179508c(param_1,param_2,param_3);
          if (iVar13 <= iVar16) {
            return 0;
          }
          param_2 = iVar16;
          param_3 = iVar13;
          goto LAB_017950cc;
        }
        FUN_0179508c(param_1,iVar16,iVar13);
        if (param_3 <= param_2) {
          return 0;
        }
        iVar15 = iVar13 + 1;
        iVar10 = param_2;
        iVar13 = iVar15;
        if (param_2 < param_3) break;
LAB_0179519c:
        iVar3 = 0;
        iVar16 = iVar10;
        iVar15 = iVar13;
      }
    } while( true );
  }
  return 0;
}

