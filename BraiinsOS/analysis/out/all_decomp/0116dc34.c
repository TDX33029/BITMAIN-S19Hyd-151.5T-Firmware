// FUN_0116dc34 @ 0116dc34 size=2708 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0116dc34(uint *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int *piVar30;
  int iVar31;
  uint uVar32;
  int *piVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint uVar45;
  undefined8 uVar46;
  int local_134;
  uint local_f4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8 [4];
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar39 = *(uint *)(param_3 + 0xc);
  uVar41 = 0xaaaaaaa;
  uVar13 = uVar39 * 0xc;
  if (0xaaaaaaa < uVar39) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar37 = 0;
  if (uVar13 == 0) {
    local_134 = 4;
    local_c0 = 0;
  }
  else {
    local_134 = thunk_FUN_016d4a50(uVar13);
    local_c0 = uVar39;
    uVar41 = uVar13;
    if (local_134 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar13);
    }
  }
  local_b8 = 0;
  local_bc = local_134;
  if ((0x3ffffff < uVar39) || (uVar41 = uVar39 * 0x40, 0x7ffffffc < uVar41)) {
LAB_0116dd28:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar37,uVar41);
  }
  if (uVar41 == 0) {
    local_b0 = 4;
    local_b4 = 0;
  }
  else {
    local_b0 = thunk_FUN_016d4a50(uVar41);
    if (local_b0 == 0) {
      uVar37 = 4;
      goto LAB_0116dd28;
    }
    local_b4 = uVar39;
  }
  uVar13 = param_2[0x1f];
  local_a8[2] = *(uint *)(param_3 + 4);
  local_a8[3] = *(uint *)(param_3 + 8);
  piVar33 = (int *)param_2[0x1e];
  if (local_a8[2] == 0) {
    uVar39 = 0;
  }
  uVar14 = param_2[4];
  uVar41 = 0;
  uVar15 = param_2[5];
  uVar16 = param_2[6];
  uVar17 = param_2[7];
  iVar18 = param_2[8];
  iVar19 = param_2[9];
  iVar20 = param_2[10];
  iVar21 = param_2[0xb];
  uVar22 = param_2[0x10];
  uVar23 = param_2[0x11];
  uVar24 = param_2[0x12];
  uVar25 = param_2[0x13];
  iVar26 = param_2[0x14];
  iVar27 = param_2[0x15];
  iVar28 = param_2[0x16];
  iVar5 = param_2[0x17];
  uVar6 = param_2[0xd];
  iVar7 = param_2[0xf];
  uVar8 = param_2[1];
  local_a8[0] = (uint)(local_a8[2] != 0);
  iVar29 = param_2[0xc];
  iVar9 = param_2[3];
  iVar31 = *param_2;
  local_f4 = 0;
  local_ac = 0;
  local_94 = 0;
  local_a8[1] = 0;
  uVar12 = local_b0;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar39;
