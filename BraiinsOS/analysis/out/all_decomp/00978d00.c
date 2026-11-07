// FUN_00978d00 @ 00978d00 size=7744 calls_out=53 calls_in=0
// strings: p_no | tifi | er.s | ckfan_rpm_oktemp_configpause_cooldown_modeFixedSpeedTargetTemperatureimmersion_modedangerous_internal_chip_tempcooldown_temp | SetGloba | SetGloba

/* WARNING: Removing unreachable block (ram,0x00978ea0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_00978d00(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *********pppppppppiVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int *******pppppppiVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined1 *puVar13;
  int *piVar14;
  int *********pppppppppiVar15;
  bool bVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 uVar26;
  ulonglong *puVar27;
  int *****pppppiVar28;
  uint uVar29;
  char cVar30;
  byte *pbVar31;
  int *********pppppppppiVar32;
  int *********pppppppppiVar33;
  int ********ppppppppiVar34;
  uint uVar35;
  uint uVar36;
  int ********ppppppppiVar37;
  undefined *puVar38;
  uint *puVar39;
  int *********pppppppppiVar40;
  char *pcVar41;
  bool bVar42;
  ulonglong uVar43;
  undefined8 uVar44;
  undefined4 local_738;
  int *********local_72c;
  int *********local_728;
  undefined4 *local_714;
  undefined1 *local_70c;
  int *********local_6f0;
  int *********local_6ec;
  int *********local_6e8;
  undefined4 local_6e4;
  int *********local_6e0;
  int local_6dc;
  int *********local_6d8;
  int *********local_6d4;
  int *********local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  int *local_5e8;
  undefined4 local_5e4;
  undefined1 local_5e0;
  int ********local_5d8;
  undefined1 *local_5d4;
  int *********local_5d0;
  int *********local_5cc;
  int *********local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  int *********local_4c8;
  int *********local_4c4;
  int *********local_4c0;
  int *********local_4bc;
  int ********local_4b8;
  undefined *local_4b4;
  undefined4 *local_3c8;
  int ********local_3c0;
  int ********local_3bc;
  int *********local_2c0;
  undefined4 local_2bc;
  int *********local_2b8;
  undefined4 local_2b4;
  int *********local_2b0;
  int local_2ac;
  int *local_2a8;
  undefined4 local_298;
  undefined1 auStack_294 [260];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_180;
  int local_17c;
  int *********local_150;
  undefined4 *local_14c;
  undefined4 *local_148;
  int *local_48;
  undefined1 auStack_41 [29];
  
  puVar17 = (undefined4 *)((uint)&local_2c0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x2d)) {
  case 0:
    uVar7 = *param_1;
    uVar18 = param_1[1];
    *(undefined1 *)((int)param_1 + 0xb1) = 0;
    param_1[0x2a] = uVar7;
    param_1[0x2b] = uVar18;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876038);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876038);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0xb1)) {
    case 0:
      uVar7 = param_1[0x2a];
      uVar18 = param_1[0x2b];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876080);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876080);
    case 3:
      pbVar31 = (byte *)param_1[0x26];
      piVar10 = (int *)param_1[0x27];
      puVar11 = param_1;
      goto LAB_009798c4;
    }
  }
  puVar11 = param_1 + 0x29;
  *puVar11 = uVar18;
  param_1[0x28] = uVar7;
  FUN_015f438c(&local_2c0,"/",0x15);
  if ((4 < ((uint)local_2c0 & 0xff)) || (((uint)local_2c0 & 0xff) == 3)) {
    ppppppppiVar34 = *local_2bc;
    ppppppppiVar37 = local_2bc[1];
    pppppppiVar9 = *ppppppppiVar37;
    if (pppppppiVar9 != (int *******)0x0) {
      (*(code *)pppppppiVar9)(ppppppppiVar34);
    }
    if (ppppppppiVar37[1] != (int *******)0x0) {
      thunk_FUN_016d3fb4(ppppppppiVar34);
    }
    thunk_FUN_016d3fb4(local_2bc);
  }
  FUN_016dd606((int)&local_5c4 + 2,0,0x58);
  iVar19 = -2;
  pcVar41 = "/";
  do {
    if (*pcVar41 == '\0') goto LAB_00978f98;
    bVar42 = iVar19 != -1;
    iVar19 = iVar19 + 1;
    pcVar41 = pcVar41 + 1;
  } while (bVar42);
  iVar19 = 0x12;
  do {
    if ("/"[iVar19] == '\0') goto LAB_00978f98;
    iVar19 = iVar19 + 1;
  } while (iVar19 != 0x15);
  local_5c4 = CONCAT13(local_5c4._3_1_,0x6b636f);
  local_5c8 = (int *********)0x732e7265;
  local_5cc = (int *********)0x69666974;
  local_5d0 = (int *********)0x6f6e5f70;
  FUN_016dd1aa(&local_4c8,&local_5d0,0x66);
  local_2b8 = (int *********)&DAT_692f706d;
  FUN_016dd1aa(&local_2b4,&local_4c8,0x66);
  local_2bc = (int *********)0x742f0001;
  local_2c0 = (int *********)&DAT_00000018;
  FUN_0126ddd8(&local_4c8,&local_2c0);
  pppppppppiVar33 = local_4c4;
  if ((char)local_4c8 != '\x04') {
    local_2c0 = local_4c8;
    local_2bc = local_4c4;
    goto LAB_0097957c;
  }
  uVar43 = FUN_0164ec90(&DAT_01876058);
  pppppppppiVar40 = (int *********)(uVar43 >> 0x20);
  iVar19 = 0x180;
  if ((uVar43 & 1) != 0) {
    iVar19 = 0xb8;
  }
  if (*(int *)((int)pppppppppiVar40 + iVar19 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01876058);
  }
  pcVar41 = (char *)((int)pppppppppiVar40 + iVar19 + 0x3c);
  if (*pcVar41 == '\0') {
    bVar42 = (bool)hasExclusiveAccess(pcVar41);
    if (!bVar42) goto LAB_00979020;
    *pcVar41 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00979020:
    FUN_01280da8(pcVar41);
  }
  FUN_0128236c(pcVar41);
  FUN_0164736c(&local_4c8,(undefined1 *)((int)pppppppppiVar40 + iVar19 + 0x40));
  pppppppppiVar3 = local_4c4;
  pppppppppiVar15 = local_4c8;
  uVar29 = (uint)local_4c8 & 0xff;
  pppppppppiVar32 = pppppppppiVar3;
  if (uVar29 != 4) {
    FUN_01282570(pcVar41);
    if (*pcVar41 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar42 = (bool)hasExclusiveAccess(pcVar41);
        if (bVar42) {
          *pcVar41 = '\0';
          goto LAB_00979124;
        }
      } while (*pcVar41 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar41);
LAB_00979124:
    if (uVar29 == 4) goto LAB_0097913c;
LAB_00979524:
    DataMemoryBarrier(0xb);
    do {
      ppppppppiVar34 = *pppppppppiVar40;
      bVar42 = (bool)hasExclusiveAccess(pppppppppiVar40);
    } while (!bVar42);
    *pppppppppiVar40 = (int ********)((int)ppppppppiVar34 + -1);
    if ((int)uVar43 == 0) {
      if (ppppppppiVar34 == (int ********)&DAT_00000001) {
        DataMemoryBarrier(0xb);
        FUN_01659344(pppppppppiVar40);
      }
    }
    else if (ppppppppiVar34 == (int ********)&DAT_00000001) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(pppppppppiVar40);
    }
LAB_00979574:
    FUN_016dffb2(pppppppppiVar33);
    local_2c0 = pppppppppiVar15;
    local_2bc = pppppppppiVar32;
    goto LAB_0097957c;
  }
  FUN_01282570(pcVar41);
  if (*pcVar41 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar42 = (bool)hasExclusiveAccess(pcVar41);
      if (bVar42) {
        *pcVar41 = '\0';
        goto LAB_0097908c;
      }
    } while (*pcVar41 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar41);
LAB_0097908c:
  local_4bc = (int *********)0x0;
  local_4c8 = (int *********)0x80002005;
  pppppppppiVar15 = pppppppppiVar3 + 8;
  local_4c0 = pppppppppiVar15;
  iVar8 = FUN_016d3742(*(undefined4 *)((int)pppppppppiVar40 + iVar19 + 0x30),1,pppppppppiVar33,
                       &local_4c8);
  if (iVar8 < 0) {
    puVar17 = (undefined4 *)FUN_016d2bc8();
    pppppppppiVar32 = (int *********)*puVar17;
    if (*pcVar41 == '\0') {
      bVar42 = (bool)hasExclusiveAccess(pcVar41);
      if (!bVar42) goto LAB_009793d0;
      *pcVar41 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_009793d0:
      FUN_01280da8(pcVar41);
    }
    FUN_0128236c(pcVar41);
    if (*pppppppppiVar15 == (int ********)0x0) {
      if (*(int **********)((int)pppppppppiVar40 + iVar19 + 0x4c) == pppppppppiVar15) {
        ppppppppiVar34 = pppppppppiVar3[9];
        *(int *********)((int)pppppppppiVar40 + iVar19 + 0x4c) = ppppppppiVar34;
        goto joined_r0x009794a0;
      }
    }
    else {
      ppppppppiVar34 = pppppppppiVar3[9];
      (*pppppppppiVar15)[1] = (int *******)ppppppppiVar34;
joined_r0x009794a0:
      if (ppppppppiVar34 == (int ********)0x0) {
        if (*(int **********)((int)pppppppppiVar40 + iVar19 + 0x50) != pppppppppiVar15)
        goto LAB_009794b4;
        *(int *********)((int)pppppppppiVar40 + iVar19 + 0x50) = *pppppppppiVar15;
      }
      else {
        *ppppppppiVar34 = (int *******)*pppppppppiVar15;
      }
      pppppppppiVar3[8] = (int ********)0x0;
      pppppppppiVar3[9] = (int ********)0x0;
      DataMemoryBarrier(0xb);
      do {
        ppppppppiVar34 = *pppppppppiVar3;
        bVar42 = (bool)hasExclusiveAccess(pppppppppiVar3);
      } while (!bVar42);
      *pppppppppiVar3 = (int ********)((int)ppppppppiVar34 + -1);
      if (ppppppppiVar34 == (int ********)&DAT_00000001) {
        DataMemoryBarrier(0xb);
        FUN_01659660(pppppppppiVar3);
      }
    }
LAB_009794b4:
    FUN_01282570(pcVar41);
    if (*pcVar41 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar42 = (bool)hasExclusiveAccess(pcVar41);
        if (bVar42) {
          *pcVar41 = '\0';
          goto LAB_009794f4;
        }
      } while (*pcVar41 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar41);
LAB_009794f4:
    DataMemoryBarrier(0xb);
    do {
      ppppppppiVar34 = *pppppppppiVar3;
      bVar42 = (bool)hasExclusiveAccess(pppppppppiVar3);
    } while (!bVar42);
    *pppppppppiVar3 = (int ********)((int)ppppppppiVar34 + -1);
    pppppppppiVar15 = (int *********)0x0;
    if (ppppppppiVar34 == (int ********)&DAT_00000001) {
      DataMemoryBarrier(0xb);
      FUN_01659660(pppppppppiVar3);
    }
    goto LAB_00979524;
  }
LAB_0097913c:
  if ((int)uVar43 == 2) {
    pppppppppiVar15 = pppppppppiVar40;
    goto LAB_00979574;
  }
  puVar27 = (ulonglong *)(param_1 + 0x22);
  *puVar27 = uVar43;
  param_1[0x24] = pppppppppiVar3;
  param_1[0x25] = pppppppppiVar33;
  FUN_015f49f8(&local_2c0,"/",0x15);
  if (((char)local_2c0 == '\x04') || (((uint)local_2c0 & 0xff) == 4)) {
    if ((2 < DAT_018d9130) || (DAT_018da40c == '\0')) goto LAB_0097acf8;
    if (DAT_018da40c == '\x01') {
LAB_009791ec:
      DataMemoryBarrier(0xb);
      puVar38 = &DAT_018ae394;
      pcVar41 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar41 = DAT_018daa74;
        puVar38 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar41 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar19 = (**(code **)(puVar38 + 0x14))(pcVar41,DAT_018da404);
      if (iVar19 == 0) goto LAB_0097acf8;
    }
    else if (DAT_018da40c != '\x02') {
      cVar6 = FUN_0169ac90(&DAT_018da404);
      if (cVar6 == '\0') goto LAB_0097acf8;
      if (cVar6 != '\x02') goto LAB_009791ec;
    }
    local_2ac = DAT_018da404;
    local_4c4 = *(int **********)(DAT_018da404 + 0x20);
    if (local_4c4 == (int *********)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01876068);
    }
    local_5d0 = (int *********)&local_4c8;
    local_4c0 = *(int **********)(DAT_018da404 + 0x24);
    local_4bc = *(int **********)(DAT_018da404 + 0x28);
    local_5cc = &local_3c0;
    local_6d0 = (int *********)(DAT_018da404 + 0x1c);
    local_4c8 = (int *********)*local_6d0;
    local_6d8 = (int *********)&local_5d0;
    local_3bc = (int ********)&local_150;
    local_4b8 = (int ********)0x0;
    local_5c8 = (int *********)&DAT_018abb78;
    local_6d4 = (int *********)&DAT_00000001;
    local_3c0 = (int ********)&DAT_00572d9e;
    local_14c = &DAT_0157d360;
    local_2b0 = (int *********)&local_6d8;
    local_150 = (int *********)&DAT_01876078;
    local_2bc = (int *********)0x0;
    local_2c0 = (int *********)&DAT_00000001;
    DataMemoryBarrier(0xb);
    pcVar41 = s_SetGloba_00414c05;
    puVar38 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar41 = DAT_018daa74;
      puVar38 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar41 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar19 = (**(code **)(puVar38 + 0x28))(pcVar41,&local_2c0);
    if (iVar19 != 0) {
      (**(code **)(puVar38 + 0x2c))(pcVar41,&local_2c0);
    }
LAB_0097acf8:
    piVar10 = param_1 + 2;
    pbVar31 = (byte *)(param_1 + 0x2c);
    *pbVar31 = 0;
    iVar19 = param_1[0x29];
    uVar29 = *(uint *)(iVar19 + 8);
    DataMemoryBarrier(0xb);
    param_1[2] = param_1 + 0x22;
    *(undefined1 *)(param_1 + 0x18) = 0;
    param_1[0x27] = piVar10;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x20] = 0;
    param_1[0x19] = param_1 + 0x29;
    param_1[0x1a] = iVar19 + 8;
    param_1[0x1b] = uVar29 >> 2;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x26] = pbVar31;
    puVar11 = (undefined4 *)0x0;
LAB_009798c4:
    uVar44 = thunk_FUN_016de0ee(puVar11,0x40);
    puVar39 = (uint *)((int)uVar44 + (int)((ulonglong)uVar44 >> 0x20));
    if ((char)puVar39[0xe] != '\x01') {
      if ((char)puVar39[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(puVar39,FUN_009948a0);
      *(undefined1 *)(puVar39 + 0xe) = 1;
    }
    cVar6 = (char)puVar39[0xc];
    bVar42 = cVar6 == '\x01';
    if (bVar42) {
      cVar6 = *(char *)((int)puVar39 + 0x31);
    }
    if (!bVar42 || cVar6 != '\0') {
      if ((puVar39[9] & 1) == 0) {
        uVar44 = FUN_0164e918();
        if ((uint)uVar44 < 2) {
          uVar44 = CONCAT44((int)((ulonglong)uVar44 >> 0x20),1);
        }
      }
      else {
        uVar44 = CONCAT44(puVar39[10],puVar39[0xb]);
      }
      uVar29 = (uint)((ulonglong)uVar44 >> 0x20);
      uVar24 = (uint)uVar44;
      iVar8 = 0;
      puVar39[9] = 1;
      puVar11 = (undefined4 *)*param_2;
      uVar29 = uVar29 ^ uVar29 << 0x11;
      puVar39[10] = uVar24;
      uVar29 = uVar24 >> 0x10 ^ uVar29 >> 7 ^ uVar24 ^ uVar29;
      puVar39[0xb] = uVar29;
      bVar16 = false;
      piVar14 = piVar10 + 0xd;
      iVar19 = 0;
      bVar42 = true;
LAB_00979a04:
      local_714 = param_1 + 2;
      if ((iVar19 - ((int)(uVar29 + uVar24) >> 0x1f) & 1U) == 0) {
        if ((*pbVar31 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar10[0x16]) {
          case '\0':
            iVar19 = *piVar10;
            iVar20 = 1;
            *(undefined1 *)(piVar10 + 7) = 0;
            piVar10[1] = iVar19;
            piVar10[2] = iVar19;
            piVar10[3] = 1;
            iVar22 = iVar19;
            break;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_0187a1cc);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_0187a1cc);
          case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar10[7]) {
            case '\0':
              iVar20 = piVar10[3];
              iVar19 = piVar10[1];
              iVar22 = piVar10[2];
              break;
            case '\x01':
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_0187a1dc);
            case '\x02':
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_0187a1dc);
            case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch((char)piVar10[0x15]) {
              case '\0':
                iVar19 = piVar10[8];
                iVar20 = piVar10[9];
                goto LAB_00979b24;
              case '\x01':
                    /* WARNING: Subroutine does not return */
                FUN_00fb7ca0(&DAT_0187a1ec);
              case '\x02':
                    /* WARNING: Subroutine does not return */
                FUN_00fb7cc0(&DAT_0187a1ec);
              case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch((char)piVar10[0x14]) {
                case '\0':
                  iVar19 = piVar10[10];
                  iVar20 = piVar10[0xb];
                  goto LAB_00979b34;
                case '\x01':
                    /* WARNING: Subroutine does not return */
                  FUN_00fb7ca0(&DAT_0187a1fc);
                case '\x02':
                    /* WARNING: Subroutine does not return */
                  FUN_00fb7cc0(&DAT_0187a1fc);
                case '\x03':
                  goto switchD_00979b00_caseD_3;
                }
              }
            case '\x04':
              goto switchD_00979a94_caseD_4;
            }
          }
          piVar10[4] = iVar19;
          piVar10[5] = iVar20;
          piVar10[6] = iVar22;
          do {
            *(undefined1 *)(piVar10 + 0x15) = 0;
            piVar10[8] = iVar19;
            piVar10[9] = iVar20;
LAB_00979b24:
            iVar19 = *(int *)(iVar19 + 8);
            *(undefined1 *)(piVar10 + 0x14) = 0;
            iVar19 = iVar19 + 0x20;
            piVar10[10] = iVar19;
            piVar10[0xb] = iVar20;
LAB_00979b34:
            *(undefined1 *)(piVar10 + 0x13) = 0;
            *(undefined1 *)(piVar10 + 0x12) = 0;
            piVar10[0x11] = iVar20;
            piVar10[0xc] = iVar19;
            piVar10[0xd] = 0;
            piVar10[0xe] = 0;
            piVar10[0xf] = 0;
switchD_00979b00_caseD_3:
            FUN_0163ab0c(&local_2c0,piVar10 + 0xc,param_2);
            pppppppppiVar33 = local_2bc;
            if (local_2bc._1_1_ == '\x02') {
              uVar26 = 3;
              *(undefined1 *)(piVar10 + 0x14) = 3;
              *(undefined1 *)(piVar10 + 0x15) = 3;
              goto LAB_009799e4;
            }
            iVar19 = piVar10[0xc];
            pcVar41 = (char *)(iVar19 + 0xc);
            if (*pcVar41 == '\0') {
              bVar16 = (bool)hasExclusiveAccess(pcVar41);
              if (!bVar16) goto LAB_00979b9c;
              *pcVar41 = '\x01';
              DataMemoryBarrier(0xb);
            }
            else {
              ClearExclusiveLocal();
LAB_00979b9c:
              FUN_01280da8(pcVar41);
            }
            FUN_0128236c(pcVar41);
            if (*piVar14 == 0) {
              if (*(int **)(iVar19 + 0x10) == piVar14) {
                piVar12 = (int *)piVar10[0xe];
                *(int **)(iVar19 + 0x10) = piVar12;
                goto joined_r0x00979bfc;
              }
            }
            else {
              piVar12 = (int *)piVar10[0xe];
              *(int **)(*piVar14 + 4) = piVar12;
joined_r0x00979bfc:
              if (piVar12 == (int *)0x0) {
                if (*(int **)(iVar19 + 0x14) != piVar14) goto LAB_00979c10;
                *(int *)(iVar19 + 0x14) = *piVar14;
              }
              else {
                *piVar12 = *piVar14;
              }
              piVar10[0xd] = 0;
              piVar10[0xe] = 0;
            }
LAB_00979c10:
            FUN_01282570(pcVar41);
            if (*pcVar41 == '\x01') {
              DataMemoryBarrier(0xb);
              do {
                bVar16 = (bool)hasExclusiveAccess(pcVar41);
                if (bVar16) {
                  *pcVar41 = '\0';
                  goto LAB_00979c4c;
                }
              } while (*pcVar41 == '\x01');
            }
            ClearExclusiveLocal();
            FUN_01280a5c(pcVar41);
LAB_00979c4c:
            if (piVar10[0xf] != 0) {
              (**(code **)(piVar10[0xf] + 0xc))(piVar10[0x10]);
            }
            *(undefined1 *)(piVar10 + 0x14) = 1;
            if (((uint)pppppppppiVar33 & 0x100) != 0) {
              FUN_015e79d4(&local_2c0,0x28,
                           "A Tokio 1.x context was found, but it is being shutdown.",0x38);
              local_728 = local_2c0;
              local_72c = local_2bc;
              *(undefined1 *)(piVar10 + 7) = 1;
              *(undefined1 *)(piVar10 + 0x15) = 1;
LAB_00979fd4:
              pppppppppiVar33 = (int *********)&SUB_00000002;
LAB_00979fd8:
              bVar5 = 1;
              *(undefined1 *)(piVar10 + 0x16) = 1;
              goto LAB_00979fe0;
            }
            *(undefined1 *)(piVar10 + 0x15) = 1;
            piVar10[8] = (int)local_2c0;
            piVar10[9] = (uint)local_2bc & 0xffff00ff;
switchD_00979a94_caseD_4:
            if ((char)puVar39[0xe] == '\x01') {
LAB_00979cfc:
              cVar6 = (char)puVar39[0xc];
              cVar30 = *(char *)((int)puVar39 + 0x31);
              cVar4 = cVar30;
              if (cVar6 == '\x01') {
                if (cVar30 == '\0') goto LAB_00979e68;
                cVar4 = cVar30 + -1;
              }
              *(char *)((int)puVar39 + 0x31) = cVar4;
              iVar19 = *(int *)(piVar10[6] + 0xc);
            }
            else {
              cVar6 = '\0';
              cVar30 = '\0';
              if ((char)puVar39[0xe] != '\x02') {
                FUN_015e8e6c(puVar39,FUN_009948a0);
                *(undefined1 *)(puVar39 + 0xe) = 1;
                goto LAB_00979cfc;
              }
              iVar19 = *(int *)(piVar10[6] + 0xc);
            }
            if (iVar19 == -1) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018ad11c);
            }
            FUN_0126dc90(&local_2c0);
            if (local_2c0 != (int *********)0xffffffff) {
              *(undefined1 *)(piVar10 + 7) = 1;
              FUN_0163dd78(&local_2c0);
              local_728 = local_2bc;
              local_72c = local_2b8;
              if (local_2c0 == (int *********)&SUB_00000002) goto LAB_00979fd4;
              local_738 = local_2b4;
              pppppppppiVar33 = local_2c0;
              goto LAB_00979fd8;
            }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((uint)local_2bc & 0xff) {
            case 0:
              if (local_2b8 != (int *********)&DAT_0000000b) goto LAB_00979f50;
              goto LAB_00979da0;
            case 1:
              cVar4 = local_2bc._1_1_;
              break;
            default:
              cVar4 = *(char *)(local_2b8 + 2);
            }
            if (cVar4 != '\r') {
LAB_00979f50:
              pppppppppiVar33 = (int *********)&SUB_00000002;
              local_728 = local_2bc;
              local_72c = local_2b8;
              *(undefined1 *)(piVar10 + 7) = 1;
              goto LAB_00979fd8;
            }
