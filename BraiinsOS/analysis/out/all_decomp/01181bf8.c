// FUN_01181bf8 @ 01181bf8 size=1868 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01181bf8(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  undefined8 uVar31;
  int local_13c;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined1 *local_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  undefined1 local_70;
  char *local_6c;
  undefined8 local_58;
  int *local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  
  if (*param_2 != '\x05') {
    return 0x188a36400000001;
  }
  local_c0 = *(uint *)(param_2 + 4);
  local_bc = *(uint *)(param_2 + 8);
  local_a8 = *(undefined1 **)(param_2 + 0xc);
  local_13c = 4;
  uVar10 = param_1[1];
  if (local_c0 == 0) {
    local_a8 = (undefined1 *)0x0;
  }
  local_e0 = 4;
  local_d4 = 4;
  iVar29 = *param_1;
  local_c8 = (uint)(local_c0 != 0);
  local_dc = 0;
  local_e4 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b4 = 0;
  local_c4 = 0;
  local_b8 = local_c8;
  local_b0._0_4_ = local_c0;
  local_b0._4_4_ = local_bc;
  if (param_1[3] == 0) {
    iVar29 = 4;
    iVar5 = 0;
    while( true ) {
      iVar22 = local_d0;
      iVar17 = FUN_00f45584(&local_c8);
      if (iVar17 == 0) break;
      uVar19 = *(undefined4 *)(iVar17 + 4);
      iVar17 = *(int *)(iVar17 + 8);
      if (iVar17 == 0) {
        iVar18 = 1;
      }
      else {
        iVar18 = thunk_FUN_016d4a50(iVar17);
        if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar17);
        }
      }
      FUN_016dd1aa(iVar18,uVar19,iVar17);
      if (iVar22 == local_d8) {
        FUN_015f37b0(&local_d8);
        iVar29 = local_d4;
      }
      local_d0 = iVar22 + 1;
      piVar11 = (int *)(iVar29 + iVar5);
      *piVar11 = iVar17;
      iVar5 = iVar5 + 0xc;
      piVar11[1] = iVar18;
      piVar11[2] = iVar17;
    }
  }
  else {
    uVar12 = param_1[4];
    uVar13 = param_1[5];
    uVar14 = param_1[6];
    uVar15 = param_1[7];
    uVar16 = param_1[8];
    iVar17 = param_1[9];
    iVar18 = param_1[10];
    iVar5 = param_1[0xb];
    iVar22 = local_d0;
LAB_01181d14:
    uVar31 = FUN_00f45584(&local_c8);
    iVar26 = (int)uVar31;
    if (iVar26 != 0) {
      uVar19 = *(undefined4 *)(iVar26 + 4);
      iVar26 = *(int *)(iVar26 + 8);
      local_48 = uVar16;
      local_44 = iVar17;
      local_40 = iVar18;
      local_3c = iVar5;
      local_38 = uVar14;
      local_34 = uVar15;
      local_30._0_4_ = uVar12;
      local_30._4_4_ = uVar13;
      FUN_011df94c(&local_48,uVar19,iVar26);
      uVar6 = local_38 ^ 0xff;
      uVar23 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
               local_34 >> 0x18;
      lVar3 = (ulonglong)uVar23 * 0xb36a80d2;
      uVar20 = (uint)lVar3;
      uVar28 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^
               local_34 * 0x2df45158 +
               uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
      uVar21 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
               uVar28 >> 0x18;
      lVar4 = (ulonglong)~(uint)local_30 * (ulonglong)uVar21;
      uVar30 = (uint)lVar4;
      uVar20 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar23 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      iVar27 = 0;
      uVar23 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
      uVar6 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
              uVar23 >> 0x18) * ~(uint)local_30 +
              uVar21 * ~local_30._4_4_ + (int)((ulonglong)lVar4 >> 0x20);
      uVar20 = local_30._4_4_ << 0x18 | (local_30._4_4_ >> 8 & 0xff) << 0x10 |
               (local_30._4_4_ >> 0x10 & 0xff) << 8 | local_30._4_4_ >> 0x18;
      lVar3 = (ulonglong)uVar20 * (ulonglong)uVar23;
      uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18) ^ (uint)lVar3;
      uVar21 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
               uVar30 >> 0x18) ^
               uVar28 * uVar20 +
               uVar23 * ((uint)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                         ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18) +
               (int)((ulonglong)lVar3 >> 0x20);
      uVar20 = uVar21;
      if ((uVar23 & 0x20) != 0) {
        uVar20 = uVar6;
        uVar6 = uVar21;
      }
      uVar20 = uVar6 << (uVar23 & 0x1f) | (uVar20 >> 1) >> (~uVar23 & 0x1f);
      uVar6 = uVar20 >> 0x19;
      while( true ) {
        uVar20 = uVar10 & uVar20;
        uVar21 = *(uint *)(iVar29 + uVar20);
        uVar23 = uVar21 ^ uVar6 * 0x1010101;
        for (uVar23 = ~uVar23 & 0x80808080 & uVar23 + 0xfefefeff; uVar23 != 0;
            uVar23 = uVar23 - 1 & uVar23) {
          uVar28 = uVar20 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                           (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3) &
                   uVar10;
          iVar7 = iVar29 + -0x20 + uVar28 * -0x20;
          if (iVar26 == *(int *)(iVar7 + 8)) {
            iVar25 = *(int *)(iVar7 + 4);
            iVar7 = thunk_FUN_016dd50a(uVar19,iVar25,iVar26);
            if (iVar7 == 0) {
              local_48 = 0x80000000;
              local_44 = iVar25;
              local_40 = iVar26;
              local_3c = param_3;
              uVar31 = FUN_011cf8a8(iVar29 + -0x14 + uVar28 * -0x20,(int)((ulonglong)uVar31 >> 0x20)
                                    ,&local_48,param_4,param_5);
              FUN_011590bc(&local_e4,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
              goto LAB_01181d14;
            }
          }
        }
        if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
        iVar27 = iVar27 + 4;
        uVar20 = uVar20 + iVar27;
      }
      if (iVar26 == 0) {
        iVar27 = 1;
      }
      else {
        iVar27 = thunk_FUN_016d4a50(iVar26);
        if (iVar27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar26);
        }
      }
      FUN_016dd1aa(iVar27,uVar19,iVar26);
      if (iVar22 == local_d8) {
        FUN_015f37b0(&local_d8);
        local_13c = local_d4;
      }
      local_d0 = iVar22 + 1;
      piVar11 = (int *)(local_13c + iVar22 * 0xc);
      *piVar11 = iVar26;
      piVar11[1] = iVar27;
      piVar11[2] = iVar26;
      iVar22 = local_d0;
      goto LAB_01181d14;
    }
  }
  if (iVar22 != 0) {
    piVar11 = (int *)param_1[0xc];
    do {
      iVar29 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar29 + 1;
    if (iVar29 < 0) {
LAB_0118234c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x118234c);
      (*pcVar1)();
    }
    iVar29 = param_1[0xd];
    if (param_4 == 0) {
      local_48 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar8 = *(int **)(param_4 + 0xc);
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0118234c;
      uVar15 = *(uint *)(param_4 + 0xc);
      uVar12 = *(uint *)(param_4 + 0x10);
      uVar13 = param_1[0xd];
      uVar10 = 0;
      uVar14 = (*(int **)(param_4 + 4))[1];
      if (uVar14 <= uVar13) {
        iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar11 + 2,uVar14);
        uVar10 = uVar14;
        if (iVar5 != 0) {
          uVar10 = 0;
        }
      }
      local_30 = FUN_011e1508((int)(piVar11 + 2) + uVar10,uVar13 - uVar10);
      local_3c = 3;
      local_48 = 2;
      local_38 = uVar15;
      local_34 = uVar12;
    }
    local_58 = FUN_01238114(param_3);
    local_a8 = &DAT_8000000b;
    local_a4 = local_d8;
    iStack_a0 = local_d4;
    iStack_9c = local_d0;
    local_70 = 6;
    local_c8 = local_48;
    local_c4 = local_44;
    local_c0 = local_40;
    local_bc = local_3c;
    local_b8 = local_38;
    local_b4 = local_34;
    local_6c = param_2;
    local_50 = piVar11;
    local_4c = iVar29;
    local_b0 = local_30;
    iVar29 = thunk_FUN_016d4a50(0x80);
    if (iVar29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar29,&local_c8,0x80);
    uVar10 = local_dc;
    if (local_dc == local_e4) {
      FUN_011c4424(&local_e4);
    }
    local_dc = uVar10 + 1;
    *(int *)(local_e0 + uVar10 * 4) = iVar29;
  }
  local_bc = local_e0 + local_dc * 4;
  local_c0 = local_e4;
  local_c8 = local_e0;
  local_c4 = local_e0;
  puVar9 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar29 = local_d4;
  if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar9 = local_c8;
  puVar9[1] = local_c4;
  puVar9[2] = local_c0;
  puVar9[3] = local_bc;
  if (iVar22 == 0) {
    puVar24 = (undefined4 *)(local_d4 + 4);
    for (iVar22 = local_d0; iVar22 != 0; iVar22 = iVar22 + -1) {
      if (puVar24[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar24);
      }
      puVar24 = puVar24 + 3;
    }
    if (local_d8 != 0) {
      thunk_FUN_016d3fb4(iVar29);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar9);
}

