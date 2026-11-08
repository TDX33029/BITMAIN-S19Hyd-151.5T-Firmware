// FUN_00012650 @ 00012650  size=6360  callers=1
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00012650(undefined4 param_1)

{
  int iVar1;
  size_t __nmemb;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  size_t sVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined1 uVar14;
  size_t __nmemb_00;
  int iVar15;
  uint uVar16;
  void *pvVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  undefined4 local_828;
  undefined4 local_824;
  uint local_820;
  uint local_81c;
  uint local_818;
  uint local_814;
  uint local_810;
  undefined1 local_80c;
  
  piVar2 = (int *)FUN_000559d4(param_1,"chain");
  if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    local_828._0_1_ = 'g';
    local_828._1_1_ = 'e';
    local_828._2_1_ = 't';
    local_828._3_1_ = ' ';
    local_824._0_1_ = 'c';
    local_824._1_1_ = 'h';
    local_824._2_1_ = 'a';
    local_824._3_1_ = 'i';
    local_820._0_1_ = 'n';
    local_820._1_1_ = ' ';
    local_820._2_1_ = 'f';
    local_820._3_1_ = 'a';
    local_81c._0_1_ = 'i';
    local_81c._1_1_ = 'l';
    local_81c._2_1_ = 'e';
    local_81c._3_1_ = 'd';
    local_818 = CONCAT22(local_818._2_2_,10);
    FUN_00032218(3,&local_828,0);
    return 0xffffffff;
  }
  if (4 < DAT_00087bbc) {
    local_828._0_1_ = 'c';
    local_828._1_1_ = 'h';
    local_828._2_1_ = 'a';
    local_828._3_1_ = 'i';
    local_824._0_1_ = 'n';
    local_824._1_1_ = ':';
    local_824._2_1_ = '\n';
    local_824._3_1_ = '\0';
    FUN_00032218(4,&local_828);
  }
  piVar3 = (int *)FUN_000559d4(piVar2,"chain_num");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    pcVar20 = "get chain_num failed\n";
LAB_000127b4:
    local_828 = *(undefined4 *)pcVar20;
    local_824 = *(undefined4 *)(pcVar20 + 4);
    local_820 = *(uint *)(pcVar20 + 8);
    local_81c = *(uint *)(pcVar20 + 0xc);
    local_818 = *(uint *)(pcVar20 + 0x10);
    local_814 = CONCAT22(local_814._2_2_,(short)*(undefined4 *)(pcVar20 + 0x14));
    FUN_00032218(3,&local_828,0);
    return 0xffffffff;
  }
  if (4 < DAT_00087bbc) {
    iVar4 = FUN_00056164();
    snprintf((char *)&local_828,0x800,"chain_num : %d\n",iVar4);
    FUN_00032218(4,&local_828,0);
  }
  DAT_0071c3ec = FUN_00056164(piVar3);
  piVar3 = (int *)FUN_000559d4(piVar2,"chain_row");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    pcVar20 = "get chain_row failed\n";
    goto LAB_000127b4;
  }
  if (4 < DAT_00087bbc) {
    iVar4 = FUN_00056164();
    snprintf((char *)&local_828,0x800,"chain_row: %d\n",iVar4);
    FUN_00032218(4,&local_828,0);
  }
  DAT_0071c3f0 = FUN_00056164(piVar3);
  piVar3 = (int *)FUN_000559d4(piVar2,"chain_column");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    local_828._0_1_ = 'g';
    local_828._1_1_ = 'e';
    local_828._2_1_ = 't';
    local_828._3_1_ = ' ';
    local_824._0_1_ = 'c';
    local_824._1_1_ = 'h';
    local_824._2_1_ = 'a';
    local_824._3_1_ = 'i';
    local_820._0_1_ = 'n';
    local_820._1_1_ = '_';
    local_820._2_1_ = 'c';
    local_820._3_1_ = 'o';
    local_81c._0_1_ = 'l';
    local_81c._1_1_ = 'u';
    local_81c._2_1_ = 'm';
    local_81c._3_1_ = 'n';
    local_818._0_1_ = ' ';
    local_818._1_1_ = 'f';
    local_818._2_1_ = 'a';
    local_818._3_1_ = 'i';
    local_814._0_1_ = 'l';
    local_814._1_1_ = 'e';
    local_814._2_1_ = 'd';
    local_814._3_1_ = '\n';
    local_810 = local_810 & 0xffffff00;
    FUN_00032218(3,&local_828,0);
    return 0xffffffff;
  }
  if (4 < DAT_00087bbc) {
    iVar4 = FUN_00056164();
    snprintf((char *)&local_828,0x800,"chain_column: %d\n",iVar4);
    FUN_00032218(4,&local_828,0);
  }
  DAT_0071c3f4 = FUN_00056164(piVar3);
  piVar3 = (int *)FUN_000559d4(piVar2,"chain_domain_num");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    local_828._0_1_ = 'g';
    local_828._1_1_ = 'e';
    local_828._2_1_ = 't';
    local_828._3_1_ = ' ';
    local_824._0_1_ = 'c';
    local_824._1_1_ = 'h';
    local_824._2_1_ = 'a';
    local_824._3_1_ = 'i';
    local_820._0_1_ = 'n';
    local_820._1_1_ = '_';
    local_820._2_1_ = 'd';
    local_820._3_1_ = 'o';
    local_81c._0_1_ = 'm';
    local_81c._1_1_ = 'a';
    local_81c._2_1_ = 'i';
    local_81c._3_1_ = 'n';
    local_818._0_1_ = '_';
    local_818._1_1_ = 'n';
    local_818._2_1_ = 'u';
    local_818._3_1_ = 'm';
    local_814._0_1_ = ' ';
    local_814._1_1_ = 'f';
    local_814._2_1_ = 'a';
    local_814._3_1_ = 'i';
    local_810._0_1_ = 'l';
    local_810._1_1_ = 'e';
    local_810._2_1_ = 'd';
    local_810._3_1_ = '\n';
    local_80c = 0;
    FUN_00032218(3,&local_828,0);
    return 0xffffffff;
  }
  if (4 < DAT_00087bbc) {
    iVar4 = FUN_00056164();
    snprintf((char *)&local_828,0x800,"chain_domain_num : %d\n",iVar4);
    FUN_00032218(4,&local_828,0);
  }
  DAT_0071c3f8 = FUN_00056164(piVar3);
  piVar3 = (int *)FUN_000559d4(piVar2,"chain_asic_num");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    pcVar20 = "get chain_asic_num failed\n";
