// FUN_00029e18 @ 00029e18  size=1736  callers=1
// program: bmminer


int FUN_00029e18(int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  size_t __n;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint param3;
  char *pcVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined1 auStack_2124 [252];
  char local_2028 [12];
  undefined4 uStack_201c;
  undefined4 local_2018;
  uint local_2014;
  undefined4 uStack_2010;
  undefined2 local_200c;
  
  if (param_1 != 0) {
    iVar2 = FUN_0002998c(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if (DAT_000be63c < 4) {
      return iVar2;
    }
    builtin_strncpy(local_2028,"init topol r",0xc);
    uStack_201c._0_1_ = 'u';
    uStack_201c._1_1_ = 'n';
    uStack_201c._2_1_ = 't';
    uStack_201c._3_1_ = 'i';
    local_2018._0_1_ = 'm';
    local_2018._1_1_ = 'e';
    local_2018._2_1_ = ' ';
    local_2018._3_1_ = 'f';
    local_2014._0_1_ = 'a';
    local_2014._1_1_ = 'i';
    local_2014._2_1_ = 'l';
    local_2014._3_1_ = 'e';
    uStack_2010 = CONCAT13(uStack_2010._3_1_,0xa64);
    FUN_0004948c(3,local_2028,0);
    return iVar2;
  }
  piVar3 = (int *)FUN_0007d618("/etc/topol.conf",0,auStack_2124);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
    if (DAT_000be63c < 4) {
      return -1;
    }
    snprintf(local_2028,0x2000,"load topol config file %s failed\n","/etc/topol.conf");
    FUN_0004948c(3,local_2028,0);
    return -1;
  }
  memset(&DAT_00a4ee48,0,0x20);
  piVar4 = (int *)FUN_0007eb20(piVar3,"config");
  if ((piVar4 == (int *)0x0) || (*piVar4 != 1)) {
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2028,"single machi",0xc);
      uStack_201c._0_1_ = 'n';
      uStack_201c._1_1_ = 'e';
      uStack_201c._2_1_ = ' ';
      uStack_201c._3_1_ = 'm';
      local_2018._0_1_ = 'o';
      local_2018._1_1_ = 'd';
      local_2018._2_1_ = 'e';
      local_2018._3_1_ = '\n';
      local_2014 = local_2014 & 0xffffff00;
      FUN_0004948c(4,local_2028,0);
    }
    iVar2 = FUN_00028c00(piVar3);
    if (iVar2 != 0) goto LAB_00029f88;
    iVar2 = FUN_000283a8(piVar3);
    if (iVar2 != 0) goto LAB_0002a024;
    iVar2 = FUN_00029628(piVar3);
    if (iVar2 == 0) {
      iVar2 = FUN_000290c8(piVar3);
      if (iVar2 == 0) {
        iVar2 = FUN_00028624(piVar3);
        if (iVar2 == 0) {
          iVar2 = FUN_00013300(piVar3);
          if (iVar2 != 0) goto LAB_0002a384;
          iVar2 = FUN_00012c78(piVar3);
          if ((iVar2 != 0) && (3 < DAT_000be63c)) {
            builtin_strncpy(local_2028,"parse strate",0xc);
            uStack_201c._0_1_ = 'g';
            uStack_201c._1_1_ = 'y';
            uStack_201c._2_1_ = ' ';
            uStack_201c._3_1_ = 'f';
            local_2018._0_1_ = 'a';
            local_2018._1_1_ = 'i';
            local_2018._2_1_ = 'l';
            local_2018._3_1_ = 'e';
            local_2014 = CONCAT13(local_2014._3_1_,0xa64);
            FUN_0004948c(3,local_2028,0);
          }
          iVar2 = FUN_000152cc(piVar3);
          if (iVar2 != 0) goto LAB_0002a3c8;
LAB_0002a468:
          iVar2 = 0;
LAB_0002a3d4:
          FUN_00029b74(&DAT_00a4ed98);
          goto LAB_00029f94;
        }
LAB_0002a358:
        if (3 < DAT_000be63c) {
          pcVar12 = local_2028;
          pcVar14 = "parse asic failed\n";
LAB_0002a154:
          uVar8 = *(undefined4 *)(pcVar14 + 4);
          uVar10 = *(undefined4 *)(pcVar14 + 8);
          uVar11 = *(undefined4 *)(pcVar14 + 0xc);
          uVar13 = *(undefined4 *)(pcVar14 + 0x10);
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar14;
          *(undefined4 *)(pcVar12 + 4) = uVar8;
          *(undefined4 *)(pcVar12 + 8) = uVar10;
          *(undefined4 *)(pcVar12 + 0xc) = uVar11;
          *(short *)(pcVar12 + 0x10) = (short)uVar13;
          pcVar12[0x12] = (char)((uint)uVar13 >> 0x10);
          FUN_0004948c(3,local_2028,0);
        }
        goto LAB_00029f94;
      }
LAB_0002a2fc:
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2028,"parse fan fa",0xc);
        uStack_201c._0_1_ = 'i';
        uStack_201c._1_1_ = 'l';
        uStack_201c._2_1_ = 'e';
        uStack_201c._3_1_ = 'd';
        local_2018._0_1_ = '\n';
        local_2018._1_1_ = '\0';
        FUN_0004948c(3,local_2028,0);
      }
      goto LAB_00029f94;
    }
