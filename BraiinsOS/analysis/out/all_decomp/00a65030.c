// FUN_00a65030 @ 00a65030 size=508 calls_out=5 calls_in=3
// strings: 

void FUN_00a65030(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  uint unaff_r8;
  undefined4 uVar17;
  uint unaff_r9;
  uint *puVar18;
  uint unaff_r10;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  bool bVar22;
  int local_28;
  
  iVar12 = param_2[1];
  uVar9 = param_2[4];
  uVar20 = param_2[5];
  uVar16 = param_2[6];
  uVar14 = param_2[7];
  if (iVar12 == 0) {
    iVar4 = 0;
    uVar13 = 0;
    iVar12 = 0;
    puVar19 = &DAT_005674cc;
  }
  else {
    lVar2 = (ulonglong)(iVar12 + 1) * 0x11;
    uVar5 = (uint)lVar2;
    if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
LAB_00a65084:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    bVar22 = 0xfffffffb < uVar5;
    if (uVar5 < 0xfffffffd) {
      unaff_r8 = iVar12 + 5;
      unaff_r10 = uVar5 + 3 & 0xfffffffc;
      bVar22 = CARRY4(unaff_r10,unaff_r8);
      unaff_r9 = unaff_r10 + unaff_r8;
    }
    if ((bVar22) || (0x7ffffffc < unaff_r9)) goto LAB_00a65084;
    if (unaff_r9 == 0) {
      iVar4 = 4;
    }
    else {
      if (unaff_r9 < 4) {
        local_28 = 0;
        iVar4 = FUN_016d51b0(&local_28,4,unaff_r9);
        if (iVar4 != 0) goto LAB_00a65220;
        iVar4 = local_28;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(unaff_r9);
      }
      if (iVar4 == 0) {
LAB_00a65220:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,unaff_r9);
      }
    }
    puVar18 = (uint *)*param_2;
    puVar19 = (undefined4 *)(iVar4 + unaff_r10);
    FUN_016dd1aa(puVar19,puVar18,unaff_r8);
    iVar4 = param_2[3];
    if (iVar4 != 0) {
      puVar7 = puVar18 + 1;
      uVar5 = ~*puVar18 & 0x80808080;
      iVar6 = iVar4;
      puVar15 = puVar18;
      do {
        puVar8 = puVar7;
        if (uVar5 == 0) {
          do {
            puVar7 = puVar8 + 1;
            uVar5 = *puVar8;
            puVar15 = puVar15 + -0x11;
            puVar8 = puVar7;
          } while ((uVar5 & 0x80808080) == 0x80808080);
          uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
        }
        uVar10 = LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18);
        iVar6 = iVar6 + -1;
        iVar11 = (uVar10 >> 3) * -0x10 - (uVar10 >> 3);
        iVar3 = iVar11 - (int)puVar18;
        uVar13 = *(undefined4 *)((int)puVar15 + iVar11 + -0x11);
        uVar21 = *(undefined4 *)((int)puVar15 + iVar11 + -0xd);
        uVar17 = *(undefined4 *)((int)puVar15 + iVar11 + -9);
        uVar1 = *(undefined1 *)((int)puVar15 + iVar11 + -1);
        *(undefined4 *)((int)puVar15 + (int)puVar19 + iVar3 + -5) =
             *(undefined4 *)((int)puVar15 + iVar11 + -5);
        *(undefined4 *)((int)puVar15 + (int)puVar19 + iVar3 + -9) = uVar17;
        *(undefined4 *)((int)puVar15 + (int)puVar19 + iVar3 + -0xd) = uVar21;
        *(undefined4 *)((int)puVar15 + (int)puVar19 + iVar3 + -0x11) = uVar13;
        *(undefined1 *)((int)puVar15 + (int)puVar19 + iVar3 + -1) = uVar1;
        uVar5 = uVar5 - 1 & uVar5;
      } while (iVar6 != 0);
    }
    uVar13 = param_2[2];
  }
  *param_1 = puVar19;
  param_1[1] = iVar12;
  param_1[2] = uVar13;
  param_1[3] = iVar4;
  param_1[4] = uVar9;
  param_1[5] = uVar20;
  param_1[6] = uVar16;
  param_1[7] = uVar14;
  return;
}

