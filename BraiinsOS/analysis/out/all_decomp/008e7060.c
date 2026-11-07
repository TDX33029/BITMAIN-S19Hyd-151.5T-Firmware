// FUN_008e7060 @ 008e7060 size=504 calls_out=5 calls_in=2
// strings: 

void FUN_008e7060(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int local_28;
  
  iVar8 = param_2[1];
  iVar14 = param_2[4];
  iVar15 = param_2[5];
  iVar17 = param_2[6];
  iVar18 = param_2[7];
  if (iVar8 == 0) {
    iVar4 = 0;
    *param_1 = (int)&DAT_005674cc;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar11 = iVar8 + 1;
    if (0x1ffffffe < uVar11 && iVar8 != 0x1ffffffe) {
LAB_008e70e8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    uVar13 = iVar8 + 5;
    uVar9 = uVar13 + uVar11 * 8;
    if ((uVar9 < uVar13) || (0x7ffffffc < uVar9)) goto LAB_008e70e8;
    if (uVar9 == 0) {
      iVar3 = 4;
    }
    else {
      if (uVar9 < 4) {
        local_28 = 0;
        iVar4 = FUN_016d51b0(&local_28,4,uVar9);
        if (iVar4 != 0) goto LAB_008e724c;
        iVar3 = local_28;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(uVar9);
      }
      if (iVar3 == 0) {
LAB_008e724c:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar9);
      }
    }
    iVar3 = iVar3 + uVar11 * 8;
    puVar16 = (uint *)*param_2;
    FUN_016dd1aa(iVar3,puVar16,uVar13);
    iVar4 = param_2[3];
    if (iVar4 != 0) {
      puVar7 = puVar16 + 1;
      uVar11 = ~*puVar16 & 0x80808080;
      iVar5 = iVar4;
      puVar12 = puVar16;
      do {
        puVar6 = puVar7;
        if (uVar11 == 0) {
          do {
            puVar7 = puVar6 + 1;
            uVar11 = *puVar6;
            puVar12 = puVar12 + -8;
            puVar6 = puVar7;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8
                        | uVar11 >> 0x18) & 0x38;
        uVar20 = *(undefined4 *)((int)puVar12 + (-8 - uVar9));
        piVar10 = *(int **)((int)puVar12 + (-4 - uVar9));
        do {
          iVar19 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar19 + 1;
        if (iVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x8e7248);
          (*pcVar1)();
        }
        iVar5 = iVar5 + -1;
        iVar19 = iVar3 + (-(int)puVar16 - uVar9);
        *(undefined4 *)((int)puVar12 + iVar19 + -8) = uVar20;
        *(int **)((int)puVar12 + iVar19 + -4) = piVar10;
        uVar11 = uVar11 - 1 & uVar11;
      } while (iVar5 != 0);
    }
    *param_1 = iVar3;
    param_1[2] = param_2[2];
    param_1[1] = iVar8;
  }
  param_1[3] = iVar4;
  param_1[4] = iVar14;
  param_1[5] = iVar15;
  param_1[6] = iVar17;
  param_1[7] = iVar18;
  return;
}

