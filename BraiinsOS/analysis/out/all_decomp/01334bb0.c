// FUN_01334bb0 @ 01334bb0 size=1456 calls_out=6 calls_in=0
// strings: 

void FUN_01334bb0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  int local_a0;
  uint local_90;
  int local_8c;
  undefined4 *local_84;
  uint local_80;
  undefined4 *local_64;
  uint local_60;
  undefined4 *local_58;
  uint local_54;
  undefined4 *local_50;
  uint local_4c;
  undefined4 *local_48;
  uint local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  uVar14 = param_2[1];
  if (uVar14 == 0) {
    local_48 = &DAT_005674cc;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
  }
  else {
    uVar17 = uVar14 + 1;
    uVar9 = (uint)((ulonglong)uVar17 * 0x34);
    if ((int)((ulonglong)uVar17 * 0x34 >> 0x20) != 0) {
LAB_01334c3c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    uVar18 = uVar14 + 5;
    uVar11 = uVar9 + uVar18;
    if ((CARRY4(uVar9,uVar18)) || (0x7ffffffc < uVar11)) goto LAB_01334c3c;
    if (uVar11 == 0) {
      puVar3 = (undefined4 *)0x4;
    }
    else {
      if (uVar11 < 4) {
        local_38 = (undefined4 *)0x0;
        iVar20 = FUN_016d51b0(&local_38,4,uVar11);
        if (iVar20 != 0) goto LAB_013350e0;
        puVar3 = local_38;
      }
      else {
        puVar3 = (undefined4 *)thunk_FUN_016d4a50(uVar11);
      }
      if (puVar3 == (undefined4 *)0x0) {
LAB_013350e0:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar11);
      }
    }
    puVar3 = (undefined4 *)((int)puVar3 + uVar9);
    puVar5 = (uint *)*param_2;
    local_2c = 0;
    local_30 = uVar14;
    if (7 < uVar14) {
      local_30 = (uVar17 & 0xfffffff8) - (uVar17 >> 3);
    }
    local_38 = puVar3;
    local_34 = uVar14;
    FUN_016dd1aa(puVar3,puVar5,uVar18);
    local_3c = param_2[3];
    if (local_3c != 0) {
      puVar13 = puVar5 + 1;
      uVar14 = ~*puVar5 & 0x80808080;
      puVar19 = puVar5;
      iVar20 = local_3c;
      do {
        puVar12 = puVar13;
        if (uVar14 == 0) {
          do {
            puVar13 = puVar12 + 1;
            uVar14 = *puVar12;
            puVar19 = puVar19 + -0x34;
            puVar12 = puVar13;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar6 = 0;
        puVar12 = puVar19 + (short)-(short)((uint)LZCOUNT(uVar14 << 0x18 |
                                                          (uVar14 >> 8 & 0xff) << 0x10 |
                                                          (uVar14 >> 0x10 & 0xff) << 8 |
                                                          uVar14 >> 0x18) >> 3) * 0xd;
        uVar9 = puVar12[-10];
        bVar22 = 0x3ffffffe < uVar9;
        bVar21 = uVar9 == 0x3fffffff;
        puVar1 = puVar3;
        if (uVar9 < 0x40000000) {
          puVar1 = (undefined4 *)(uVar9 << 2);
          bVar22 = (undefined4 *)0x7ffffffb < puVar1;
          bVar21 = puVar1 == (undefined4 *)0x7ffffffc;
          local_58 = puVar3;
        }
        if (bVar22 && !bVar21) {
LAB_013350f4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar6,local_50);
        }
        uVar11 = puVar12[-0xd];
        uVar17 = puVar12[-0xb];
        local_60 = 0;
        if (puVar1 == (undefined4 *)0x0) {
          local_50 = (undefined4 *)0x4;
          local_54 = 0;
        }
        else {
          local_50 = (undefined4 *)thunk_FUN_016d4a50(puVar1);
          if (local_50 == (undefined4 *)0x0) {
            uVar6 = 4;
            local_50 = puVar1;
            goto LAB_013350f4;
          }
          local_54 = uVar9;
        }
        FUN_016dd1aa(local_50,uVar17,puVar1);
        uVar17 = puVar12[-7];
        bVar22 = 0x1ffffffe < uVar17;
        bVar21 = uVar17 == 0x1fffffff;
        if (uVar17 < 0x20000000) {
          puVar1 = (undefined4 *)(uVar17 << 3);
          bVar22 = (undefined4 *)0x7ffffff7 < puVar1;
          bVar21 = puVar1 == (undefined4 *)0x7ffffff8;
        }
        if (bVar22 && !bVar21) {
LAB_01335110:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_60,local_64);
        }
        uVar18 = puVar12[-8];
        local_80 = 0;
        if (puVar1 == (undefined4 *)0x0) {
          local_64 = (undefined4 *)0x8;
          local_60 = 0;
        }
        else {
          local_64 = (undefined4 *)thunk_FUN_016d4a50(puVar1);
          if (local_64 == (undefined4 *)0x0) {
            local_60 = 8;
            local_64 = puVar1;
            goto LAB_01335110;
          }
          local_60 = uVar17;
        }
        FUN_016dd1aa(local_64,uVar18,puVar1);
        uVar18 = puVar12[-4];
        bVar22 = 0x1ffffffe < uVar18;
        bVar21 = uVar18 == 0x1fffffff;
        if (uVar18 < 0x20000000) {
          puVar1 = (undefined4 *)(uVar18 << 3);
          bVar22 = (undefined4 *)0x7ffffff7 < puVar1;
          bVar21 = puVar1 == (undefined4 *)0x7ffffff8;
        }
        if (bVar22 && !bVar21) {
LAB_0133512c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_80,local_84);
        }
        uVar15 = puVar12[-5];
        local_90 = 0;
        if (puVar1 == (undefined4 *)0x0) {
          local_84 = (undefined4 *)0x8;
          local_80 = 0;
        }
        else {
          local_84 = (undefined4 *)thunk_FUN_016d4a50(puVar1);
          if (local_84 == (undefined4 *)0x0) {
            local_80 = 8;
            local_84 = puVar1;
            goto LAB_0133512c;
          }
          local_80 = uVar18;
        }
        FUN_016dd1aa(local_84,uVar15,puVar1);
        uVar15 = puVar12[-1];
        if (0xaaaaaaa < uVar15) {
LAB_0133514c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_90,local_8c);
        }
        iVar2 = uVar15 * 0xc;
        if (iVar2 == 0) {
          local_4c = 0;
          local_8c = 4;
        }
        else {
          local_90 = puVar12[-2];
          local_8c = thunk_FUN_016d4a50();
          if (local_8c == 0) {
            local_90 = 4;
            local_8c = iVar2;
            goto LAB_0133514c;
          }
          local_4c = uVar15;
          if (uVar15 != 0) {
            iVar8 = 0;
            uVar10 = 0;
            do {
              if (iVar2 == iVar8) break;
              iVar7 = *(int *)(local_90 + 8);
              if (iVar7 < 0) {
                uVar6 = 0;
LAB_013350d0:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar6,local_a0);
              }
              uVar6 = *(undefined4 *)(local_90 + 4);
              if (iVar7 == 0) {
                local_a0 = 1;
                iVar16 = 0;
              }
              else {
                local_a0 = thunk_FUN_016d4a50(iVar7);
                iVar16 = iVar7;
                if (local_a0 == 0) {
                  uVar6 = 1;
                  local_a0 = iVar7;
                  goto LAB_013350d0;
                }
              }
              local_90 = local_90 + 0xc;
              uVar10 = uVar10 + 1;
              FUN_016dd1aa(local_a0,uVar6);
              piVar4 = (int *)(local_8c + iVar8);
              *piVar4 = iVar16;
              iVar8 = iVar8 + 0xc;
              piVar4[1] = local_a0;
              piVar4[2] = iVar7;
            } while (uVar15 != uVar10);
          }
        }
        uVar14 = uVar14 - 1 & uVar14;
        iVar2 = (int)puVar5 - (int)puVar12 >> 2;
        iVar20 = iVar20 + -1;
        local_58[-1 - iVar2] = uVar15;
        local_58[-0xd - iVar2] = uVar11;
        local_58[-0xc - iVar2] = local_54;
        local_58[-0xb - iVar2] = local_50;
        local_58[-10 - iVar2] = uVar9;
        local_58[-9 - iVar2] = local_60;
        local_58[-4 - iVar2] = uVar18;
        local_58[-8 - iVar2] = local_64;
        local_58[-3 - iVar2] = local_4c;
        local_58[-7 - iVar2] = uVar17;
        local_58[-5 - iVar2] = local_84;
        local_58[-2 - iVar2] = local_8c;
        local_58[-6 - iVar2] = local_80;
        puVar3 = local_58;
      } while (iVar20 != 0);
    }
    local_48 = local_38;
    local_40 = param_2[2];
    local_44 = local_34;
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  param_1[3] = local_3c;
  return;
}