LAB_00979da0:
            uVar23 = piVar10[8];
            uVar35 = piVar10[9];
            puVar21 = (uint *)(*(int *)(piVar10[4] + 8) + 0x28);
            DataMemoryBarrier(0xb);
            uVar25 = *(uint *)(*(int *)(piVar10[4] + 8) + 0x28);
            do {
              while( true ) {
                if ((uVar35 & 0xff) != (uVar25 & 0xffffff) >> 0x10) goto LAB_00979e30;
                uVar36 = *puVar21;
                if (uVar36 == uVar25) break;
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                uVar25 = uVar36;
              }
              DataMemoryBarrier(0xb);
              bVar16 = (bool)hasExclusiveAccess(puVar21);
              if (bVar16) {
                *puVar21 = uVar25 & (uVar23 & 0x33 ^ 0xff003f);
              }
              DataMemoryBarrier(0xb);
              uVar25 = uVar36;
            } while (!bVar16);
LAB_00979e30:
            if (cVar6 == '\0') {
LAB_00979eac:
              pppppppppiVar33 = local_2b8;
              if ((char)local_2bc == '\x03') {
                ppppppppiVar34 = *local_2b8;
                ppppppppiVar37 = local_2b8[1];
                pppppppiVar9 = *ppppppppiVar37;
                if (pppppppiVar9 != (int *******)0x0) {
                  (*(code *)pppppppiVar9)(ppppppppiVar34);
                }
                if (ppppppppiVar37[1] != (int *******)0x0) {
                  thunk_FUN_016d3fb4(ppppppppiVar34);
                }
                thunk_FUN_016d3fb4(pppppppppiVar33);
              }
            }
            else {
              if ((char)puVar39[0xe] != '\x01') {
                if ((char)puVar39[0xe] == '\x02') goto LAB_00979eac;
                FUN_015e8e6c(puVar39,FUN_01655ec4);
                *(undefined1 *)(puVar39 + 0xe) = 1;
              }
              *(char *)((int)puVar39 + 0x31) = cVar30;
              *(undefined1 *)(puVar39 + 0xc) = 1;
              if (local_2c0 == (int *********)0xffffffff) goto LAB_00979eac;
              FUN_016dffb2();
            }
            iVar19 = piVar10[4];
            iVar20 = piVar10[5];
          } while( true );
        }
      }
      else {
        if ((*pbVar31 & 2) != 0) goto LAB_009799f4;
        iVar19 = FUN_016638c8(piVar10 + 0x17,puVar11);
        bVar16 = true;
        if (iVar19 == 0) {
          pppppppppiVar33 = (int *********)0x3;
          bVar5 = 2;
LAB_00979fe0:
          *pbVar31 = *pbVar31 | bVar5;
          goto LAB_00979ff0;
        }
      }
      goto LAB_009799f4;
    }
    FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
    goto LAB_00979618;
  }
  pppppppiVar9 = (int *******)FUN_00991c98(&local_2c0);
  FUN_005e6cdc(puVar27);
  if (param_1[0x25] != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(puVar27);
LAB_00979590:
  FUN_01663cc4(*puVar11);
  piVar10 = (int *)*puVar11;
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar10;
    bVar42 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar42);
  *piVar10 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar11);
  }
  piVar10 = (int *)param_1[0x28];
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar10;
    bVar42 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar42);
  *piVar10 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(param_1[0x28]);
  }
