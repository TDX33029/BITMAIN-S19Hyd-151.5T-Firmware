// FUN_009fabf0 @ 009fabf0 size=8116 calls_out=53 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x009faf90) */
/* WARNING: Removing unreachable block (ram,0x009faf9c) */
/* WARNING: Removing unreachable block (ram,0x009fafa4) */
/* WARNING: Removing unreachable block (ram,0x009fafb8) */
/* WARNING: Removing unreachable block (ram,0x009fafc0) */
/* WARNING: Removing unreachable block (ram,0x009fafcc) */
/* WARNING: Removing unreachable block (ram,0x009fafd4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009fabf0(uint *param_1,int param_2)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  undefined3 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  uint uVar18;
  uint *puVar19;
  int *piVar20;
  undefined4 uVar21;
  uint *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  code *pcVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint extraout_r3;
  int *piVar29;
  uint uVar30;
  int *piVar31;
  int iVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  int *piVar35;
  int *piVar36;
  undefined1 *puVar37;
  int iVar38;
  uint uVar39;
  int *piVar40;
  uint uVar41;
  undefined4 *puVar42;
  int *piVar43;
  undefined *puVar44;
  int iVar45;
  code *pcVar46;
  bool bVar47;
  bool bVar48;
  undefined8 uVar49;
  uint local_21b4;
  uint local_21a4;
  int *local_2194;
  uint local_2190;
  undefined *local_2180;
  undefined *local_217c;
  undefined8 *local_2168;
  undefined *local_2134;
  undefined *local_2130;
  int *local_2108;
  uint local_2104;
  uint local_20f8;
  int *local_20f4;
  uint local_20ec;
  undefined4 local_20e8;
  uint local_20e4;
  uint local_20e0;
  uint local_20dc;
  uint local_20d8;
  uint local_20d4;
  uint local_20d0;
  int local_20cc;
  uint local_20c8;
  int local_20c4;
  undefined4 local_20c0;
  int local_20bc;
  int local_20b8;
  int local_20b4;
  int local_20b0;
  int *local_20ac;
  int *local_20a8;
  int *local_20a4;
  int *local_20a0;
  int *local_209c;
  int *local_2098;
  int *local_2094;
  int *local_2090;
  int *local_208c;
  int *local_2088;
  int local_2084;
  int *local_2080;
  undefined4 uStack_207c;
  int *local_2078;
  uint local_2074;
  int local_2070;
  uint local_206c;
  int local_2068;
  uint local_2064;
  int *local_2060;
  uint local_205c;
  int *local_2058;
  code *local_2054;
  int *local_2050;
  int iStack_204c;
  int *local_2048;
  undefined4 uStack_2044;
  undefined8 local_2040;
  undefined4 local_2038;
  uint *local_2034;
  int *local_2030;
  int *local_202c;
  int *local_2028;
  int *local_2024;
  uint local_2020;
  int local_201c;
  int *local_2010;
  int local_1ffc;
  undefined4 local_1ff8;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c [2];
  
  FUN_009f87e4(&local_2040);
  if ((char)local_2040 != '\x04') {
LAB_009fac70:
    *param_1 = (uint)(int *)local_2040;
    param_1[1] = (uint)local_2040._4_4_;
    return;
  }
  FUN_009f9320(&local_2040,param_2);
  if ((char)local_2040 != '\x04') goto LAB_009fac70;
  FUN_009f5080(&local_2040,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  puVar22 = local_2034;
  uVar30 = (uint)local_2038;
  uVar26 = (uint)local_2040._4_4_;
  if ((int *)local_2040 == (int *)0x0) {
    FUN_009f3df0((uint *)(param_2 + 0x48));
    *(uint **)(param_2 + 0x50) = puVar22;
    *(uint *)(param_2 + 0x48) = uVar26;
    *(uint *)(param_2 + 0x4c) = uVar30;
  }
  else if (((uint)local_2040._4_4_ & 0xff) != 4) {
    *param_1 = (uint)local_2040._4_4_;
    param_1[1] = (uint)local_2038;
    return;
  }
  iVar8 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x2c) = 0xffffffff;
  if (iVar8 != -1) {
    FUN_016dffb2();
  }
  FUN_009fd15c(&local_2040,param_2);
  if ((int *)local_2040 == (int *)0x1) {
    *(undefined1 *)((int)param_1 + 7) = local_2038._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_2038._1_2_;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_2038;
    *param_1 = (uint)local_2040._4_4_;
    return;
  }
  puVar22 = (uint *)(param_2 + 0x48);
  uVar26 = *puVar22;
  if (uVar26 != 0) {
    iVar8 = *(int *)(param_2 + 0x4c);
    do {
      iVar32 = (uint)*(ushort *)(uVar26 + 0x5e) << 3;
      uVar30 = 0;
      do {
        uVar18 = uVar30;
        uVar11 = (uint)*(ushort *)(uVar26 + 0x5e);
        if (iVar32 == 0) goto LAB_009fad6c;
        uVar30 = *(uint *)(uVar26 + uVar18 * 8);
        iVar32 = iVar32 + -8;
        bVar48 = local_2040._4_4_ < uVar30;
        bVar47 = !bVar48 && local_2040._4_4_ != (int *)uVar30;
        uVar30 = uVar18 + 1;
      } while ((char)(bVar47 - bVar48) == '\x01');
      if (bVar47 == bVar48) goto LAB_009fadb0;
      uVar11 = uVar18;
LAB_009fad6c:
      if (iVar8 == 0) goto LAB_009fc8c0;
      iVar8 = iVar8 + -1;
      uVar26 = *(uint *)(uVar26 + (uVar11 + 0x18) * 4);
    } while( true );
  }
  uVar26 = 0;
  uVar11 = extraout_r3;
  goto LAB_009fad88;
LAB_009fc8c0:
  uVar30 = 0;
LAB_009fad88:
  local_2030 = local_2040._4_4_;
  local_202c = (int *)CONCAT31(local_202c._1_3_,(undefined1)local_2038);
  local_2040._0_4_ = (int *)uVar26;
  local_2040._4_4_ = (int *)uVar30;
  local_2038 = (int *)uVar11;
  local_2034 = puVar22;
  FUN_009f3608(&local_20a8,&local_2040);
LAB_009fadb0:
  FUN_009fa10c(param_2);
  local_2108 = local_20f4;
  local_2038 = *(int **)(param_2 + 0x48);
  local_2034 = *(uint **)(param_2 + 0x4c);
  local_2020 = *(uint *)(param_2 + 0x50);
  local_20f8 = CONCAT31(local_20f8._1_3_,4);
  if (local_2038 == (int *)0x0) {
    local_2020 = 0;
  }
  local_2040._0_4_ = (int *)(uint)(local_2038 != (int *)0x0);
  *(undefined4 *)(param_2 + 0x40) = 0;
  local_2104 = local_20f8;
  local_201c = 0;
  local_202c = (int *)0x0;
  local_2040._4_4_ = (int *)0x0;
  local_2030 = (int *)local_2040;
  local_2028 = local_2038;
  local_2024 = (int *)local_2034;
  puVar9 = (undefined4 *)FUN_009f2f50(&local_2040);
  bVar48 = local_201c + local_2020 < *(uint *)(param_2 + 0x44);
  bVar47 = puVar9 == (undefined4 *)0x0;
  if (bVar47 || bVar48) {
    uVar26 = 4;
    goto LAB_009fb8f4;
  }
  FUN_009f5b80(&local_2058,*puVar9,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  bVar2 = *(byte *)(puVar9 + 1);
  if (bVar2 != 2) {
    uVar26 = 3;
    if ((bVar2 & 1) != 0) {
      uVar26 = 4;
    }
    local_20a8 = local_2058;
    local_20a4 = (int *)local_2054;
    local_20a0 = local_2050;
    if ((uint)((int)local_2058 - (int)local_2050) < uVar26) {
      FUN_009f4d18(&local_20a8,local_2050,uVar26,1,1);
    }
    piVar10 = local_20a0;
    puVar44 = &DAT_00378071;
    if ((bVar2 & 1) != 0) {
      puVar44 = &DAT_005687a0;
    }
    FUN_016dd1aa((undefined1 *)((int)local_20a4 + (int)local_20a0),puVar44,uVar26);
    local_2050 = (int *)((int)piVar10 + uVar26);
    local_2058 = local_20a8;
    local_2054 = (code *)local_20a4;
  }
  pcVar25 = local_2054;
  FUN_015f438c(&local_38,local_2054,local_2050);
  if (local_2058 != (int *)0x0) {
    thunk_FUN_016d3fb4(pcVar25);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_38 & 0xff) {
  case 0:
    piVar10 = (int *)&SUB_00000002;
    if (local_34 != (int *)&SUB_00000002) goto code_r0x009faf84;
    goto LAB_009fafec;
  case 1:
    cVar3 = local_38._1_1_;
    break;
  default:
    cVar3 = (char)local_34[2];
    break;
  case 4:
    goto switchD_009faf30_caseD_4;
  }
  piVar10 = local_34;
  if (cVar3 == '\0') {
LAB_009fafec:
    if ((char)local_38 == '\x03') {
      iVar8 = *piVar10;
      puVar42 = (undefined4 *)piVar10[1];
      pcVar25 = (code *)*puVar42;
      if (pcVar25 != (code *)0x0) {
        (*pcVar25)(iVar8);
      }
      if (puVar42[1] != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
      thunk_FUN_016d3fb4(piVar10);
    }
  }
  else {
code_r0x009faf84:
    local_2104 = local_38;
    local_2108 = local_34;
  }
switchD_009faf30_caseD_4:
switchD_009fb128_caseD_4:
  puVar37 = (undefined1 *)*puVar9;
  puVar9 = (undefined4 *)FUN_009f2f50(&local_2040);
  if ((puVar9 == (undefined4 *)0x0) || (local_201c + local_2020 < *(uint *)(param_2 + 0x44)))
  goto LAB_009fb254;
  FUN_009f5b80(&local_2058,*puVar9,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  bVar2 = *(byte *)(puVar9 + 1);
  if (bVar2 != 2) {
    uVar26 = 3;
    if ((bVar2 & 1) != 0) {
      uVar26 = 4;
    }
    local_20a8 = local_2058;
    local_20a4 = (int *)local_2054;
    local_20a0 = local_2050;
    if ((uint)((int)local_2058 - (int)local_2050) < uVar26) {
      FUN_009f4d18(&local_20a8,local_2050,uVar26,1,1);
    }
    piVar10 = local_20a0;
    puVar44 = &DAT_00378071;
    if ((bVar2 & 1) != 0) {
      puVar44 = &DAT_005687a0;
    }
    FUN_016dd1aa((undefined1 *)((int)local_20a4 + (int)local_20a0),puVar44,uVar26);
    local_2050 = (int *)((int)piVar10 + uVar26);
    local_2058 = local_20a8;
    local_2054 = (code *)local_20a4;
  }
  pcVar25 = local_2054;
  FUN_015f438c(&local_38,local_2054,local_2050);
  if (local_2058 != (int *)0x0) {
    thunk_FUN_016d3fb4(pcVar25);
  }
  piVar10 = local_34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_38 & 0xff) {
  case 0:
    piVar43 = (int *)&SUB_00000002;
    if (local_34 == (int *)&SUB_00000002) goto LAB_009fb154;
    goto LAB_009fb1ac;
  case 1:
    cVar3 = local_38._1_1_;
    break;
  default:
    cVar3 = (char)local_34[2];
    break;
  case 4:
    goto switchD_009fb128_caseD_4;
  }
  piVar43 = local_34;
  if (cVar3 == '\0') {
LAB_009fb154:
    piVar10 = piVar43;
    if ((char)local_38 != '\x03') goto switchD_009fb128_caseD_4;
    iVar8 = *piVar10;
    puVar42 = (undefined4 *)piVar10[1];
    pcVar25 = (code *)*puVar42;
    if (pcVar25 != (code *)0x0) {
      (*pcVar25)(iVar8);
    }
    if (puVar42[1] != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
  }
  else {
LAB_009fb1ac:
    if ((local_2104 & 0xff) == 4) {
      local_2104 = local_38;
      local_2108 = local_34;
      goto switchD_009fb128_caseD_4;
    }
    if (((local_38 & 0xff) == 4) || ((local_38 & 0xff) != 3)) goto switchD_009fb128_caseD_4;
    puVar42 = (undefined4 *)local_34[1];
    iVar8 = *local_34;
    pcVar25 = (code *)*puVar42;
    if (pcVar25 != (code *)0x0) {
      (*pcVar25)(iVar8);
    }
    if (puVar42[1] != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
  }
  thunk_FUN_016d3fb4(piVar10);
  goto switchD_009fb128_caseD_4;
LAB_009fb254:
  local_20f4 = local_2108;
  uVar26 = local_2104 & 0xff;
  local_20f8 = local_2104;
  if (bVar47 || bVar48) goto LAB_009fb8f4;
  iVar8 = *(int *)(param_2 + 0x50);
  if (iVar8 != 0) {
    uVar30 = *puVar22;
    if (uVar30 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0186b4d8);
    }
    puVar33 = *(undefined1 **)(param_2 + 0x4c);
    piVar10 = (int *)thunk_FUN_016d4a50(0x60);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x60);
    }
    *(undefined2 *)((int)piVar10 + 0x5e) = 0;
    piVar10[0x16] = 0;
    piVar43 = piVar10;
    puVar34 = puVar33;
    if (puVar33 != (undefined1 *)0x0) {
      do {
        piVar10 = (int *)thunk_FUN_016d4a50(0x90);
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x90);
        }
        puVar34 = puVar34 + -1;
        piVar10[0x18] = (int)piVar43;
        *(undefined2 *)((int)piVar10 + 0x5e) = 0;
        piVar10[0x16] = 0;
        *(undefined2 *)(piVar43 + 0x17) = 0;
        piVar43[0x16] = (int)piVar10;
        piVar43 = piVar10;
      } while (puVar34 != (undefined1 *)0x0);
    }
    puVar44 = &DAT_0186b128;
    local_2130 = &DAT_0034b454;
    piVar43 = piVar10;
    puVar34 = puVar33;
    do {
      uVar18 = (uint)*(ushort *)(uVar30 + 0x5e);
      iVar32 = uVar18 << 3;
      uVar11 = 0;
      do {
        uVar41 = uVar11;
        if (iVar32 == 0) {
          uVar41 = uVar18;
          goto LAB_009fb388;
        }
        iVar32 = iVar32 + -8;
        uVar11 = uVar41 + 1;
      } while (*(undefined1 **)(uVar30 + uVar41 * 8) < puVar37);
LAB_009fb388:
      if (*(short *)((int)piVar43 + 0x5e) != 0) {
        uVar21 = 0x27;
        goto LAB_009fca00;
      }
      iVar32 = uVar18 - uVar41;
      if (iVar32 == 0) {
        if (puVar34 == (undefined1 *)0x0) goto LAB_009fb3fc;
      }
      else {
        *(short *)(uVar30 + 0x5e) = (short)uVar41;
        *(short *)((int)piVar43 + 0x5e) = (short)iVar32;
        FUN_016dd1aa(piVar43,uVar30 + uVar41 * 8,iVar32 * 8);
        if (puVar34 == (undefined1 *)0x0) goto LAB_009fb3fc;
        FUN_016dd1aa(piVar43 + 0x19,uVar30 + uVar41 * 4 + 100,iVar32 * 4);
        if (iVar32 != -1) {
          iVar38 = 0;
          do {
            iVar12 = iVar38 + 1;
            iVar38 = piVar43[iVar38 + 0x19];
            *(short *)(iVar38 + 0x5c) = (short)iVar12;
            *(int **)(iVar38 + 0x58) = piVar43;
            iVar38 = iVar12;
          } while (iVar32 != iVar12);
        }
      }
      piVar43 = (int *)piVar43[0x18];
      puVar34 = puVar34 + -1;
      uVar30 = *(uint *)(uVar30 + uVar41 * 4 + 0x60);
    } while( true );
  }
  piVar10 = (int *)0x0;
  piVar43 = (int *)0x0;
  goto LAB_009fb8dc;
LAB_009fb3fc:
  iVar32 = *(int *)(param_2 + 0x4c);
  if (iVar32 != 0) {
    uVar30 = *puVar22;
    do {
      uVar49 = CONCAT44(iVar32,uVar30);
      uVar11 = (uint)*(ushort *)(uVar30 + 0x5e);
      if (uVar11 != 0) {
        local_2134 = &DAT_018af418;
        local_2130 = &DAT_004194bf;
        goto LAB_009fb474;
      }
      uVar11 = *(uint *)(uVar30 + 0x60);
      iVar32 = iVar32 + -1;
      *(uint *)(param_2 + 0x48) = uVar11;
      *(int *)(param_2 + 0x4c) = iVar32;
      *(undefined4 *)(uVar11 + 0x58) = 0;
      thunk_FUN_016d3fb4(uVar30);
      uVar30 = uVar11;
    } while (iVar32 != 0);
  }
  goto LAB_009fb664;
code_r0x009fb684:
  piVar10 = (int *)piVar10[0x18];
  piVar10[0x16] = 0;
  thunk_FUN_016d3fb4();
  puVar33 = puVar33 + -1;
  if (puVar33 == (undefined1 *)0x0) goto LAB_009fb8c8;
  goto LAB_009fb678;
LAB_009fcadc:
  uVar30 = uVar18;
  uVar18 = 0;
  goto LAB_009fcae0;
switchD_009fc3d4_caseD_1:
  local_40._1_1_ = SUB41(uVar11,1);
  bVar47 = local_40._1_1_ == '#';
  local_40 = uVar41;
  if (bVar47) goto LAB_009fc034;
  goto LAB_009fc44c;
switchD_009fc3d4_caseD_0:
  if (local_3c != 4) {
LAB_009fc44c:
    puVar9 = &local_40;
    uVar30 = local_40;
    if ((local_40 & 0xff) == 4) goto LAB_009fbfd8;
LAB_009fc4c4:
    pcVar25 = (code *)puVar9[1];
    goto LAB_009fc518;
  }
LAB_009fc034:
  if (uVar30 == 0) goto LAB_009fbfd8;
  goto LAB_009fc03c;
switchD_009fc1fc_caseD_1:
  local_206c = uVar11;
  if (uVar41 < uVar11) {
    local_206c = uVar41;
  }
LAB_009fc2cc:
  if (uVar30 < uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar18,uVar30,&DAT_01881ee8);
  }
  FUN_010078bc(&local_20a8,local_2168,uVar18);
  local_40 = CONCAT31(local_40._1_3_,4);
  local_3c = uVar18;
switchD_009fc3d4_default:
  local_3c = uVar18;
  if (uVar18 == 0) {
    puVar9 = &DAT_018aeaf8;
    uVar30 = 2;
    goto LAB_009fc4c4;
  }
  if (uVar18 <= uVar30) {
    uVar30 = uVar30 - uVar18;
    local_2168 = (undefined8 *)((int)local_2168 + uVar18);
    goto LAB_009fc034;
  }
  local_2180 = &DAT_018aeb00;
  uVar11 = uVar30;
LAB_009fcae0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(uVar18,uVar30,uVar11,local_2180);
  while ((int)((ulonglong)uVar49 >> 0x20) != 0) {
LAB_009fb474:
    iVar38 = (int)uVar49;
    piVar29 = (int *)(uVar11 - 1);
    piVar31 = (int *)((int)((ulonglong)uVar49 >> 0x20) + -1);
    piVar43 = *(int **)(iVar38 + (int)(piVar29 + 6) * 4);
    piVar35 = *(int **)(iVar38 + (uVar11 + 0x18) * 4);
    uVar18 = (uint)*(ushort *)((int)piVar43 + 0x5e);
    uVar11 = (uint)*(ushort *)((int)piVar35 + 0x5e);
    if (uVar11 + uVar18 + 1 < 0xc) {
      local_2038 = piVar29;
      local_2034 = (uint *)piVar43;
      local_2030 = piVar31;
      local_202c = piVar35;
      local_2028 = piVar31;
      local_2040 = uVar49;
      uVar49 = FUN_009daec8(&local_2040);
    }
    else {
      uVar49 = CONCAT44(piVar31,piVar35);
      if (uVar11 < 6) {
        iVar12 = 6 - uVar11;
        iVar27 = uVar18 - iVar12;
        *(short *)((int)piVar43 + 0x5e) = (short)iVar27;
        *(undefined2 *)((int)piVar35 + 0x5e) = 6;
        FUN_016dd52c(piVar35 + iVar12 * 2,piVar35,uVar11 << 3);
        iVar15 = uVar18 - (iVar27 + 1);
        if (iVar15 != 5 - uVar11) {
          uVar21 = 0x28;
          puVar44 = &DAT_018af448;
LAB_009fca00:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(local_2130,uVar21,puVar44);
        }
        FUN_016dd1aa(piVar35,piVar43 + (iVar27 + 1) * 2,iVar15 * 8);
        piVar29 = (int *)(iVar38 + (int)piVar29 * 8);
        iVar45 = *piVar29;
        iVar28 = piVar43[iVar27 * 2];
        iVar38 = piVar29[1];
        *(char *)(piVar29 + 1) = (char)(piVar43 + iVar27 * 2)[1];
        *piVar29 = iVar28;
        piVar35[iVar15 * 2] = iVar45;
        *(char *)(piVar35 + iVar15 * 2 + 1) = (char)iVar38;
        uVar49 = CONCAT44(piVar31,piVar35);
        if (piVar31 != (int *)0x0) {
          piVar29 = piVar35 + 0x18;
          FUN_016dd52c(piVar29 + iVar12,piVar29,uVar11 * 4 + 4);
          FUN_016dd1aa(piVar29,piVar43 + iVar27 + 0x19,iVar12 * 4);
          iVar38 = piVar35[0x18];
          *(undefined2 *)(iVar38 + 0x5c) = 0;
          *(int **)(iVar38 + 0x58) = piVar35;
          iVar38 = piVar35[0x19];
          *(undefined2 *)(iVar38 + 0x5c) = 1;
          *(int **)(iVar38 + 0x58) = piVar35;
          iVar38 = piVar35[0x1a];
          *(undefined2 *)(iVar38 + 0x5c) = 2;
          *(int **)(iVar38 + 0x58) = piVar35;
          iVar38 = piVar35[0x1b];
          *(undefined2 *)(iVar38 + 0x5c) = 3;
          *(int **)(iVar38 + 0x58) = piVar35;
          iVar38 = piVar35[0x1c];
          *(int **)(iVar38 + 0x58) = piVar35;
          *(undefined2 *)(iVar38 + 0x5c) = 4;
          iVar38 = piVar35[0x1d];
          *(undefined2 *)(iVar38 + 0x5c) = 5;
          *(int **)(iVar38 + 0x58) = piVar35;
          iVar38 = piVar35[0x1e];
          *(int **)(iVar38 + 0x58) = piVar35;
          *(undefined2 *)(iVar38 + 0x5c) = 6;
          uVar49 = CONCAT44(piVar31,piVar35);
        }
      }
    }
    uVar11 = (uint)*(ushort *)((int)uVar49 + 0x5e);
    if (uVar11 == 0) goto LAB_009fcac0;
  }
  do {
    iVar32 = iVar32 + -1;
    if (*(short *)(uVar30 + 0x5e) != 0) break;
    uVar11 = *(uint *)(uVar30 + 0x60);
    *(uint *)(param_2 + 0x48) = uVar11;
    *(int *)(param_2 + 0x4c) = iVar32;
    *(undefined4 *)(uVar11 + 0x58) = 0;
    thunk_FUN_016d3fb4(uVar30);
    uVar30 = uVar11;
  } while (iVar32 != 0);
LAB_009fb664:
  if (puVar33 != (undefined1 *)0x0) {
LAB_009fb678:
    uVar49 = CONCAT44(puVar33,piVar10);
    if (*(short *)((int)piVar10 + 0x5e) == 0) goto code_r0x009fb684;
    local_2134 = &DAT_0186b118;
    do {
      piVar43 = (int *)uVar49;
      piVar31 = (int *)piVar43[0x18];
      piVar35 = (int *)piVar43[0x19];
      piVar29 = (int *)((int)((ulonglong)uVar49 >> 0x20) + -1);
      uVar11 = (uint)*(ushort *)((int)piVar35 + 0x5e);
      uVar5 = *(ushort *)((int)piVar31 + 0x5e);
      uVar30 = (uint)uVar5;
      iVar32 = uVar30 + 1;
      if (iVar32 + uVar11 < 0xc) {
        local_2038 = (int *)0x0;
        local_2034 = (uint *)piVar31;
        local_2030 = piVar29;
        local_202c = piVar35;
        local_2028 = piVar29;
        local_2040 = uVar49;
        uVar49 = FUN_009daec8(&local_2040);
      }
      else {
        uVar49 = CONCAT44(piVar29,piVar31);
        if (uVar30 < 6) {
          *(undefined2 *)((int)piVar31 + 0x5e) = 6;
          iVar45 = 6 - uVar30;
          iVar12 = piVar35[(5 - uVar30) * 2];
          iVar15 = uVar11 - iVar45;
          *(short *)((int)piVar35 + 0x5e) = (short)iVar15;
          iVar38 = (piVar35 + (5 - uVar30) * 2)[1];
          iVar27 = *piVar43;
          *piVar43 = iVar12;
          iVar12 = piVar43[1];
          *(char *)(piVar43 + 1) = (char)iVar38;
          piVar31[uVar30 * 2] = iVar27;
          *(char *)(piVar31 + uVar30 * 2 + 1) = (char)iVar12;
          FUN_016dd1aa(piVar31 + iVar32 * 2,piVar35,(5 - uVar30) * 8);
          FUN_016dd52c(piVar35,piVar35 + iVar45 * 2,iVar15 * 8);
          uVar49 = CONCAT44(piVar29,piVar31);
          if (piVar29 != (int *)0x0) {
            piVar43 = piVar35 + 0x18;
            FUN_016dd1aa(piVar31 + uVar30 + 0x19,piVar43,iVar45 * 4);
            FUN_016dd52c(piVar43,piVar43 + iVar45,iVar15 * 4 + 4);
            iVar38 = piVar31[uVar30 + 0x19];
            *(int **)(iVar38 + 0x58) = piVar31;
            *(short *)(iVar38 + 0x5c) = (short)iVar32;
            if (iVar32 != 6) {
              iVar32 = piVar31[uVar30 + 0x1a];
              *(short *)(iVar32 + 0x5c) = (short)(uVar30 + 2);
              *(int **)(iVar32 + 0x58) = piVar31;
              if (uVar30 + 2 != 6) {
                iVar32 = piVar31[uVar30 + 0x1b];
                *(short *)(iVar32 + 0x5c) = (short)(uVar30 + 3);
                *(int **)(iVar32 + 0x58) = piVar31;
                if (uVar30 + 3 != 6) {
                  iVar32 = piVar31[uVar30 + 0x1c];
                  *(short *)(iVar32 + 0x5c) = (short)(uVar30 + 4);
                  *(int **)(iVar32 + 0x58) = piVar31;
                  if (uVar30 + 4 != 6) {
                    iVar32 = piVar31[uVar30 + 0x1d];
                    *(short *)(iVar32 + 0x5c) = (short)(uVar30 + 5);
                    *(int **)(iVar32 + 0x58) = piVar31;
                    if (uVar30 + 5 != 6) {
                      iVar32 = piVar31[uVar30 + 0x1e];
                      *(ushort *)(iVar32 + 0x5c) = uVar5 + 6;
                      *(int **)(iVar32 + 0x58) = piVar31;
                    }
                  }
                }
              }
            }
            iVar32 = 0;
            do {
              iVar38 = piVar35[iVar32 + 0x18];
              *(short *)(iVar38 + 0x5c) = (short)iVar32;
              iVar32 = iVar32 + 1;
              *(int **)(iVar38 + 0x58) = piVar35;
              uVar49 = CONCAT44(piVar29,piVar31);
            } while (uVar11 + uVar30 + -5 != iVar32);
          }
        }
      }
      if (*(short *)((int)uVar49 + 0x5e) == 0) {
LAB_009fcac0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_004194a6,0x19,local_2134);
      }
    } while ((int)((ulonglong)uVar49 >> 0x20) != 0);
    while (piVar43 = (int *)(uint)*(ushort *)((int)piVar10 + 0x5e), piVar43 == (int *)0x0) {
      piVar10 = (int *)piVar10[0x18];
      piVar10[0x16] = 0;
      thunk_FUN_016d3fb4();
      puVar33 = puVar33 + -1;
      if (puVar33 == (undefined1 *)0x0) goto LAB_009fb8c8;
    }
    puVar37 = *(undefined1 **)(param_2 + 0x4c);
    if (puVar33 <= puVar37) {
      puVar37 = puVar33;
      piVar31 = piVar10;
      uVar30 = 0;
      do {
        while( true ) {
          do {
            uVar11 = uVar30;
            piVar35 = piVar31;
            puVar37 = puVar37 + -1;
            piVar43 = (int *)((int)piVar43 + (uint)*(ushort *)(piVar35[uVar11 + 0x18] + 0x5e));
            piVar31 = (int *)piVar35[uVar11 + 0x18];
            uVar30 = 0;
          } while (puVar37 != (undefined1 *)0x0);
          puVar37 = &DAT_00000001;
          if (*(ushort *)((int)piVar35 + 0x5e) <= uVar11) break;
          piVar31 = piVar35;
          uVar30 = uVar11 + 1;
        }
        do {
          piVar31 = (int *)piVar35[0x16];
          if (piVar31 == (int *)0x0) goto LAB_009fb8d0;
          puVar1 = (ushort *)(piVar35 + 0x17);
          puVar37 = puVar37 + 1;
          piVar35 = piVar31;
        } while ((uint)*(ushort *)((int)piVar31 + 0x5e) <= (uint)*puVar1);
        uVar30 = *puVar1 + 1;
      } while( true );
    }
    uVar30 = (uint)*(ushort *)(*puVar22 + 0x5e);
    if (puVar37 != (undefined1 *)0x0) {
      uVar11 = 0;
      uVar18 = *puVar22;
      do {
        while( true ) {
          do {
            uVar41 = uVar18;
            uVar39 = uVar11;
            puVar37 = puVar37 + -1;
            uVar18 = *(uint *)(uVar41 + uVar39 * 4 + 0x60);
            uVar30 = uVar30 + *(ushort *)(uVar18 + 0x5e);
            uVar11 = 0;
          } while (puVar37 != (undefined1 *)0x0);
          puVar37 = &DAT_00000001;
          if (*(ushort *)(uVar41 + 0x5e) <= uVar39) break;
          uVar11 = uVar39 + 1;
          uVar18 = uVar41;
        }
        do {
          uVar18 = *(uint *)(uVar41 + 0x58);
          if (uVar18 == 0) goto LAB_009fc9e0;
          puVar1 = (ushort *)(uVar41 + 0x5c);
          puVar37 = puVar37 + 1;
          uVar41 = uVar18;
        } while ((uint)*(ushort *)(uVar18 + 0x5e) <= (uint)*puVar1);
        uVar11 = *puVar1 + 1;
      } while( true );
    }
LAB_009fc9e0:
    piVar43 = (int *)(iVar8 - uVar30);
    goto LAB_009fb8d8;
  }
LAB_009fb8c8:
  piVar43 = (int *)(uint)*(ushort *)((int)piVar10 + 0x5e);
  puVar33 = (undefined1 *)0x0;
LAB_009fb8d0:
  uVar30 = iVar8 - (int)piVar43;
LAB_009fb8d8:
  *(uint *)(param_2 + 0x50) = uVar30;
  puVar37 = puVar33;
LAB_009fb8dc:
  local_2040._0_4_ = piVar10;
  local_2040._4_4_ = (int *)puVar37;
  local_2038 = piVar43;
  FUN_009f3df0(&local_2040);
LAB_009fb8f4:
  if (*(char *)(param_2 + 0xc) != '\0') {
    cVar3 = *(char *)(param_2 + 0xd);
    local_20e4 = *(uint *)(param_2 + 0x48);
    local_20e0 = *(uint *)(param_2 + 0x4c);
    uVar30 = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x10);
    local_20ec = local_20e4;
    local_20cc = 0;
    if (local_20e4 != 0) {
      local_20ec = 1;
      local_20cc = *(int *)(param_2 + 0x50);
    }
    local_20d8 = 0;
    local_20e8 = 0;
    if (0 < (int)uVar30) {
      local_20dc = local_20ec;
      local_20d4 = local_20e4;
      local_20d0 = local_20e0;
      local_20c8 = uVar30 & ~((int)uVar30 >> 0x1f);
      do {
        piVar10 = (int *)FUN_009f2f50(&local_20ec);
        if (piVar10 == (int *)0x0) goto LAB_009fba00;
        uVar30 = local_20c8 - 1;
        local_20c8 = uVar30;
      } while ((char)piVar10[1] != '\x02' && uVar30 != 0);
      if ((char)piVar10[1] == '\x02') {
        iVar8 = piVar10[1];
        iVar32 = *piVar10;
        piVar10 = (int *)thunk_FUN_016d4a50(0x20);
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,0x20);
        }
        *(char *)(piVar10 + 1) = (char)iVar8;
        piVar43 = (int *)&DAT_00000001;
        *piVar10 = iVar32;
        local_2040._0_4_ = (int *)&DAT_00000004;
        piVar31 = piVar10;
        piVar35 = (int *)local_2040;
        uVar18 = local_20dc;
        uVar41 = local_20d8;
        uVar11 = local_20d4;
        uVar39 = local_20d0;
        iVar8 = local_20cc;
        while( true ) {
          local_2040._0_4_ = piVar35;
          local_2040._4_4_ = piVar31;
          local_2038 = piVar43;
          if (uVar30 == 0) break;
          do {
            if (iVar8 == 0) goto LAB_009fbb90;
            if ((uVar18 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0186b428);
            }
            if (uVar41 == 0) {
              for (; uVar41 = uVar11, uVar39 != 0; uVar39 = uVar39 - 1) {
                uVar11 = *(uint *)(uVar41 + (uint)*(ushort *)(uVar41 + 0x5e) * 4 + 0x60);
              }
              uVar39 = (uint)*(ushort *)(uVar41 + 0x5e);
              uVar11 = 0;
              if (uVar39 != 0) goto LAB_009fbaf8;
LAB_009fbb2c:
              do {
                uVar18 = *(uint *)(uVar41 + 0x58);
                if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_0186b4e8);
                }
                uVar39 = (uint)*(ushort *)(uVar41 + 0x5c);
                uVar11 = uVar11 + 1;
                uVar41 = uVar18;
              } while (uVar39 == 0);
            }
            else {
              if (uVar39 == 0) goto LAB_009fbb2c;
LAB_009fbaf8:
              uVar18 = uVar41;
            }
            uVar23 = uVar39 - 1;
            uVar41 = uVar18;
            uVar39 = uVar23;
            if (uVar11 != 0) {
              uVar41 = *(uint *)(uVar18 + uVar23 * 4 + 0x60);
              while (uVar11 = uVar11 - 1, uVar11 != 0) {
                uVar41 = *(uint *)(uVar41 + (uint)*(ushort *)(uVar41 + 0x5e) * 4 + 0x60);
              }
              uVar39 = (uint)*(ushort *)(uVar41 + 0x5e);
            }
            piVar29 = (int *)(uVar18 + uVar23 * 8);
            iVar8 = iVar8 + -1;
            uVar30 = uVar30 - 1;
            cVar4 = (char)piVar29[1];
            uVar11 = uVar23;
            if (cVar4 != '\x02') {
              uVar18 = 1;
              uVar11 = 0;
            }
          } while (cVar4 != '\x02' && uVar30 != 0);
          if (cVar4 != '\x02') break;
          iVar32 = piVar29[1];
          iVar38 = *piVar29;
          if (piVar43 == piVar35) {
            FUN_009f4d18(&local_2040,piVar43,1,4,8);
            piVar10 = local_2040._4_4_;
          }
          uVar18 = 1;
          iVar12 = (int)piVar43 * 2;
          piVar10[iVar12] = iVar38;
          piVar43 = (int *)((int)piVar43 + 1);
          *(char *)(piVar10 + iVar12 + 1) = (char)iVar32;
          uVar11 = 0;
          piVar31 = local_2040._4_4_;
          piVar35 = (int *)local_2040;
        }
LAB_009fbb90:
        puVar44 = &DAT_005687a0;
        if (cVar3 == '\0') {
          puVar44 = &DAT_00378071;
        }
        iVar8 = 3;
        if (cVar3 != '\0') {
          iVar8 = 4;
        }
        local_2180 = &DAT_018af198;
        local_217c = &DAT_01881ec8;
        piVar10 = piVar31;
        do {
          piVar29 = piVar10 + 2;
          iVar38 = *piVar10;
          FUN_009f5b80(&local_20c4,iVar38,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8))
          ;
          iVar32 = local_20bc;
          uVar21 = local_20c0;
          if (local_20bc < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600c10();
          }
          if (local_20bc == 0) {
            iVar12 = 1;
          }
          else {
            iVar12 = thunk_FUN_016d4a50();
            if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar32);
            }
          }
          FUN_016dd1aa(iVar12,uVar21,iVar32);
          local_20b0 = iVar32;
          local_20b8 = iVar32;
          local_20b4 = iVar12;
          FUN_010060a0(&local_20b8,iVar32,iVar8);
          iVar15 = local_20b0;
          iVar27 = local_20b4;
          iVar12 = local_20b8;
          FUN_016dd1aa(local_20b4 + local_20b0,puVar44,iVar8);
          local_2040._0_4_ = (int *)0x0;
          local_2034 = (uint *)((uint)local_2034 & 0xffff0000);
          local_2040._4_4_ = (int *)&DAT_000001b6;
          local_2038 = (int *)&DAT_00000001;
          local_20b0 = iVar15 + iVar8;
          FUN_015ec1bc(&local_20a8,&local_2040,uVar21,iVar32);
          piVar10 = local_20a4;
          uVar30 = (uint)local_20a8 & 0xff;
          if (uVar30 == 4) {
            local_20ac = local_20a4;
            local_2040._0_4_ = (int *)0x0;
            uVar30 = (uint)local_2034 >> 8;
            local_2040._4_4_ = (int *)&DAT_000001b6;
            local_2034 = (uint *)CONCAT31((uint3)uVar30 & 0xffff00,1);
            local_2038 = (int *)0x1000100;
            FUN_015ec1bc(&local_20a8,&local_2040,iVar27,iVar15 + iVar8);
            piVar40 = local_20a4;
            uVar30 = (uint)local_20a8 & 0xff;
            if (uVar30 != 4) {
              local_2190 = (uint)*(uint3 *)((uint)&local_20a8 | 1);
              pcVar25 = (code *)local_20a4;
LAB_009fbeac:
              FUN_016dffb2(piVar10);
              local_2194 = (int *)pcVar25;
              goto LAB_009fbeb4;
            }
            if (cVar3 == '\0') {
              local_2020 = local_2020 & 0xffffff00;
              local_202c = (int *)0x0;
              local_2034 = (uint *)0x0;
              local_2040._0_4_ = (int *)&DAT_80000000;
              local_2024 = (int *)0x0;
              FUN_01007358(&local_38,&local_2040,6);
              FUN_0100837c(&local_2058,6);
              iVar15 = thunk_FUN_016d4a50(0x8000);
              if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,0x8000);
              }
              local_2090 = local_2058;
              local_208c = (int *)local_2054;
              local_2088 = local_2050;
              local_2084 = iStack_204c;
              local_2080 = local_2048;
              uStack_207c = uStack_2044;
              local_2064 = local_38;
              local_2060 = local_34;
              local_205c = local_30;
              local_2078 = piVar40;
              local_2074 = 0x8000;
              local_20a4 = (int *)0x0;
              local_20a8 = (int *)0x0;
              local_206c = 0;
              local_2068 = 0;
              local_2098 = (int *)0x0;
              local_20a0 = (int *)0x0;
              local_2070 = iVar15;
LAB_009fbfd8:
              do {
                uVar30 = FUN_016e0250(piVar10,&local_2040,0x2000);
                if (uVar30 != 0xffffffff) {
                  if (uVar30 != 0) {
                    local_2168 = &local_2040;
LAB_009fc03c:
                    piVar40 = local_2078;
                    if (local_2068 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb3aac(0,&local_2068,&DAT_00568f30,0);
                    }
                    if (local_205c != 0) {
                      do {
                        uVar11 = local_205c;
                        piVar13 = local_2060;
                        if (piVar40 == (int *)0xffffffff) goto LAB_009fcb10;
                        uVar18 = FUN_016e034e(piVar40,local_2060,local_205c);
                        if (uVar18 == 0xffffffff) {
                          puVar19 = (uint *)FUN_016d2bc8();
                          local_3c = *puVar19;
                          local_40 = 0;
                          goto switchD_009fc3d4_caseD_0;
                        }
                        if (uVar11 < uVar18) goto LAB_009fcadc;
                        uVar11 = uVar11 - uVar18;
                        local_205c = 0;
                        if (uVar18 == 0) {
                          if (uVar11 == 0) break;
                        }
                        else {
                          if (uVar11 == 0) break;
                          FUN_016dd52c(piVar13,(undefined1 *)((int)piVar13 + uVar18),uVar11);
                        }
                        local_205c = uVar11;
                      } while( true );
                    }
LAB_009fc0d8:
                    piVar40 = local_2078;
                    if (local_206c != 0) {
                      if (local_2078 != (int *)0xffffffff) {
                        do {
                          uVar11 = local_206c;
                          iVar15 = local_2070;
                          uVar18 = FUN_016e034e(piVar40,local_2070,local_206c);
                          if (uVar18 == 0) {
                            uVar11 = 1;
LAB_009fc294:
                            local_34 = (int *)(uVar11 | 0x1700);
                            local_30 = local_21a4;
                            goto LAB_009fc36c;
                          }
                          if (uVar18 == 0xffffffff) {
                            puVar19 = (uint *)FUN_016d2bc8();
                            local_21a4 = *puVar19;
                            uVar11 = 0;
                            goto LAB_009fc294;
                          }
                          if (uVar11 < uVar18) goto LAB_009fcadc;
                          uVar11 = uVar11 - uVar18;
                          local_206c = 0;
                          if (uVar11 == 0) goto LAB_009fc14c;
                          FUN_016dd52c(iVar15,iVar15 + uVar18,uVar11);
                          local_206c = uVar11;
                          if (piVar40 == (int *)0xffffffff) break;
                        } while( true );
                      }
                      local_217c = &DAT_01881ea8;
LAB_009fcb10:
                    /* WARNING: Subroutine does not return */
                      FUN_00faa444(local_217c);
                    }
                    iVar15 = local_2070;
