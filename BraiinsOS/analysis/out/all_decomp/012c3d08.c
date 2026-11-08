// FUN_012c3d08 @ 012c3d08 size=1596 calls_out=8 calls_in=3
// strings: 

void FUN_012c3d08(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  code *pcVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  undefined4 *puVar22;
  undefined4 *puVar21;
  int iVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 *puVar26;
  int iVar27;
  int *piVar28;
  bool bVar29;
  int local_64;
  uint local_5c;
  uint local_58;
  int local_54;
  int *local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int *local_2c;
  code *local_28;
  
  piVar14 = (int *)(param_2 + 8);
  if (*piVar14 == 0) {
    bVar29 = (bool)hasExclusiveAccess(piVar14);
    if (bVar29) {
      *piVar14 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_012c3d50;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(piVar14);
LAB_012c3d50:
  FUN_0128236c(piVar14);
  FUN_0128236c((uint)piVar14 | 1);
  iVar27 = 0;
  pcVar15 = (code *)param_4[3];
  local_4c = 0;
  local_50 = (int *)&DAT_00000008;
  local_54 = 0;
  (*pcVar15)(&local_38,param_3);
  puVar26 = local_34;
  iVar23 = local_38;
  if (local_30 == 0) {
    local_58 = 0;
    local_5c = 0;
  }
  else {
    puVar24 = local_34 + local_30;
    piVar20 = (int *)&DAT_00000008;
    iVar27 = 0;
    local_58 = 0;
    local_5c = 0;
    puVar21 = local_34;
    do {
      puVar22 = puVar21 + 1;
      puVar16 = (uint *)*puVar21;
      iVar7 = 0;
      do {
        if (iVar27 * 8 == iVar7) {
          uVar1 = *puVar16;
          uVar13 = puVar16[1];
          if (iVar27 == local_54) {
            FUN_012925c4(&local_54);
            piVar20 = local_50;
          }
          iVar7 = iVar27 * 2;
          piVar20[iVar7] = uVar1;
          iVar27 = iVar27 + 1;
          uVar1 = *puVar16;
          (piVar20 + iVar7)[1] = uVar13;
          bVar29 = CARRY4(uVar1,local_58);
          local_58 = uVar1 + local_58;
          local_5c = puVar16[1] + local_5c + (uint)bVar29;
          local_4c = iVar27;
          break;
        }
        puVar12 = (uint *)((int)piVar20 + iVar7);
        iVar7 = iVar7 + 8;
      } while (*puVar12 != *puVar16 || puVar12[1] != puVar16[1]);
      puVar21 = puVar22;
    } while (puVar22 != puVar24);
  }
  if (iVar23 != 0) {
    thunk_FUN_016d3fb4(puVar26);
  }
  uVar1 = FUN_00c5abb0(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                       *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),local_58,
                       local_5c);
  uVar13 = uVar1 >> 0x19;
  iVar23 = *(int *)(param_2 + 0x10);
  uVar25 = *(uint *)(param_2 + 0x14);
  local_64 = 0;
  do {
    uVar1 = uVar25 & uVar1;
    uVar2 = *(uint *)(iVar23 + uVar1);
    uVar3 = uVar2 ^ uVar13 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar17 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar25;
      puVar16 = (uint *)(iVar23 + -0x10 + uVar17 * -0x10);
      uVar3 = uVar3 - 1 & uVar3;
      if (local_58 == *puVar16 && local_5c == puVar16[1]) {
        puVar16 = (uint *)(iVar23 + (uVar17 - 4 & uVar25));
        uVar13 = *puVar16;
        uVar1 = *(uint *)(iVar23 + uVar17) & 0x80808080 & *(uint *)(iVar23 + uVar17) << 1;
        iVar7 = iVar23 + uVar17 * -0x10;
        uVar11 = 0x80;
        if (((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8
                           | uVar1 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar13 & 0x80808080 & uVar13 << 1) >> 3) < 4) {
          *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
          uVar11 = 0xff;
        }
        *(undefined1 *)(iVar23 + uVar17) = uVar11;
        iVar23 = *(int *)(param_2 + 0x1c);
        *(undefined1 *)(puVar16 + 1) = uVar11;
        iVar18 = *(int *)(iVar7 + -8);
        puVar26 = *(undefined4 **)(iVar7 + -4);
        *(int *)(param_2 + 0x1c) = iVar23 + -1;
        if (iVar18 != 0) {
          pcVar15 = (code *)*puVar26;
          if (pcVar15 != (code *)0x0) {
            (*pcVar15)(iVar18);
          }
          if (puVar26[1] != 0) {
            thunk_FUN_016d3fb4(iVar18);
          }
          piVar20 = local_50;
          iVar23 = local_54;
          if (iVar27 != 0) {
            piVar4 = local_50 + iVar27 * 2;
            uVar8 = *(undefined4 *)(param_2 + 0x60);
            uVar9 = *(undefined4 *)(param_2 + 100);
            uVar10 = *(undefined4 *)(param_2 + 0x68);
            uVar5 = *(undefined4 *)(param_2 + 0x6c);
            piVar28 = local_50;
            do {
              iVar27 = piVar28[1];
              iVar19 = *piVar28;
              uVar1 = FUN_00c5abb0(uVar8,uVar9,uVar10,uVar5,iVar19,iVar27);
              uVar13 = uVar1 >> 0x19;
              uVar25 = *(uint *)(param_2 + 0x54);
              iVar7 = *(int *)(param_2 + 0x50);
              iVar18 = 0;
              while( true ) {
                uVar1 = uVar25 & uVar1;
                uVar2 = *(uint *)(iVar7 + uVar1);
                uVar3 = uVar2 ^ uVar13 * 0x1010101;
                uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
                while (uVar3 != 0) {
                  uVar17 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                                  (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3)
                           & uVar25;
                  piVar6 = (int *)(iVar7 + -8 + uVar17 * -8);
                  uVar3 = uVar3 - 1 & uVar3;
                  if (iVar19 == *piVar6 && iVar27 == piVar6[1]) {
                    puVar16 = (uint *)(iVar7 + (uVar17 - 4 & uVar25));
                    uVar13 = *puVar16;
                    uVar1 = *(uint *)(iVar7 + uVar17) & 0x80808080 & *(uint *)(iVar7 + uVar17) << 1;
                    uVar11 = 0x80;
                    if (((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                       (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18) >> 3) +
                        ((uint)LZCOUNT(uVar13 & 0x80808080 & uVar13 << 1) >> 3) < 4) {
                      *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
                      uVar11 = 0xff;
                    }
                    *(undefined1 *)(iVar7 + uVar17) = uVar11;
                    iVar27 = *(int *)(param_2 + 0x5c);
                    *(undefined1 *)(puVar16 + 1) = uVar11;
                    *(int *)(param_2 + 0x5c) = iVar27 + -1;
                    goto LAB_012c41e4;
                  }
                }
                if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) break;
                iVar18 = iVar18 + 4;
                uVar1 = uVar1 + iVar18;
              }
LAB_012c41e4:
              piVar28 = piVar28 + 2;
            } while (piVar28 != piVar4);
          }
          if (iVar23 != 0) {
            thunk_FUN_016d3fb4(piVar20);
          }
          *param_1 = 5;
          if ((code *)*param_4 != (code *)0x0) {
            (*(code *)*param_4)(param_3);
          }
          goto LAB_012c42d8;
        }
        goto LAB_012c423c;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) {
LAB_012c423c:
      (*pcVar15)(&local_38,param_3);
      local_28 = FUN_012b7474;
      local_2c = &local_38;
      FUN_00600d2c(&local_48,&DAT_005974ac,&local_2c);
      if (local_38 != 0) {
        thunk_FUN_016d3fb4(local_34);
      }
      *param_1 = 2;
      param_1[1] = local_48;
      param_1[2] = uStack_44;
      param_1[3] = uStack_40;
      if (local_54 != 0) {
        thunk_FUN_016d3fb4(local_50);
      }
      if ((code *)*param_4 != (code *)0x0) {
        (*(code *)*param_4)(param_3);
      }
LAB_012c42d8:
      if (param_4[1] != 0) {
        thunk_FUN_016d3fb4(param_3);
      }
      FUN_01282570(piVar14);
      FUN_01282570((uint)piVar14 | 1);
      if (*piVar14 == 8) {
        DataMemoryBarrier(0xb);
        do {
          bVar29 = (bool)hasExclusiveAccess(piVar14);
          if (bVar29) {
            *piVar14 = 0;
            return;
          }
        } while (*piVar14 == 8);
      }
      ClearExclusiveLocal();
      FUN_0127db4c(piVar14);
      return;
    }
    local_64 = local_64 + 4;
    uVar1 = uVar1 + local_64;
  } while( true );
}

