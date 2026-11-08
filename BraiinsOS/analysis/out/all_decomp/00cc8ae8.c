// FUN_00cc8ae8 @ 00cc8ae8 size=7832 calls_out=53 calls_in=0
// strings: p_no | tifi | er.s | ckfan_rpm_oktemp_configpause_cooldown_modeFixedSpeedTargetTemperatureimmersion_modedangerous_internal_chip_tempcooldown_temp | SetGloba | SetGloba

/* WARNING: Removing unreachable block (ram,0x00cc8c9c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_00cc8ae8(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint ***********pppppppppppuVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint ************ppppppppppppuVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  uint ***********pppppppppppuVar14;
  byte *pbVar15;
  bool bVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  uint *puVar20;
  uint *********pppppppppuVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 uVar26;
  ulonglong *puVar27;
  uint ***********pppppppppppuVar28;
  int *piVar29;
  uint ***********pppppppppppuVar30;
  uint uVar31;
  uint uVar32;
  char *pcVar33;
  uint *******pppppppuVar34;
  uint **********ppppppppppuVar35;
  uint uVar36;
  undefined *puVar37;
  uint **********ppppppppppuVar38;
  char cVar39;
  uint uVar40;
  uint *puVar41;
  uint ***********pppppppppppuVar42;
  bool bVar43;
  ulonglong uVar44;
  undefined8 uVar45;
  undefined4 local_73c;
  uint ***********local_730;
  uint ***********local_72c;
  undefined4 *local_718;
  undefined1 *local_714;
  byte *local_6fc;
  uint ***********local_6f0;
  uint ***********local_6ec;
  uint ***********local_6e8;
  undefined4 local_6e4;
  uint ************local_6e0;
  int local_6dc;
  uint ***********local_6d8;
  uint ***********local_6d4;
  uint ***********local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  int *local_5e8;
  undefined4 local_5e4;
  undefined1 local_5e0;
  uint *************local_5d8;
  undefined1 *local_5d4;
  undefined8 local_5d0;
  uint ***********local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  uint ***********local_4c8;
  uint ***********local_4c4;
  uint ***********local_4c0;
  undefined8 *local_4bc;
  uint *************local_4b8;
  undefined *local_4b4;
  undefined4 *local_3c8;
  uint **********local_3c0;
  uint *************local_3bc;
  uint ***********local_2c0;
  undefined4 local_2bc;
  uint ***********local_2b8;
  undefined4 local_2b4;
  uint ************local_2b0;
  int local_2ac;
  int *local_2a8;
  undefined4 local_298;
  undefined1 auStack_294 [260];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_180;
  int *local_17c;
  uint ************local_150;
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
      piVar10 = (int *)param_1[0x27];
      pbVar15 = (byte *)param_1[0x26];
      local_6fc = pbVar15;
      goto LAB_00cc96e8;
    }
  }
  puVar11 = param_1 + 0x29;
  *puVar11 = uVar18;
  param_1[0x28] = uVar7;
  FUN_015f438c(&local_2c0,"/",0x15);
  if ((4 < ((uint)local_2c0 & 0xff)) || (((uint)local_2c0 & 0xff) == 3)) {
    ppppppppppuVar35 = local_2bc[1];
    ppppppppppuVar38 = *local_2bc;
    pppppppppuVar21 = *ppppppppppuVar35;
    if (pppppppppuVar21 != (uint *********)0x0) {
      (*(code *)pppppppppuVar21)(ppppppppppuVar38);
    }
    if (ppppppppppuVar35[1] != (uint *********)0x0) {
      thunk_FUN_016d3fb4(ppppppppppuVar38);
    }
    thunk_FUN_016d3fb4(local_2bc);
  }
  FUN_016dd606((int)&local_5c4 + 2,0,0x58);
  iVar19 = -2;
  pcVar33 = "/";
  do {
    if (*pcVar33 == '\0') goto LAB_00cc8d9c;
    bVar43 = iVar19 != -1;
    iVar19 = iVar19 + 1;
    pcVar33 = pcVar33 + 1;
  } while (bVar43);
  iVar19 = 0x12;
  do {
    if ("/"[iVar19] == '\0') goto LAB_00cc8d9c;
    iVar19 = iVar19 + 1;
  } while (iVar19 != 0x15);
  local_5c4 = CONCAT13(local_5c4._3_1_,0x6b636f);
  local_5c8 = (uint ***********)0x732e7265;
  local_5d0._4_4_ = (uint ***********)0x69666974;
  local_5d0._0_4_ = (uint ***********)0x6f6e5f70;
  FUN_016dd1aa(&local_4c8,&local_5d0,0x66);
  local_2b8 = (uint ***********)&DAT_692f706d;
  FUN_016dd1aa(&local_2b4,&local_4c8,0x66);
  local_2bc = (uint ***********)0x742f0001;
  local_2c0 = (uint ***********)&DAT_00000018;
  FUN_0126ddd8(&local_4c8,&local_2c0);
  pppppppppppuVar28 = local_4c4;
  if ((char)local_4c8 != '\x04') {
    local_2c0 = local_4c8;
    local_2bc = local_4c4;
    goto LAB_00cc9374;
  }
  uVar44 = FUN_0164ec90(&DAT_01876058);
  pppppppppppuVar42 = (uint ***********)(uVar44 >> 0x20);
  iVar19 = 0x180;
  if ((uVar44 & 1) != 0) {
    iVar19 = 0xb8;
  }
  local_5d0 = uVar44;
  if (*(int *)((int)pppppppppppuVar42 + iVar19 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01876058);
  }
  pcVar33 = (char *)((int)pppppppppppuVar42 + iVar19 + 0x3c);
  if (*pcVar33 == '\0') {
    bVar43 = (bool)hasExclusiveAccess(pcVar33);
    if (!bVar43) goto LAB_00cc8e30;
    *pcVar33 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00cc8e30:
    FUN_01280da8(pcVar33);
  }
  FUN_0128236c(pcVar33);
  FUN_0164736c(&local_4c8,(undefined1 *)((int)pppppppppppuVar42 + iVar19 + 0x40));
  pppppppppppuVar3 = local_4c4;
  pppppppppppuVar14 = local_4c8;
  uVar40 = (uint)local_4c8 & 0xff;
  pppppppppppuVar30 = pppppppppppuVar3;
  if (uVar40 != 4) {
    FUN_01282570(pcVar33);
    if (*pcVar33 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar43 = (bool)hasExclusiveAccess(pcVar33);
        if (bVar43) {
          *pcVar33 = '\0';
          goto LAB_00cc8f30;
        }
      } while (*pcVar33 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar33);
LAB_00cc8f30:
    if (uVar40 == 4) goto LAB_00cc8f48;
LAB_00cc931c:
    DataMemoryBarrier(0xb);
    do {
      ppppppppppuVar35 = *pppppppppppuVar42;
      bVar43 = (bool)hasExclusiveAccess(pppppppppppuVar42);
    } while (!bVar43);
    *pppppppppppuVar42 = (uint **********)((int)ppppppppppuVar35 + -1);
    if ((undefined1 *)uVar44 == (undefined1 *)0x0) {
      if (ppppppppppuVar35 == (uint **********)&DAT_00000001) {
        DataMemoryBarrier(0xb);
        FUN_01659344(pppppppppppuVar42);
      }
    }
    else if (ppppppppppuVar35 == (uint **********)&DAT_00000001) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(pppppppppppuVar42);
    }
LAB_00cc936c:
    FUN_016dffb2(pppppppppppuVar28);
    local_2c0 = pppppppppppuVar14;
    local_2bc = pppppppppppuVar30;
    goto LAB_00cc9374;
  }
  FUN_01282570(pcVar33);
  if (*pcVar33 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar43 = (bool)hasExclusiveAccess(pcVar33);
      if (bVar43) {
        *pcVar33 = '\0';
        goto LAB_00cc8ea0;
      }
    } while (*pcVar33 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar33);
LAB_00cc8ea0:
  local_4bc = (undefined8 *)0x0;
  local_4c8 = (uint ***********)0x80002005;
  pppppppppppuVar14 = pppppppppppuVar3 + 8;
  local_4c0 = pppppppppppuVar14;
  iVar8 = FUN_016d3742(*(undefined4 *)((int)pppppppppppuVar42 + iVar19 + 0x30),1,pppppppppppuVar28,
                       &local_4c8);
  if (iVar8 < 0) {
    puVar17 = (undefined4 *)FUN_016d2bc8();
    pppppppppppuVar30 = (uint ***********)*puVar17;
    local_4c8 = (uint ***********)0x0;
    local_4c4 = pppppppppppuVar30;
    if (*pcVar33 == '\0') {
      bVar43 = (bool)hasExclusiveAccess(pcVar33);
      if (!bVar43) goto LAB_00cc91c8;
      *pcVar33 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00cc91c8:
      FUN_01280da8(pcVar33);
    }
    FUN_0128236c(pcVar33);
    if (*pppppppppppuVar14 == (uint **********)0x0) {
      if (*(uint ************)((int)pppppppppppuVar42 + iVar19 + 0x4c) == pppppppppppuVar14) {
        ppppppppppuVar35 = pppppppppppuVar3[9];
        *(uint ***********)((int)pppppppppppuVar42 + iVar19 + 0x4c) = ppppppppppuVar35;
        goto joined_r0x00cc9298;
      }
    }
    else {
      ppppppppppuVar35 = pppppppppppuVar3[9];
      (*pppppppppppuVar14)[1] = (uint *********)ppppppppppuVar35;
joined_r0x00cc9298:
      if (ppppppppppuVar35 == (uint **********)0x0) {
        if (*(uint ************)((int)pppppppppppuVar42 + iVar19 + 0x50) != pppppppppppuVar14)
        goto LAB_00cc92ac;
        *(uint ***********)((int)pppppppppppuVar42 + iVar19 + 0x50) = *pppppppppppuVar14;
      }
      else {
        *ppppppppppuVar35 = (uint *********)*pppppppppppuVar14;
      }
      pppppppppppuVar3[8] = (uint **********)0x0;
      pppppppppppuVar3[9] = (uint **********)0x0;
      DataMemoryBarrier(0xb);
      do {
        ppppppppppuVar35 = *pppppppppppuVar3;
        bVar43 = (bool)hasExclusiveAccess(pppppppppppuVar3);
      } while (!bVar43);
      *pppppppppppuVar3 = (uint **********)((int)ppppppppppuVar35 + -1);
      if (ppppppppppuVar35 == (uint **********)&DAT_00000001) {
        DataMemoryBarrier(0xb);
        FUN_01659660(pppppppppppuVar3);
      }
    }
LAB_00cc92ac:
    FUN_01282570(pcVar33);
    if (*pcVar33 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar43 = (bool)hasExclusiveAccess(pcVar33);
        if (bVar43) {
          *pcVar33 = '\0';
          goto LAB_00cc92ec;
        }
      } while (*pcVar33 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar33);
LAB_00cc92ec:
    DataMemoryBarrier(0xb);
    do {
      ppppppppppuVar35 = *pppppppppppuVar3;
      bVar43 = (bool)hasExclusiveAccess(pppppppppppuVar3);
    } while (!bVar43);
    *pppppppppppuVar3 = (uint **********)((int)ppppppppppuVar35 + -1);
    pppppppppppuVar14 = (uint ***********)0x0;
    if (ppppppppppuVar35 == (uint **********)&DAT_00000001) {
      DataMemoryBarrier(0xb);
      FUN_01659660(pppppppppppuVar3);
    }
    goto LAB_00cc931c;
  }
LAB_00cc8f48:
  if ((undefined1 *)uVar44 == &SUB_00000002) {
    pppppppppppuVar14 = pppppppppppuVar42;
    goto LAB_00cc936c;
  }
  puVar27 = (ulonglong *)(param_1 + 0x22);
  *puVar27 = uVar44;
  param_1[0x24] = pppppppppppuVar3;
  param_1[0x25] = pppppppppppuVar28;
  FUN_015f49f8(&local_2c0,"/",0x15);
  if (((char)local_2c0 == '\x04') || (((uint)local_2c0 & 0xff) == 4)) {
    if ((2 < DAT_018d9130) || (DAT_018da40c == '\0')) goto LAB_00ccab28;
    if (DAT_018da40c == '\x01') {
LAB_00cc9000:
      DataMemoryBarrier(0xb);
      puVar37 = &DAT_018ae394;
      pcVar33 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar33 = DAT_018daa74;
        puVar37 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar19 = (**(code **)(puVar37 + 0x14))(pcVar33,DAT_018da404);
      if (iVar19 == 0) goto LAB_00ccab28;
    }
    else if (DAT_018da40c != '\x02') {
      cVar6 = FUN_0169ac90(&DAT_018da404);
      if (cVar6 == '\0') goto LAB_00ccab28;
      if (cVar6 != '\x02') goto LAB_00cc9000;
    }
    local_2ac = DAT_018da404;
    local_4c4 = *(uint ************)(DAT_018da404 + 0x20);
    if (local_4c4 == (uint ***********)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01876068);
    }
    local_5d0._0_4_ = (uint ***********)&local_4c8;
    local_4c0 = *(uint ************)(DAT_018da404 + 0x24);
    local_4bc = *(undefined8 **)(DAT_018da404 + 0x28);
    local_5d0._4_4_ = &local_3c0;
    local_6d0 = (uint ***********)(DAT_018da404 + 0x1c);
    local_4c8 = (uint ***********)*local_6d0;
    local_6d8 = (uint ***********)&local_5d0;
    local_3bc = &local_150;
    puVar37 = &DAT_018ae394;
    local_4b8 = (uint *************)0x0;
    local_5c8 = (uint ***********)&DAT_018abb78;
    local_6d4 = (uint ***********)&DAT_00000001;
    local_3c0 = (uint **********)&DAT_00572d9e;
    local_14c = &DAT_0157d360;
    local_2b0 = &local_6d8;
    local_150 = (uint ************)&DAT_01876078;
    local_2bc = (uint ***********)0x0;
    local_2c0 = (uint ***********)&DAT_00000001;
    DataMemoryBarrier(0xb);
    pcVar33 = s_SetGloba_00414c05;
    if (DAT_018dd984 == 2) {
      pcVar33 = DAT_018daa74;
      puVar37 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar19 = (**(code **)(puVar37 + 0x28))(pcVar33,&local_2c0);
    if (iVar19 != 0) {
      (**(code **)(puVar37 + 0x2c))(pcVar33,&local_2c0);
    }
LAB_00ccab28:
    piVar10 = param_1 + 2;
    pbVar15 = (byte *)0x0;
    local_6fc = (byte *)(param_1 + 0x2c);
    *local_6fc = 0;
    iVar19 = param_1[0x29];
    uVar40 = *(uint *)(iVar19 + 8);
    DataMemoryBarrier(0xb);
    param_1[2] = param_1 + 0x22;
    *(undefined1 *)(param_1 + 0x18) = 0;
    param_1[0x27] = piVar10;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x20] = 0;
    param_1[0x19] = param_1 + 0x29;
    param_1[0x1a] = iVar19 + 8;
    param_1[0x1b] = uVar40 >> 2;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x26] = local_6fc;
LAB_00cc96e8:
    uVar45 = thunk_FUN_016de0ee(pbVar15,0x40);
    puVar41 = (uint *)((int)uVar45 + (int)((ulonglong)uVar45 >> 0x20));
    if ((char)puVar41[0xe] != '\x01') {
      if ((char)puVar41[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(puVar41,FUN_00bacf28);
      *(undefined1 *)(puVar41 + 0xe) = 1;
    }
    cVar6 = (char)puVar41[0xc];
    bVar43 = cVar6 == '\x01';
    if (bVar43) {
      cVar6 = *(char *)((int)puVar41 + 0x31);
    }
    if (!bVar43 || cVar6 != '\0') {
      if ((puVar41[9] & 1) == 0) {
        uVar45 = FUN_0164e918();
        if ((uint)uVar45 < 2) {
          uVar45 = CONCAT44((int)((ulonglong)uVar45 >> 0x20),1);
        }
      }
      else {
        uVar45 = CONCAT44(puVar41[10],puVar41[0xb]);
      }
      uVar40 = (uint)((ulonglong)uVar45 >> 0x20);
      uVar24 = (uint)uVar45;
      puVar11 = (undefined4 *)*param_2;
      uVar40 = uVar40 ^ uVar40 << 0x11;
      puVar41[9] = 1;
      uVar40 = uVar24 >> 0x10 ^ uVar40 >> 7 ^ uVar24 ^ uVar40;
      puVar41[0xb] = uVar40;
      bVar16 = false;
      puVar41[10] = uVar24;
      piVar29 = piVar10 + 0xd;
      iVar19 = 0;
      bVar43 = true;
LAB_00cc9820:
      local_718 = param_1 + 2;
      if ((iVar19 - ((int)(uVar40 + uVar24) >> 0x1f) & 1U) == 0) {
        if ((*local_6fc & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar10[0x16]) {
          case '\0':
            iVar19 = *piVar10;
            iVar8 = 1;
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
              iVar8 = piVar10[3];
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
                iVar8 = piVar10[9];
                goto LAB_00cc9938;
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
                  iVar8 = piVar10[0xb];
                  goto LAB_00cc9948;
                case '\x01':
                    /* WARNING: Subroutine does not return */
                  FUN_00fb7ca0(&DAT_0187a1fc);
                case '\x02':
                    /* WARNING: Subroutine does not return */
                  FUN_00fb7cc0(&DAT_0187a1fc);
                case '\x03':
                  goto switchD_00cc9914_caseD_3;
                }
              }
            case '\x04':
              goto switchD_00cc98b4_caseD_4;
            }
          }
          piVar10[4] = iVar19;
          piVar10[5] = iVar8;
          piVar10[6] = iVar22;
          do {
            *(undefined1 *)(piVar10 + 0x15) = 0;
            piVar10[8] = iVar19;
            piVar10[9] = iVar8;
LAB_00cc9938:
            iVar19 = *(int *)(iVar19 + 8);
            *(undefined1 *)(piVar10 + 0x14) = 0;
            iVar19 = iVar19 + 0x20;
            piVar10[10] = iVar19;
            piVar10[0xb] = iVar8;
LAB_00cc9948:
            *(undefined1 *)(piVar10 + 0x13) = 0;
            *(undefined1 *)(piVar10 + 0x12) = 0;
            piVar10[0x11] = iVar8;
            piVar10[0xc] = iVar19;
            piVar10[0xd] = 0;
            piVar10[0xe] = 0;
            piVar10[0xf] = 0;
switchD_00cc9914_caseD_3:
            FUN_0163ab0c(&local_2c0,piVar10 + 0xc,param_2);
            pppppppppppuVar28 = local_2bc;
            if (local_2bc._1_1_ == '\x02') {
              uVar26 = 3;
              *(undefined1 *)(piVar10 + 0x14) = 3;
              *(undefined1 *)(piVar10 + 0x15) = 3;
              goto LAB_00cc97fc;
            }
            iVar19 = piVar10[0xc];
            pcVar33 = (char *)(iVar19 + 0xc);
            if (*pcVar33 == '\0') {
              bVar16 = (bool)hasExclusiveAccess(pcVar33);
              if (!bVar16) goto LAB_00cc99b0;
              *pcVar33 = '\x01';
              DataMemoryBarrier(0xb);
            }
            else {
              ClearExclusiveLocal();
LAB_00cc99b0:
              FUN_01280da8(pcVar33);
            }
            FUN_0128236c(pcVar33);
            if (*piVar29 == 0) {
              if (*(int **)(iVar19 + 0x10) == piVar29) {
                piVar13 = (int *)piVar10[0xe];
                *(int **)(iVar19 + 0x10) = piVar13;
                goto joined_r0x00cc9a10;
              }
            }
            else {
              piVar13 = (int *)piVar10[0xe];
              *(int **)(*piVar29 + 4) = piVar13;
joined_r0x00cc9a10:
              if (piVar13 == (int *)0x0) {
                if (*(int **)(iVar19 + 0x14) != piVar29) goto LAB_00cc9a24;
                *(int *)(iVar19 + 0x14) = *piVar29;
              }
              else {
                *piVar13 = *piVar29;
              }
              piVar10[0xd] = 0;
              piVar10[0xe] = 0;
            }
LAB_00cc9a24:
            FUN_01282570(pcVar33);
            if (*pcVar33 == '\x01') {
              DataMemoryBarrier(0xb);
              do {
                bVar16 = (bool)hasExclusiveAccess(pcVar33);
                if (bVar16) {
                  *pcVar33 = '\0';
                  goto LAB_00cc9a60;
                }
              } while (*pcVar33 == '\x01');
            }
            ClearExclusiveLocal();
            FUN_01280a5c(pcVar33);
LAB_00cc9a60:
            if (piVar10[0xf] != 0) {
              (**(code **)(piVar10[0xf] + 0xc))(piVar10[0x10]);
            }
            *(undefined1 *)(piVar10 + 0x14) = 1;
            if (((uint)pppppppppppuVar28 & 0x100) != 0) {
              FUN_015e79d4(&local_2c0,0x28,
                           "A Tokio 1.x context was found, but it is being shutdown.",0x38);
              local_72c = local_2c0;
              local_730 = local_2bc;
              *(undefined1 *)(piVar10 + 7) = 1;
              *(undefined1 *)(piVar10 + 0x15) = 1;
LAB_00cc9de8:
              pppppppppppuVar28 = (uint ***********)&SUB_00000002;
LAB_00cc9dec:
              bVar5 = 1;
              *(undefined1 *)(piVar10 + 0x16) = 1;
              goto LAB_00cc9df4;
            }
            *(undefined1 *)(piVar10 + 0x15) = 1;
            piVar10[8] = (int)local_2c0;
            piVar10[9] = (uint)local_2bc & 0xffff00ff;
switchD_00cc98b4_caseD_4:
            if ((char)puVar41[0xe] == '\x01') {
LAB_00cc9b10:
              cVar6 = (char)puVar41[0xc];
              cVar39 = *(char *)((int)puVar41 + 0x31);
              cVar4 = cVar39;
              if (cVar6 == '\x01') {
                if (cVar39 == '\0') goto LAB_00cc9c78;
                cVar4 = cVar39 + -1;
              }
              *(char *)((int)puVar41 + 0x31) = cVar4;
              iVar19 = *(int *)(piVar10[6] + 0xc);
            }
            else {
              cVar6 = '\0';
              cVar39 = '\0';
              if ((char)puVar41[0xe] != '\x02') {
                FUN_015e8e6c(puVar41,FUN_00bacf28);
                *(undefined1 *)(puVar41 + 0xe) = 1;
                goto LAB_00cc9b10;
              }
              iVar19 = *(int *)(piVar10[6] + 0xc);
            }
            if (iVar19 == -1) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018ad11c);
            }
            FUN_0126dc90(&local_2c0);
            if (local_2c0 != (uint ***********)0xffffffff) {
              *(undefined1 *)(piVar10 + 7) = 1;
              FUN_0163dd78(&local_2c0);
              local_72c = local_2bc;
              local_730 = local_2b8;
              if (local_2c0 == (uint ***********)&SUB_00000002) goto LAB_00cc9de8;
              local_73c = local_2b4;
              pppppppppppuVar28 = local_2c0;
              goto LAB_00cc9dec;
            }
            uVar36 = (uint)local_2bc & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(uVar36) {
            case 0:
              if (local_2b8 != (uint ***********)&DAT_0000000b) goto LAB_00cc9d60;
              goto LAB_00cc9bb4;
            case 1:
              cVar4 = local_2bc._1_1_;
              break;
            default:
              cVar4 = *(char *)(local_2b8 + 2);
            }
            if (cVar4 != '\r') {
LAB_00cc9d60:
              pppppppppppuVar28 = (uint ***********)&SUB_00000002;
              local_72c = local_2bc;
              local_730 = local_2b8;
              *(undefined1 *)(piVar10 + 7) = 1;
              goto LAB_00cc9dec;
            }
