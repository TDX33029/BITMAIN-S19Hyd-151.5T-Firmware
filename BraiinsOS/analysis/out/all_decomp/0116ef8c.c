// FUN_0116ef8c @ 0116ef8c size=2668 calls_out=17 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_0116ef8c(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
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
  int *piVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  undefined4 uVar39;
  code *pcVar40;
  int iVar41;
  undefined4 uVar42;
  undefined4 *puVar43;
  uint *puVar44;
  uint *puVar45;
  code *pcVar46;
  uint uVar47;
  undefined8 uVar48;
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
  uVar10 = param_1[0x1c];
  if (local_c0 == 0) {
    local_a8 = (undefined1 *)0x0;
  }
  piVar32 = (int *)param_1[0x1b];
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
  iVar33 = param_1[0xc];
  iVar35 = *param_1;
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
LAB_0116f134:
  uVar48 = FUN_00f45584(&local_c8);
  uVar30 = (undefined4)((ulonglong)uVar48 >> 0x20);
  iVar8 = (int)uVar48;
  if (iVar8 != 0) {
    uVar42 = *(undefined4 *)(iVar8 + 4);
    iVar41 = *(int *)(iVar8 + 8);
    if (iVar4 != 0) {
      local_48 = uVar15;
      local_44 = iVar16;
      local_40 = iVar17;
      local_3c = iVar18;
      local_38 = uVar13;
      local_34 = uVar14;
      local_30._0_4_ = uVar11;
      local_30._4_4_ = uVar12;
      FUN_011df94c(&local_48,uVar42,iVar41);
      uVar34 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
               local_34 >> 0x18;
      lVar2 = (ulonglong)uVar34 * 0xb36a80d2;
      uVar37 = (uint)lVar2;
      uVar5 = local_38 ^ 0xff;
      uVar34 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar34 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar36 = local_30._4_4_ << 0x18 | (local_30._4_4_ >> 8 & 0xff) << 0x10 |
               (local_30._4_4_ >> 0x10 & 0xff) << 8 | local_30._4_4_ >> 0x18;
      uVar6 = (uVar34 * 0x1000000 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
              uVar34 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
      uVar5 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
              uVar37 >> 0x18) ^
              local_34 * 0x2df45158 +
              uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
      lVar2 = (ulonglong)uVar36 * (ulonglong)uVar6;
      uVar37 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
      lVar3 = (ulonglong)~(uint)local_30 * (ulonglong)uVar37;
      uVar34 = (uint)lVar3;
      iVar38 = 0;
      uVar37 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18) * ~(uint)local_30 +
               uVar37 * ~local_30._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
      uVar36 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
               uVar34 >> 0x18) ^
               uVar5 * uVar36 +
               uVar6 * ((uint)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                        ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18) +
               (int)((ulonglong)lVar2 >> 0x20);
      uVar5 = (uVar37 * 0x1000000 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
              uVar37 >> 0x18) ^ (uint)lVar2;
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
          uVar37 = uVar34 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar29;
          iVar7 = iVar35 + -0x20 + uVar37 * -0x20;
          if (iVar41 == *(int *)(iVar7 + 8)) {
            uVar39 = *(undefined4 *)(iVar7 + 4);
            iVar7 = thunk_FUN_016dd50a(uVar42,uVar39,iVar41);
            if (iVar7 == 0) {
              local_d8 = 0x80000000;
              local_d4 = uVar39;
              local_d0 = iVar41;
              local_cc = param_3;
              uVar48 = FUN_011cf8a8(iVar35 + -0x14 + uVar37 * -0x20,uVar30,&local_d8,param_4,param_5
                                   );
              FUN_011590bc(&local_f4,(int)uVar48,(int)((ulonglong)uVar48 >> 0x20));
              if (iVar28 == 0) goto LAB_0116f134;
              uVar42 = *(undefined4 *)(iVar8 + 4);
              iVar8 = *(int *)(iVar8 + 8);
              local_48 = uVar23;
              local_44 = iVar24;
              local_40 = iVar25;
              local_3c = iVar26;
              local_38 = uVar21;
              local_34 = uVar22;
              local_30._0_4_ = uVar19;
              local_30._4_4_ = uVar20;
              FUN_011df94c(&local_48,uVar42,iVar8);
              uVar5 = local_38 ^ 0xff;
              uVar34 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 |
                       (local_34 >> 0x10 & 0xff) << 8 | local_34 >> 0x18;
              lVar2 = (ulonglong)uVar34 * 0xb36a80d2;
              uVar6 = (uint)lVar2;
              uVar37 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18) ^
                       local_34 * 0x2df45158 +
                       uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
              uVar36 = uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8
                       | uVar37 >> 0x18;
              lVar3 = (ulonglong)~(uint)local_30 * (ulonglong)uVar36;
              uVar47 = (uint)lVar3;
              iVar41 = 0;
              uVar34 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                        (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                       uVar34 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
              uVar6 = (uVar34 * 0x1000000 | (uVar34 >> 8 & 0xff) << 0x10 |
                       (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) ^
                      (uint)((ulonglong)uVar5 * 0x2df45158);
              uVar5 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                      uVar6 >> 0x18) * ~(uint)local_30 +
                      uVar36 * ~local_30._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
              uVar34 = local_30._4_4_ << 0x18 | (local_30._4_4_ >> 8 & 0xff) << 0x10 |
                       (local_30._4_4_ >> 0x10 & 0xff) << 8 | local_30._4_4_ >> 0x18;
              lVar2 = (ulonglong)uVar34 * (ulonglong)uVar6;
              uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                      | uVar5 >> 0x18) ^ (uint)lVar2;
              uVar36 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8
                       | uVar47 >> 0x18) ^
                       uVar37 * uVar34 +
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
              goto LAB_0116f504;
            }
          }
        }
        if ((uVar36 & 0x80808080 & uVar36 << 1) != 0) break;
        iVar38 = iVar38 + 4;
        uVar34 = uVar34 + iVar38;
      }
    }
    if (uVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0116f604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar48 = (*(code *)(&DAT_0116f608 + *(int *)(&DAT_0116f608 + *piVar32 * 4)))();
      return uVar48;
    }
    if (iVar41 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = thunk_FUN_016d4a50(iVar41);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar41);
      }
    }
    FUN_016dd1aa(iVar8,uVar42,iVar41);
    if (local_18c == local_e8) {
      FUN_015f37b0(&local_e8);
      local_194 = local_e4;
    }
    local_e0 = local_18c + 1;
    piVar31 = (int *)(local_194 + local_18c * 0xc);
    *piVar31 = iVar41;
    piVar31[1] = iVar8;
    piVar31[2] = iVar41;
    local_18c = local_e0;
    goto LAB_0116f134;
  }
  if (local_18c != 0) {
    piVar32 = (int *)param_1[0x18];
    do {
      iVar4 = *piVar32;
      bVar1 = (bool)hasExclusiveAccess(piVar32);
    } while (!bVar1);
    *piVar32 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_0116fba8:
                    /* WARNING: Does not return */
      pcVar40 = (code *)software_udf(0xfdee,0x116fba8);
      (*pcVar40)();
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
      piVar31 = *(int **)(param_4 + 0xc);
      do {
        iVar16 = *piVar31;
        bVar1 = (bool)hasExclusiveAccess(piVar31);
      } while (!bVar1);
      *piVar31 = iVar16 + 1;
      if (iVar16 < 0) goto LAB_0116fba8;
      uVar14 = *(uint *)(param_4 + 0xc);
      uVar13 = *(uint *)(param_4 + 0x10);
      uVar12 = param_1[0x19];
      uVar10 = 0;
      uVar11 = (*(int **)(param_4 + 4))[1];
      if (uVar11 <= uVar12) {
        iVar16 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar32 + 2,uVar11);
        uVar10 = uVar11;
        if (iVar16 != 0) {
          uVar10 = 0;
        }
      }
      local_30 = FUN_011e1508((int)(piVar32 + 2) + uVar10,uVar12 - uVar10);
      local_3c = 3;
      local_48 = 2;
      local_38 = uVar14;
      local_34 = uVar13;
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
    local_50 = piVar32;
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
  puVar9 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar4 = local_e4;
  if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar9 = local_c8;
  puVar9[1] = local_c4;
  puVar9[2] = local_c0;
  puVar9[3] = local_bc;
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
  return CONCAT44(&PTR_LAB_01889064,puVar9);