LAB_00013ccc:
    local_828 = *(undefined4 *)pcVar20;
    local_824 = *(undefined4 *)(pcVar20 + 4);
    local_820 = *(uint *)(pcVar20 + 8);
    local_81c = *(uint *)(pcVar20 + 0xc);
    local_818 = *(uint *)(pcVar20 + 0x10);
    local_814 = *(uint *)(pcVar20 + 0x14);
    local_810._0_3_ = (undefined3)*(undefined4 *)(pcVar20 + 0x18);
    FUN_00032218(3,&local_828,0);
  }
  else {
    if (4 < DAT_00087bbc) {
      iVar4 = FUN_00056164();
      snprintf((char *)&local_828,0x800,"chain_asic_num : %d\n",iVar4);
      FUN_00032218(4,&local_828,0);
    }
    DAT_0071c3fc = FUN_00056164(piVar3);
    piVar3 = (int *)FUN_000559d4(piVar2,"domain_asic_num");
    if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      local_828._0_1_ = 'g';
      local_828._1_1_ = 'e';
      local_828._2_1_ = 't';
      local_828._3_1_ = ' ';
      local_824._0_1_ = 'd';
      local_824._1_1_ = 'o';
      local_824._2_1_ = 'm';
      local_824._3_1_ = 'a';
      local_820._0_1_ = 'i';
      local_820._1_1_ = 'n';
      local_820._2_1_ = '_';
      local_820._3_1_ = 'a';
      local_81c._0_1_ = 's';
      local_81c._1_1_ = 'i';
      local_81c._2_1_ = 'c';
      local_81c._3_1_ = '_';
      local_818._0_1_ = 'n';
      local_818._1_1_ = 'u';
      local_818._2_1_ = 'm';
      local_818._3_1_ = ' ';
      local_814._0_1_ = 'f';
      local_814._1_1_ = 'a';
      local_814._2_1_ = 'i';
      local_814._3_1_ = 'l';
      local_810._0_1_ = 'e';
      local_810._1_1_ = 'd';
      local_810._2_1_ = '\n';
      local_810._3_1_ = '\0';
      FUN_00032218(3,&local_828,0);
      return 0xffffffff;
    }
    if (4 < DAT_00087bbc) {
      iVar4 = FUN_00056164();
      snprintf((char *)&local_828,0x800,"domain_asic_num : %d\n",iVar4);
      FUN_00032218(4,&local_828,0);
    }
    iVar4 = FUN_00056164(piVar3);
    __nmemb_00 = DAT_0071c3fc;
    __nmemb = DAT_0071c3f8;
    sVar8 = DAT_0071c3ec;
    DAT_0071c400 = iVar4;
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_828,0x800,
               "chain_num %d, chain_domain_num %d, chain_asic_num %d, domain_asic_num %d\n",
               DAT_0071c3ec,DAT_0071c3f8,DAT_0071c3fc,iVar4);
      FUN_00032218(3,&local_828,0);
    }
    DAT_0071c420 = calloc(sVar8,0x14);
    if (DAT_0071c420 == (void *)0x0) {
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      snprintf((char *)&local_828,0x800,"malloc %d chain_t failed\n",sVar8);
      FUN_00032218(3,&local_828,0);
LAB_00012c74:
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      local_828._0_1_ = 'a';
      local_828._1_1_ = 'l';
      local_828._2_1_ = 'l';
      local_828._3_1_ = 'o';
      local_824._0_1_ = 'c';
      local_824._1_1_ = ' ';
      local_824._2_1_ = 't';
      local_824._3_1_ = 'o';
      local_820._0_1_ = 'p';
      local_820._1_1_ = 'o';
      local_820._2_1_ = 'l';
      local_820._3_1_ = ' ';
      local_81c._0_1_ = 'f';
      local_81c._1_1_ = 'a';
      local_81c._2_1_ = 'i';
      local_81c._3_1_ = 'l';
      local_818._0_1_ = 'e';
      local_818._1_1_ = 'd';
      local_818._2_1_ = '\n';
      local_818._3_1_ = '\0';
      FUN_00032218(3,&local_828,0);
      return 0xffffffff;
    }
    for (iVar19 = 0; pvVar17 = DAT_0071c420, iVar19 < (int)sVar8; iVar19 = iVar19 + 1) {
      iVar18 = iVar19 * 0x14;
      *(int *)((int)DAT_0071c420 + iVar18) = iVar19;
      pvVar5 = calloc(__nmemb,8);
      *(void **)((int)pvVar17 + iVar18 + 0xc) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        if (DAT_00087bbc < 4) {
          return 0xffffffff;
        }
        pcVar20 = "malloc %d domain_t failed\n";
        __nmemb_00 = __nmemb;
LAB_00012c00:
        snprintf((char *)&local_828,0x800,pcVar20,__nmemb_00);
        FUN_00032218(3,&local_828,0);
        goto LAB_00012c74;
      }
      pvVar5 = calloc(__nmemb_00,0x1c);
      *(void **)((int)pvVar17 + iVar18 + 8) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        if (DAT_00087bbc < 4) {
          return 0xffffffff;
        }
        pcVar20 = "malloc %d asic_t failed\n";
        goto LAB_00012c00;
      }
      iVar6 = 0;
      iVar15 = 0;
      while( true ) {
        iVar6 = iVar6 + iVar4 * 0x1c;
        if ((int)__nmemb <= iVar15) break;
        iVar13 = *(int *)((int)pvVar17 + iVar18 + 0xc);
        *(int *)(iVar13 + iVar15 * 8) = iVar15;
        iVar1 = iVar15 * 8;
        iVar15 = iVar15 + 1;
        *(int *)(iVar13 + iVar1 + 4) = *(int *)((int)pvVar17 + iVar18 + 8) + iVar6 + iVar4 * -0x1c;
      }
    }
    piVar3 = (int *)FUN_000559d4(piVar2,&DAT_000686cc);
    if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      local_828._0_1_ = 'g';
      local_828._1_1_ = 'e';
      local_828._2_1_ = 't';
      local_828._3_1_ = ' ';
      local_824._0_1_ = 'p';
      local_824._1_1_ = 'i';
      local_824._2_1_ = 'c';
      local_824._3_1_ = ' ';
      local_820._0_1_ = 'f';
      local_820._1_1_ = 'a';
      local_820._2_1_ = 'i';
      local_820._3_1_ = 'l';
      local_81c._0_1_ = 'e';
      local_81c._1_1_ = 'd';
      local_81c._2_1_ = '\n';
      local_81c._3_1_ = '\0';
      FUN_00032218(3,&local_828,0);
    }
    else {
      if (4 < DAT_00087bbc) {
        local_828._0_1_ = 'p';
        local_828._1_1_ = 'i';
        local_828._2_1_ = 'c';
        local_828._3_1_ = ':';
        local_824._0_1_ = '\n';
        local_824._1_1_ = '\0';
        FUN_00032218(4,&local_828);
      }
      piVar7 = (int *)FUN_000559d4(piVar3,"type");
      if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
        if (DAT_00087bbc < 4) {
          return 0xffffffff;
        }
        local_828._0_1_ = 'g';
        local_828._1_1_ = 'e';
        local_828._2_1_ = 't';
        local_828._3_1_ = ' ';
        local_824._0_1_ = 't';
        local_824._1_1_ = 'y';
        local_824._2_1_ = 'p';
        local_824._3_1_ = 'e';
        local_820._0_1_ = ' ';
        local_820._1_1_ = 'f';
        local_820._2_1_ = 'a';
        local_820._3_1_ = 'i';
        local_81c._0_1_ = 'l';
        local_81c._1_1_ = 'e';
        local_81c._2_1_ = 'd';
        local_81c._3_1_ = '\n';
        local_818 = local_818 & 0xffffff00;
        FUN_00032218(3,&local_828,0);
      }
      else {
        if (4 < DAT_00087bbc) {
          pcVar20 = (char *)FUN_00055f08();
          snprintf((char *)&local_828,0x800,"type: %s\n",pcVar20);
          FUN_00032218(4,&local_828,0);
        }
        piVar7 = (int *)FUN_000559d4(piVar3,"i2c_addr");
        if ((piVar7 == (int *)0x0) || (*piVar7 != 3)) {
          if (DAT_00087bbc < 4) {
            return 0xffffffff;
          }
          local_828._0_1_ = 'g';
          local_828._1_1_ = 'e';
          local_828._2_1_ = 't';
          local_828._3_1_ = ' ';
          local_824._0_1_ = 'i';
          local_824._1_1_ = '2';
          local_824._2_1_ = 'c';
          local_824._3_1_ = '_';
          local_820._0_1_ = 'a';
          local_820._1_1_ = 'd';
          local_820._2_1_ = 'd';
          local_820._3_1_ = 'r';
          local_81c._0_1_ = ' ';
          local_81c._1_1_ = 'f';
          local_81c._2_1_ = 'a';
          local_81c._3_1_ = 'i';
          local_818._0_1_ = 'l';
          local_818._1_1_ = 'e';
          local_818._2_1_ = 'd';
          local_818._3_1_ = '\n';
          local_814 = local_814 & 0xffffff00;
          FUN_00032218(3,&local_828,0);
        }
        else {
          if (4 < DAT_00087bbc) {
            iVar4 = FUN_00056164();
            snprintf((char *)&local_828,0x800,"i2c_addr: %d\n",iVar4);
            FUN_00032218(4,&local_828,0);
          }
          piVar3 = (int *)FUN_000559d4(piVar3,"sensor");
          if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
            iVar4 = strcmp(DAT_0071c3e8,"BHB28601");
            if (iVar4 == 0) goto LAB_000132ac;
            if (DAT_00087bbc < 4) {
              return 0xffffffff;
            }
            local_828._0_1_ = 'g';
            local_828._1_1_ = 'e';
            local_828._2_1_ = 't';
            local_828._3_1_ = ' ';
            local_824._0_1_ = 'p';
            local_824._1_1_ = 'i';
            local_824._2_1_ = 'c';
            local_824._3_1_ = ' ';
            local_820._0_1_ = 's';
            local_820._1_1_ = 'e';
            local_820._2_1_ = 'n';
            local_820._3_1_ = 's';
            local_81c._0_1_ = 'o';
            local_81c._1_1_ = 'r';
            local_81c._2_1_ = ' ';
            local_81c._3_1_ = 'f';
            local_818._0_1_ = 'a';
            local_818._1_1_ = 'i';
            local_818._2_1_ = 'l';
            local_818._3_1_ = 'e';
            local_814 = CONCAT13(local_814._3_1_,0xa64);
            FUN_00032218(3,&local_828,0);
          }
          else {
            if (4 < DAT_00087bbc) {
              local_828._0_1_ = 'p';
              local_828._1_1_ = 'i';
              local_828._2_1_ = 'c';
              local_828._3_1_ = ' ';
              local_824._0_1_ = 's';
              local_824._1_1_ = 'e';
              local_824._2_1_ = 'n';
              local_824._3_1_ = 's';
              local_820._0_1_ = 'o';
              local_820._1_1_ = 'r';
              local_820._2_1_ = ':';
              local_820._3_1_ = '\n';
              local_81c = local_81c & 0xffffff00;
              FUN_00032218(4,&local_828,0);
            }
            DAT_0071c428 = FUN_00055d40(piVar3);
            sVar8 = FUN_00055d40(piVar3);
            DAT_0071c42c = calloc(sVar8,0xc);
            if (DAT_0071c42c != (void *)0x0) {
              for (uVar16 = 0; uVar9 = FUN_00055d40(piVar3), uVar16 < uVar9; uVar16 = uVar16 + 1) {
                piVar7 = (int *)FUN_00055d5c(piVar3,uVar16);
                if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
                  if (DAT_00087bbc < 4) {
                    return 0xffffffff;
                  }
                  pcVar20 = "get array %d failed\n";
LAB_00013158:
                  snprintf((char *)&local_828,0x800,pcVar20,uVar16);
                  FUN_00032218(3,&local_828,0);
                  goto LAB_0001326c;
                }
                piVar10 = (int *)FUN_000559d4(piVar7,"index");
                if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                  if (DAT_00087bbc < 4) {
                    return 0xffffffff;
                  }
                  pcVar20 = "get array %d index failed\n";
                  goto LAB_00013158;
                }
                if (4 < DAT_00087bbc) {
                  iVar4 = FUN_00056164();
                  snprintf((char *)&local_828,0x800,"index: %d\n",iVar4);
                  FUN_00032218(4,&local_828,0);
                }
                pvVar17 = DAT_0071c42c;
                iVar4 = FUN_00056164(piVar10);
                iVar4 = iVar4 * 0xc;
                uVar11 = FUN_00056164(piVar10);
                *(undefined4 *)((int)pvVar17 + iVar4) = uVar11;
                piVar10 = (int *)FUN_000559d4(piVar7,"type");
                if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                  if (DAT_00087bbc < 4) {
                    return 0xffffffff;
                  }
                  pcVar20 = "get array %d type failed\n";
                  goto LAB_00013158;
                }
                if (4 < DAT_00087bbc) {
                  pcVar20 = (char *)FUN_00055f08();
                  snprintf((char *)&local_828,0x800,"type: %s\n",pcVar20);
                  FUN_00032218(4,&local_828,0);
                }
                piVar10 = (int *)FUN_000559d4(piVar7,&DAT_0006984c);
                if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                  if (DAT_00087bbc < 4) {
                    return 0xffffffff;
                  }
                  pcVar20 = "get array %d bind_asic failed\n";
                  goto LAB_00013158;
                }
                if (4 < DAT_00087bbc) {
                  iVar19 = FUN_00056164();
                  snprintf((char *)&local_828,0x800,"iic: %d\n",iVar19);
                  FUN_00032218(4,&local_828,0);
                }
                uVar11 = FUN_00056164(piVar10);
                *(undefined4 *)((int)pvVar17 + iVar4 + 4) = uVar11;
                piVar7 = (int *)FUN_000559d4(piVar7,"x");
                if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
                  if (DAT_00087bbc < 4) {
                    return 0xffffffff;
                  }
                  pcVar20 = "get array %d x failed\n";
                  goto LAB_00013158;
                }
                if (4 < DAT_00087bbc) {
                  pcVar20 = (char *)FUN_00055f08();
                  snprintf((char *)&local_828,0x800,"x: %s\n",pcVar20);
                  FUN_00032218(4,&local_828,0);
                }
                if (DAT_0071c430 == 0) {
                  pcVar20 = (char *)FUN_00055f08(piVar7);
                  iVar19 = strncasecmp(pcVar20,"right",5);
                  if (iVar19 == 0) {
                    *(undefined1 *)((int)pvVar17 + iVar4 + 8) = 1;
                  }
                  else {
                    *(undefined1 *)((int)pvVar17 + iVar4 + 8) = 0;
                  }
                }
              }