LAB_00cc9bb4:
            uVar23 = piVar10[8];
            uVar31 = piVar10[9];
            puVar20 = (uint *)(*(int *)(piVar10[4] + 8) + 0x28);
            DataMemoryBarrier(0xb);
            uVar25 = *(uint *)(*(int *)(piVar10[4] + 8) + 0x28);
            do {
              while( true ) {
                if ((uVar31 & 0xff) != (uVar25 & 0xffffff) >> 0x10) goto LAB_00cc9c44;
                uVar32 = *puVar20;
                if (uVar32 == uVar25) break;
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                uVar25 = uVar32;
              }
              DataMemoryBarrier(0xb);
              bVar16 = (bool)hasExclusiveAccess(puVar20);
              if (bVar16) {
                *puVar20 = uVar25 & (uVar23 & 0x33 ^ 0xff003f);
              }
              DataMemoryBarrier(0xb);
              uVar25 = uVar32;
            } while (!bVar16);
LAB_00cc9c44:
            pppppppppppuVar28 = local_2b8;
            if (cVar6 != '\0') {
              if ((char)puVar41[0xe] != '\x01') {
                if ((char)puVar41[0xe] == '\x02') goto joined_r0x00cc9c70;
                FUN_015e8e6c(puVar41,FUN_01655ec4);
                *(undefined1 *)(puVar41 + 0xe) = 1;
              }
              *(char *)((int)puVar41 + 0x31) = cVar39;
              *(undefined1 *)(puVar41 + 0xc) = 1;
              pppppppppppuVar28 = local_2b8;
            }
