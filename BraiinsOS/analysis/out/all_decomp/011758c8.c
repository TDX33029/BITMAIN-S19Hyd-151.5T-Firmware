// FUN_011758c8 @ 011758c8 size=2876 calls_out=19 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_011758c8(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined4 uVar30;
  int *piVar31;
  uint *puVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  undefined4 uVar38;
  code *pcVar39;
  uint uVar40;
  undefined4 uVar41;
  uint uVar42;
  undefined4 *puVar43;
  uint *puVar44;
  uint *puVar45;
  uint *puVar46;
  code *pcVar47;
  int iVar48;
  uint uVar49;
  undefined8 uVar50;
  int local_194;
  int local_18c;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
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
  int local_28;
  
  if (*param_2 != '\x05') {
    return 0x188a36400000001;
  }
  local_c0 = *(uint *)(param_2 + 4);
  local_bc = *(uint *)(param_2 + 8);
  local_a8 = *(undefined1 **)(param_2 + 0xc);
  if (local_c0 == 0) {
    local_a8 = (undefined1 *)0x0;
  }
  uVar10 = param_1[0x1c];
  puVar32 = (uint *)param_1[0x1b];
  iVar33 = param_1[0xc];
  iVar35 = *param_1;
  uVar11 = param_1[4];
  uVar12 = param_1[5];
  uVar13 = param_1[6];
  uVar14 = param_1[7];
  uVar15 = param_1[8];
  iVar16 = param_1[9];
  iVar17 = param_1[10];
  iVar18 = param_1[0xb];
  uVar19 = param_1[0x10];
  uVar20 = param_1[0x11];
  uVar21 = param_1[0x12];
  uVar22 = param_1[0x13];
  uVar23 = param_1[0x14];
  iVar24 = param_1[0x15];
  iVar25 = param_1[0x16];
  iVar26 = param_1[0x17];
  uVar27 = param_1[0xd];
  iVar28 = param_1[0xf];
  uVar29 = param_1[1];
  iVar4 = param_1[3];
  local_18c = 0;
  local_c8 = (uint)(local_c0 != 0);
  local_ec = 0;
  local_f0 = 4;
  local_f4 = 0;
  local_e0 = 0;
  local_e4 = 4;
  local_e8 = 0;
  local_b4 = 0;
  local_c4 = 0;
  local_194 = 4;
  local_b8 = local_c8;
  local_b0._0_4_ = local_c0;
  local_b0._4_4_ = local_bc;