LAB_000132ac:
              piVar3 = (int *)FUN_000559d4(piVar2,"eeprom");
              if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
                if (DAT_00087bbc < 4) {
                  return 0xffffffff;
                }
                local_828._0_1_ = 'g';
                local_828._1_1_ = 'e';
                local_828._2_1_ = 't';
                local_828._3_1_ = ' ';
                local_824._0_1_ = 'e';
                local_824._1_1_ = 'e';
                local_824._2_1_ = 'p';
                local_824._3_1_ = 'r';
                local_820._0_1_ = 'o';
                local_820._1_1_ = 'm';
                local_820._2_1_ = ' ';
                local_820._3_1_ = 'f';
                local_81c._0_1_ = 'a';
                local_81c._1_1_ = 'i';
                local_81c._2_1_ = 'l';
                local_81c._3_1_ = 'e';
                local_818 = CONCAT13(local_818._3_1_,0xa64);
                FUN_00032218(3,&local_828,0);
              }
              else {
                if (4 < DAT_00087bbc) {
                  local_828._0_1_ = 'e';
                  local_828._1_1_ = 'e';
                  local_828._2_1_ = 'p';
                  local_828._3_1_ = 'r';
                  local_824._0_1_ = 'o';
                  local_824._1_1_ = 'm';
                  local_824._2_1_ = ':';
                  local_824._3_1_ = '\n';
                  local_820 = local_820 & 0xffffff00;
                  FUN_00032218(4,&local_828,0);
                }
                piVar7 = (int *)FUN_000559d4(piVar3,"type");
                if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
                  if (DAT_00087bbc < 4) {
                    return 0xffffffff;
                  }
                  local_828._0_1_ = 'g';
                  local_828._1_1_ = 'e';
                  local_828._2_1_ = 't';
                  local_828._3_1_ = ' ';
                  local_824._0_1_ = 't';
                  local_824._1_1_ = 'y';
                  local_824._2_1_ = 'p';
                  local_824._3_1_ = 'e';
                  local_820._0_1_ = ' ';
                  local_820._1_1_ = 'f';
                  local_820._2_1_ = 'a';
                  local_820._3_1_ = 'i';
                  local_81c._0_1_ = 'l';
                  local_81c._1_1_ = 'e';
                  local_81c._2_1_ = 'd';
                  local_81c._3_1_ = '\n';
                  local_818 = local_818 & 0xffffff00;
                  FUN_00032218(3,&local_828,0);
                }
                else {
                  if (4 < DAT_00087bbc) {
                    pcVar20 = (char *)FUN_00055f08();
                    snprintf((char *)&local_828,0x800,"type: %s\n",pcVar20);
                    FUN_00032218(4,&local_828,0);
                  }
                  piVar3 = (int *)FUN_000559d4(piVar3,"i2c_addr");
                  if ((piVar3 != (int *)0x0) && (*piVar3 == 3)) {
                    if (4 < DAT_00087bbc) {
                      iVar4 = FUN_00056164();
                      snprintf((char *)&local_828,0x800,"i2c_addr: %d\n",iVar4);
                      FUN_00032218(4,&local_828,0);
                    }
                    piVar3 = (int *)FUN_000559d4(piVar2,"sensor");
                    if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
                      if (DAT_00087bbc < 4) {
                        return 0xffffffff;
                      }
                      local_828._0_1_ = 'g';
                      local_828._1_1_ = 'e';
                      local_828._2_1_ = 't';
                      local_828._3_1_ = ' ';
                      local_824._0_1_ = 's';
                      local_824._1_1_ = 'e';
                      local_824._2_1_ = 'n';
                      local_824._3_1_ = 's';
                      local_820._0_1_ = 'o';
                      local_820._1_1_ = 'r';
                      local_820._2_1_ = ' ';
                      local_820._3_1_ = 'f';
                      local_81c._0_1_ = 'a';
                      local_81c._1_1_ = 'i';
                      local_81c._2_1_ = 'l';
                      local_81c._3_1_ = 'e';
                      local_818 = CONCAT13(local_818._3_1_,0xa64);
                      FUN_00032218(3,&local_828,0);
                    }
                    else {
                      if (4 < DAT_00087bbc) {
                        local_828._0_1_ = 's';
                        local_828._1_1_ = 'e';
                        local_828._2_1_ = 'n';
                        local_828._3_1_ = 's';
                        local_824._0_1_ = 'o';
                        local_824._1_1_ = 'r';
                        local_824._2_1_ = ':';
                        local_824._3_1_ = '\n';
                        local_820 = local_820 & 0xffffff00;
                        FUN_00032218(4,&local_828,0);
                      }
                      DAT_0071c404 = FUN_00055d40(piVar3);
                      sVar8 = FUN_00055d40(piVar3);
                      DAT_0071c424 = calloc(sVar8,0xc);
                      if (DAT_0071c424 != (void *)0x0) {
                        for (uVar16 = 0; uVar9 = FUN_00055d40(piVar3), uVar16 < uVar9;
                            uVar16 = uVar16 + 1) {
                          piVar7 = (int *)FUN_00055d5c(piVar3,uVar16);
                          if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
                            if (DAT_00087bbc < 4) {
                              return 0xffffffff;
                            }
                            pcVar20 = "get array %d failed\n";
LAB_00013754:
                            snprintf((char *)&local_828,0x800,pcVar20,uVar16);
                            FUN_00032218(3,&local_828,0);
                            goto LAB_000137d8;
                          }
                          piVar10 = (int *)FUN_000559d4(piVar7,"index");
                          if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                            if (DAT_00087bbc < 4) {
                              return 0xffffffff;
                            }
                            pcVar20 = "get array %d index failed\n";
                            goto LAB_00013754;
                          }
                          if (4 < DAT_00087bbc) {
                            iVar4 = FUN_00056164();
                            snprintf((char *)&local_828,0x800,"index: %d\n",iVar4);
                            FUN_00032218(4,&local_828,0);
                          }
                          pvVar17 = DAT_0071c424;
                          iVar4 = FUN_00056164(piVar10);
                          piVar10 = (int *)FUN_000559d4(piVar7,"type");
                          if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                            if (DAT_00087bbc < 4) {
                              return 0xffffffff;
                            }
                            pcVar20 = "get array %d type failed\n";
                            goto LAB_00013754;
                          }
                          if (4 < DAT_00087bbc) {
                            pcVar20 = (char *)FUN_00055f08();
                            snprintf((char *)&local_828,0x800,"type: %s\n",pcVar20);
                            FUN_00032218(4,&local_828,0);
                          }
                          piVar7 = (int *)FUN_000559d4(piVar7,"bind_asic");
                          if ((piVar7 == (int *)0x0) || (*piVar7 != 3)) {
                            if (DAT_00087bbc < 4) {
                              return 0xffffffff;
                            }
                            pcVar20 = "get array %d bind_asic failed\n";
                            goto LAB_00013754;
                          }
                          if (4 < DAT_00087bbc) {
                            iVar19 = FUN_00056164();
                            snprintf((char *)&local_828,0x800,"bind_asic: %d\n",iVar19);
                            FUN_00032218(4,&local_828,0);
                          }
                          uVar11 = FUN_00056164(piVar7);
                          *(undefined4 *)((int)pvVar17 + iVar4 * 0xc + 4) = uVar11;
                        }
                        piVar2 = (int *)FUN_000559d4(piVar2,"domain");
                        if ((piVar2 != (int *)0x0) && (*piVar2 == 1)) {
                          if (4 < DAT_00087bbc) {
                            local_828._0_1_ = 'd';
                            local_828._1_1_ = 'o';
                            local_828._2_1_ = 'm';
                            local_828._3_1_ = 'a';
                            local_824._0_1_ = 'i';
                            local_824._1_1_ = 'n';
                            local_824._2_1_ = ':';
                            local_824._3_1_ = '\n';
                            local_820 = local_820 & 0xffffff00;
                            FUN_00032218(4,&local_828,0);
                          }
                          for (uVar16 = 0; uVar9 = FUN_00055d40(piVar2), uVar16 < uVar9;
                              uVar16 = uVar16 + 1) {
                            piVar3 = (int *)FUN_00055d5c(piVar2,uVar16);
                            if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
                              if (DAT_00087bbc < 4) {
                                return 0xffffffff;
                              }
                              pcVar20 = "get array %d failed\n";
LAB_00013920:
                              snprintf((char *)&local_828,0x800,pcVar20,uVar16);
                              FUN_00032218(3,&local_828,0);
                              goto LAB_00013cb8;
                            }
                            piVar7 = (int *)FUN_000559d4(piVar3,"index");
                            if ((piVar7 == (int *)0x0) || (*piVar7 != 3)) {
                              if (DAT_00087bbc < 4) {
                                return 0xffffffff;
                              }
                              pcVar20 = "get array %d index failed\n";
                              goto LAB_00013920;
                            }
                            if (4 < DAT_00087bbc) {
                              iVar4 = FUN_00056164();
                              snprintf((char *)&local_828,0x800,"index: %d\n",iVar4);
                              FUN_00032218(4,&local_828,0);
                            }
                            piVar3 = (int *)FUN_000559d4(piVar3,&DAT_00069974);
                            if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
                              if (3 < DAT_00087bbc) {
                                local_828._0_1_ = 'g';
                                local_828._1_1_ = 'e';
                                local_828._2_1_ = 't';
                                local_828._3_1_ = ' ';
                                local_824._0_1_ = 'a';
                                local_824._1_1_ = 's';
                                local_824._2_1_ = 'i';
                                local_824._3_1_ = 'c';
                                local_820._0_1_ = ' ';
                                local_820._1_1_ = 'f';
                                local_820._2_1_ = 'a';
                                local_820._3_1_ = 'i';
                                local_81c._0_1_ = 'l';
                                local_81c._1_1_ = 'e';
                                local_81c._2_1_ = 'd';
                                local_81c._3_1_ = '\n';
                                local_818 = local_818 & 0xffffff00;
                                FUN_00032218(3,&local_828,0);
                              }
LAB_00013c7c:
                              if (DAT_00087bbc < 4) {
                                return 0xffffffff;
                              }
                              pcVar20 = "parse arrry %d asic failed\n";
                              goto LAB_00013920;
                            }
                            if (4 < DAT_00087bbc) {
                              local_828._0_1_ = 'a';
                              local_828._1_1_ = 's';
                              local_828._2_1_ = 'i';
                              local_828._3_1_ = 'c';
                              local_824._0_1_ = ':';
                              local_824._1_1_ = '\n';
                              local_824._2_1_ = '\0';
                              FUN_00032218(4,&local_828,0);
                            }
                            for (uVar9 = 0; uVar12 = FUN_00055d40(piVar3), uVar9 < uVar12;
                                uVar9 = uVar9 + 1) {
                              piVar7 = (int *)FUN_00055d5c(piVar3,uVar9);
                              if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
                                if (3 < DAT_00087bbc) {
                                  pcVar20 = "get array %d failed\n";
LAB_00013c10:
                                  snprintf((char *)&local_828,0x800,pcVar20,uVar9);
                                  FUN_00032218(3,&local_828,0);
                                }
                                goto LAB_00013c7c;
                              }
                              piVar10 = (int *)FUN_000559d4(piVar7,"index");
                              if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                                if (3 < DAT_00087bbc) {
                                  pcVar20 = "get array %d index failed\n";
                                  goto LAB_00013c10;
                                }
                                goto LAB_00013c7c;
                              }
                              if (4 < DAT_00087bbc) {
                                iVar4 = FUN_00056164();
                                snprintf((char *)&local_828,0x800,"index: %d\n",iVar4);
                                FUN_00032218(4,&local_828,0);
                              }
                              iVar4 = FUN_00056164(piVar10);
                              iVar19 = *(int *)((int)DAT_0071c420 + 8);
                              *(int *)(iVar19 + iVar4 * 0x1c) = iVar4;
                              iVar19 = iVar19 + iVar4 * 0x1c;
                              piVar7 = (int *)FUN_000559d4(piVar7,"coordinate");
                              if ((piVar7 == (int *)0x0) || (*piVar7 != 1)) {
                                if (3 < DAT_00087bbc) {
                                  pcVar20 = "get array %d coordinate failed\n";
                                  goto LAB_00013c10;
                                }
                                goto LAB_00013c7c;
                              }
                              piVar10 = (int *)FUN_00055d5c(piVar7,0);
                              if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                                if (3 < DAT_00087bbc) {
                                  pcVar20 = "get array %d coordinate x failed\n";
                                  goto LAB_00013c10;
                                }
                                goto LAB_00013c7c;
                              }
                              if (4 < DAT_00087bbc) {
                                iVar4 = FUN_00056164();
                                snprintf((char *)&local_828,0x800,"x: %d\n",iVar4);
                                FUN_00032218(4,&local_828,0);
                              }
                              uVar11 = FUN_00056164(piVar10);
                              *(undefined4 *)(iVar19 + 4) = uVar11;
                              piVar7 = (int *)FUN_00055d5c(piVar7,1);
                              if ((piVar7 == (int *)0x0) || (*piVar7 != 3)) {
                                if (3 < DAT_00087bbc) {
                                  pcVar20 = "get array %d coordinate y failed\n";
                                  goto LAB_00013c10;
                                }
                                goto LAB_00013c7c;
                              }
                              if (4 < DAT_00087bbc) {
                                iVar4 = FUN_00056164();
                                snprintf((char *)&local_828,0x800,"y: %d\n",iVar4);
                                FUN_00032218(4,&local_828,0);
                              }
                              uVar11 = FUN_00056164(piVar7);
                              *(undefined4 *)(iVar19 + 8) = uVar11;
                            }
                          }
                          pvVar17 = *(void **)((int)DAT_0071c420 + 8);
                          for (iVar4 = 1; iVar4 < (int)DAT_0071c3ec; iVar4 = iVar4 + 1) {
                            memcpy(*(void **)((int)DAT_0071c420 + iVar4 * 0x14 + 8),pvVar17,
                                   DAT_0071c3fc * 0x1c);
                          }
                          iVar4 = 0;
                          do {
                            pvVar17 = DAT_0071c424;
                            if (DAT_0071c404 <= iVar4) {
                              return 0;
                            }
                            iVar19 = *(int *)((int)DAT_0071c424 + iVar4 * 0xc + 4);
                            iVar18 = iVar19 * 0x1c + *(int *)((int)DAT_0071c420 + 8);
                            if (4 < DAT_00087bbc) {
                              snprintf((char *)&local_828,0x800,"asic %d, wind %d, y %d\n",iVar19,
                                       DAT_0071c430,*(int *)(iVar18 + 8));
                              FUN_00032218(4,&local_828,0);
                            }
                            if (DAT_0071c430 == 1) {
                              if (DAT_0071c3f4 / 3 < *(int *)(iVar18 + 8)) goto LAB_00013edc;
                              if (DAT_00087bbc < 5) {
LAB_00013ed4:
                                uVar14 = 1;
                              }
                              else {
                                local_828._0_1_ = 'a';
                                local_828._1_1_ = 'i';
                                local_828._2_1_ = 'r';
                                local_828._3_1_ = ' ';
                                local_824._0_1_ = 'i';
                                local_824._1_1_ = 'n';
                                local_824._2_1_ = '\n';
                                local_824._3_1_ = '\0';
                                FUN_00032218(4,&local_828,0);
                                uVar14 = 1;
                              }
                            }
                            else {
                              if (DAT_0071c430 == 0) {
                                if ((DAT_0071c3f4 << 1) / 3 <= *(int *)(iVar18 + 8))
                                goto joined_r0x00013eac;
                              }
                              else if (DAT_0071c430 == 2) {
                                if (*(int *)(iVar18 + 4) <= DAT_0071c3f0 / 3) {
joined_r0x00013eac:
                                  if (4 < DAT_00087bbc) {
                                    local_824._0_1_ = 'i';
                                    local_824._1_1_ = 'n';
                                    local_824._2_1_ = '\n';
                                    local_824._3_1_ = '\0';
                                    local_828._0_1_ = 'a';
                                    local_828._1_1_ = 'i';
                                    local_828._2_1_ = 'r';
                                    local_828._3_1_ = ' ';
                                    FUN_00032218(4,&local_828,0);
                                  }
                                  goto LAB_00013ed4;
                                }
                              }
                              else if ((DAT_0071c430 == 3) &&
                                      ((DAT_0071c3f0 << 1) / 3 <= *(int *)(iVar18 + 4)))
                              goto joined_r0x00013eac;
LAB_00013edc:
                              if (DAT_00087bbc < 5) {
                                uVar14 = 0;
                              }
                              else {
                                local_828._0_1_ = 'a';
                                local_828._1_1_ = 'i';
                                local_828._2_1_ = 'r';
                                local_828._3_1_ = ' ';
                                local_824._0_1_ = 'o';
                                local_824._1_1_ = 'u';
                                local_824._2_1_ = 't';
                                local_824._3_1_ = '\n';
                                local_820 = local_820 & 0xffffff00;
                                FUN_00032218(4,&local_828,0);
                                uVar14 = 0;
                              }
                            }
                            *(undefined1 *)((int)pvVar17 + iVar4 * 0xc + 8) = uVar14;
                            iVar4 = iVar4 + 1;
                          } while( true );
                        }
                        if (DAT_00087bbc < 4) {
                          return 0xffffffff;
                        }
                        local_828._0_1_ = 'g';
                        local_828._1_1_ = 'e';
                        local_828._2_1_ = 't';
                        local_828._3_1_ = ' ';
                        local_824._0_1_ = 'd';
                        local_824._1_1_ = 'o';
                        local_824._2_1_ = 'm';
                        local_824._3_1_ = 'a';
                        local_820._0_1_ = 'i';
                        local_820._1_1_ = 'n';
                        local_820._2_1_ = ' ';
                        local_820._3_1_ = 'f';
                        local_81c._0_1_ = 'a';
                        local_81c._1_1_ = 'i';
                        local_81c._2_1_ = 'l';
                        local_81c._3_1_ = 'e';
                        local_818 = CONCAT13(local_818._3_1_,0xa64);
                        FUN_00032218(3,&local_828,0);