joined_r0x00cc9c70:
            local_2b8 = pppppppppppuVar28;
            if (uVar36 == 3) {
              ppppppppppuVar35 = *pppppppppppuVar28;
              ppppppppppuVar38 = pppppppppppuVar28[1];
              pppppppppuVar21 = *ppppppppppuVar38;
              if (pppppppppuVar21 != (uint *********)0x0) {
                (*(code *)pppppppppuVar21)(ppppppppppuVar35);
              }
              if (ppppppppppuVar38[1] != (uint *********)0x0) {
                thunk_FUN_016d3fb4(ppppppppppuVar35);
              }
              thunk_FUN_016d3fb4(pppppppppppuVar28);
            }
            iVar19 = piVar10[4];
            iVar8 = piVar10[5];
          } while( true );
        }
      }
      else {
        if ((*local_6fc & 2) != 0) goto LAB_00cc980c;
        iVar19 = FUN_016638c8(piVar10 + 0x17,puVar11);
        bVar16 = true;
        if (iVar19 == 0) {
          pppppppppppuVar28 = (uint ***********)0x3;
          bVar5 = 2;
LAB_00cc9df4:
          *local_6fc = *local_6fc | bVar5;
          goto LAB_00cc9e04;
        }
      }
      goto LAB_00cc980c;
    }
    FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
    goto LAB_00cc9410;
  }
  ppppppppppppuVar9 = (uint ************)FUN_00c79e6c(&local_2c0);
  FUN_005e6cdc(puVar27);
  if (param_1[0x25] != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(puVar27);
LAB_00cc9388:
  FUN_01663cc4(*puVar11);
  piVar10 = (int *)*puVar11;
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar10;
    bVar43 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar43);
  *piVar10 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar11);
  }
  piVar10 = (int *)param_1[0x28];
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar10;
    bVar43 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar43);
  *piVar10 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(param_1[0x28]);
  }
