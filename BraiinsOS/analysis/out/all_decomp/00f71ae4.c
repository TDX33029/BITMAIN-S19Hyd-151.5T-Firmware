// FUN_00f71ae4 @ 00f71ae4 size=464 calls_out=2 calls_in=2
// strings: 

void FUN_00f71ae4(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint extraout_r12;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  uint local_40;
  uint local_30;
  uint local_2c;
  
  uVar9 = param_3 * 7;
  iVar4 = param_3 * 0x1c;
  if (0x4924924 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar4 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(iVar4);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar4);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      puVar15 = param_2 + param_3 * 7;
      iVar4 = 0;
      uVar14 = param_3;
      uVar1 = extraout_r12;
      do {
        if (param_2 == puVar15) break;
        uVar5 = param_2[3];
        uVar10 = *param_2;
        uVar12 = 0x80000000;
        uVar2 = param_2[1];
        uVar7 = param_2[2];
        if (param_2[4] == 0x80000000) {
        }
        else {
          uVar9 = param_2[6];
          uVar6 = 0;
          bVar17 = 0x1ffffffe < uVar9;
          bVar16 = uVar9 == 0x1fffffff;
          uVar11 = uVar10;
          if (uVar9 < 0x20000000) {
            uVar11 = uVar9 << 3;
            bVar17 = 0x7ffffffb < uVar11;
            bVar16 = uVar11 == 0x7ffffffc;
            local_40 = uVar10;
          }
          if (bVar17 && !bVar16) {
LAB_00f71c9c:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar6,uVar1);
          }
          uVar12 = 0;
          if (uVar11 == 0) {
            uVar1 = 4;
          }
          else {
            puVar13 = (undefined4 *)param_2[5];
            uVar1 = thunk_FUN_016d4a50(uVar11);
            if (uVar1 == 0) {
              uVar6 = 4;
              uVar1 = uVar11;
              goto LAB_00f71c9c;
            }
            if (uVar9 != 0) {
              uVar10 = 0;
              do {
                bVar16 = uVar11 != 0;
                if (bVar16) {
                  uVar6 = puVar13[1];
                  uVar11 = uVar11 - 8;
                  puVar3 = (undefined4 *)(uVar1 + uVar10 * 8);
                  *puVar3 = *puVar13;
                  puVar13 = puVar13 + 2;
                  uVar10 = uVar10 + 1;
                  puVar3[1] = uVar6;
                }
                uVar12 = uVar9;
              } while (bVar16 && uVar9 != uVar10);
            }
          }
          uVar10 = local_40;
        }
        uVar14 = uVar14 - 1;
        puVar8 = (uint *)(local_2c + iVar4 * 0x1c);
        *puVar8 = uVar10;
        param_2 = param_2 + 7;
        puVar8[1] = uVar2;
        puVar8[2] = uVar7;
        puVar8[6] = uVar9;
        puVar8[3] = uVar5;
        puVar8[4] = uVar12;
        puVar8[5] = uVar1;
        iVar4 = iVar4 + 1;
      } while (uVar14 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