LAB_009fc14c:
                    uVar11 = local_2074;
                    piVar36 = local_2080;
                    iVar45 = local_2084;
                    piVar20 = local_2088;
                    piVar13 = local_208c;
                    piVar40 = local_2090;
                    *local_2080 = (int)local_2168;
                    local_2080[1] = uVar30;
                    local_2080[6] = 0;
                    local_2080[3] = iVar15;
                    local_2080[4] = local_2074;
                    local_2c[0] = FUN_018162dc(local_2080,0);
                    puVar24 = (undefined8 *)*piVar36;
                    iVar28 = piVar36[3];
                    *piVar36 = 0;
                    piVar36[1] = 0;
                    piVar36[3] = 0;
                    piVar36[4] = 0;
                    uVar18 = (int)puVar24 - (int)local_2168;
                    local_2090 = (int *)((int)piVar40 + uVar18);
                    uVar41 = iVar28 - iVar15;
                    local_208c = (int *)((int)piVar13 + (uint)CARRY4((uint)piVar40,uVar18));
                    local_2088 = (int *)((int)piVar20 + uVar41);
                    local_2084 = iVar45 + (uint)CARRY4((uint)piVar20,uVar41);
                    switch(local_2c[0]) {
                    case 1:
                      goto switchD_009fc1fc_caseD_1;
                    case -5:
                      local_2c[0] = 1;
                    case 0:
                      local_206c = uVar11;
                      if (uVar41 < uVar11) {
                        local_206c = uVar41;
                      }
                      if ((puVar24 != local_2168) || (local_2c[0] == 2)) goto LAB_009fc2cc;
                      goto LAB_009fc0d8;
                    default:
                      local_2058 = local_2c;
                      local_2054 = FUN_00fac2b8;
                    /* WARNING: Subroutine does not return */
                      FUN_00faa478(&DAT_00593ed6,&local_2058,&DAT_01881fe4);
                    case -2:
                      iVar15 = piVar36[6];
                      if (iVar15 != 0) {
                        uVar14 = FUN_016dd8a2(iVar15);
                        FUN_00fab1e0(&local_2058,iVar15,uVar14);
                      }
                      local_206c = uVar11;
                      if (uVar41 < uVar11) {
                        local_206c = uVar41;
                      }
                      FUN_015e79d4(&local_34,0x14,&DAT_00378037,0x16);
LAB_009fc36c:
                      uVar11 = local_40;
                      *(undefined2 *)((uint)&local_40 | 1) = local_34._1_2_;
                      *(undefined1 *)((undefined2 *)((uint)&local_40 | 1) + 1) = local_34._3_1_;
                      local_3c = local_30;
                      local_40 = CONCAT31(local_40._1_3_,(undefined1)local_34);
                      uVar41 = local_40;
                      uVar18 = local_30;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                      switch((uint)local_34 & 0xff) {
                      case 0:
                        goto switchD_009fc3d4_caseD_0;
                      case 1:
                        goto switchD_009fc3d4_caseD_1;
                      default:
                        goto switchD_009fc3d4_default;
                      }
                    }
                  }
                  FUN_016dd1aa(&local_2040,&local_20a8,0x50);
                  FUN_01006d74(&local_2058,&local_2040);
                  pcVar25 = (code *)local_2010;
                  if ((char)local_2058 == '\x04') {
                    uVar30 = 4;
                    local_2010 = (int *)0xffffffff;
                    if (pcVar25 == (code *)0xffffffff) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa444(&DAT_01881ed8);
                    }
                  }
                  else {
                    local_21b4 = (uint)local_2058 >> 8;
                    uVar30 = (uint)local_2058 & 0xff;
                    pcVar25 = local_2054;
                  }
                  FUN_01007068(&local_2040);
                  FUN_0100710c(&local_2028);
                  if (local_1ffc != 0) {
                    thunk_FUN_016d3fb4(local_1ff8);
                  }
                  if (uVar30 != 4) {
                    local_2190 = local_21b4;
                    goto LAB_009fbeac;
                  }
                  FUN_016dffb2(pcVar25);
                  goto LAB_009fc7dc;
                }
                puVar9 = (undefined4 *)FUN_016d2bc8();
                pcVar25 = (code *)*puVar9;
                if (pcVar25 != (code *)&DAT_00000004) {
                  uVar30 = 0;
LAB_009fc518:
                  FUN_01007068(&local_20a8);
                  FUN_010061d8(&local_2090);
                  local_2190 = uVar30 >> 8;
                  uVar30 = uVar30 & 0xff;
                  if (local_2064 != 0) {
                    thunk_FUN_016d3fb4(local_2060);
                  }
                  goto LAB_009fbeac;
                }
              } while( true );
            }
            piVar13 = (int *)FUN_017a1e34();
            if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0041d960,0x34,&DAT_018af4c4);
            }
            uVar14 = FUN_0179bb68(piVar13,100,3);
            iVar15 = FUN_01793784();
            if (iVar15 == 0) {
              uVar14 = FUN_017a1d00(piVar13,1,0);
              iVar15 = FUN_01793784();
              if (iVar15 != 0) {
                uVar14 = FUN_017937a4(uVar14);
                uVar16 = FUN_016dd8a2();
                FUN_00fab1e0(&local_2040,uVar14,uVar16);
                piVar36 = local_2038;
                piVar20 = local_2040._4_4_;
                if ((int *)local_2040 == (int *)&DAT_00000001) goto LAB_009fcbf8;
                if ((int)local_2038 < 0) goto LAB_009fc9ec;
                if (local_2038 == (int *)0x0) {
                  piVar17 = (int *)&DAT_00000001;
                }
                else {
                  piVar17 = (int *)thunk_FUN_016d4a50(local_2038);
                  if (piVar17 == (int *)0x0) goto LAB_009fccd8;
                }
                FUN_016dd1aa(piVar17,piVar20,piVar36);
                local_2040._0_4_ = piVar36;
                local_2040._4_4_ = piVar17;
                local_2038 = piVar36;
                FUN_016d23a8(&local_38,0x28,&local_2040);
                goto LAB_009fc7a0;
              }
              piVar20 = (int *)thunk_FUN_016d4a50(0x8000);
              if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,0x8000);
              }
              local_2098 = (int *)0x0;
              local_2094 = piVar40;
              local_20a0 = (int *)0x8000;
              local_208c = (int *)((uint)local_208c & 0xffff0000);
              local_2090 = (int *)0x0;
              local_20a8 = (int *)0x0;
              local_20a4 = piVar13;
              local_209c = piVar20;
              FUN_010064f8(&local_2040,&local_20ac,&local_20a8);
              pcVar25 = (code *)local_2038;
              piVar40 = local_2040._4_4_;
              if ((int *)local_2040 == (int *)&DAT_00000001) {
                FUN_016dffb2(local_2094);
                if (local_20a8 == (int *)0x0) {
                  FUN_017a1ef4(local_20a4);
                }
                if (local_20a0 != (int *)0x0) {
                  thunk_FUN_016d3fb4(local_209c);
                }
                goto LAB_009fc7cc;
              }
              local_2040._0_4_ = local_20a8;
              local_2040._4_4_ = local_20a4;
              local_2038 = local_20a0;
              local_2034 = (uint *)local_209c;
              local_2030 = local_2098;
              local_202c = local_2094;
              local_2028 = local_2090;
              local_2024 = local_208c;
              FUN_01006b20(&local_2058);
              pcVar46 = (code *)local_202c;
              puVar19 = local_2034;
              piVar36 = local_2038;
              piVar20 = local_2040._4_4_;
              piVar13 = (int *)local_2040;
              pcVar25 = local_2054;
              piVar40 = local_2058;
              if ((char)local_2058 != '\x04') {
                pcVar46 = (code *)local_2040._4_4_;
                if ((int *)local_2040 == (int *)&SUB_00000002) goto LAB_009fc888;
                FUN_016dffb2(local_202c);
                if (piVar13 == (int *)0x0) {
                  FUN_017a1ef4(piVar20);
                }
                if (piVar36 != (int *)0x0) {
                  thunk_FUN_016d3fb4(puVar19);
                }
                uVar30 = (uint)piVar40 & 0xff;
                if (uVar30 == 4) {
                  pcVar46 = pcVar25;
                  goto LAB_009fc888;
                }
                goto LAB_009fc8ac;
              }
              if (local_2038 != (int *)0x0) {
                thunk_FUN_016d3fb4(local_2034);
              }
              if (piVar13 == (int *)0x0) {
                FUN_017a1ef4(piVar20);
              }
