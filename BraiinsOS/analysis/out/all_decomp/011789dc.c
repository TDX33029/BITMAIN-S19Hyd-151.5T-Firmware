// FUN_011789dc @ 011789dc size=2336 calls_out=19 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_011789dc(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  int *piVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  code *pcVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  undefined4 *puVar35;
  undefined4 uVar36;
  uint *puVar37;
  uint *puVar38;
  uint *puVar39;
  code *pcVar40;
  uint uVar41;
  undefined8 uVar42;
  int local_164;
  int local_130;
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
  uVar9 = param_1[0x13];
  puVar23 = (uint *)param_1[0x12];
  iVar24 = param_1[0x10];
  iVar25 = *param_1;
  uVar10 = param_1[4];
  uVar11 = param_1[5];
  uVar12 = param_1[6];
  uVar13 = param_1[7];
  uVar14 = param_1[8];
  iVar15 = param_1[9];
  iVar16 = param_1[10];
  iVar17 = param_1[0xb];
  iVar18 = param_1[0xf];
  uVar19 = param_1[1];
  iVar4 = param_1[3];
  local_130 = 0;
  local_c8 = (uint)(local_c0 != 0);
  local_ec = 0;
  local_f0 = 4;
  local_f4 = 0;
  local_e0 = 0;
  local_e4 = 4;
  local_e8 = 0;
  local_b4 = 0;
  local_c4 = 0;
  local_164 = 4;
  local_b8 = local_c8;
  local_b0._0_4_ = local_c0;
  local_b0._4_4_ = local_bc;
