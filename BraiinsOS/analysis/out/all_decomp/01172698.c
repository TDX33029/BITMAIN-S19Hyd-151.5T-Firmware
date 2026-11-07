// FUN_01172698 @ 01172698 size=2128 calls_out=17 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01172698(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
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
  int *piVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  code *pcVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined4 *puVar33;
  undefined4 uVar34;
  uint *puVar35;
  uint *puVar36;
  code *pcVar37;
  uint uVar38;
  uint uVar39;
  undefined8 uVar40;
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
  uVar9 = param_1[0x13];
  if (local_c0 == 0) {
    local_a8 = (undefined1 *)0x0;
  }
  piVar22 = (int *)param_1[0x12];
  uVar10 = param_1[4];
  uVar11 = param_1[5];
  uVar12 = param_1[6];
  uVar13 = param_1[7];
  uVar14 = param_1[8];
  iVar15 = param_1[9];
  iVar16 = param_1[10];
  iVar17 = param_1[0xb];
  iVar18 = param_1[0xf];
  iVar23 = param_1[0x10];
  iVar24 = *param_1;
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
LAB_011727f0:
  uVar40 = FUN_00f45584(&local_c8);
  uVar20 = (undefined4)((ulonglong)uVar40 >> 0x20);
  iVar31 = (int)uVar40;
  if (iVar31 != 0) {
    uVar34 = *(undefined4 *)(iVar31 + 4);
    iVar28 = *(int *)(iVar31 + 8);
    if (iVar23 != 0) {
      iVar7 = iVar23 << 5;
      iVar30 = iVar18;
      do {
        if (*(int *)(iVar30 + 8) == iVar28) {
          uVar26 = *(undefined4 *)(iVar30 + 4);
          iVar5 = thunk_FUN_016dd50a(uVar26,uVar34,iVar28);
          if (iVar5 == 0) {
            local_d8 = 0x80000000;
            local_d4 = uVar26;
            local_d0 = iVar28;
            local_cc = param_3;
            uVar40 = FUN_011cf8a8(iVar30 + 0xc,uVar20,&local_d8,param_4,param_5);
            FUN_011590bc(&local_f4,(int)uVar40,(int)((ulonglong)uVar40 >> 0x20));
            if (iVar4 == 0) goto LAB_011727f0;
            uVar34 = *(undefined4 *)(iVar31 + 4);
            iVar31 = *(int *)(iVar31 + 8);
            local_48 = uVar14;
            local_44 = iVar15;
            local_40 = iVar16;
            local_3c = iVar17;
            local_38 = uVar12;
            local_34 = uVar13;
            local_30._0_4_ = uVar10;
            local_30._4_4_ = uVar11;
            FUN_011df94c(&local_48,uVar34,iVar31);
            uVar6 = local_38 ^ 0xff;
            uVar32 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 |
                     (local_34 >> 0x10 & 0xff) << 8 | local_34 >> 0x18;
            lVar2 = (ulonglong)uVar32 * 0xb36a80d2;
            uVar25 = (uint)lVar2;
            uVar38 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                     uVar25 >> 0x18) ^
                     local_34 * 0x2df45158 +
                     uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
            uVar29 = uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
                     uVar38 >> 0x18;
            lVar3 = (ulonglong)~(uint)local_30 * (ulonglong)uVar29;
            uVar39 = (uint)lVar3;
            uVar25 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar32 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
            iVar28 = 0;
            uVar32 = (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 |
                      (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) ^
                     (uint)((ulonglong)uVar6 * 0x2df45158);
            uVar6 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
                    uVar32 >> 0x18) * ~(uint)local_30 +
                    uVar29 * ~local_30._4_4_ + (int)((ulonglong)lVar3 >> 0x20);
            uVar25 = local_30._4_4_ << 0x18 | (local_30._4_4_ >> 8 & 0xff) << 0x10 |
                     (local_30._4_4_ >> 0x10 & 0xff) << 8 | local_30._4_4_ >> 0x18;
            lVar2 = (ulonglong)uVar25 * (ulonglong)uVar32;
            uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                    uVar6 >> 0x18) ^ (uint)lVar2;
            uVar29 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                     uVar39 >> 0x18) ^
                     uVar38 * uVar25 +
                     uVar32 * ((uint)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                               ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18) +
                     (int)((ulonglong)lVar2 >> 0x20);
            uVar25 = uVar29;
            if ((uVar32 & 0x20) != 0) {
              uVar25 = uVar6;
              uVar6 = uVar29;
            }
            uVar25 = uVar6 << (uVar32 & 0x1f) | (uVar25 >> 1) >> (~uVar32 & 0x1f);
            uVar6 = uVar25 >> 0x19;
            goto LAB_011729f8;
          }
        }
        iVar30 = iVar30 + 0x20;
        iVar7 = iVar7 + -0x20;
      } while (iVar7 != 0);
    }
    if (uVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01172afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar40 = (*(code *)(&DAT_01172b00 + *(int *)(&DAT_01172b00 + *piVar22 * 4)))();
      return uVar40;
    }
    if (iVar28 == 0) {
      iVar31 = 1;
    }
    else {
      iVar31 = thunk_FUN_016d4a50(iVar28);
      if (iVar31 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar28);
      }
    }
    FUN_016dd1aa(iVar31,uVar34,iVar28);
    if (local_130 == local_e8) {
      FUN_015f37b0(&local_e8);
      local_164 = local_e4;
    }
    local_e0 = local_130 + 1;
    piVar21 = (int *)(local_164 + local_130 * 0xc);
    *piVar21 = iVar28;
    piVar21[1] = iVar31;
    piVar21[2] = iVar28;
    local_130 = local_e0;
    goto LAB_011727f0;
  }
  if (local_130 != 0) {
    piVar22 = (int *)param_1[0xc];
    do {
      iVar4 = *piVar22;
      bVar1 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar1);
    *piVar22 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_01173098:
                    /* WARNING: Does not return */
      pcVar27 = (code *)software_udf(0xfdee,0x1173098);
      (*pcVar27)();
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
      piVar21 = *(int **)(param_4 + 0xc);
      do {
        iVar15 = *piVar21;
        bVar1 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar1);
      *piVar21 = iVar15 + 1;
      if (iVar15 < 0) goto LAB_01173098;
      uVar11 = param_1[0xd];
      uVar13 = *(uint *)(param_4 + 0xc);
      uVar12 = *(uint *)(param_4 + 0x10);
      uVar9 = 0;
      uVar10 = (*(int **)(param_4 + 4))[1];
      if (uVar10 <= uVar11) {
        iVar15 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar22 + 2,uVar10);
        uVar9 = uVar10;
        if (iVar15 != 0) {
          uVar9 = 0;
        }
      }
      local_30 = FUN_011e1508((int)(piVar22 + 2) + uVar9,uVar11 - uVar9);
      local_3c = 3;
      local_48 = 2;
      local_38 = uVar13;
      local_34 = uVar12;
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
  puVar8 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar4 = local_e4;
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar8 = local_c8;
  puVar8[1] = local_c4;
  puVar8[2] = local_c0;
  puVar8[3] = local_bc;
  if (local_130 == 0) {
    puVar33 = (undefined4 *)(local_e4 + 4);
    for (iVar15 = local_e0; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar33[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar33);
      }
      puVar33 = puVar33 + 3;
    }
    if (local_e8 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar8);