LAB_00979600:
  local_70c = (undefined1 *)((int)param_1 + 0xb1);
  *local_70c = 1;
  FUN_009722ec(param_1 + 2);
  local_6e0 = (int *********)0x0;
  if (pppppppiVar9 == (int *******)0x0) goto LAB_0097a640;
  local_6f0 = (int *********)&local_6e0;
  local_6e0 = (int *********)pppppppiVar9;
  if ((3 < DAT_018d9130) || (DAT_018da400 == '\0')) goto LAB_0097a640;
  if (DAT_018da400 == '\x01') {
LAB_0097a484:
    DataMemoryBarrier(0xb);
    puVar38 = &DAT_018ae394;
    pcVar41 = s_SetGloba_00414c05;
    if (DAT_018dd984 == 2) {
      pcVar41 = DAT_018daa74;
      puVar38 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar41 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar19 = (**(code **)(puVar38 + 0x14))(pcVar41,DAT_018da3f8);
    if (iVar19 == 0) goto LAB_0097a640;
  }
  else if (DAT_018da400 != '\x02') {
    cVar6 = FUN_0169ac90(&DAT_018da3f8);
    if (cVar6 == '\0') goto LAB_0097a640;
    if (cVar6 != '\x02') goto LAB_0097a484;
  }
  if (*(int *)(DAT_018da3f8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01876048);
  }
  local_4bc = *(int **********)(DAT_018da3f8 + 0x28);
  local_4c4 = *(int **********)(DAT_018da3f8 + 0x20);
  local_4c0 = *(int **********)(DAT_018da3f8 + 0x24);
  local_5d0 = (int *********)&local_4c8;
  local_5cc = &local_3c0;
  local_6d0 = (int *********)(DAT_018da3f8 + 0x1c);
  local_4c8 = (int *********)*local_6d0;
  local_5c8 = (int *********)&DAT_018abb78;
  local_3bc = (int ********)&local_150;
  local_4b8 = (int ********)0x0;
  local_14c = (undefined4 *)&LAB_00f1eff0;
  local_150 = (int *********)&local_6f0;
  local_6d8 = (int *********)&local_5d0;
  local_2b0 = (int *********)&local_6d8;
  local_3c0 = (int ********)&DAT_0058c86b;
  local_6d4 = (int *********)0x1;
  local_2bc = (int *********)0x0;
  local_2c0 = (int *********)0x1;
  DataMemoryBarrier(0xb);
  pcVar41 = s_SetGloba_00414c05;
  puVar38 = &DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar41 = DAT_018daa74;
    puVar38 = DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar41 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
  }
  local_2ac = DAT_018da3f8;
  iVar19 = (**(code **)(puVar38 + 0x28))(pcVar41,&local_2c0);
  if (iVar19 != 0) {
    (**(code **)(puVar38 + 0x2c))(pcVar41,&local_2c0);
  }