LAB_0116f504:
  uVar34 = uVar27 & uVar34;
  uVar36 = *(uint *)(iVar33 + uVar34);
  uVar6 = uVar36 ^ uVar5 * 0x1010101;
  uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
  while( true ) {
    if (uVar6 == 0) goto LAB_0116f58c;
    uVar37 = uVar34 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                     (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar27;
    iVar38 = iVar33 + -0x14 + uVar37 * -0x14;
    if ((iVar8 == *(int *)(iVar38 + 8)) &&
       (iVar38 = thunk_FUN_016dd50a(uVar42,*(undefined4 *)(iVar38 + 4),iVar8), iVar38 == 0)) break;
    uVar6 = uVar6 - 1 & uVar6;
  }
  iVar8 = iVar33 + uVar37 * -0x14;
  puVar44 = *(uint **)(iVar8 + -8);
  iVar8 = *(int *)(iVar8 + -4);
  puVar9 = puVar44;
  while (puVar9 != puVar44 + iVar8) {
    puVar45 = puVar9 + 1;
    uVar5 = *puVar9;
    if (uVar10 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,uVar10,&DAT_018890c0);
    }
    uVar48 = FUN_011cf8a8(piVar32 + uVar5 * 10 + 5,uVar30,&local_d8,param_4,param_5);
    puVar43 = (undefined4 *)((ulonglong)uVar48 >> 0x20);
    uVar42 = (undefined4)uVar48;
    pcVar40 = (code *)puVar43[3];
    pcVar46 = (code *)puVar43[4];
    while( true ) {
      iVar41 = (*pcVar40)(uVar42);
      uVar5 = local_ec;
      if (iVar41 == 0) break;
      local_28 = iVar41;
      if (local_ec == local_f4) {
        (*pcVar46)(&local_48,uVar42);
        iVar38 = local_48 + 1;
        if (local_48 == 0xffffffff) {
          iVar38 = -1;
        }
        FUN_011cf828(&local_f4,uVar5,iVar38,4,4);
      }
      *(int *)(local_f0 + uVar5 * 4) = iVar41;
      local_ec = uVar5 + 1;
    }
    if ((code *)*puVar43 != (code *)0x0) {
      (*(code *)*puVar43)(uVar42);
    }
    puVar9 = puVar45;
    if (puVar43[1] != 0) {
      thunk_FUN_016d3fb4(uVar42);
    }
  }
  goto LAB_0116f134;
LAB_0116f58c:
  if ((uVar36 & 0x80808080 & uVar36 << 1) != 0) goto LAB_0116f134;
  iVar41 = iVar41 + 4;
  uVar34 = uVar34 + iVar41;
  goto LAB_0116f504;
}

