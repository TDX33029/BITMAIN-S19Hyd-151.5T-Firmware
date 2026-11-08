// FUN_016c1ed0 @ 016c1ed0 size=404 calls_out=2 calls_in=2
// strings: 

void FUN_016c1ed0(uint *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r2;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  uint local_38;
  uint local_30;
  uint local_2c;
  
  uVar7 = 0;
  iVar9 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
LAB_016c1ef8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,iVar9);
  }
  if (iVar9 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar7 = 4;
    local_2c = FUN_01298504(iVar9,4);
    if (local_2c == 0) goto LAB_016c1ef8;
    local_30 = param_3;
    if (param_3 != 0) {
      iVar12 = param_2 + param_3 * 0xc;
      uVar2 = extraout_r2;
      uVar5 = param_3;
      iVar9 = 0;
      do {
        if (param_2 == iVar12) break;
        uVar11 = *(uint *)(param_2 + 8);
        uVar7 = 0;
        bVar14 = 0x1ffffffe < uVar11;
        bVar13 = uVar11 == 0x1fffffff;
        uVar3 = uVar5;
        if (uVar11 < 0x20000000) {
          uVar3 = uVar11 << 3;
          bVar14 = 0x7ffffffb < uVar3;
          bVar13 = uVar3 == 0x7ffffffc;
          local_38 = uVar5;
        }
        uVar5 = uVar2;
        if (bVar14 && !bVar13) {
LAB_016c2058:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar7,uVar5);
        }
        if (uVar3 == 0) {
          uVar3 = 0;
          uVar2 = 4;
        }
        else {
          puVar10 = *(undefined4 **)(param_2 + 4);
          uVar7 = 4;
          uVar2 = FUN_01298504(uVar3,4);
          uVar5 = uVar3;
          if (uVar2 == 0) goto LAB_016c2058;
          if (uVar11 != 0) {
            iVar4 = 0;
            uVar5 = uVar11;
            do {
              bVar13 = uVar11 * -8 == iVar4;
              if (!bVar13) {
                uVar1 = *(ushort *)(puVar10 + 1);
                puVar8 = (undefined4 *)(uVar2 - iVar4);
                *puVar8 = *puVar10;
                iVar4 = iVar4 + -8;
                puVar8[1] = (uint)uVar1;
                uVar5 = uVar5 - 1;
                bVar13 = uVar5 == 0;
                puVar10 = puVar10 + 2;
              }
            } while (!bVar13);
          }
          uVar3 = uVar11;
        }
        param_2 = param_2 + 0xc;
        uVar5 = local_38 - 1;
        puVar6 = (uint *)(local_2c + iVar9 * 0xc);
        *puVar6 = uVar3;
        puVar6[1] = uVar2;
        puVar6[2] = uVar11;
        iVar9 = iVar9 + 1;
      } while (uVar5 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