LAB_011729f8:
  uVar25 = uVar19 & uVar25;
  uVar29 = *(uint *)(iVar24 + uVar25);
  uVar32 = uVar29 ^ uVar6 * 0x1010101;
  uVar32 = ~uVar32 & 0x80808080 & uVar32 + 0xfefefeff;
  while( true ) {
    if (uVar32 == 0) goto LAB_01172a84;
    uVar38 = uVar25 + ((uint)LZCOUNT(uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                                     (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18) >> 3) & uVar19;
    iVar7 = iVar24 + -0x14 + uVar38 * -0x14;
    if ((iVar31 == *(int *)(iVar7 + 8)) &&
       (iVar7 = thunk_FUN_016dd50a(uVar34,*(undefined4 *)(iVar7 + 4),iVar31), iVar7 == 0)) break;
    uVar32 = uVar32 - 1 & uVar32;
  }
  iVar31 = iVar24 + uVar38 * -0x14;
  puVar35 = *(uint **)(iVar31 + -8);
  iVar31 = *(int *)(iVar31 + -4);
  puVar8 = puVar35;
  while (puVar8 != puVar35 + iVar31) {
    puVar36 = puVar8 + 1;
    uVar6 = *puVar8;
    if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,uVar9,&DAT_018890c0);
    }
    uVar40 = FUN_011cf8a8(piVar22 + uVar6 * 10 + 5,uVar20,&local_d8,param_4,param_5);
    puVar33 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
    uVar34 = (undefined4)uVar40;
    pcVar27 = (code *)puVar33[3];
    pcVar37 = (code *)puVar33[4];
    while( true ) {
      iVar28 = (*pcVar27)(uVar34);
      uVar6 = local_ec;
      if (iVar28 == 0) break;
      local_28 = iVar28;
      if (local_ec == local_f4) {
        (*pcVar37)(&local_48,uVar34);
        iVar7 = local_48 + 1;
        if (local_48 == 0xffffffff) {
          iVar7 = -1;
        }
        FUN_011cf828(&local_f4,uVar6,iVar7,4,4);
      }
      *(int *)(local_f0 + uVar6 * 4) = iVar28;
      local_ec = uVar6 + 1;
    }
    if ((code *)*puVar33 != (code *)0x0) {
      (*(code *)*puVar33)(uVar34);
    }
    puVar8 = puVar36;
    if (puVar33[1] != 0) {
      thunk_FUN_016d3fb4(uVar34);
    }
  }
  goto LAB_011727f0;
LAB_01172a84:
  if ((uVar29 & 0x80808080 & uVar29 << 1) != 0) goto LAB_011727f0;
  iVar28 = iVar28 + 4;
  uVar25 = uVar25 + iVar28;
  goto LAB_011729f8;
}