LAB_00013cb8:
                        if (DAT_00087bbc < 4) {
                          return 0xffffffff;
                        }
                        pcVar20 = "parse chain domain failed\n";
                        goto LAB_00013ccc;
                      }
                      if (DAT_00087bbc < 4) {
                        return 0xffffffff;
                      }
                      iVar4 = FUN_00055d40(piVar3);
                      snprintf((char *)&local_828,0x800,"malloc %d sensor_t failed\n",iVar4);
                      FUN_00032218(3,&local_828,0);
                    }
LAB_000137d8:
                    if (DAT_00087bbc < 4) {
                      return 0xffffffff;
                    }
                    pcVar20 = "parse chain sensor failed\n";
                    goto LAB_00013ccc;
                  }
                  if (DAT_00087bbc < 4) {
                    return 0xffffffff;
                  }
                  local_828._0_1_ = 'g';
                  local_828._1_1_ = 'e';
                  local_828._2_1_ = 't';
                  local_828._3_1_ = ' ';
                  local_824._0_1_ = 'i';
                  local_824._1_1_ = '2';
                  local_824._2_1_ = 'c';
                  local_824._3_1_ = '_';
                  local_820._0_1_ = 'a';
                  local_820._1_1_ = 'd';
                  local_820._2_1_ = 'd';
                  local_820._3_1_ = 'r';
                  local_81c._0_1_ = ' ';
                  local_81c._1_1_ = 'f';
                  local_81c._2_1_ = 'a';
                  local_81c._3_1_ = 'i';
                  local_818._0_1_ = 'l';
                  local_818._1_1_ = 'e';
                  local_818._2_1_ = 'd';
                  local_818._3_1_ = '\n';
                  local_814 = local_814 & 0xffffff00;
                  FUN_00032218(3,&local_828,0);
                }
              }
              if (DAT_00087bbc < 4) {
                return 0xffffffff;
              }
              pcVar20 = "parse chain eeprom failed\n";
              goto LAB_00013ccc;
            }
            if (DAT_00087bbc < 4) {
              return 0xffffffff;
            }
            iVar4 = FUN_00055d40(piVar3);
            snprintf((char *)&local_828,0x800,"malloc %d sensor_t failed\n",iVar4);
            FUN_00032218(3,&local_828,0);
          }
        }
      }
    }
LAB_0001326c:
    if (3 < DAT_00087bbc) {
      local_828._0_1_ = 'p';
      local_828._1_1_ = 'a';
      local_828._2_1_ = 'r';
      local_828._3_1_ = 's';
      local_824._0_1_ = 'e';
      local_824._1_1_ = ' ';
      local_824._2_1_ = 'c';
      local_824._3_1_ = 'h';
      local_820._0_1_ = 'a';
      local_820._1_1_ = 'i';
      local_820._2_1_ = 'n';
      local_820._3_1_ = ' ';
      local_81c._0_1_ = 'p';
      local_81c._1_1_ = 'i';
      local_81c._2_1_ = 'c';
      local_81c._3_1_ = ' ';
      local_818._0_1_ = 'f';
      local_818._1_1_ = 'a';
      local_818._2_1_ = 'i';
      local_818._3_1_ = 'l';
      local_814._0_1_ = 'e';
      local_814._1_1_ = 'd';
      local_814._2_1_ = '\n';
      local_814._3_1_ = '\0';
      FUN_00032218(3,&local_828,0);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