LAB_01178b34:
  uVar42 = FUN_00f45584(&local_c8);
  uVar20 = (undefined4)((ulonglong)uVar42 >> 0x20);
  iVar33 = (int)uVar42;
  if (iVar33 != 0) {
    uVar36 = *(undefined4 *)(iVar33 + 4);
    iVar30 = *(int *)(iVar33 + 8);
    if (iVar24 != 0) {
      iVar7 = iVar24 << 5;
      iVar32 = iVar18;
      do {
        if (*(int *)(iVar32 + 8) == iVar30) {
          uVar28 = *(undefined4 *)(iVar32 + 4);
          iVar5 = thunk_FUN_016dd50a(uVar28,uVar36,iVar30);
          if (iVar5 == 0) {
            local_d8 = 0x80000000;
            local_d4 = uVar28;
            local_d0 = iVar30;
            local_cc = param_3;
            uVar42 = FUN_011cf8a8(iVar32 + 0xc,uVar20,&local_d8,param_4,param_5);
            FUN_011590bc(&local_f4,(int)uVar42,(int)((ulonglong)uVar42 >> 0x20));
            if (iVar4 == 0) goto LAB_01178b34;
            uVar36 = *(undefined4 *)(iVar33 + 4);
            iVar33 = *(int *)(iVar33 + 8);
            local_48 = uVar14;
            local_44 = iVar15;
            local_40 = iVar16;
            local_3c = iVar17;
            local_38 = uVar12;
            local_34 = uVar13;
            local_30._0_4_ = uVar10;
            local_30._4_4_ = uVar11;
            FUN_011df94c(&local_48,uVar36,iVar33);
            uVar6 = local_38 ^ 0xff;
            uVar34 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 |
                     (local_34 >> 0x10 & 0xff) << 8 | local_34 >> 0x18;
            lVar2 = (ulonglong)uVar34 * 0xb36a80d2;
            uVar26 = (uint)lVar2;
            uVar21 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                     uVar26 >> 0x18) ^
                     local_34 * 0x2df45158 +
                     uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
            uVar31 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                     uVar21 >> 0x18;
            uVar27 = local_30._4_4_ << 0x18 | (local_30._4_4_ >> 8 & 0xff) << 0x10 |
                     (local_30._4_4_ >> 0x10 & 0xff) << 8 | local_30._4_4_ >> 0x18;
            lVar3 = (ulonglong)~(uint)local_30 * (ulonglong)uVar31;
            uVar41 = (uint)lVar3;
            uVar26 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar34 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
            iVar30 = 0;
            uVar34 = (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 |
                      (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) ^
                     (uint)((ulonglong)uVar6 * 0x2df45158);
            uVar6 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
                    uVar34 >> 0x18) * ~(uint)local_30 +
                    uVar31 * ~local_30._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
            lVar2 = (ulonglong)uVar27 * (ulonglong)uVar34;
            uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                    uVar6 >> 0x18) ^ (uint)lVar2;
            uVar21 = (uVar41 << 0x18 | (uVar41 >> 8 & 0xff) << 0x10 | (uVar41 >> 0x10 & 0xff) << 8 |
                     uVar41 >> 0x18) ^
                     uVar21 * uVar27 +
                     uVar34 * ((uint)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                               ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18) +
                     (int)((ulonglong)lVar2 >> 0x20);
            uVar26 = uVar21;
            if ((uVar34 & 0x20) != 0) {
              uVar26 = uVar6;
              uVar6 = uVar21;
            }
            uVar26 = uVar6 << (uVar34 & 0x1f) | (uVar26 >> 1) >> (~uVar34 & 0x1f);
            uVar6 = uVar26 >> 0x19;
            goto LAB_01178d3c;
          }
        }
        iVar32 = iVar32 + 0x20;
        iVar7 = iVar7 + -0x20;
      } while (iVar7 != 0);
    }
    if (uVar9 != 0) {
      uVar9 = *puVar23;
      iVar4 = 4;
      if (2 < uVar9) {
        iVar4 = uVar9 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01178e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar42 = (*(code *)(&DAT_01178e50 + *(int *)(&DAT_01178e50 + iVar4 * 4)))();
      return uVar42;
    }
    if (iVar30 == 0) {
      iVar33 = 1;
    }
    else {
      iVar33 = thunk_FUN_016d4a50(iVar30);
      if (iVar33 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar30);
      }
    }
    FUN_016dd1aa(iVar33,uVar36,iVar30);
    if (local_130 == local_e8) {
      FUN_015f37b0(&local_e8);
      local_164 = local_e4;
    }
    local_e0 = local_130 + 1;
    piVar22 = (int *)(local_164 + local_130 * 0xc);
    *piVar22 = iVar30;
    piVar22[1] = iVar33;
    piVar22[2] = iVar30;
    local_130 = local_e0;
    goto LAB_01178b34;
  }
  if (local_130 != 0) {
    piVar22 = (int *)param_1[0xc];
    do {
      iVar4 = *piVar22;
      bVar1 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar1);
    *piVar22 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_011793dc:
                    /* WARNING: Does not return */
      pcVar29 = (code *)software_udf(0xfdee,0x11793dc);
      (*pcVar29)();
    }
    iVar4 = param_1[0xd];
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
        iVar15 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar15 + 1;
      if (iVar15 < 0) goto LAB_011793dc;
      uVar12 = *(uint *)(param_4 + 0xc);
      uVar9 = 0;
      uVar13 = *(uint *)(param_4 + 0x10);
      uVar10 = param_1[0xd];
      uVar11 = (*(int **)(param_4 + 4))[1];
      if (uVar11 <= uVar10) {
        iVar15 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar22 + 2,uVar11);
        uVar9 = uVar11;
        if (iVar15 != 0) {
          uVar9 = 0;
        }
      }
      local_30 = FUN_011e1508((int)(piVar22 + 2) + uVar9,uVar10 - uVar9);
      local_3c = 3;
      local_48 = 2;
      local_38 = uVar12;
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
    local_50 = piVar22;
    local_4c = iVar4;
    local_b0 = local_30;
    iVar4 = thunk_FUN_016d4a50(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar4,&local_c8,0x80);
    uVar9 = local_ec;
    if (local_ec == local_f4) {
      FUN_011c4424(&local_f4);
    }
    local_ec = uVar9 + 1;
    *(int *)(local_f0 + uVar9 * 4) = iVar4;
  }
  local_bc = local_f0 + local_ec * 4;
  local_c0 = local_f4;
  local_c8 = local_f0;
  local_c4 = local_f0;
  puVar23 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar4 = local_e4;
  if (puVar23 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar23 = local_c8;
  puVar23[1] = local_c4;
  puVar23[2] = local_c0;
  puVar23[3] = local_bc;
  if (local_130 == 0) {
    puVar35 = (undefined4 *)(local_e4 + 4);
    for (iVar15 = local_e0; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar35[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar35);
      }
      puVar35 = puVar35 + 3;
    }
    if (local_e8 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar23);
LAB_01178d3c:
  uVar26 = uVar19 & uVar26;
  uVar21 = *(uint *)(iVar25 + uVar26);
  uVar34 = uVar21 ^ uVar6 * 0x1010101;
  uVar34 = ~uVar34 & 0x80808080 & uVar34 + 0xfefefeff;
  while( true ) {
    if (uVar34 == 0) goto LAB_01178dc8;
    uVar27 = uVar26 + ((uint)LZCOUNT(uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 |
                                     (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) >> 3) & uVar19;
    iVar7 = iVar25 + -0x14 + uVar27 * -0x14;
    if ((iVar33 == *(int *)(iVar7 + 8)) &&
       (iVar7 = thunk_FUN_016dd50a(uVar36,*(undefined4 *)(iVar7 + 4),iVar33), iVar7 == 0)) break;
    uVar34 = uVar34 - 1 & uVar34;
  }
  iVar33 = iVar25 + uVar27 * -0x14;
  puVar37 = *(uint **)(iVar33 + -8);
  iVar33 = *(int *)(iVar33 + -4);
  puVar38 = puVar37;
  while (puVar38 != puVar37 + iVar33) {
    puVar39 = puVar38 + 1;
    uVar6 = *puVar38;
    if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,uVar9,&DAT_018890c0);
    }
    uVar42 = FUN_011cf8a8(puVar23 + uVar6 * 0x19 + 0x14,uVar20,&local_d8,param_4,param_5);
    puVar35 = (undefined4 *)((ulonglong)uVar42 >> 0x20);
    uVar36 = (undefined4)uVar42;
    pcVar29 = (code *)puVar35[3];
    pcVar40 = (code *)puVar35[4];
    while( true ) {
      iVar30 = (*pcVar29)(uVar36);
      uVar6 = local_ec;
      if (iVar30 == 0) break;
      local_28 = iVar30;
      if (local_ec == local_f4) {
        (*pcVar40)(&local_48,uVar36);
        iVar7 = local_48 + 1;
        if (local_48 == 0xffffffff) {
          iVar7 = -1;
        }
        FUN_011cf828(&local_f4,uVar6,iVar7,4,4);
      }
      *(int *)(local_f0 + uVar6 * 4) = iVar30;
      local_ec = uVar6 + 1;
    }
    if ((code *)*puVar35 != (code *)0x0) {
      (*(code *)*puVar35)(uVar36);
    }
    puVar38 = puVar39;
    if (puVar35[1] != 0) {
      thunk_FUN_016d3fb4(uVar36);
    }
  }
  goto LAB_01178b34;
LAB_01178dc8:
  if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) goto LAB_01178b34;
  iVar30 = iVar30 + 4;
  uVar26 = uVar26 + iVar30;
  goto LAB_01178d3c;
}