LAB_00cc93f8:
  local_714 = (undefined1 *)((int)param_1 + 0xb1);
  *local_714 = 1;
  FUN_009722ec(param_1 + 2);
  local_6e0 = (uint ************)0x0;
  if (ppppppppppppuVar9 == (uint ************)0x0) goto LAB_00cca3e0;
  local_6f0 = (uint ***********)&local_6e0;
  local_6e0 = ppppppppppppuVar9;
  if ((3 < DAT_018d9130) || (DAT_018da400 == '\0')) goto LAB_00cca3e0;
  if (DAT_018da400 == '\x01') {
LAB_00cca22c:
    DataMemoryBarrier(0xb);
    puVar37 = &DAT_018ae394;
    pcVar33 = s_SetGloba_00414c05;
    if (DAT_018dd984 == 2) {
      pcVar33 = DAT_018daa74;
      puVar37 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar19 = (**(code **)(puVar37 + 0x14))(pcVar33,DAT_018da3f8);
    if (iVar19 == 0) goto LAB_00cca3e0;
  }
  else if (DAT_018da400 != '\x02') {
    cVar6 = FUN_0169ac90(&DAT_018da3f8);
    if (cVar6 == '\0') goto LAB_00cca3e0;
    if (cVar6 != '\x02') goto LAB_00cca22c;
  }
  if (*(int *)(DAT_018da3f8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01876048);
  }
  local_4bc = *(undefined8 **)(DAT_018da3f8 + 0x28);
  local_4c4 = *(uint ************)(DAT_018da3f8 + 0x20);
  local_4c0 = *(uint ************)(DAT_018da3f8 + 0x24);
  local_5d0._0_4_ = (uint ***********)&local_4c8;
  local_5d0._4_4_ = &local_3c0;
  local_6d0 = (uint ***********)(DAT_018da3f8 + 0x1c);
  local_4c8 = (uint ***********)*local_6d0;
  local_5c8 = (uint ***********)&DAT_018abb78;
  local_3bc = &local_150;
  local_4b8 = (uint *************)0x0;
  local_14c = (undefined4 *)&LAB_00f1eff0;
  local_150 = &local_6f0;
  local_6d8 = (uint ***********)&local_5d0;
  local_2b0 = &local_6d8;
  local_3c0 = (uint **********)&DAT_0058c86b;
  local_6d4 = (uint ***********)0x1;
  local_2bc = (uint ***********)0x0;
  local_2c0 = (uint ***********)0x1;
  DataMemoryBarrier(0xb);
  pcVar33 = s_SetGloba_00414c05;
  puVar37 = &DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar33 = DAT_018daa74;
    puVar37 = DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
  }
  local_2ac = DAT_018da3f8;
  iVar19 = (**(code **)(puVar37 + 0x28))(pcVar33,&local_2c0);
  if (iVar19 != 0) {
    (**(code **)(puVar37 + 0x2c))(pcVar33,&local_2c0);
  }