LAB_01175a70:
  uVar50 = FUN_00f45584(&local_c8);
  uVar30 = (undefined4)((ulonglong)uVar50 >> 0x20);
  iVar8 = (int)uVar50;
  if (iVar8 != 0) {
    uVar41 = *(undefined4 *)(iVar8 + 4);
    iVar48 = *(int *)(iVar8 + 8);
    if (iVar4 != 0) {
      local_48 = uVar15;
      local_44 = iVar16;
      local_40 = iVar17;
      local_3c = iVar18;
      local_38 = uVar13;
      local_34 = uVar14;
      local_30._0_4_ = uVar11;
      local_30._4_4_ = uVar12;
      FUN_011df94c(&local_48,uVar41,iVar48);
      uVar34 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
               local_34 >> 0x18;
      lVar2 = (ulonglong)uVar34 * 0xb36a80d2;
      uVar36 = (uint)lVar2;
      uVar5 = local_38 ^ 0xff;
      uVar34 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar34 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar40 = local_30._4_4_ << 0x18 | (local_30._4_4_ >> 8 & 0xff) << 0x10 |
               (local_30._4_4_ >> 0x10 & 0xff) << 8 | local_30._4_4_ >> 0x18;
      uVar6 = (uVar34 * 0x1000000 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
              uVar34 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
      lVar2 = (ulonglong)uVar40 * (ulonglong)uVar6;
      uVar34 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
               uVar36 >> 0x18) ^
               local_34 * 0x2df45158 +
               uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
      uVar5 = uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
              uVar34 >> 0x18;
      lVar3 = (ulonglong)~(uint)local_30 * (ulonglong)uVar5;
      uVar36 = (uint)lVar3;
      uVar5 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18) * ~(uint)local_30 +
              uVar5 * ~local_30._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
      iVar37 = 0;
      uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18) ^ (uint)lVar2;
      uVar36 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
               uVar36 >> 0x18) ^
               uVar34 * uVar40 +
               uVar6 * ((uint)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                        ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18) +
               (int)((ulonglong)lVar2 >> 0x20);
      uVar34 = uVar36;
      if ((uVar6 & 0x20) != 0) {
        uVar34 = uVar5;
        uVar5 = uVar36;
      }
      uVar34 = uVar5 << (uVar6 & 0x1f) | (uVar34 >> 1) >> (~uVar6 & 0x1f);
      uVar5 = uVar34 >> 0x19;
      while( true ) {
        uVar34 = uVar29 & uVar34;
        uVar36 = *(uint *)(iVar35 + uVar34);
        uVar6 = uVar36 ^ uVar5 * 0x1010101;
        for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6
            ) {
          uVar40 = uVar34 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar29;
          iVar7 = iVar35 + -0x20 + uVar40 * -0x20;
          if (iVar48 == *(int *)(iVar7 + 8)) {
            uVar38 = *(undefined4 *)(iVar7 + 4);
            iVar7 = thunk_FUN_016dd50a(uVar41,uVar38,iVar48);
            if (iVar7 == 0) {
              local_d8 = 0x80000000;
              local_d4 = uVar38;
              local_d0 = iVar48;
              local_cc = param_3;
              uVar50 = FUN_011cf8a8(iVar35 + -0x14 + uVar40 * -0x20,uVar30,&local_d8,param_4,param_5
                                   );
              FUN_011590bc(&local_f4,(int)uVar50,(int)((ulonglong)uVar50 >> 0x20));
              if (iVar28 == 0) goto LAB_01175a70;
              uVar41 = *(undefined4 *)(iVar8 + 4);
              iVar8 = *(int *)(iVar8 + 8);
              local_48 = uVar23;
              local_44 = iVar24;
              local_40 = iVar25;
              local_3c = iVar26;
              local_38 = uVar21;
              local_34 = uVar22;
              local_30._0_4_ = uVar19;
              local_30._4_4_ = uVar20;
              FUN_011df94c(&local_48,uVar41,iVar8);
              uVar5 = local_38 ^ 0xff;
              uVar34 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 |
                       (local_34 >> 0x10 & 0xff) << 8 | local_34 >> 0x18;
              lVar2 = (ulonglong)uVar34 * 0xb36a80d2;
              uVar6 = (uint)lVar2;
              uVar36 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18) ^
                       local_34 * 0x2df45158 +
                       uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
              uVar40 = uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8
                       | uVar36 >> 0x18;
              uVar42 = local_30._4_4_ << 0x18 | (local_30._4_4_ >> 8 & 0xff) << 0x10 |
                       (local_30._4_4_ >> 0x10 & 0xff) << 8 | local_30._4_4_ >> 0x18;
              lVar3 = (ulonglong)~(uint)local_30 * (ulonglong)uVar40;
              uVar49 = (uint)lVar3;
              iVar48 = 0;
              uVar34 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                        (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                       uVar34 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
              uVar6 = (uVar34 * 0x1000000 | (uVar34 >> 8 & 0xff) << 0x10 |
                       (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) ^
                      (uint)((ulonglong)uVar5 * 0x2df45158);
              uVar5 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                      uVar6 >> 0x18) * ~(uint)local_30 +
                      uVar40 * ~local_30._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
              lVar2 = (ulonglong)uVar42 * (ulonglong)uVar6;
              uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                      | uVar5 >> 0x18) ^ (uint)lVar2;
              uVar36 = (uVar49 << 0x18 | (uVar49 >> 8 & 0xff) << 0x10 | (uVar49 >> 0x10 & 0xff) << 8
                       | uVar49 >> 0x18) ^
                       uVar36 * uVar42 +
                       uVar6 * ((uint)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                                ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18) +
                       (int)((ulonglong)lVar2 >> 0x20);
              uVar34 = uVar36;
              if ((uVar6 & 0x20) != 0) {
                uVar34 = uVar5;
                uVar5 = uVar36;
              }
              uVar34 = uVar5 << (uVar6 & 0x1f) | (uVar34 >> 1) >> (~uVar6 & 0x1f);
              uVar5 = uVar34 >> 0x19;
              goto LAB_01175e38;
            }
          }
        }
        if ((uVar36 & 0x80808080 & uVar36 << 1) != 0) break;
        iVar37 = iVar37 + 4;
        uVar34 = uVar34 + iVar37;
      }
    }
    if (uVar10 != 0) {
      uVar10 = *puVar32;
      iVar4 = 4;
      if (2 < uVar10) {
        iVar4 = uVar10 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01175f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar50 = (*(code *)(&DAT_01175f48 + *(int *)(&DAT_01175f48 + iVar4 * 4)))();
      return uVar50;
    }
    if (iVar48 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = thunk_FUN_016d4a50(iVar48);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar48);
      }
    }
    FUN_016dd1aa(iVar8,uVar41,iVar48);
    if (local_18c == local_e8) {
      FUN_015f37b0(&local_e8);
      local_194 = local_e4;
    }
    local_e0 = local_18c + 1;
    piVar31 = (int *)(local_194 + local_18c * 0xc);
    *piVar31 = iVar48;
    piVar31[1] = iVar8;
    piVar31[2] = iVar48;
    local_18c = local_e0;
    goto LAB_01175a70;
  }
  if (local_18c != 0) {
    piVar31 = (int *)param_1[0x18];
    do {
      iVar4 = *piVar31;
      bVar1 = (bool)hasExclusiveAccess(piVar31);
    } while (!bVar1);
    *piVar31 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_011764e4:
                    /* WARNING: Does not return */
      pcVar39 = (code *)software_udf(0xfdee,0x11764e4);
      (*pcVar39)();
    }
    iVar4 = param_1[0x19];
    if (param_4 == 0) {
      local_48 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar9 = *(int **)(param_4 + 0xc);
      do {
        iVar16 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = iVar16 + 1;
      if (iVar16 < 0) goto LAB_011764e4;
      uVar13 = *(uint *)(param_4 + 0xc);
      uVar14 = *(uint *)(param_4 + 0x10);
      uVar12 = (*(int **)(param_4 + 4))[1];
      uVar11 = param_1[0x19];
      uVar10 = 0;
      if (uVar12 <= uVar11) {
        iVar16 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar31 + 2,uVar12);
        uVar10 = uVar12;
        if (iVar16 != 0) {
          uVar10 = 0;
        }
      }
      local_30 = FUN_011e1508((int)(piVar31 + 2) + uVar10,uVar11 - uVar10);
      local_3c = 3;
      local_48 = 2;
      local_38 = uVar13;
      local_34 = uVar14;
    }
    local_58 = FUN_01238114(param_3);
    local_a4 = local_e8;
    iStack_a0 = local_e4;
    iStack_9c = local_e0;
    local_70 = 6;
    local_a8 = &DAT_8000000b;
    local_c8 = local_48;
    local_c4 = local_44;
    local_c0 = local_40;
    local_bc = local_3c;
    local_b8 = local_38;
    local_b4 = local_34;
    local_6c = param_2;
    local_50 = piVar31;
    local_4c = iVar4;
    local_b0 = local_30;
    iVar4 = thunk_FUN_016d4a50(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar4,&local_c8,0x80);
    uVar10 = local_ec;
    if (local_ec == local_f4) {
      FUN_011c4424(&local_f4);
    }
    local_ec = uVar10 + 1;
    *(int *)(local_f0 + uVar10 * 4) = iVar4;
  }
  local_bc = local_f0 + local_ec * 4;
  local_c0 = local_f4;
  local_c8 = local_f0;
  local_c4 = local_f0;
  puVar32 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar4 = local_e4;
  if (puVar32 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar32 = local_c8;
  puVar32[1] = local_c4;
  puVar32[2] = local_c0;
  puVar32[3] = local_bc;
  if (local_18c == 0) {
    puVar43 = (undefined4 *)(local_e4 + 4);
    for (iVar16 = local_e0; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (puVar43[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar43);
      }
      puVar43 = puVar43 + 3;
    }
    if (local_e8 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar32);
LAB_01175e38:
  uVar34 = uVar27 & uVar34;
  uVar36 = *(uint *)(iVar33 + uVar34);
  uVar6 = uVar36 ^ uVar5 * 0x1010101;
  uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
  while( true ) {
    if (uVar6 == 0) goto LAB_01175ec0;
    uVar40 = uVar34 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                     (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar27;
    iVar37 = iVar33 + -0x14 + uVar40 * -0x14;
    if ((iVar8 == *(int *)(iVar37 + 8)) &&
       (iVar37 = thunk_FUN_016dd50a(uVar41,*(undefined4 *)(iVar37 + 4),iVar8), iVar37 == 0)) break;
    uVar6 = uVar6 - 1 & uVar6;
  }
  iVar8 = iVar33 + uVar40 * -0x14;
  puVar44 = *(uint **)(iVar8 + -8);
  iVar8 = *(int *)(iVar8 + -4);
  puVar45 = puVar44;
  while (puVar45 != puVar44 + iVar8) {
    puVar46 = puVar45 + 1;
    uVar5 = *puVar45;
    if (uVar10 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,uVar10,&DAT_018890c0);
    }
    uVar50 = FUN_011cf8a8(puVar32 + uVar5 * 0x19 + 0x14,uVar30,&local_d8,param_4,param_5);
    puVar43 = (undefined4 *)((ulonglong)uVar50 >> 0x20);
    uVar41 = (undefined4)uVar50;
    pcVar39 = (code *)puVar43[3];
    pcVar47 = (code *)puVar43[4];
    while( true ) {
      iVar48 = (*pcVar39)(uVar41);
      uVar5 = local_ec;
      if (iVar48 == 0) break;
      local_28 = iVar48;
      if (local_ec == local_f4) {
        (*pcVar47)(&local_48,uVar41);
        iVar37 = local_48 + 1;
        if (local_48 == 0xffffffff) {
          iVar37 = -1;
        }
        FUN_011cf828(&local_f4,uVar5,iVar37,4,4);
      }
      *(int *)(local_f0 + uVar5 * 4) = iVar48;
      local_ec = uVar5 + 1;
    }
    if ((code *)*puVar43 != (code *)0x0) {
      (*(code *)*puVar43)(uVar41);
    }
    puVar45 = puVar46;
    if (puVar43[1] != 0) {
      thunk_FUN_016d3fb4(uVar41);
    }
  }
  goto LAB_01175a70;
LAB_01175ec0:
  if ((uVar36 & 0x80808080 & uVar36 << 1) != 0) goto LAB_01175a70;
  iVar48 = iVar48 + 4;
  uVar34 = uVar34 + iVar48;
  goto LAB_01175e38;
}