LAB_0116deb0:
  uVar46 = FUN_00f45584(local_a8);
  uVar37 = (undefined4)((ulonglong)uVar46 >> 0x20);
  iVar40 = (int)uVar46;
  if (iVar40 != 0) {
    iVar34 = *(int *)(iVar40 + 4);
    iVar44 = *(int *)(iVar40 + 8);
    local_40 = -0x80000000;
    local_3c = iVar34;
    local_38 = iVar44;
    local_34 = param_4;
    if (iVar9 != 0) {
      local_80 = iVar18;
      local_7c = iVar19;
      local_78 = iVar20;
      iStack_74 = iVar21;
      local_70 = uVar16;
      local_6c = uVar17;
      local_68 = uVar14;
      uStack_64 = uVar15;
      FUN_011df94c(&local_80,iVar34,iVar44);
      uVar32 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 | (local_6c >> 0x10 & 0xff) << 8 |
               local_6c >> 0x18;
      lVar3 = (ulonglong)uVar32 * 0xb36a80d2;
      uVar35 = (uint)lVar3;
      uVar39 = local_70 ^ 0xff;
      uVar32 = (uVar39 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
               local_70 >> 0x18) * -0x4c957f2e +
               uVar32 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar42 = uStack_64 << 0x18 | (uStack_64 >> 8 & 0xff) << 0x10 | (uStack_64 >> 0x10 & 0xff) << 8
               | uStack_64 >> 0x18;
      uVar10 = (uVar32 * 0x1000000 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18) ^ (uint)((ulonglong)uVar39 * 0x2df45158);
      lVar3 = (ulonglong)uVar42 * (ulonglong)uVar10;
      uVar32 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
               uVar35 >> 0x18) ^
               local_6c * 0x2df45158 +
               uVar39 * 0x2d7f954c + (int)((ulonglong)uVar39 * 0x2df45158 >> 0x20);
      uVar39 = uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18;
      lVar4 = (ulonglong)~local_68 * (ulonglong)uVar39;
      uVar35 = (uint)lVar4;
      uVar39 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18) * ~local_68 + uVar39 * ~uStack_64 + (int)((ulonglong)lVar4 >> 0x20);
      uVar39 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) ^ (uint)lVar3;
      uVar35 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
               uVar35 >> 0x18) ^
               uVar32 * uVar42 +
               uVar10 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                         (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
               (int)((ulonglong)lVar3 >> 0x20);
      uVar32 = uVar35;
      if ((uVar10 & 0x20) != 0) {
        uVar32 = uVar39;
        uVar39 = uVar35;
      }
      uVar32 = uVar39 << (uVar10 & 0x1f) | (uVar32 >> 1) >> (~uVar10 & 0x1f);
      iVar36 = 0;
      uVar39 = uVar32 >> 0x19;
      while( true ) {
        uVar32 = uVar8 & uVar32;
        uVar35 = *(uint *)(iVar31 + uVar32);
        uVar10 = uVar35 ^ uVar39 * 0x1010101;
        for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
            uVar10 = uVar10 - 1 & uVar10) {
          uVar42 = uVar32 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar8;
          iVar11 = iVar31 + -0x20 + uVar42 * -0x20;
          if ((iVar44 == *(int *)(iVar11 + 8)) &&
             (iVar11 = thunk_FUN_016dd50a(iVar34,*(undefined4 *)(iVar11 + 4),iVar44), iVar11 == 0))
          {
            FUN_011c9534(&local_80,iVar31 + -0x14 + uVar42 * -0x20,uVar37,&local_40,param_5,param_6)
            ;
            if (uVar41 == local_b4) {
              FUN_011ca644(&local_b4);
              uVar12 = local_b0;
            }
            piVar30 = (int *)(uVar12 + uVar41 * 0x40);
            uVar41 = uVar41 + 1;
            *piVar30 = local_80;
            piVar30[1] = local_7c;
            piVar30[2] = local_78;
            piVar30[3] = iStack_74;
            piVar30[4] = local_70;
            piVar30[5] = local_6c;
            piVar30[6] = local_68;
            piVar30[7] = uStack_64;
            piVar30[8] = iStack_60;
            piVar30[9] = iStack_5c;
            piVar30[10] = local_58;
            piVar30[0xb] = iStack_54;
            piVar30[0xc] = iStack_50;
            piVar30[0xd] = iStack_4c;
            piVar30[0xe] = iStack_48;
            piVar30[0xf] = iStack_44;
            local_ac = uVar41;
            if (iVar7 == 0) goto LAB_0116deb0;
            uVar38 = *(undefined4 *)(iVar40 + 4);
            iVar40 = *(int *)(iVar40 + 8);
            local_80 = iVar26;
            local_7c = iVar27;
            local_78 = iVar28;
            iStack_74 = iVar5;
            local_70 = uVar24;
            local_6c = uVar25;
            local_68 = uVar22;
            uStack_64 = uVar23;
            FUN_011df94c(&local_80,uVar38,iVar40);
            uVar39 = local_70 ^ 0xff;
            uVar32 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 |
                     (local_6c >> 0x10 & 0xff) << 8 | local_6c >> 0x18;
            lVar3 = (ulonglong)uVar32 * 0xb36a80d2;
            uVar10 = (uint)lVar3;
            uVar42 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                     uVar10 >> 0x18) ^
                     local_6c * 0x2df45158 +
                     uVar39 * 0x2d7f954c + (int)((ulonglong)uVar39 * 0x2df45158 >> 0x20);
            uVar35 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
                     uVar42 >> 0x18;
            lVar4 = (ulonglong)~local_68 * (ulonglong)uVar35;
            uVar45 = (uint)lVar4;
            uVar32 = (uVar39 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 |
                      (local_70 >> 0x10 & 0xff) << 8 | local_70 >> 0x18) * -0x4c957f2e +
                     uVar32 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar10 = (uVar32 * 0x1000000 | (uVar32 >> 8 & 0xff) << 0x10 |
                      (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18) ^
                     (uint)((ulonglong)uVar39 * 0x2df45158);
            uVar39 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                     uVar10 >> 0x18) * ~local_68 +
                     uVar35 * ~uStack_64 + (int)((ulonglong)lVar4 >> 0x20);
            uVar32 = uStack_64 << 0x18 | (uStack_64 >> 8 & 0xff) << 0x10 |
                     (uStack_64 >> 0x10 & 0xff) << 8 | uStack_64 >> 0x18;
            lVar3 = (ulonglong)uVar32 * (ulonglong)uVar10;
            uVar39 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 |
                      (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) ^ (uint)lVar3;
            uVar35 = (uVar45 << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
                     uVar45 >> 0x18) ^
                     uVar42 * uVar32 +
                     uVar10 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                               (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar32 = uVar35;
            if ((uVar10 & 0x20) != 0) {
              uVar32 = uVar39;
              uVar39 = uVar35;
            }
            uVar32 = uVar39 << (uVar10 & 0x1f) | (uVar32 >> 1) >> (~uVar10 & 0x1f);
            iVar34 = 0;
            uVar39 = uVar32 >> 0x19;
            goto LAB_0116e2b4;
          }
        }
        if ((uVar35 & 0x80808080 & uVar35 << 1) != 0) break;
        iVar36 = iVar36 + 4;
        uVar32 = uVar32 + iVar36;
      }
    }
    if (uVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0116e4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0116e4cc + *(int *)(&DAT_0116e4cc + *piVar33 * 4)))();
      return;
    }
    uVar38 = *(undefined4 *)(iVar40 + 4);
    iVar40 = *(int *)(iVar40 + 8);
    if (iVar40 == 0) {
      iVar34 = 1;
    }
    else {
      iVar34 = thunk_FUN_016d4a50(iVar40);
      if (iVar34 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar40);
      }
    }
    FUN_016dd1aa(iVar34,uVar38,iVar40);
    if (local_f4 == local_c0) {
      FUN_015f37b0(&local_c0);
      local_134 = local_bc;
    }
    piVar30 = (int *)(local_134 + local_f4 * 0xc);
    *piVar30 = iVar40;
    piVar30[1] = iVar34;
    piVar30[2] = iVar40;
    local_b8 = local_f4 + 1;
    FUN_011c9534(&local_80,param_2 + 0x18,uVar37,&local_40,param_5,param_6);
    uVar41 = local_ac;
    if (local_ac == local_b4) {
      FUN_011ca644(&local_b4);
    }
    piVar30 = (int *)(local_b0 + uVar41 * 0x40);
    uVar41 = uVar41 + 1;
    *piVar30 = local_80;
    piVar30[1] = local_7c;
    piVar30[2] = local_78;
    piVar30[3] = iStack_74;
    piVar30[4] = local_70;
    piVar30[5] = local_6c;
    piVar30[6] = local_68;
    piVar30[7] = uStack_64;
    piVar30[8] = iStack_60;
    piVar30[9] = iStack_5c;
    piVar30[10] = local_58;
    piVar30[0xb] = iStack_54;
    piVar30[0xc] = iStack_50;
    piVar30[0xd] = iStack_4c;
    piVar30[0xe] = iStack_48;
    piVar30[0xf] = iStack_44;
    uVar12 = local_b0;
    local_f4 = local_f4 + 1;
    local_ac = uVar41;
    goto LAB_0116deb0;
  }
  uVar13 = uVar12;
  iVar5 = uVar41 << 6;
  do {
    iVar7 = iVar5;
    if (iVar7 == 0) {
      local_a8[1] = local_b4;
      local_98 = 0;
      local_a8[0] = 0x80000000;
      local_a8[2] = uVar12;
      local_a8[3] = uVar41;
      goto LAB_0116e7a8;
    }
    pcVar1 = (char *)(uVar13 + 0x3c);
    uVar13 = uVar13 + 0x40;
    iVar5 = iVar7 + -0x40;
  } while (*pcVar1 != '\0');
  local_a8[3] = local_b4;
  local_a8[0] = 0;
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
  local_98 = uVar12;
  local_94 = uVar41;