LAB_00cca3e0:
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return ZEXT48(local_6e0) << 0x20;
LAB_00cc8d9c:
  local_2c0 = (uint ***********)&SUB_00000002;
  local_2bc = (uint ***********)&DAT_018aabe4;
LAB_00cc9374:
  ppppppppppppuVar9 = (uint ************)FUN_00c79e6c(&local_2c0);
  goto LAB_00cc9388;
LAB_00cc9c78:
  uVar26 = 4;
  FUN_016455a4(*puVar11,puVar11[1]);
LAB_00cc97fc:
  bVar16 = true;
  *(undefined1 *)(piVar10 + 0x16) = 3;
  *(undefined1 *)(piVar10 + 7) = uVar26;
LAB_00cc980c:
  iVar19 = 1;
  bVar2 = !bVar43;
  bVar43 = false;
  if (bVar2) goto LAB_00cc9d0c;
  goto LAB_00cc9820;
LAB_00cc9d0c:
  pppppppppppuVar28 = (uint ***********)&DAT_00000004;
  if (bVar16) {
LAB_00cc9410:
    local_714 = (undefined1 *)((int)param_1 + 0xb1);
    *local_714 = 3;
    *(undefined1 *)(param_1 + 0x2d) = 3;
    return CONCAT44(param_1,1);
  }