LAB_009fc888:
              FUN_016dffb2(pcVar46);
            }
            else {
              uVar14 = FUN_017937a4(uVar14);
              uVar16 = FUN_016dd8a2();
              FUN_00fab1e0(&local_2040,uVar14,uVar16);
              piVar36 = local_2038;
              piVar20 = local_2040._4_4_;
              if ((int *)local_2040 == (int *)&DAT_00000001) {
LAB_009fcbf8:
                local_2058 = local_2040._4_4_;
                local_2054 = (code *)local_2038;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_0041d945,0x1b,&local_2058,&DAT_018af4a4,&DAT_018af4b4);
              }
              if ((int)local_2038 < 0) {
LAB_009fc9ec:
                uVar21 = 0;
                piVar36 = local_2038;
LAB_009fc9f0:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar21,piVar36);
              }
              if (local_2038 == (int *)0x0) {
                piVar17 = (int *)&DAT_00000001;
              }
              else {
                piVar17 = (int *)thunk_FUN_016d4a50(local_2038);
                if (piVar17 == (int *)0x0) {
LAB_009fccd8:
                  uVar21 = 1;
                  goto LAB_009fc9f0;
                }
              }
              FUN_016dd1aa(piVar17,piVar20,piVar36);
              local_2040._0_4_ = piVar36;
              local_2040._4_4_ = piVar17;
              local_2038 = piVar36;
              FUN_016d23a8(&local_38,0x28,&local_2040);