LAB_0116e7a8:
  FUN_011f1dd4(&local_40,&local_c0);
  local_7c = 1;
  local_80 = 1;
  local_78 = local_40;
  iStack_74 = local_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_68 = iStack_30;
  uStack_64 = iStack_2c;
  piVar33 = (int *)thunk_FUN_016d4a50(0x20);
  if (piVar33 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *piVar33 = local_80;
  piVar33[1] = local_7c;
  piVar33[2] = local_78;
  piVar33[3] = iStack_74;
  piVar33[4] = local_70;
  piVar33[5] = local_6c;
  piVar33[6] = local_68;
  piVar33[7] = uStack_64;
  iVar5 = 0x18;
  if (iVar7 == 0) {
    iVar5 = 0x10;
  }
  piVar30 = *(int **)((int)local_a8 + iVar5);
  if (piVar30 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar30;
      bVar2 = (bool)hasExclusiveAccess(piVar30);
    } while (!bVar2);
    *piVar30 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_a8 + iVar5));
    }
  }
  *(int **)((int)local_a8 + iVar5) = piVar33;
  *param_1 = local_a8[0];
  param_1[1] = local_a8[1];
  param_1[2] = local_a8[2];
  param_1[3] = local_a8[3];
  param_1[4] = local_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  return;
