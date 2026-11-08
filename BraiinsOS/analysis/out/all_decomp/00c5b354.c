// FUN_00c5b354 @ 00c5b354 size=508 calls_out=5 calls_in=3
// strings: 

void FUN_00c5b354(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 uVar19;
  int local_28;
  
  iVar4 = param_2[1];
  uVar14 = param_2[4];
  uVar8 = param_2[5];
  uVar13 = param_2[6];
  uVar9 = param_2[7];
  if (iVar4 == 0) {
    iVar3 = 0;
    uVar19 = 0;
    iVar4 = 0;
    puVar17 = &DAT_005674cc;
  }
  else {
    uVar11 = iVar4 + 1;
    if (0x1ffffffe < uVar11 && iVar4 != 0x1ffffffe) {
LAB_00c5b3e4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    uVar16 = iVar4 + 5 + uVar11 * 8;
    if ((uVar16 < uVar11 * 8) || (0x7ffffffc < uVar16)) goto LAB_00c5b3e4;
    if (uVar16 == 0) {
      iVar3 = 4;
    }
    else {
      if (uVar16 < 4) {
        local_28 = 0;
        iVar3 = FUN_016d51b0(&local_28,4,uVar16);
        if (iVar3 != 0) goto LAB_00c5b544;
        iVar3 = local_28;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(uVar16);
      }
      if (iVar3 == 0) {
LAB_00c5b544:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar16);
      }
    }
    puVar15 = (uint *)*param_2;
    puVar17 = (undefined4 *)(iVar3 + uVar11 * 8);
    FUN_016dd1aa(puVar17,puVar15,iVar4 + 5);
    iVar3 = param_2[3];
    if (iVar3 != 0) {
      puVar7 = puVar15 + 1;
      uVar11 = ~*puVar15 & 0x80808080;
      iVar5 = iVar3;
      puVar12 = puVar15;
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
        uVar16 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) & 0x38;
        uVar19 = *(undefined4 *)((int)puVar12 + (-8 - uVar16));
        piVar10 = *(int **)((int)puVar12 + (-4 - uVar16));
        do {
          iVar18 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar18 + 1;
        if (iVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xc5b540);
          (*pcVar1)();
        }
        iVar5 = iVar5 + -1;
        *(undefined4 *)((int)puVar12 + (int)puVar17 + (-(int)puVar15 - uVar16) + -8) = uVar19;
        *(int **)((int)puVar12 + (int)puVar17 + (-(int)puVar15 - uVar16) + -4) = piVar10;
        uVar11 = uVar11 - 1 & uVar11;
      } while (iVar5 != 0);
    }
    uVar19 = param_2[2];
  }
  *param_1 = puVar17;
  param_1[1] = iVar4;
  param_1[2] = uVar19;
  param_1[3] = iVar3;
  param_1[4] = uVar14;
  param_1[5] = uVar8;
  param_1[6] = uVar13;
  param_1[7] = uVar9;
  return;
}