LAB_00cc9e04:
  FUN_00de080c(local_718);
  puVar12 = (undefined1 *)((int)pppppppppppuVar28 + -2);
  if (pppppppppppuVar28 < &SUB_00000002) {
    puVar12 = (undefined1 *)0x0;
  }
  if (puVar12 != (undefined1 *)0x0) goto LAB_00cca418;
  if (pppppppppppuVar28 != (uint ***********)&SUB_00000002) {
    local_6ec = local_72c;
    local_6e4 = local_73c;
    local_6e8 = local_730;
    piVar29 = (int *)param_1[0x28];
    do {
      iVar19 = *piVar29;
      bVar43 = (bool)hasExclusiveAccess(piVar29);
    } while (!bVar43);
    *piVar29 = iVar19 + 1;
    local_6f0 = pppppppppppuVar28;
    if (-1 < iVar19) {
      local_5e4 = FUN_01663af4(param_1[0x29]);
      do {
        do {
          local_6e0 = (uint ************)DAT_018d9200;
          local_6dc = DAT_018d9204;
          pppppppuVar34 = (uint *******)((int)DAT_018d9200 + 1);
          iVar19 = DAT_018d9204 + (uint)((uint *******)0xfffffffe < DAT_018d9200);
          bVar43 = (bool)hasExclusiveAccess(0x18d9200);
        } while (!bVar43);
        bVar43 = DAT_018d9200 == (uint *******)0x0;
        bVar16 = DAT_018d9204 == 0;
        DAT_018d9200 = pppppppuVar34;
        DAT_018d9204 = iVar19;
      } while (bVar43 && bVar16);
      local_6d8 = local_6f0;
      local_5d4 = auStack_41;
      local_5d8 = &local_6e0;
      local_5e0 = 0;
      local_6cc = local_6e4;
      local_6d0 = local_6e8;
      local_6d4 = local_6ec;
      local_5e8 = piVar29;
      if ((char)puVar41[0xe] != '\x01') {
        if ((char)puVar41[0xe] == '\x02') {
          uVar26 = 1;
          FUN_00adcfac(&local_6d8);
          goto LAB_00cca138;
        }
        FUN_015e8e6c(puVar41,FUN_00bacf28);
        *(undefined1 *)(puVar41 + 0xe) = 1;
      }
      FUN_016dd1aa(&local_5d0,&local_6d8,0x108);
      if (*puVar41 < 0x7fffffff) {
        *puVar41 = *puVar41 + 1;
        uVar40 = puVar41[1];
        FUN_016dd1aa(&local_4c8,&local_6d8,0x108);
        if (uVar40 == 2) {
          FUN_00adcfac(&local_4c8);
          uVar26 = 0;
          *puVar41 = *puVar41 - 1;
LAB_00cca138:
          local_4c8 = (uint ***********)CONCAT31(local_4c8._1_3_,uVar26);
          local_2bc = (uint ***********)&LAB_0164eda0;
          local_2c0 = (uint ***********)&local_4c8;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00590e71,&local_2c0,&DAT_01876090);
        }
        FUN_016dd1aa(&local_3c0,&local_6d8,0x100);
        pppppppppppuVar28 = (uint ***********)*local_3c8;
        pppppppppppuVar42 = (uint ***********)local_3c8[1];
        if ((uVar40 & 1) == 0) {
          piVar29 = (int *)puVar41[2];
          do {
            iVar19 = *piVar29;
            bVar43 = (bool)hasExclusiveAccess(piVar29);
          } while (!bVar43);
          *piVar29 = iVar19 + 1;
          if (-1 < iVar19) {
            piVar13 = (int *)piVar29[0x8e];
            iVar19 = 0;
            if (piVar13 != (int *)0x0) {
              do {
                iVar19 = *piVar13;
                bVar43 = (bool)hasExclusiveAccess(piVar13);
              } while (!bVar43);
              *piVar13 = iVar19 + 1;
              if (iVar19 < 0) goto LAB_00cc9674;
              iVar19 = piVar29[0x8e];
              piVar10 = (int *)piVar29[0x8f];
            }
            FUN_016dd1aa((uint)&local_150 | 4,&local_3c0,0x100);
            local_2b8 = (uint ***********)&DAT_018769d8;
            local_2bc = (uint ***********)0x0;
            local_2c0 = (uint ***********)0xcc;
            puVar17[4] = pppppppppppuVar28;
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[5] = pppppppppppuVar42;
            local_298 = 0;
            local_2a8 = piVar29;
            FUN_016dd1aa(auStack_294,&local_150,0x104);
            local_188 = 0;
            local_18c = 0;
            local_190 = 0;
            local_48 = (int *)0x0;
            local_180 = iVar19;
            local_17c = piVar10;
            iVar19 = FUN_016d51b0(&local_48,0x20,0x160);
            piVar10 = local_48;
            if ((iVar19 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(0x20,0x160);
            }
            FUN_016dd1aa(local_48,&local_2c0,0x160);
            iVar19 = FUN_00c61cb4(piVar29 + 0x40,piVar10,piVar10);
            local_2c0 = pppppppppppuVar28;
            local_2bc = pppppppppppuVar42;
            if (piVar29[0x8c] != 0) {
              (**(code **)(piVar29[0x8d] + 0x14))
                        (piVar29[0x8c] + (*(int *)(piVar29[0x8d] + 8) - 1U & 0xfffffff8) + 8,
                         &local_2c0);
            }
            if (iVar19 != 0) {
              FUN_01659ec0(puVar41[2],iVar19);
            }
            goto LAB_00ccaae0;
          }
        }
        else {
          piVar29 = (int *)puVar41[2];
          do {
            iVar19 = *piVar29;
            bVar43 = (bool)hasExclusiveAccess(piVar29);
          } while (!bVar43);
          *piVar29 = iVar19 + 1;
          if (-1 < iVar19) {
            piVar13 = (int *)piVar29[0x5c];
            iVar19 = 0;
            if (piVar13 != (int *)0x0) {
              do {
                iVar19 = *piVar13;
                bVar43 = (bool)hasExclusiveAccess(piVar13);
              } while (!bVar43);
              *piVar13 = iVar19 + 1;
              if (iVar19 < 0) goto LAB_00cc9674;
              iVar19 = piVar29[0x5c];
              piVar10 = (int *)piVar29[0x5d];
            }
            FUN_016dd1aa((uint)&local_150 | 4,&local_3c0,0x100);
            local_2b8 = (uint ***********)&PTR_LAB_01876780;
            local_2bc = (uint ***********)0x0;
            local_2c0 = (uint ***********)0xcc;
            puVar17[4] = pppppppppppuVar28;
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[5] = pppppppppppuVar42;
            local_298 = 0;
            local_2a8 = piVar29;
            FUN_016dd1aa(auStack_294,&local_150,0x104);
            local_188 = 0;
            local_18c = 0;
            local_190 = 0;
            local_48 = (int *)0x0;
            local_180 = iVar19;
            local_17c = piVar10;
            iVar19 = FUN_016d51b0(&local_48,0x20,0x160);
            piVar10 = local_48;
            if ((iVar19 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(0x20,0x160);
            }
            FUN_016dd1aa(local_48,&local_2c0,0x160);
            pppppppppppuVar14 = (uint ***********)FUN_00c61cb4(piVar29 + 0x14,piVar10,piVar10);
            local_2c0 = pppppppppppuVar28;
            local_2bc = pppppppppppuVar42;
            if (piVar29[0x5a] != 0) {
              (**(code **)(piVar29[0x5b] + 0x14))
                        (piVar29[0x5a] + (*(int *)(piVar29[0x5b] + 8) - 1U & 0xfffffff8) + 8,
                         &local_2c0);
            }
            if (pppppppppppuVar14 != (uint ***********)0x0) {
              local_150 = (uint ************)((uint)local_150 & 0xffffff00);
              local_2b8 = (uint ***********)&local_150;
              local_2c0 = (uint ***********)(piVar29 + 2);
              local_2bc = pppppppppppuVar14;
              FUN_0164511c(&local_2c0);
            }
LAB_00ccaae0:
            *puVar41 = *puVar41 - 1;
            if (*piVar10 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar43 = (bool)hasExclusiveAccess(piVar10);
              if (bVar43) {
                *piVar10 = 0x84;
                goto LAB_00ccab28;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar10[2] + 0x10))(piVar10);
            goto LAB_00ccab28;
          }
        }
      }
      else {
        FUN_00fb71b0(&DAT_018accb0);
      }
    }
LAB_00cc9674:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xcc9674);
    (*pcVar1)();
  }
  local_6f0 = local_72c;
  local_6ec = local_730;
  if ((DAT_018d9130 < 4) && (DAT_018da424 != '\0')) {
    if (DAT_018da424 == '\x01') {
LAB_00cc9e8c:
      DataMemoryBarrier(0xb);
      puVar37 = &DAT_018ae394;
      pcVar33 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar33 = DAT_018daa74;
        puVar37 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar19 = (**(code **)(puVar37 + 0x14))(pcVar33,DAT_018da41c);
      uVar44 = local_5d0;
      if (iVar19 == 0) goto LAB_00cca16c;
    }
    else {
      uVar44 = local_5d0;
      if (DAT_018da424 != '\x02') {
        cVar6 = FUN_0169ac90(&DAT_018da41c);
        if (cVar6 == '\0') goto LAB_00cca16c;
        uVar44 = local_5d0;
        if (cVar6 != '\x02') goto LAB_00cc9e8c;
      }
    }
    local_5d0._4_4_ = *(uint ************)(DAT_018da41c + 0x20);
    local_5d0 = uVar44;
    if (local_5d0._4_4_ == (uint ***********)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018760a0);
    }
    local_6d0 = *(uint ************)(DAT_018da41c + 0x24);
    local_6cc = *(undefined4 *)(DAT_018da41c + 0x28);
    local_6d8 = *(uint ************)(DAT_018da41c + 0x1c);
    local_6c8 = 0;
    local_3bc = (uint *************)&DAT_0000001b;
    local_3c0 = (uint **********)&DAT_0035834c;
    local_6d4 = local_5d0._4_4_;
    if (local_5d0._4_4_ == (uint ***********)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018760a0);
    }
    local_4b8 = &local_6e0;
    local_4bc = &local_5d0;
    local_4c4 = &local_3c0;
    local_4c8 = (uint ***********)&local_6d8;
    local_150 = &local_4c8;
    local_14c = (undefined4 *)0x2;
    local_6e0 = &local_6f0;
    local_2b0 = (uint ************)&local_150;
    local_5c0 = 1;
    puVar37 = &DAT_018ae394;
    local_4b4 = &DAT_018760b0;
    local_4c0 = (uint ***********)&DAT_018abb78;
    local_2bc = (uint ***********)0x0;
    local_2c0 = (uint ***********)&DAT_00000001;
    DataMemoryBarrier(0xb);
    pcVar33 = s_SetGloba_00414c05;
    if (DAT_018dd984 == 2) {
      pcVar33 = DAT_018daa74;
      puVar37 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_5d0._0_4_ = local_6d8;
    local_5c8 = local_6d0;
    local_5c4 = local_6cc;
    local_2ac = DAT_018da41c;
    local_148 = (undefined4 *)(DAT_018da41c + 0x1c);
    iVar19 = (**(code **)(puVar37 + 0x28))(pcVar33,&local_2c0);
    if (iVar19 != 0) {
      (**(code **)(puVar37 + 0x2c))(pcVar33,&local_2c0);
    }
    pppppppppppuVar28 = local_6ec;
  }
  else {
LAB_00cca16c:
    pppppppppppuVar28 = local_6ec;
  }
  local_6ec = pppppppppppuVar28;
  if ((char)local_6f0 == '\x03') {
    ppppppppppuVar35 = *pppppppppppuVar28;
    ppppppppppuVar38 = pppppppppppuVar28[1];
    pppppppppuVar21 = *ppppppppppuVar38;
    if (pppppppppuVar21 != (uint *********)0x0) {
      (*(code *)pppppppppuVar21)(ppppppppppuVar35);
    }
    if (ppppppppppuVar38[1] != (uint *********)0x0) {
      thunk_FUN_016d3fb4(ppppppppppuVar35);
    }
    thunk_FUN_016d3fb4(pppppppppppuVar28);
  }
  goto LAB_00ccab28;