LAB_0097a640:
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return ZEXT48(local_6e0) << 0x20;
LAB_00978f98:
  local_2c0 = (int *********)&SUB_00000002;
  local_2bc = (int *********)&DAT_018aabe4;
LAB_0097957c:
  pppppppiVar9 = (int *******)FUN_00991c98(&local_2c0);
  goto LAB_00979590;
LAB_00979e68:
  uVar26 = 4;
  FUN_016455a4(*puVar11,puVar11[1]);
LAB_009799e4:
  bVar16 = true;
  *(undefined1 *)(piVar10 + 0x16) = 3;
  *(undefined1 *)(piVar10 + 7) = uVar26;
LAB_009799f4:
  iVar19 = 1;
  bVar2 = !bVar42;
  bVar42 = false;
  if (bVar2) goto LAB_00979f00;
  goto LAB_00979a04;
LAB_00979f00:
  pppppppppiVar33 = (int *********)&DAT_00000004;
  if (bVar16) {
LAB_00979618:
    local_70c = (undefined1 *)((int)param_1 + 0xb1);
    *local_70c = 3;
    *(undefined1 *)(param_1 + 0x2d) = 3;
    return CONCAT44(param_1,1);
  }
LAB_00979ff0:
  FUN_00de080c(local_714);
  puVar13 = (undefined1 *)((int)pppppppppiVar33 + -2);
  if (pppppppppiVar33 < &SUB_00000002) {
    puVar13 = (undefined1 *)0x0;
  }
  if (puVar13 != (undefined1 *)0x0) goto LAB_0097a670;
  if (pppppppppiVar33 != (int *********)&SUB_00000002) {
    local_6ec = local_728;
    local_6e4 = local_738;
    local_6e8 = local_72c;
    piVar10 = (int *)param_1[0x28];
    do {
      iVar19 = *piVar10;
      bVar42 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar42);
    *piVar10 = iVar19 + 1;
    local_6f0 = pppppppppiVar33;
    if (-1 < iVar19) {
      local_5e4 = FUN_01663af4(param_1[0x29]);
      do {
        do {
          local_6e0 = (int *********)DAT_018d9200;
          local_6dc = DAT_018d9204;
          pppppiVar28 = (int *****)((int)DAT_018d9200 + 1);
          iVar19 = DAT_018d9204 + (uint)((int *****)0xfffffffe < DAT_018d9200);
          bVar42 = (bool)hasExclusiveAccess(0x18d9200);
        } while (!bVar42);
        bVar42 = DAT_018d9200 == (int *****)0x0;
        bVar16 = DAT_018d9204 == 0;
        DAT_018d9200 = pppppiVar28;
        DAT_018d9204 = iVar19;
      } while (bVar42 && bVar16);
      local_6d8 = local_6f0;
      local_5d4 = auStack_41;
      local_5d8 = (int ********)&local_6e0;
      local_5e0 = 0;
      local_6cc = local_6e4;
      local_6d0 = local_6e8;
      local_6d4 = local_6ec;
      local_5e8 = piVar10;
      if ((char)puVar39[0xe] != '\x01') {
        if ((char)puVar39[0xe] == '\x02') {
          uVar26 = 1;
          FUN_0098ad3c(&local_6d8);
          goto LAB_0097a354;
        }
        FUN_015e8e6c(puVar39,FUN_009948a0);
        *(undefined1 *)(puVar39 + 0xe) = 1;
      }
      FUN_016dd1aa(&local_5d0,&local_6d8,0x108);
      if (*puVar39 < 0x7fffffff) {
        *puVar39 = *puVar39 + 1;
        uVar29 = puVar39[1];
        FUN_016dd1aa(&local_4c8,&local_6d8,0x108);
        if (uVar29 == 2) {
          FUN_0098ad3c(&local_4c8);
          uVar26 = 0;
          *puVar39 = *puVar39 - 1;
LAB_0097a354:
          local_4c8 = (int *********)CONCAT31(local_4c8._1_3_,uVar26);
          local_2bc = (int *********)&LAB_0164eda0;
          local_2c0 = (int *********)&local_4c8;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00590e71,&local_2c0,&DAT_01876090);
        }
        FUN_016dd1aa(&local_3c0,&local_6d8,0x100);
        pppppppppiVar33 = (int *********)*local_3c8;
        pppppppppiVar40 = (int *********)local_3c8[1];
        if ((uVar29 & 1) == 0) {
          piVar10 = (int *)puVar39[2];
          do {
            iVar19 = *piVar10;
            bVar42 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar42);
          *piVar10 = iVar19 + 1;
          if (-1 < iVar19) {
            piVar14 = (int *)piVar10[0x8e];
            iVar19 = 0;
            if (piVar14 != (int *)0x0) {
              do {
                iVar19 = *piVar14;
                bVar42 = (bool)hasExclusiveAccess(piVar14);
              } while (!bVar42);
              *piVar14 = iVar19 + 1;
              if (iVar19 < 0) goto LAB_009798b0;
              iVar19 = piVar10[0x8e];
              iVar8 = piVar10[0x8f];
            }
            FUN_016dd1aa((uint)&local_150 | 4,&local_3c0,0x100);
            local_2b8 = (int *********)&PTR_LAB_0186843c;
            local_2bc = (int *********)0x0;
            local_2c0 = (int *********)0xcc;
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[4] = pppppppppiVar33;
            puVar17[5] = pppppppppiVar40;
            local_298 = 0;
            local_2a8 = piVar10;
            FUN_016dd1aa(auStack_294,&local_150,0x104);
            local_188 = 0;
            local_18c = 0;
            local_190 = 0;
            local_48 = (int *)0x0;
            local_180 = iVar19;
            local_17c = iVar8;
            iVar19 = FUN_016d51b0(&local_48,0x20,0x160);
            piVar14 = local_48;
            if ((iVar19 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(0x20,0x160);
            }
            FUN_016dd1aa(local_48,&local_2c0,0x160);
            iVar19 = FUN_00994b2c(piVar10 + 0x40,piVar14,piVar14);
            local_2c0 = pppppppppiVar33;
            local_2bc = pppppppppiVar40;
            if (piVar10[0x8c] != 0) {
              (**(code **)(piVar10[0x8d] + 0x14))
                        (piVar10[0x8c] + (*(int *)(piVar10[0x8d] + 8) - 1U & 0xfffffff8) + 8,
                         &local_2c0);
            }
            if (iVar19 != 0) {
              FUN_01659ec0(puVar39[2],iVar19);
            }
            goto LAB_0097acac;
          }
        }
        else {
          piVar10 = (int *)puVar39[2];
          do {
            iVar19 = *piVar10;
            bVar42 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar42);
          *piVar10 = iVar19 + 1;
          if (-1 < iVar19) {
            piVar14 = (int *)piVar10[0x5c];
            iVar19 = 0;
            if (piVar14 != (int *)0x0) {
              do {
                iVar19 = *piVar14;
                bVar42 = (bool)hasExclusiveAccess(piVar14);
              } while (!bVar42);
              *piVar14 = iVar19 + 1;
              if (iVar19 < 0) goto LAB_009798b0;
              iVar19 = piVar10[0x5c];
              iVar8 = piVar10[0x5d];
            }
            FUN_016dd1aa((uint)&local_150 | 4,&local_3c0,0x100);
            local_2b8 = (int *********)&PTR_LAB_018684dc;
            local_2bc = (int *********)0x0;
            local_2c0 = (int *********)0xcc;
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[4] = pppppppppiVar33;
            puVar17[5] = pppppppppiVar40;
            local_298 = 0;
            local_2a8 = piVar10;
            FUN_016dd1aa(auStack_294,&local_150,0x104);
            local_188 = 0;
            local_18c = 0;
            local_190 = 0;
            local_48 = (int *)0x0;
            local_180 = iVar19;
            local_17c = iVar8;
            iVar19 = FUN_016d51b0(&local_48,0x20,0x160);
            piVar14 = local_48;
            if ((iVar19 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(0x20,0x160);
            }
            FUN_016dd1aa(local_48,&local_2c0,0x160);
            pppppppppiVar15 = (int *********)FUN_00994b2c(piVar10 + 0x14,piVar14,piVar14);
            local_2c0 = pppppppppiVar33;
            local_2bc = pppppppppiVar40;
            if (piVar10[0x5a] != 0) {
              (**(code **)(piVar10[0x5b] + 0x14))
                        (piVar10[0x5a] + (*(int *)(piVar10[0x5b] + 8) - 1U & 0xfffffff8) + 8,
                         &local_2c0);
            }
            if (pppppppppiVar15 != (int *********)0x0) {
              local_150 = (int *********)((uint)local_150 & 0xffffff00);
              local_2b8 = (int *********)&local_150;
              local_2c0 = (int *********)(piVar10 + 2);
              local_2bc = pppppppppiVar15;
              FUN_0164511c(&local_2c0);
            }
LAB_0097acac:
            *puVar39 = *puVar39 - 1;
            if (*piVar14 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar42 = (bool)hasExclusiveAccess(piVar14);
              if (bVar42) {
                *piVar14 = 0x84;
                goto LAB_0097acf8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar14[2] + 0x10))(piVar14);
            goto LAB_0097acf8;
          }
        }
      }
      else {
        FUN_00fb71b0(&DAT_018accb0);
      }
    }
LAB_009798b0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x9798b0);
    (*pcVar1)();
  }
  local_6f0 = local_728;
  local_6ec = local_72c;
  if ((DAT_018d9130 < 4) && (DAT_018da424 != '\0')) {
    if (DAT_018da424 == '\x01') {
LAB_0097a074:
      DataMemoryBarrier(0xb);
      puVar38 = &DAT_018ae394;
      pcVar41 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar41 = DAT_018daa74;
        puVar38 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar41 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar19 = (**(code **)(puVar38 + 0x14))(pcVar41,DAT_018da41c);
      if (iVar19 == 0) goto LAB_0097a38c;
    }
    else if (DAT_018da424 != '\x02') {
      cVar6 = FUN_0169ac90(&DAT_018da41c);
      if (cVar6 == '\0') goto LAB_0097a38c;
      if (cVar6 != '\x02') goto LAB_0097a074;
    }
    pppppppppiVar33 = *(int **********)(DAT_018da41c + 0x20);
    if (pppppppppiVar33 == (int *********)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018760a0);
    }
    local_6d0 = *(int **********)(DAT_018da41c + 0x24);
    local_6cc = *(undefined4 *)(DAT_018da41c + 0x28);
    local_6d8 = *(int **********)(DAT_018da41c + 0x1c);
    local_6c8 = 0;
    local_3bc = (int ********)&DAT_0000001b;
    local_3c0 = (int ********)&DAT_0035834c;
    local_6d4 = pppppppppiVar33;
    if (pppppppppiVar33 == (int *********)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018760a0);
    }
    local_4b8 = (int ********)&local_6e0;
    local_4bc = (int *********)&local_5d0;
    local_4c4 = &local_3c0;
    local_4c8 = (int *********)&local_6d8;
    local_150 = (int *********)&local_4c8;
    local_14c = (undefined4 *)0x2;
    local_6e0 = (int *********)&local_6f0;
    local_2b0 = (int *********)&local_150;
    local_5c0 = 1;
    local_4b4 = &DAT_0186841c;
    local_4c0 = (int *********)&DAT_018abb78;
    local_2bc = (int *********)0x0;
    local_2c0 = (int *********)&DAT_00000001;
    DataMemoryBarrier(0xb);
    pcVar41 = s_SetGloba_00414c05;
    puVar38 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar41 = DAT_018daa74;
      puVar38 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar41 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_5d0 = local_6d8;
    local_5cc = pppppppppiVar33;
    local_5c8 = local_6d0;
    local_5c4 = local_6cc;
    local_2ac = DAT_018da41c;
    local_148 = (undefined4 *)(DAT_018da41c + 0x1c);
    iVar19 = (**(code **)(puVar38 + 0x28))(pcVar41,&local_2c0);
    if (iVar19 != 0) {
      (**(code **)(puVar38 + 0x2c))(pcVar41,&local_2c0);
    }
    pppppppppiVar33 = local_6ec;
  }
  else {
LAB_0097a38c:
    pppppppppiVar33 = local_6ec;
  }
  local_6ec = pppppppppiVar33;
  if ((char)local_6f0 == '\x03') {
    ppppppppiVar34 = *pppppppppiVar33;
    ppppppppiVar37 = pppppppppiVar33[1];
    pppppppiVar9 = *ppppppppiVar37;
    if (pppppppiVar9 != (int *******)0x0) {
      (*(code *)pppppppiVar9)(ppppppppiVar34);
    }
    if (ppppppppiVar37[1] != (int *******)0x0) {
      thunk_FUN_016d3fb4(ppppppppiVar34);
    }
    thunk_FUN_016d3fb4(pppppppppiVar33);
  }
  goto LAB_0097acf8;
