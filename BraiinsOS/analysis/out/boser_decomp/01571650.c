// FUN_01571650 @ 01571650 size=1532 calls_out=13 calls_in=2
// strings: 

void FUN_01571650(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int **ppiVar12;
  undefined4 uVar11;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  int local_118;
  int local_110;
  int *local_d0;
  undefined1 local_cc;
  undefined2 local_cb;
  undefined1 local_c9;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int *local_80;
  int *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  piVar20 = *(int **)(param_2 + 0x54);
  do {
    iVar6 = *piVar20;
    bVar4 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar4);
  *piVar20 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_01571c54;
  local_48 = piVar20[3];
  local_44 = piVar20[4];
  local_40 = piVar20[5];
  iStack_3c = piVar20[6];
  iStack_38 = piVar20[7];
  local_34 = piVar20[8];
  iStack_30 = piVar20[9];
  iStack_2c = piVar20[10];
  iStack_28 = piVar20[0xb];
  FUN_0166bf5c(&local_80,*(undefined4 *)(param_2 + 0x50),&local_48,param_3,param_4);
  piVar13 = local_7c;
  if (local_80 == (int *)0x8000000a) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar20;
      bVar4 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar4);
    *piVar20 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar20);
    }
    iVar6 = *(int *)(param_2 + 0x5c);
    if (0x7ffffffe < *(uint *)(iVar6 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01cfbd70);
    }
    *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) + 1;
    if (*(int *)(iVar6 + 0x1c) == 0) {
      bVar4 = false;
    }
    else {
      iVar21 = piVar13[4];
      iVar16 = piVar13[3];
      uVar7 = FUN_01676700(iVar6 + 0x20,iVar16,iVar21);
      uVar18 = uVar7 >> 0x19;
      iVar17 = *(int *)(iVar6 + 0x10);
      uVar22 = *(uint *)(iVar6 + 0x14);
      local_118 = 0;
      while( true ) {
        uVar7 = uVar22 & uVar7;
        uVar8 = *(uint *)(iVar17 + uVar7);
        uVar9 = uVar8 ^ uVar18 * 0x1010101;
        uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
        while (uVar9 != 0) {
          uVar14 = uVar9 >> 8;
          uVar19 = uVar9 >> 0x10;
          uVar2 = uVar9 >> 0x18;
          uVar3 = uVar9 << 0x18;
          uVar9 = uVar9 - 1 & uVar9;
          iVar10 = *(int *)(iVar17 + -4 +
                           (uVar7 + ((uint)LZCOUNT(uVar3 | (uVar14 & 0xff) << 0x10 |
                                                   (uVar19 & 0xff) << 8 | uVar2) >> 3) & uVar22) *
                           -4);
          if (iVar21 == *(int *)(iVar10 + 0x10)) {
            iVar10 = thunk_FUN_01bed842(iVar16,*(undefined4 *)(iVar10 + 0xc),iVar21);
            bVar4 = true;
            if (iVar10 == 0) goto LAB_015718e0;
          }
        }
        bVar4 = false;
        if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
        local_118 = local_118 + 4;
        uVar7 = uVar7 + local_118;
      }
    }
LAB_015718e0:
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *piVar13;
      bVar5 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar5);
    *piVar13 = iVar16 + -1;
    if (iVar16 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar13);
    }
    *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
    if (bVar4) {
      FUN_01571584(&local_80,*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),param_3
                   ,param_4);
      piVar20 = local_7c;
      if (local_80 != (int *)0x8000000a) {
        ppiVar12 = &local_80;
        goto LAB_015718c4;
      }
      do {
        iVar6 = *local_7c;
        bVar4 = (bool)hasExclusiveAccess(local_7c);
      } while (!bVar4);
      *local_7c = iVar6 + 1;
      if (iVar6 < 0) {
LAB_01571c54:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1571c54);
        (*pcVar1)();
      }
      piVar13 = *(int **)(param_2 + 0x58);
      if (piVar13 != (int *)0x0) {
        do {
          iVar6 = *piVar13;
          bVar4 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar4);
        *piVar13 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_01571c54;
      }
      local_80 = local_7c;
      local_7c = piVar13;
      FUN_0156f6f0(&local_98,*(undefined4 *)(param_2 + 100),&local_80);
      if (local_98 != 0) {
        piVar13 = (int *)thunk_FUN_01be5118(0x14);
        if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *piVar13 = local_98;
        piVar13[1] = iStack_94;
        piVar13[2] = iStack_90;
        piVar13[3] = iStack_8c;
        piVar13[4] = iStack_88;
        param_1[1] = piVar13;
        param_1[2] = &DAT_01cfbd90;
        *param_1 = 0;
        FUN_01541e04(&local_80);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar20;
          bVar4 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar4);
        *piVar20 = iVar6 + -1;
