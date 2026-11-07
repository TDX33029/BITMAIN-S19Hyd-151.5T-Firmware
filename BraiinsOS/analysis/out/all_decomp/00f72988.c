// FUN_00f72988 @ 00f72988 size=476 calls_out=2 calls_in=1
// strings: 

void FUN_00f72988(uint *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint extraout_r12;
  int iVar18;
  uint local_30;
  uint local_2c;
  
  iVar6 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar6 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(iVar6);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar6);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar18 = param_2 + param_3 * 0xc;
      iVar6 = 0;
      uVar9 = param_3;
      uVar8 = extraout_r12;
      do {
        if (param_2 == iVar18) break;
        uVar17 = *(uint *)(param_2 + 8);
        uVar4 = 0;
        if (0x5555555 < uVar17) {
LAB_00f72b48:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar4,uVar8);
        }
        uVar8 = uVar17 * 0x18;
        if (uVar8 == 0) {
          uVar3 = 4;
          uVar8 = 0;
        }
        else {
          puVar15 = *(undefined4 **)(param_2 + 4);
          uVar3 = thunk_FUN_016d4a50(uVar8);
          if (uVar3 == 0) {
            uVar4 = 4;
            goto LAB_00f72b48;
          }
          if (uVar17 != 0) {
            iVar7 = 0;
            uVar8 = uVar17;
            puVar16 = puVar15;
            do {
              if (puVar16 == puVar15 + uVar17 * 6) break;
              piVar5 = (int *)*puVar16;
              uVar8 = uVar8 - 1;
              do {
                iVar11 = *piVar5;
                bVar2 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar2);
              *piVar5 = iVar11 + 1;
              if (iVar11 < 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0xf72b54);
                (*pcVar1)();
              }
              uVar4 = puVar16[1];
              puVar12 = (undefined4 *)(uVar3 + iVar7 * 0x18);
              *puVar12 = piVar5;
              iVar7 = iVar7 + 1;
              puVar12[1] = uVar4;
              uVar4 = puVar16[3];
              uVar10 = puVar16[4];
              uVar14 = puVar16[5];
              puVar12[2] = puVar16[2];
              puVar12[3] = uVar4;
              puVar12[4] = uVar10;
              puVar12[5] = uVar14;
              puVar16 = puVar16 + 6;
            } while (uVar8 != 0);
          }
          uVar8 = uVar17;
        }
        uVar9 = uVar9 - 1;
        puVar13 = (uint *)(local_2c + iVar6 * 0xc);
        *puVar13 = uVar8;
        param_2 = param_2 + 0xc;
        puVar13[1] = uVar3;
        puVar13[2] = uVar17;
        iVar6 = iVar6 + 1;
        uVar8 = uVar3;
      } while (uVar9 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