LAB_0097a670:
  if (puVar13 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_018760d0);
  }
  if ((DAT_018d9130 < 3) && (DAT_018da418 != '\0')) {
    if (DAT_018da418 == '\x01') {
LAB_0097a6e4:
      DataMemoryBarrier(0xb);
      pcVar41 = s_SetGloba_00414c05;
      puVar38 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar41 = DAT_018daa74;
        puVar38 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar41 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar19 = (**(code **)(puVar38 + 0x14))(pcVar41,DAT_018da410);
      if (iVar19 == 0) goto LAB_0097a850;
    }
    else if (DAT_018da418 != '\x02') {
      cVar6 = FUN_0169ac90(&DAT_018da410);
      if (cVar6 == '\0') goto LAB_0097a850;
      if (cVar6 != '\x02') goto LAB_0097a6e4;
    }
    if (*(int **********)(DAT_018da410 + 0x20) == (int *********)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018760c0);
    }
    local_5cc = (int *********)&local_150;
    local_4c0 = *(int **********)(DAT_018da410 + 0x24);
    local_4bc = *(int **********)(DAT_018da410 + 0x28);
    local_6d0 = (int *********)(DAT_018da410 + 0x1c);
    local_4c8 = (int *********)*local_6d0;
    local_5d0 = (int *********)&local_4c8;
    local_6d8 = (int *********)&local_5d0;
    local_4b8 = (int ********)0x0;
    local_6d4 = (int *********)&DAT_00000001;
    local_2c0 = (int *********)&DAT_00000001;
    local_2b0 = (int *********)&local_6d8;
    local_5c8 = (int *********)&DAT_018abb78;
    local_14c = (undefined4 *)0x53;
    local_150 = (int *********)&DAT_00358359;
    local_2bc = (int *********)0x0;
    DataMemoryBarrier(0xb);
    pcVar41 = s_SetGloba_00414c05;
    puVar38 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar41 = DAT_018daa74;
      puVar38 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar41 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_4c4 = *(int **********)(DAT_018da410 + 0x20);
    local_2ac = DAT_018da410;
    iVar19 = (**(code **)(puVar38 + 0x28))(pcVar41,&local_2c0);
    if (iVar19 != 0) {
      (**(code **)(puVar38 + 0x2c))(pcVar41,&local_2c0);
    }
  }
LAB_0097a850:
  FUN_005e6cdc(param_1 + 0x22);
  if (param_1[0x25] != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1 + 0x22);
  puVar17 = param_1 + 0x29;
  FUN_01663cc4(*puVar17);
  piVar10 = (int *)*puVar17;
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar10;
    bVar42 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar42);
  *piVar10 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar17);
  }
  piVar10 = (int *)param_1[0x28];
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar10;
    bVar42 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar42);
  *piVar10 = iVar19 + -1;
  pppppppiVar9 = (int *******)0x0;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(param_1[0x28]);
  }
  goto LAB_00979600;
}