LAB_01571bb0:
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01670d04(piVar20);
          return;
        }
        return;
      }
      iVar6 = *(int *)(param_2 + 0x6c);
      uVar18 = *(uint *)(iVar6 + 8);
      if (0x7ffffffe < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_0130701c(&DAT_01cfbdd0);
      }
      *(uint *)(iVar6 + 8) = uVar18 + 1;
      if (*(int *)(iVar6 + 0x1c) != 0) {
        uVar22 = FUN_01676068(iVar6 + 0x20,piVar20[3],piVar20[4]);
        uVar7 = uVar22 >> 0x19;
        iVar16 = *(int *)(iVar6 + 0x10);
        uVar8 = *(uint *)(iVar6 + 0x14);
        local_110 = 0;
        while( true ) {
          uVar22 = uVar8 & uVar22;
          uVar9 = *(uint *)(iVar16 + uVar22);
          uVar14 = uVar9 ^ uVar7 * 0x1010101;
          uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
          while (uVar14 != 0) {
            uVar19 = uVar22 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                     uVar8;
            iVar17 = FUN_01670d54(piVar20,*(undefined4 *)(iVar16 + -8 + uVar19 * -8));
            uVar14 = uVar14 - 1 & uVar14;
            if (iVar17 != 0) {
              piVar13 = *(int **)(iVar16 + uVar19 * -8 + -4);
              do {
                iVar16 = *piVar13;
                bVar4 = (bool)hasExclusiveAccess(piVar13);
              } while (!bVar4);
              *piVar13 = iVar16 + 1;
              if (iVar16 < 0) goto LAB_01571c54;
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
              puVar15 = (undefined4 *)thunk_FUN_01be5118(4);
              if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,4);
              }
              *puVar15 = piVar13;
              param_1[1] = puVar15;
              param_1[2] = &DAT_01cfbdb0;
              *param_1 = 0;
              FUN_01541e04(&local_80);
              DataMemoryBarrier(0xb);
              do {
                iVar6 = *piVar20;
                bVar4 = (bool)hasExclusiveAccess(piVar20);
              } while (!bVar4);
              *piVar20 = iVar6 + -1;
              goto LAB_01571bb0;
            }
          }
          if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
          local_110 = local_110 + 4;
          uVar22 = uVar22 + local_110;
        }
      }
      *(uint *)(iVar6 + 8) = uVar18;
      FUN_01541e04(&local_80);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar20;
        bVar4 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar4);
      *piVar20 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01670d04(piVar20);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar20;
      bVar4 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar4);
    *piVar20 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar20);
    }
    local_cc = SUB41(local_7c,0);
    local_c9 = (undefined1)((uint)local_7c >> 0x18);
    local_cb = (undefined2)((uint)local_7c >> 8);
    ppiVar12 = &local_d0;
    local_d0 = local_80;
    local_c8 = local_78;
    uStack_c4 = uStack_74;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    uStack_b8 = uStack_68;
    uStack_b4 = uStack_64;
    local_b0 = local_60;
    uStack_ac = uStack_5c;
    uStack_a8 = uStack_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
LAB_015718c4:
    uVar11 = FUN_0156aac8(ppiVar12);
    *param_1 = 1;
    param_1[1] = uVar11;
  }
  return;
}