LAB_0002a190:
    if (DAT_000be63c < 4) goto LAB_00029f94;
    pcVar12 = "parse power failed\n";
  }
  else {
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2028,"multi machin",0xc);
      uStack_201c._0_1_ = 'e';
      uStack_201c._1_1_ = ' ';
      uStack_201c._2_1_ = 'm';
      uStack_201c._3_1_ = 'o';
      local_2018._0_1_ = 'd';
      local_2018._1_1_ = 'e';
      local_2018._2_1_ = '\n';
      local_2018._3_1_ = '\0';
      FUN_0004948c(4,local_2028,0);
    }
    param3 = 0;
    do {
      uVar7 = FUN_0007f66c(piVar4);
      if (uVar7 <= param3) {
        if (DAT_000be63c < 4) {
          iVar2 = -1;
          goto LAB_00029f94;
        }
        iVar2 = -1;
        pcVar14 = "\'t match in tople\n";
        builtin_strncpy(local_2028,"board name d",0xc);
        uStack_201c._0_1_ = 'o';
        uStack_201c._1_1_ = 'e';
        uStack_201c._2_1_ = 's';
        uStack_201c._3_1_ = 'n';
        pcVar12 = (char *)&local_2018;
        goto LAB_0002a154;
      }
      piVar5 = (int *)FUN_0007f6b8(piVar4,param3);
      if ((piVar5 == (int *)0x0) || (*piVar5 != 0)) {
        if (DAT_000be63c < 4) {
          return -1;
        }
        snprintf(local_2028,0x2000,"get array %d failed\n",param3);
        FUN_0004948c(3,local_2028,0);
        return -1;
      }
      piVar6 = (int *)FUN_0007eb20(piVar5,"machine");
      param3 = param3 + 1;
      if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
        if (DAT_000be63c < 4) {
          return -1;
        }
        builtin_strncpy(local_2028,"get machine ",0xc);
        uStack_201c._0_1_ = 'f';
        uStack_201c._1_1_ = 'a';
        uStack_201c._2_1_ = 'i';
        uStack_201c._3_1_ = 'l';
        local_2018._0_1_ = 'e';
        local_2018._1_1_ = 'd';
        local_2018._2_1_ = '\n';
        local_2018._3_1_ = '\0';
        FUN_0004948c(3,local_2028,0);
        return -1;
      }
      if (param_2 == (char *)0x0) {
        if (DAT_000be63c < 4) {
          return -1;
        }
        builtin_strncpy(local_2028,"no board_nam",0xc);
        uStack_201c = CONCAT13(uStack_201c._3_1_,0xa65);
        FUN_0004948c(3,local_2028,0);
        return -1;
      }
      pcVar12 = (char *)FUN_00080310();
      __n = strlen(param_2);
      iVar2 = strncmp(pcVar12,param_2,__n);
    } while (iVar2 != 0);
    iVar2 = FUN_00028c00(piVar5);
    if (iVar2 != 0) {
LAB_00029f88:
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2028,"parse machin",0xc);
        uStack_201c._0_1_ = 'e';
        uStack_201c._1_1_ = ' ';
        uStack_201c._2_1_ = 'f';
        uStack_201c._3_1_ = 'a';
        local_2018._0_1_ = 'i';
        local_2018._1_1_ = 'l';
        local_2018._2_1_ = 'e';
        local_2018._3_1_ = 'd';
        local_2014 = CONCAT22(local_2014._2_2_,10);
        FUN_0004948c(3,local_2028,0);
      }
      goto LAB_00029f94;
    }
    iVar2 = FUN_000283a8(piVar5);
    if (iVar2 != 0) {
LAB_0002a024:
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2028,"parse proces",0xc);
        uStack_201c._0_1_ = 's';
        uStack_201c._1_1_ = 'o';
        uStack_201c._2_1_ = 'r';
        uStack_201c._3_1_ = ' ';
        local_2018._0_1_ = 'f';
        local_2018._1_1_ = 'a';
        local_2018._2_1_ = 'i';
        local_2018._3_1_ = 'l';
        local_2014._0_1_ = 'e';
        local_2014._1_1_ = 'd';
        local_2014._2_1_ = '\n';
        local_2014._3_1_ = '\0';
        FUN_0004948c(3,local_2028,0);
      }
      goto LAB_00029f94;
    }
    iVar2 = FUN_00029628(piVar5);
    if (iVar2 != 0) goto LAB_0002a190;
    iVar2 = FUN_000290c8(piVar5);
    if (iVar2 != 0) goto LAB_0002a2fc;
    iVar2 = FUN_00028624(piVar5);
    if (iVar2 != 0) goto LAB_0002a358;
    iVar2 = FUN_00013300(piVar5);
    if (iVar2 == 0) {
      iVar2 = FUN_00012c78(piVar5);
      if ((iVar2 != 0) && (3 < DAT_000be63c)) {
        builtin_strncpy(local_2028,"parse strate",0xc);
        uStack_201c._0_1_ = 'g';
        uStack_201c._1_1_ = 'y';
        uStack_201c._2_1_ = ' ';
        uStack_201c._3_1_ = 'f';
        local_2018._0_1_ = 'a';
        local_2018._1_1_ = 'i';
        local_2018._2_1_ = 'l';
        local_2018._3_1_ = 'e';
        local_2014 = CONCAT13(local_2014._3_1_,0xa64);
        FUN_0004948c(3,local_2028,0);
      }
      iVar2 = FUN_000152cc(piVar5);
      if (iVar2 == 0) goto LAB_0002a468;
LAB_0002a3c8:
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2028,"parse adjust",0xc);
        uStack_201c._0_1_ = ' ';
        uStack_201c._1_1_ = 's';
        uStack_201c._2_1_ = 't';
        uStack_201c._3_1_ = 'r';
        local_2018._0_1_ = 'a';
        local_2018._1_1_ = 't';
        local_2018._2_1_ = 'e';
        local_2018._3_1_ = 'g';
        local_2014._0_1_ = 'y';
        local_2014._1_1_ = ' ';
        local_2014._2_1_ = 'f';
        local_2014._3_1_ = 'a';
        uStack_2010._0_1_ = 'i';
        uStack_2010._1_1_ = 'l';
        uStack_2010._2_1_ = 'e';
        uStack_2010._3_1_ = 'd';
        local_200c = 10;
        FUN_0004948c(3,local_2028,0);
      }
      goto LAB_0002a3d4;
    }
LAB_0002a384:
    if (DAT_000be63c < 4) goto LAB_00029f94;
    pcVar12 = "parse chain failed\n";
  }
  local_2028._0_4_ = *(undefined4 *)pcVar12;
  local_2028._4_4_ = *(undefined4 *)(pcVar12 + 4);
  local_2028._8_4_ = *(undefined4 *)(pcVar12 + 8);
  uStack_201c = *(undefined4 *)(pcVar12 + 0xc);
  local_2018 = *(undefined4 *)(pcVar12 + 0x10);
  FUN_0004948c(3,local_2028,0);
LAB_00029f94:
  if (piVar3[1] != -1) {
    piVar4 = piVar3 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar9 + -1;
    if (iVar9 + -1 == 0) {
      FUN_00080c8c(piVar3);
    }
  }
  return iVar2;
}

