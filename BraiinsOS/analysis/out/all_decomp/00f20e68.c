// FUN_00f20e68 @ 00f20e68 size=404 calls_out=2 calls_in=1
// strings: 

void FUN_00f20e68(uint *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint unaff_r8;
  int iVar12;
  uint uVar13;
  uint extraout_r12;
  int iVar14;
  bool bVar15;
  bool bVar16;
  uint local_30;
  uint local_2c;
  
  uVar11 = param_3 * 0x10;
  bVar16 = 0xffffffe < param_3;
  bVar15 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar16 = 0x7ffffffb < uVar11;
    bVar15 = uVar11 == 0x7ffffffc;
  }
  if (bVar16 && !bVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar11 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar11);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar11);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar14 = param_2 + param_3 * 0x10;
      iVar6 = 0;
      uVar11 = param_3;
      uVar2 = extraout_r12;
      do {
        if (param_2 == iVar14) break;
        uVar13 = *(uint *)(param_2 + 8);
        uVar3 = 0;
        bVar16 = 0x7fffffe < uVar13;
        bVar15 = uVar13 == 0x7ffffff;
        if (uVar13 < 0x8000000) {
          unaff_r8 = uVar13 << 5;
          bVar16 = 0x7ffffff7 < unaff_r8;
          bVar15 = unaff_r8 == 0x7ffffff8;
        }
        if (bVar16 && !bVar15) {
LAB_00f20fe4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar3,uVar2);
        }
        uVar1 = *(undefined1 *)(param_2 + 0xc);
        if (unaff_r8 == 0) {
          uVar2 = 8;
          unaff_r8 = 0;
        }
        else {
          iVar12 = *(int *)(param_2 + 4);
          uVar2 = thunk_FUN_016d4a50(unaff_r8);
          if (uVar2 == 0) {
            uVar3 = 8;
            uVar2 = unaff_r8;
            goto LAB_00f20fe4;
          }
          if (uVar13 != 0) {
            uVar4 = 0;
            do {
              bVar15 = unaff_r8 != 0;
              if (bVar15) {
                puVar7 = (undefined4 *)(iVar12 + uVar4 * 0x20);
                puVar8 = (undefined4 *)(uVar2 + uVar4 * 0x20);
                unaff_r8 = unaff_r8 - 0x20;
                uVar4 = uVar4 + 1;
                uVar3 = puVar7[1];
                uVar9 = puVar7[2];
                uVar10 = puVar7[3];
                *puVar8 = *puVar7;
                puVar8[1] = uVar3;
                puVar8[2] = uVar9;
                puVar8[3] = uVar10;
                uVar3 = puVar7[5];
                uVar9 = puVar7[6];
                uVar10 = puVar7[7];
                puVar8[4] = puVar7[4];
                puVar8[5] = uVar3;
                puVar8[6] = uVar9;
                puVar8[7] = uVar10;
              }
            } while (bVar15 && uVar13 != uVar4);
          }
          unaff_r8 = uVar13;
        }
        uVar11 = uVar11 - 1;
        puVar5 = (uint *)(local_2c + iVar6 * 0x10);
        *puVar5 = unaff_r8;
        iVar6 = iVar6 + 1;
        param_2 = param_2 + 0x10;
        puVar5[1] = uVar2;
        *(undefined1 *)(puVar5 + 3) = uVar1;
        puVar5[2] = uVar13;
      } while (uVar11 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

