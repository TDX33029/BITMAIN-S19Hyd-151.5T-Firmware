// FUN_0001b800 @ 0001b800  size=2552  callers=1
// program: bmminer


undefined4 FUN_0001b800(char *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  size_t __n;
  int *piVar4;
  int *piVar5;
  char *__s2;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int local_2140;
  int local_213c;
  int local_2138;
  int local_2134;
  undefined1 auStack_2124 [252];
  char local_2028 [12];
  undefined4 uStack_201c;
  undefined4 local_2018;
  uint local_2014;
  undefined2 local_2010;
  
  memset(&DAT_000c02c0,0,0x140);
  piVar2 = (int *)FUN_0007d618("/etc/levels.json",0,auStack_2124);
  if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    snprintf(local_2028,0x2000,"load vol-freq config file %s failed\n","/etc/levels.json");
    FUN_0004948c(3,local_2028,0);
    return 0xffffffff;
  }
  piVar3 = (int *)FUN_0007eb20(piVar2,"config");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2028,"single miner",0xc);
      uStack_201c._0_1_ = ' ';
      uStack_201c._1_1_ = 't';
      uStack_201c._2_1_ = 'y';
      uStack_201c._3_1_ = 'p';
      local_2018._0_1_ = 'e';
      local_2018._1_1_ = ' ';
      local_2018._2_1_ = 'm';
      local_2018._3_1_ = 'o';
      local_2014._0_1_ = 'd';
      local_2014._1_1_ = 'e';
      local_2014._2_1_ = '\n';
      local_2014._3_1_ = '\0';
      FUN_0004948c(4,local_2028,0);
    }
    piVar3 = (int *)FUN_0007eb20(piVar2,"miner");
    if ((piVar3 != (int *)0x0) && (*piVar3 == 2)) {
      if (4 < DAT_000be63c) {
        pcVar9 = (char *)FUN_00080310();
        snprintf(local_2028,0x2000,"miner type in %s is %s","/etc/levels.json",pcVar9);
        FUN_0004948c(4,local_2028,0);
      }
      pcVar9 = (char *)FUN_00080310(piVar3);
      pcVar9 = strstr(&DAT_000c90bc,pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar9 = strstr(&DAT_000c90bc,"HHB42701");
        if (((pcVar9 != (char *)0x0) ||
            (pcVar9 = strstr(&DAT_000c90bc,"HHB42XXX"), pcVar9 != (char *)0x0)) ||
           (pcVar9 = strstr(&DAT_000c90bc,"TH401"), pcVar9 != (char *)0x0)) {
          pcVar9 = (char *)FUN_00080310(piVar3);
          pcVar9 = strstr(pcVar9,"Hyd");
          if (pcVar9 != (char *)0x0) goto LAB_0001bb48;
        }
        if (3 < DAT_000be63c) {
          uVar12 = 0xfffffffd;
          local_2028[0] = 'm';
          local_2028[1] = 'i';
          local_2028[2] = 'n';
          local_2028[3] = 'e';
          local_2028[4] = 'r';
          local_2028[5] = ' ';
          local_2028[6] = 't';
          local_2028[7] = 'y';
          local_2028[8] = 'p';
          local_2028[9] = 'e';
          local_2028[10] = ' ';
          local_2028[0xb] = 'd';
          uStack_201c._0_1_ = 'o';
          uStack_201c._1_1_ = 'e';
          uStack_201c._2_1_ = 's';
          uStack_201c._3_1_ = ' ';
          pcVar9 = "miner type does not match";
LAB_0001bbe8:
          pcVar9 = pcVar9 + 0x10;
          local_2018 = *(undefined4 *)pcVar9;
          local_2014 = *(uint *)(pcVar9 + 4);
          local_2010 = (undefined2)*(undefined4 *)(pcVar9 + 8);
          FUN_0004948c(3,local_2028,0);
          goto LAB_0001b8e0;
        }
      }
      else {
        __s2 = (char *)FUN_00080310(piVar3);
        iVar8 = strcasecmp(pcVar9,__s2);
        if (iVar8 == 0) {
LAB_0001bb48:
          uVar13 = FUN_0007eb20(piVar2,"levels");
          pcVar9 = (char *)((ulonglong)uVar13 >> 0x20);
          piVar3 = (int *)uVar13;
          if ((piVar3 != (int *)0x0) && (*piVar3 == 1)) {
            iVar8 = 0;
            local_2140 = 9999;
            local_213c = 0;
            local_2134 = 0;
            local_2138 = 9999;
            uVar10 = 0;
            while( true ) {
              uVar6 = FUN_0007f66c(piVar3,pcVar9);
              uVar11 = uVar10 + 1;
              if (0x27 < iVar8 || uVar6 <= uVar10) break;
              uVar12 = FUN_0007f6b8(piVar3,uVar10);
              pcVar9 = "frequency";
              uVar10 = uVar11;
              if (*piVar2 == 0) {
                uVar13 = FUN_0007eb20();
                pcVar9 = (char *)((ulonglong)uVar13 >> 0x20);
                if (((int *)uVar13 != (int *)0x0) && (*(int *)uVar13 == 3)) {
                  iVar7 = FUN_000807e0();
                  (&DAT_000c02c4)[iVar8 * 2] = iVar7;
                  if (iVar7 <= local_2140) {
                    local_2140 = iVar7;
                  }
                  if (local_213c < iVar7) {
                    local_213c = iVar7;
                  }
                  uVar13 = FUN_0007eb20(uVar12,"voltage");
                  pcVar9 = (char *)((ulonglong)uVar13 >> 0x20);
                  if (((int *)uVar13 != (int *)0x0) && (*(int *)uVar13 == 3)) {
                    uVar13 = FUN_000807e0();
                    pcVar9 = (char *)((ulonglong)uVar13 >> 0x20);
                    iVar7 = (int)uVar13;
                    (&DAT_000c02c0)[iVar8 * 2] = iVar7;
                    iVar8 = iVar8 + 1;
                    if (iVar7 <= local_2138) {
                      local_2138 = iVar7;
                    }
                    if (local_2134 < iVar7) {
                      local_2134 = iVar7;
                    }
                  }
                }
              }
            }
            uVar10 = DAT_000be63c;
            iVar8 = 0;
            do {
              iVar7 = iVar8 + 1;
              if ((&DAT_000c02c0)[iVar8 * 2] != 0) {
                if (((&DAT_000c02c4)[iVar8 * 2] != 0) && (3 < uVar10)) {
                  snprintf(local_2028,0x2000,"level %d, voltage = %d frequency = %d",iVar7,
                           (&DAT_000c02c0)[iVar8 * 2],(&DAT_000c02c4)[iVar8 * 2]);
                  FUN_0004948c(3,local_2028,0);
                  uVar10 = DAT_000be63c;
                }
              }
              iVar8 = iVar7;
            } while (iVar7 != 0x28);
            DAT_000c0404 = local_2140;
            DAT_000c0400 = local_2138;
            DAT_000c040c = local_213c;
            DAT_000c0408 = local_2134;
            if (4 < uVar10) {
              uVar12 = 0;
              snprintf(local_2028,0x2000,
                       "acceptable min_vol = %d min_freq = %d max_vol = %d max_freq = %d",local_2138
                       ,local_2140,local_2134,local_213c);
              FUN_0004948c(4,local_2028,0);
              goto LAB_0001b8e0;
            }
            goto LAB_0001c054;
          }
          goto LAB_0001bb6c;
        }
        if (3 < DAT_000be63c) {
          uVar12 = 0xfffffffd;
          builtin_strncpy(local_2028,"miner type n",0xc);
          uStack_201c._0_1_ = 'o';
          uStack_201c._1_1_ = 't';
          uStack_201c._2_1_ = ' ';
          uStack_201c._3_1_ = 'm';
          local_2018._0_1_ = 'a';
          local_2018._1_1_ = 't';
          local_2018._2_1_ = 'c';
          local_2018._3_1_ = 'h';
          local_2014 = local_2014 & 0xffffff00;
          FUN_0004948c(3,local_2028,0);
          goto LAB_0001b8e0;
        }
      }
      uVar12 = 0xfffffffd;
      goto LAB_0001b8e0;
    }
    if (3 < DAT_000be63c) {
      pcVar9 = "failed to get miner type in %s\n";
      goto LAB_0001bad0;
    }
  }
  else {
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2028,"multi miner ",0xc);
      uStack_201c._0_1_ = 't';
      uStack_201c._1_1_ = 'y';
      uStack_201c._2_1_ = 'p';
      uStack_201c._3_1_ = 'e';
      local_2018._0_1_ = ' ';
      local_2018._1_1_ = 'm';
      local_2018._2_1_ = 'o';
      local_2018._3_1_ = 'd';
      local_2014 = CONCAT13(local_2014._3_1_,0xa65);
      FUN_0004948c(4,local_2028,0);
    }
    uVar10 = 0;
    do {
      uVar6 = FUN_0007f66c(piVar3);
      if (uVar6 <= uVar10) {
        if (3 < DAT_000be63c) {
          uVar12 = 0xffffffff;
          local_2028[0] = 'b';
          local_2028[1] = 'o';
          local_2028[2] = 'a';
          local_2028[3] = 'r';
          local_2028[4] = 'd';
          local_2028[5] = ' ';
          local_2028[6] = 'n';
          local_2028[7] = 'a';
          local_2028[8] = 'm';
          local_2028[9] = 'e';
          local_2028[10] = ' ';
          local_2028[0xb] = 'd';
          uStack_201c._0_1_ = 'o';
          uStack_201c._1_1_ = 'e';
          uStack_201c._2_1_ = 's';
          uStack_201c._3_1_ = 'n';
          pcVar9 = "board name doesn\'t match\n";
          goto LAB_0001bbe8;
        }
LAB_0001bc1c:
        uVar12 = 0xffffffff;
        goto LAB_0001b8e0;
      }
      piVar4 = (int *)FUN_0007f6b8(piVar3,uVar10);
      if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
        if (DAT_000be63c < 4) goto LAB_0001bc1c;
        uVar12 = 0xffffffff;
        snprintf(local_2028,0x2000,"get array %d failed\n",uVar10);
        FUN_0004948c(3,local_2028,0);
        goto LAB_0001b8e0;
      }
      piVar5 = (int *)FUN_0007eb20(piVar4,"miner");
      uVar10 = uVar10 + 1;
      if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
        if (DAT_000be63c < 4) goto LAB_0001bc1c;
        uVar12 = 0xffffffff;
        builtin_strncpy(local_2028,"get miner fa",0xc);
        uStack_201c._0_1_ = 'i';
        uStack_201c._1_1_ = 'l';
        uStack_201c._2_1_ = 'e';
        uStack_201c._3_1_ = 'd';
        local_2018._0_1_ = '\n';
        local_2018._1_1_ = '\0';
        FUN_0004948c(3,local_2028,0);
        goto LAB_0001b8e0;
      }
      if (param_1 == (char *)0x0) {
        if (DAT_000be63c < 4) goto LAB_0001bc1c;
        uVar12 = 0xffffffff;
        builtin_strncpy(local_2028,"no board_nam",0xc);
        uStack_201c._0_1_ = 'e';
        uStack_201c._1_1_ = '\n';
        uStack_201c._2_1_ = '\0';
        FUN_0004948c(3,local_2028,0);
        goto LAB_0001b8e0;
      }
      pcVar9 = (char *)FUN_00080310();
      if (3 < DAT_000be63c) {
        snprintf(local_2028,0x2000,"miner %s, board_name %s\n",pcVar9,param_1);
        FUN_0004948c(3,local_2028,0);
      }
      __n = strlen(param_1);
      iVar8 = strncmp(pcVar9,param_1,__n);
    } while (iVar8 != 0);
    uVar13 = FUN_0007eb20(piVar4,"levels");
    pcVar9 = (char *)((ulonglong)uVar13 >> 0x20);
    piVar3 = (int *)uVar13;
    if ((piVar3 != (int *)0x0) && (*piVar3 == 1)) {
      local_213c = 9999;
      local_2140 = 9999;
      iVar8 = 0;
      local_2138 = 0;
      local_2134 = 0;
      uVar10 = 0;
      while( true ) {
        uVar6 = FUN_0007f66c(piVar3,pcVar9);
        uVar11 = uVar10 + 1;
        if (uVar6 <= uVar10 || 0x27 < iVar8) break;
        piVar4 = (int *)FUN_0007f6b8(piVar3,uVar10);
        pcVar9 = "frequency";
        uVar10 = uVar11;
        if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
          uVar13 = FUN_0007eb20();
          pcVar9 = (char *)((ulonglong)uVar13 >> 0x20);
          if (((int *)uVar13 != (int *)0x0) && (*(int *)uVar13 == 3)) {
            iVar7 = FUN_000807e0();
            (&DAT_000c02c4)[iVar8 * 2] = iVar7;
            if (iVar7 <= local_213c) {
              local_213c = iVar7;
            }
            if (local_2134 < iVar7) {
              local_2134 = iVar7;
            }
            uVar13 = FUN_0007eb20(piVar4,"voltage");
            pcVar9 = (char *)((ulonglong)uVar13 >> 0x20);
            if (((int *)uVar13 != (int *)0x0) && (*(int *)uVar13 == 3)) {
              uVar13 = FUN_000807e0();
              pcVar9 = (char *)((ulonglong)uVar13 >> 0x20);
              iVar7 = (int)uVar13;
              (&DAT_000c02c0)[iVar8 * 2] = iVar7;
              iVar8 = iVar8 + 1;
              if (iVar7 <= local_2140) {
                local_2140 = iVar7;
              }
              if (local_2138 < iVar7) {
                local_2138 = iVar7;
              }
            }
          }
        }
      }
      uVar10 = DAT_000be63c;
      iVar8 = 0;
      do {
        iVar7 = iVar8 + 1;
        if ((&DAT_000c02c0)[iVar8 * 2] != 0) {
          if (((&DAT_000c02c4)[iVar8 * 2] != 0) && (4 < uVar10)) {
            snprintf(local_2028,0x2000,"level %d, voltage = %d frequency = %d",iVar7,
                     (&DAT_000c02c0)[iVar8 * 2],(&DAT_000c02c4)[iVar8 * 2]);
            FUN_0004948c(4,local_2028,0);
            uVar10 = DAT_000be63c;
          }
        }
        iVar8 = iVar7;
      } while (iVar7 != 0x28);
      DAT_000c0404 = local_213c;
      DAT_000c0400 = local_2140;
      DAT_000c040c = local_2134;
      DAT_000c0408 = local_2138;
      if (4 < uVar10) {
        snprintf(local_2028,0x2000,
                 "acceptable min_vol = %d min_freq = %d max_vol = %d max_freq = %d",local_2140,
                 local_213c,local_2138,local_2134);
        FUN_0004948c(4,local_2028,0);
        uVar12 = 0;
        goto LAB_0001b8e0;
      }
LAB_0001c054:
      uVar12 = 0;
      goto LAB_0001b8e0;
    }
LAB_0001bb6c:
    if (3 < DAT_000be63c) {
      pcVar9 = "failed to get levels in %s\n";
LAB_0001bad0:
      uVar12 = 0xfffffffe;
      snprintf(local_2028,0x2000,pcVar9,"/etc/levels.json");
      FUN_0004948c(3,local_2028,0);
      goto LAB_0001b8e0;
    }
  }
  uVar12 = 0xfffffffe;
LAB_0001b8e0:
  if (piVar2[1] != -1) {
    piVar3 = piVar2 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      FUN_00080c8c(piVar2);
    }
  }
  return uVar12;
}