LAB_0116e2b4:
  uVar32 = uVar6 & uVar32;
  uVar35 = *(uint *)(iVar29 + uVar32);
  uVar10 = uVar35 ^ uVar39 * 0x1010101;
  uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
  while( true ) {
    if (uVar10 == 0) goto LAB_0116e348;
    uVar42 = uVar32 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & uVar6;
    iVar44 = iVar29 + -0x14 + uVar42 * -0x14;
    if ((iVar40 == *(int *)(iVar44 + 8)) &&
       (iVar44 = thunk_FUN_016dd50a(uVar38,*(undefined4 *)(iVar44 + 4),iVar40), iVar44 == 0)) break;
    uVar10 = uVar10 - 1 & uVar10;
  }
  iVar34 = iVar29 + uVar42 * -0x14;
  iVar40 = *(int *)(iVar34 + -4);
  if (iVar40 == 0) goto LAB_0116e65c;
  iVar40 = iVar40 << 2;
  puVar43 = *(uint **)(iVar34 + -8);
  do {
    uVar39 = *puVar43;
    if (uVar13 <= uVar39) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar39,uVar13,&DAT_01889090);
    }
    FUN_011c9534(&local_80,piVar33 + uVar39 * 10 + 5,uVar37,&local_40,param_5,param_6);
    if (uVar41 == local_b4) {
      FUN_011ca644(&local_b4);
      uVar12 = local_b0;
    }
    piVar30 = (int *)(uVar12 + uVar41 * 0x40);
    uVar41 = uVar41 + 1;
    iVar40 = iVar40 + -4;
    *piVar30 = local_80;
    piVar30[1] = local_7c;
    piVar30[2] = local_78;
    piVar30[3] = iStack_74;
    piVar30[4] = local_70;
    piVar30[5] = local_6c;
    piVar30[6] = local_68;
    piVar30[7] = uStack_64;
    piVar30[8] = iStack_60;
    piVar30[9] = iStack_5c;
    piVar30[10] = local_58;
    piVar30[0xb] = iStack_54;
    piVar30[0xc] = iStack_50;
    piVar30[0xd] = iStack_4c;
    piVar30[0xe] = iStack_48;
    piVar30[0xf] = iStack_44;
    puVar43 = puVar43 + 1;
    local_ac = uVar41;
  } while (iVar40 != 0);
  goto LAB_0116deb0;
LAB_0116e348:
  if ((uVar35 & 0x80808080 & uVar35 << 1) != 0) goto LAB_0116e65c;
  iVar34 = iVar34 + 4;
  uVar32 = uVar32 + iVar34;
  goto LAB_0116e2b4;
LAB_0116e65c:
  goto LAB_0116deb0;
}