LAB_00cca418:
  if (puVar12 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_018760d0);
  }
  if ((DAT_018d9130 < 3) && (DAT_018da418 != '\0')) {
    if (DAT_018da418 == '\x01') {
LAB_00cca48c:
      DataMemoryBarrier(0xb);
      pcVar33 = s_SetGloba_00414c05;
      puVar37 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar33 = DAT_018daa74;
        puVar37 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar19 = (**(code **)(puVar37 + 0x14))(pcVar33,DAT_018da410);
      if (iVar19 == 0) goto LAB_00cca66c;
    }
    else if (DAT_018da418 != '\x02') {
      cVar6 = FUN_0169ac90(&DAT_018da410);
      if (cVar6 == '\0') goto LAB_00cca66c;
      if (cVar6 != '\x02') goto LAB_00cca48c;
    }
    if (*(uint ************)(DAT_018da410 + 0x20) == (uint ***********)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018760c0);
    }
    local_5d0._4_4_ = (uint ***********)&local_150;
    local_4c0 = *(uint ************)(DAT_018da410 + 0x24);
    local_4bc = *(undefined8 **)(DAT_018da410 + 0x28);
    local_6d0 = (uint ***********)(DAT_018da410 + 0x1c);
    local_4c8 = (uint ***********)*local_6d0;
    local_5d0._0_4_ = (uint ***********)&local_4c8;
    local_6d8 = (uint ***********)&local_5d0;
    local_4b8 = (uint *************)0x0;
    local_6d4 = (uint ***********)&DAT_00000001;
    local_2c0 = (uint ***********)&DAT_00000001;
    local_2b0 = &local_6d8;
    local_5c8 = (uint ***********)&DAT_018abb78;
    local_14c = (undefined4 *)0x53;
    local_150 = (uint ************)&DAT_00358359;
    local_2bc = (uint ***********)0x0;
    DataMemoryBarrier(0xb);
    pcVar33 = s_SetGloba_00414c05;
    puVar37 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar33 = DAT_018daa74;
      puVar37 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar33 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_4c4 = *(uint ************)(DAT_018da410 + 0x20);
    local_2ac = DAT_018da410;
    iVar19 = (**(code **)(puVar37 + 0x28))(pcVar33,&local_2c0);
    if (iVar19 != 0) {
      (**(code **)(puVar37 + 0x2c))(pcVar33,&local_2c0);
    }
  }
LAB_00cca66c:
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
    bVar43 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar43);
  *piVar10 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar17);
  }
  piVar10 = (int *)param_1[0x28];
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar10;
    bVar43 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar43);
  *piVar10 = iVar19 + -1;
  ppppppppppppuVar9 = (uint ************)0x0;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(param_1[0x28]);
  }
  goto LAB_00cc93f8;
}

