// FUN_012cd8c4 @ 012cd8c4 size=1276 calls_out=9 calls_in=27
// strings: 

void FUN_012cd8c4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 ***pppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 **ppuVar8;
  uint uVar9;
  uint uVar10;
  undefined4 **ppuVar11;
  undefined4 ***pppuVar12;
  undefined4 **ppuVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 **ppuVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int **local_74;
  int local_70;
  int ***local_68;
  undefined4 *local_64;
  int ***local_60;
  undefined4 *local_5c;
  int ***local_58;
  undefined4 *local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 ***local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  local_74 = (int **)param_2[9];
  local_70 = param_2[10];
  uVar9 = param_2[0x10];
  pppuVar12 = (undefined4 ***)param_2[0xf];
  local_48 = (undefined4 ***)param_2[0xc];
  local_44 = param_2[0xd];
  local_38 = pppuVar12;
  local_34 = uVar9;
  if (uVar9 == 0) {
    local_84 = 0;
    local_88 = 1;
    local_80 = param_2[0x13];
    uVar5 = param_2[0x12];
    local_8c = local_84;
joined_r0x012cd964:
    local_84 = local_8c;
    if (local_80 != 0) goto LAB_012cd9d4;
LAB_012cd968:
    iVar1 = 1;
  }
  else {
    if (local_70 == 0) {
      if (local_44 == 0) {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,uVar9);
        }
        iVar1 = thunk_FUN_016d4a50(uVar9);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar9);
        }
        FUN_016dd1aa(iVar1,pppuVar12,uVar9);
        local_80 = param_2[0x13];
        uVar5 = param_2[0x12];
        local_8c = uVar9;
        local_88 = iVar1;
        goto joined_r0x012cd964;
      }
      local_68 = (int ***)&local_48;
LAB_012cd9ac:
      local_60 = (int ***)&local_38;
      puVar2 = &DAT_005908c8;
    }
    else {
      if (local_44 == 0) {
        local_68 = &local_74;
        goto LAB_012cd9ac;
      }
      local_58 = (int ***)&local_38;
      local_60 = (int ***)&local_48;
      puVar2 = &DAT_0056fba8;
      local_68 = &local_74;
      local_54 = &DAT_0157d360;
    }
    local_5c = &DAT_0157d360;
    local_64 = &DAT_0157d360;
    FUN_00600d2c(&local_8c,puVar2,&local_68);
    local_80 = param_2[0x13];
    uVar5 = param_2[0x12];
    if (local_80 == 0) goto LAB_012cd968;
LAB_012cd9d4:
    iVar1 = thunk_FUN_016d4a50(local_80);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_80);
    }
  }
  FUN_016dd1aa(iVar1,uVar5,local_80);
  local_7c = iVar1;
  local_78 = local_80;
  FUN_0150528c(&local_74,param_2[0x15],param_2[0x16]);
  uVar9 = param_2[1];
  uVar21 = param_2[4];
  uVar6 = param_2[5];
  uVar22 = param_2[6];
  uVar5 = param_2[7];
  if (uVar9 == 0) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_48 = (undefined4 ***)&DAT_005674cc;
  }
  else {
    uVar19 = uVar9 + 1;
    uVar17 = (uint)((ulonglong)uVar19 * 0x18);
    if ((int)((ulonglong)uVar19 * 0x18 >> 0x20) != 0) {
LAB_012cdab4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    uVar16 = uVar9 + 5;
    uVar10 = uVar16 + uVar17;
    if ((CARRY4(uVar16,uVar17)) || (0x7ffffffc < uVar10)) goto LAB_012cdab4;
    if (uVar10 == 0) {
      pppuVar12 = (undefined4 ***)0x4;
    }
    else {
      if (uVar10 < 4) {
        local_38 = (undefined4 ***)0x0;
        iVar1 = FUN_016d51b0(&local_38,4,uVar10);
        if (iVar1 != 0) goto LAB_012cddb8;
        pppuVar12 = local_38;
      }
      else {
        pppuVar12 = (undefined4 ***)thunk_FUN_016d4a50(uVar10);
      }
      if (pppuVar12 == (undefined4 ***)0x0) {
LAB_012cddb8:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar10);
      }
    }
    pppuVar12 = (undefined4 ***)((int)pppuVar12 + uVar17);
    local_2c = 0;
    puVar3 = (uint *)*param_2;
    local_30 = uVar9;
    if (7 < uVar9) {
      local_30 = (uVar19 & 0xfffffff8) - (uVar19 >> 3);
    }
    local_38 = pppuVar12;
    local_34 = uVar9;
    FUN_016dd1aa(pppuVar12,puVar3,uVar16);
    iVar1 = param_2[3];
    if (iVar1 != 0) {
      puVar15 = puVar3 + 1;
      uVar9 = ~*puVar3 & 0x80808080;
      iVar7 = iVar1;
      puVar20 = puVar3;
      do {
        puVar14 = puVar15;
        if (uVar9 == 0) {
          do {
            puVar15 = puVar14 + 1;
            uVar9 = *puVar14;
            puVar20 = puVar20 + -0x18;
            puVar14 = puVar15;
          } while ((uVar9 & 0x80808080) == 0x80808080);
          uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
        }
        ppuVar18 = (undefined4 **)0x1;
        ppuVar13 = (undefined4 **)0x1;
        puVar14 = puVar20 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) * -6;
        ppuVar8 = (undefined4 **)puVar14[-4];
        uVar17 = puVar14[-5];
        if ((ppuVar8 != (undefined4 **)0x0) &&
           (ppuVar13 = (undefined4 **)thunk_FUN_016d4a50(ppuVar8), ppuVar13 == (undefined4 **)0x0))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,ppuVar8);
        }
        FUN_016dd1aa(ppuVar13,uVar17,ppuVar8);
        ppuVar11 = (undefined4 **)puVar14[-1];
        uVar17 = puVar14[-2];
        if ((ppuVar11 != (undefined4 **)0x0) &&
           (ppuVar18 = (undefined4 **)thunk_FUN_016d4a50(ppuVar11,uVar17),
           ppuVar18 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,ppuVar11);
        }
        uVar9 = uVar9 - 1 & uVar9;
        iVar7 = iVar7 + -1;
        FUN_016dd1aa(ppuVar18,uVar17,ppuVar11);
        pppuVar4 = pppuVar12 + ((int)puVar3 - (int)puVar14 >> 3) * -2 + -6;
        *pppuVar4 = ppuVar8;
        pppuVar4[1] = ppuVar13;
        pppuVar4[2] = ppuVar8;
        pppuVar4[3] = ppuVar11;
        pppuVar4[4] = ppuVar18;
        pppuVar4[5] = ppuVar11;
      } while (iVar7 != 0);
    }
    local_48 = local_38;
    local_40 = param_2[2];
    local_44 = local_34;
    local_3c = iVar1;
  }
  local_68 = local_48;
  local_64 = (undefined4 *)local_44;
  local_60 = (int ***)local_40;
  local_5c = (undefined4 *)local_3c;
  local_58 = (int ***)uVar21;
  local_54 = (undefined4 *)uVar6;
  uStack_50 = uVar22;
  local_4c = uVar5;
  FUN_012c29f8(param_1,&local_8c,&local_80,&local_74,&local_68);
  return;
}

