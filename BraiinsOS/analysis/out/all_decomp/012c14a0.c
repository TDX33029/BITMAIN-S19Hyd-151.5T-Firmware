// FUN_012c14a0 @ 012c14a0 size=1416 calls_out=6 calls_in=4
// strings: 

void FUN_012c14a0(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  int local_84;
  uint local_78;
  int local_74;
  uint local_6c;
  uint local_68;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_34;
  int local_28;
  
  iVar9 = param_2[1];
  if (iVar9 == 0) {
    *param_1 = (int)&DAT_005674cc;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  lVar1 = (ulonglong)(iVar9 + 1) * 0x34;
  uVar10 = (uint)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
LAB_012c1530:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar18 = iVar9 + 5;
  uVar12 = uVar18 + uVar10;
  if ((CARRY4(uVar18,uVar10)) || (0x7ffffffc < uVar12)) goto LAB_012c1530;
  if (uVar12 == 0) {
    iVar2 = 4;
  }
  else {
    if (uVar12 < 4) {
      local_28 = 0;
      iVar2 = FUN_016d51b0(&local_28,4,uVar12);
      if (iVar2 != 0) goto LAB_012c19a4;
      iVar2 = local_28;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(uVar12);
    }
    if (iVar2 == 0) {
LAB_012c19a4:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar12);
    }
  }
  puVar13 = (uint *)*param_2;
  iVar2 = iVar2 + uVar10;
  FUN_016dd1aa(iVar2,puVar13,uVar18);
  iVar7 = param_2[3];
  if (iVar7 != 0) {
    puVar16 = puVar13 + 1;
    uVar10 = ~*puVar13 & 0x80808080;
    puVar11 = puVar13;
    iVar22 = iVar7;
    do {
      uVar12 = 0x34;
      puVar15 = puVar16;
      if (uVar10 == 0) {
        do {
          puVar16 = puVar15 + 1;
          uVar10 = *puVar15;
          puVar11 = puVar11 + -0x34;
          puVar15 = puVar16;
        } while ((uVar10 & 0x80808080) == 0x80808080);
        uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
      }
      uVar3 = 0;
      puVar15 = puVar11 + (short)-(short)((uint)LZCOUNT(uVar10 << 0x18 |
                                                        (uVar10 >> 8 & 0xff) << 0x10 |
                                                        (uVar10 >> 0x10 & 0xff) << 8 |
                                                        uVar10 >> 0x18) >> 3) * 0xd;
      uVar18 = puVar15[-10];
      bVar24 = 0x3ffffffe < uVar18;
      bVar23 = uVar18 == 0x3fffffff;
      if (uVar18 < 0x40000000) {
        uVar12 = uVar18 << 2;
        bVar24 = 0x7ffffffb < uVar12;
        bVar23 = uVar12 == 0x7ffffffc;
      }
      if (bVar24 && !bVar23) {
LAB_012c19bc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,local_34);
      }
      uVar19 = puVar15[-0xb];
      uVar4 = puVar15[-0xd];
      local_48 = 0;
      if (uVar12 == 0) {
        local_34 = 4;
        local_44 = 0;
      }
      else {
        local_34 = thunk_FUN_016d4a50(uVar12);
        if (local_34 == 0) {
          uVar3 = 4;
          local_34 = uVar12;
          goto LAB_012c19bc;
        }
        local_44 = uVar18;
      }
      FUN_016dd1aa(local_34,uVar19,uVar12);
      uVar12 = puVar15[-7];
      bVar24 = 0x1ffffffe < uVar12;
      bVar23 = uVar12 == 0x1fffffff;
      if (uVar12 < 0x20000000) {
        uVar19 = uVar12 << 3;
        bVar24 = 0x7ffffff7 < uVar19;
        bVar23 = uVar19 == 0x7ffffff8;
      }
      if (bVar24 && !bVar23) {
LAB_012c19d4:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_48,local_4c);
      }
      uVar14 = puVar15[-8];
      local_68 = 0;
      if (uVar19 == 0) {
        local_4c = 8;
        local_48 = 0;
      }
      else {
        local_4c = thunk_FUN_016d4a50(uVar19);
        if (local_4c == 0) {
          local_48 = 8;
          local_4c = uVar19;
          goto LAB_012c19d4;
        }
        local_48 = uVar12;
      }
      FUN_016dd1aa(local_4c,uVar14,uVar19);
      uVar19 = puVar15[-4];
      bVar24 = 0x1ffffffe < uVar19;
      bVar23 = uVar19 == 0x1fffffff;
      if (uVar19 < 0x20000000) {
        uVar14 = uVar19 << 3;
        bVar24 = 0x7ffffff7 < uVar14;
        bVar23 = uVar14 == 0x7ffffff8;
      }
      if (bVar24 && !bVar23) {
LAB_012c19f0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_68,local_6c);
      }
      uVar20 = puVar15[-5];
      local_78 = 0;
      if (uVar14 == 0) {
        local_6c = 8;
        local_68 = 0;
      }
      else {
        local_6c = thunk_FUN_016d4a50(uVar14);
        if (local_6c == 0) {
          local_68 = 8;
          local_6c = uVar14;
          goto LAB_012c19f0;
        }
        local_68 = uVar19;
      }
      FUN_016dd1aa(local_6c,uVar20,uVar14);
      uVar14 = puVar15[-1];
      if (0xaaaaaaa < uVar14) {
LAB_012c1a10:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_78,local_74);
      }
      local_74 = uVar14 * 0xc;
      if (local_74 == 0) {
        iVar5 = 4;
        local_78 = 0;
      }
      else {
        local_78 = puVar15[-2];
        iVar5 = thunk_FUN_016d4a50();
        if (iVar5 == 0) {
          local_78 = 4;
          goto LAB_012c1a10;
        }
        if (uVar14 == 0) {
          local_78 = uVar14;
        }
        else {
          iVar17 = 0;
          uVar20 = 0;
          do {
            if (local_74 == iVar17) break;
            iVar8 = *(int *)(local_78 + 8);
            if (iVar8 < 0) {
              uVar3 = 0;
LAB_012c1994:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar3,local_84);
            }
            uVar3 = *(undefined4 *)(local_78 + 4);
            if (iVar8 == 0) {
              local_84 = 1;
              iVar21 = 0;
            }
            else {
              local_84 = thunk_FUN_016d4a50(iVar8);
              if (local_84 == 0) {
                uVar3 = 1;
                local_84 = iVar8;
                goto LAB_012c1994;
              }
              iVar21 = iVar8;
            }
            local_78 = local_78 + 0xc;
            uVar20 = uVar20 + 1;
            FUN_016dd1aa(local_84,uVar3);
            piVar6 = (int *)(iVar5 + iVar17);
            *piVar6 = iVar21;
            iVar17 = iVar17 + 0xc;
            piVar6[1] = local_84;
            piVar6[2] = iVar8;
          } while (uVar14 != uVar20);
          local_78 = uVar14;
        }
      }
      iVar22 = iVar22 + -1;
      uVar10 = uVar10 - 1 & uVar10;
      iVar17 = ((int)puVar13 - (int)puVar15 >> 2) * -4 + iVar2;
      *(uint *)(iVar17 + -0x14) = local_6c;
      *(uint *)(iVar17 + -0x10) = uVar19;
      *(uint *)(iVar17 + -0xc) = local_78;
      *(uint *)(iVar17 + -0x34) = uVar4;
      *(uint *)(iVar17 + -0x30) = local_44;
      *(uint *)(iVar17 + -0x2c) = local_34;
      *(uint *)(iVar17 + -0x28) = uVar18;
      *(uint *)(iVar17 + -0x24) = local_48;
      *(uint *)(iVar17 + -0x20) = local_4c;
      *(uint *)(iVar17 + -0x1c) = uVar12;
      *(int *)(iVar17 + -8) = iVar5;
      *(uint *)(iVar17 + -4) = uVar14;
      *(uint *)(iVar17 + -0x18) = local_68;
      local_74 = iVar5;
    } while (iVar22 != 0);
  }
  iVar22 = param_2[2];
  *param_1 = iVar2;
  param_1[1] = iVar9;
  param_1[2] = iVar22;
  param_1[3] = iVar7;
  return;
}