LAB_009fc7a0:
              pcVar25 = (code *)local_34;
              uVar7 = (char)local_38;
              uVar6 = *(undefined3 *)((uint)&local_38 | 1);
              FUN_017a1ef4(piVar13);
              FUN_016dffb2(piVar40);
              piVar40 = (int *)CONCAT31(uVar6,uVar7);
LAB_009fc7cc:
              uVar30 = (uint)piVar40 & 0xff;
              if (uVar30 != 4) {
LAB_009fc8ac:
                local_2190 = (uint)piVar40 >> 8;
                goto LAB_009fbeac;
              }
            }
LAB_009fc7dc:
            FUN_015f438c(&local_2040,uVar21,iVar32);
            if ((char)local_2040 != '\x04') {
              local_2190 = (uint)(int *)local_2040 >> 8;
              uVar30 = (uint)(int *)local_2040 & 0xff;
              pcVar25 = (code *)local_2040._4_4_;
              goto LAB_009fbeac;
            }
            FUN_016dffb2(piVar10);
            uVar30 = 4;
            if (iVar12 != 0) goto LAB_009fbec0;
          }
          else {
            local_2190 = (uint)*(uint3 *)((uint)&local_20a8 | 1);
            local_2194 = local_20a4;
LAB_009fbeb4:
            if (iVar12 != 0) {
LAB_009fbec0:
              thunk_FUN_016d3fb4(iVar27);
            }
            if (uVar30 != 4) {
              if (local_20c4 != 0) {
                thunk_FUN_016d3fb4(uVar21);
              }
              if (piVar35 != (int *)0x0) {
                thunk_FUN_016d3fb4(piVar31);
              }
              if (uVar26 == 3) {
                puVar9 = (undefined4 *)local_20f4[1];
                iVar8 = *local_20f4;
                pcVar25 = (code *)*puVar9;
                if (pcVar25 != (code *)0x0) {
                  (*pcVar25)(iVar8);
                }
                if (puVar9[1] != 0) {
                  thunk_FUN_016d3fb4(iVar8);
                }
                thunk_FUN_016d3fb4(local_20f4);
              }
              uVar11 = local_2190 & 0xffffff | (int)local_2194 << 0x18;
              local_20f4 = local_2194;
              goto LAB_009fba30;
            }
          }
          FUN_009f3ce0(puVar22,iVar38,cVar3);
          if (local_20c4 != 0) {
            thunk_FUN_016d3fb4(uVar21);
          }
          piVar10 = piVar29;
        } while (piVar29 != piVar31 + (int)piVar43 * 2);
        if (piVar35 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar31);
        }
      }
    }
  }
LAB_009fba00:
  if (uVar26 == 4) {
    *(undefined1 *)param_1 = 4;
    return;
  }
  uVar11 = local_20f8 >> 8 | (int)local_20f4 << 0x18;
  uVar30 = uVar26;
LAB_009fba30:
  *param_1 = uVar30 | uVar11 << 8;
  param_1[1] = (uint)local_20f4 & 0xffffff00 | uVar11 >> 0x18;
  return;
}

