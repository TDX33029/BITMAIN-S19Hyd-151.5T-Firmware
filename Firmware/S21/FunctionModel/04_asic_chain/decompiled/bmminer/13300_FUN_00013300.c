// FUN_00013300 @ 00013300  size=8140  callers=1
// program: bmminer


undefined4 FUN_00013300(undefined4 param_1)

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
  undefined4 uVar12;
  undefined1 uVar13;
  int iVar14;
  size_t __nmemb_00;
  int iVar15;
  uint uVar16;
  void *pvVar17;
  int iVar18;
  char *pcVar19;
  char *local_2038;
  undefined4 local_2028;
  undefined4 local_2024;
  uint local_2020;
  uint local_201c;
  uint local_2018;
  uint local_2014;
  uint local_2010;
  uint local_200c;
  char acStack_2008 [8164];
  
  piVar2 = (int *)FUN_0007eb20(param_1,"chain");
  if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    local_2028._0_1_ = 'g';
    local_2028._1_1_ = 'e';
    local_2028._2_1_ = 't';
    local_2028._3_1_ = ' ';
    local_2024._0_1_ = 'c';
    local_2024._1_1_ = 'h';
    local_2024._2_1_ = 'a';
    local_2024._3_1_ = 'i';
    local_2020._0_1_ = 'n';
    local_2020._1_1_ = ' ';
    local_2020._2_1_ = 'f';
    local_2020._3_1_ = 'a';
    local_201c._0_1_ = 'i';
    local_201c._1_1_ = 'l';
    local_201c._2_1_ = 'e';
    local_201c._3_1_ = 'd';
    local_2018 = CONCAT22(local_2018._2_2_,10);
    FUN_0004948c(3,&local_2028,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    local_2028._0_1_ = 'c';
    local_2028._1_1_ = 'h';
    local_2028._2_1_ = 'a';
    local_2028._3_1_ = 'i';
    local_2024._0_1_ = 'n';
    local_2024._1_1_ = ':';
    local_2024._2_1_ = '\n';
    local_2024._3_1_ = '\0';
    FUN_0004948c(4,&local_2028);
  }
  piVar3 = (int *)FUN_0007eb20(piVar2,"chain_num");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    pcVar19 = "get chain_num failed\n";
LAB_00013464:
    local_2028 = *(undefined4 *)pcVar19;
    local_2024 = *(undefined4 *)(pcVar19 + 4);
    local_2020 = *(uint *)(pcVar19 + 8);
    local_201c = *(uint *)(pcVar19 + 0xc);
    local_2018 = *(uint *)(pcVar19 + 0x10);
    local_2014 = CONCAT22(local_2014._2_2_,(short)*(undefined4 *)(pcVar19 + 0x14));
    FUN_0004948c(3,&local_2028,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    iVar4 = FUN_000807e0();
    snprintf((char *)&local_2028,0x2000,"chain_num : %d\n",iVar4);
    FUN_0004948c(4,&local_2028,0);
  }
  DAT_00a4eda8 = FUN_000807e0(piVar3);
  piVar3 = (int *)FUN_0007eb20(piVar2,"chain_row");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    pcVar19 = "get chain_row failed\n";
    goto LAB_00013464;
  }
  if (4 < DAT_000be63c) {
    iVar4 = FUN_000807e0();
    snprintf((char *)&local_2028,0x2000,"chain_row: %d\n",iVar4);
    FUN_0004948c(4,&local_2028,0);
  }
  DAT_00a4edac = FUN_000807e0(piVar3);
  piVar3 = (int *)FUN_0007eb20(piVar2,"chain_column");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    local_2028._0_1_ = 'g';
    local_2028._1_1_ = 'e';
    local_2028._2_1_ = 't';
    local_2028._3_1_ = ' ';
    local_2024._0_1_ = 'c';
    local_2024._1_1_ = 'h';
    local_2024._2_1_ = 'a';
    local_2024._3_1_ = 'i';
    local_2020._0_1_ = 'n';
    local_2020._1_1_ = '_';
    local_2020._2_1_ = 'c';
    local_2020._3_1_ = 'o';
    local_201c._0_1_ = 'l';
    local_201c._1_1_ = 'u';
    local_201c._2_1_ = 'm';
    local_201c._3_1_ = 'n';
    local_2018._0_1_ = ' ';
    local_2018._1_1_ = 'f';
    local_2018._2_1_ = 'a';
    local_2018._3_1_ = 'i';
    local_2014._0_1_ = 'l';
    local_2014._1_1_ = 'e';
    local_2014._2_1_ = 'd';
    local_2014._3_1_ = '\n';
    local_2010 = local_2010 & 0xffffff00;
    FUN_0004948c(3,&local_2028,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    iVar4 = FUN_000807e0();
    snprintf((char *)&local_2028,0x2000,"chain_column: %d\n",iVar4);
    FUN_0004948c(4,&local_2028,0);
  }
  DAT_00a4edb0 = FUN_000807e0(piVar3);
  piVar3 = (int *)FUN_0007eb20(piVar2,"chain_domain_num");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    local_2028._0_1_ = 'g';
    local_2028._1_1_ = 'e';
    local_2028._2_1_ = 't';
    local_2028._3_1_ = ' ';
    local_2024._0_1_ = 'c';
    local_2024._1_1_ = 'h';
    local_2024._2_1_ = 'a';
    local_2024._3_1_ = 'i';
    local_2020._0_1_ = 'n';
    local_2020._1_1_ = '_';
    local_2020._2_1_ = 'd';
    local_2020._3_1_ = 'o';
    local_201c._0_1_ = 'm';
    local_201c._1_1_ = 'a';
    local_201c._2_1_ = 'i';
    local_201c._3_1_ = 'n';
    local_2018._0_1_ = '_';
    local_2018._1_1_ = 'n';
    local_2018._2_1_ = 'u';
    local_2018._3_1_ = 'm';
    local_2014._0_1_ = ' ';
    local_2014._1_1_ = 'f';
    local_2014._2_1_ = 'a';
    local_2014._3_1_ = 'i';
    local_2010._0_1_ = 'l';
    local_2010._1_1_ = 'e';
    local_2010._2_1_ = 'd';
    local_2010._3_1_ = '\n';
    local_200c = local_200c & 0xffffff00;
    FUN_0004948c(3,&local_2028,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    iVar4 = FUN_000807e0();
    snprintf((char *)&local_2028,0x2000,"chain_domain_num : %d\n",iVar4);
    FUN_0004948c(4,&local_2028,0);
  }
  DAT_00a4edb4 = FUN_000807e0(piVar3);
  piVar3 = (int *)FUN_0007eb20(piVar2,"chain_asic_num");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    pcVar19 = "get chain_asic_num failed\n";
LAB_0001486c:
    local_2028 = *(undefined4 *)pcVar19;
    local_2024 = *(undefined4 *)(pcVar19 + 4);
    local_2020 = *(uint *)(pcVar19 + 8);
    local_201c = *(uint *)(pcVar19 + 0xc);
    local_2018 = *(uint *)(pcVar19 + 0x10);
    local_2014 = *(uint *)(pcVar19 + 0x14);
    local_2010._0_3_ = (undefined3)*(undefined4 *)(pcVar19 + 0x18);
    FUN_0004948c(3,&local_2028,0);
  }
  else {
    if (4 < DAT_000be63c) {
      iVar4 = FUN_000807e0();
      snprintf((char *)&local_2028,0x2000,"chain_asic_num : %d\n",iVar4);
      FUN_0004948c(4,&local_2028,0);
    }
    DAT_00a4edb8 = FUN_000807e0(piVar3);
    piVar3 = (int *)FUN_0007eb20(piVar2,"domain_asic_num");
    if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      local_2028._0_1_ = 'g';
      local_2028._1_1_ = 'e';
      local_2028._2_1_ = 't';
      local_2028._3_1_ = ' ';
      local_2024._0_1_ = 'd';
      local_2024._1_1_ = 'o';
      local_2024._2_1_ = 'm';
      local_2024._3_1_ = 'a';
      local_2020._0_1_ = 'i';
      local_2020._1_1_ = 'n';
      local_2020._2_1_ = '_';
      local_2020._3_1_ = 'a';
      local_201c._0_1_ = 's';
      local_201c._1_1_ = 'i';
      local_201c._2_1_ = 'c';
      local_201c._3_1_ = '_';
      local_2018._0_1_ = 'n';
      local_2018._1_1_ = 'u';
      local_2018._2_1_ = 'm';
      local_2018._3_1_ = ' ';
      local_2014._0_1_ = 'f';
      local_2014._1_1_ = 'a';
      local_2014._2_1_ = 'i';
      local_2014._3_1_ = 'l';
      local_2010._0_1_ = 'e';
      local_2010._1_1_ = 'd';
      local_2010._2_1_ = '\n';
      local_2010._3_1_ = '\0';
      FUN_0004948c(3,&local_2028,0);
      return 0xffffffff;
    }
    if (4 < DAT_000be63c) {
      iVar4 = FUN_000807e0();
      snprintf((char *)&local_2028,0x2000,"domain_asic_num : %d\n",iVar4);
      FUN_0004948c(4,&local_2028,0);
    }
    iVar4 = FUN_000807e0(piVar3);
    __nmemb_00 = DAT_00a4edb8;
    __nmemb = DAT_00a4edb4;
    sVar8 = DAT_00a4eda8;
    DAT_00a4edbc = iVar4;
    if (3 < DAT_000be63c) {
      snprintf((char *)&local_2028,0x2000,
               "chain_num %d, chain_domain_num %d, chain_asic_num %d, domain_asic_num %d\n",
               DAT_00a4eda8,DAT_00a4edb4,DAT_00a4edb8,iVar4);
      FUN_0004948c(3,&local_2028,0);
    }
    DAT_00a4eddc = calloc(sVar8,0x20);
    if (DAT_00a4eddc == (void *)0x0) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      snprintf((char *)&local_2028,0x2000,"malloc %d chain_t failed\n",sVar8);
      FUN_0004948c(3,&local_2028,0);
LAB_00013924:
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      local_2028._0_1_ = 'a';
      local_2028._1_1_ = 'l';
      local_2028._2_1_ = 'l';
      local_2028._3_1_ = 'o';
      local_2024._0_1_ = 'c';
      local_2024._1_1_ = ' ';
      local_2024._2_1_ = 't';
      local_2024._3_1_ = 'o';
      local_2020._0_1_ = 'p';
      local_2020._1_1_ = 'o';
      local_2020._2_1_ = 'l';
      local_2020._3_1_ = ' ';
      local_201c._0_1_ = 'f';
      local_201c._1_1_ = 'a';
      local_201c._2_1_ = 'i';
      local_201c._3_1_ = 'l';
      local_2018._0_1_ = 'e';
      local_2018._1_1_ = 'd';
      local_2018._2_1_ = '\n';
      local_2018._3_1_ = '\0';
      FUN_0004948c(3,&local_2028,0);
      return 0xffffffff;
    }
    for (iVar18 = 0; pvVar17 = DAT_00a4eddc, iVar18 < (int)sVar8; iVar18 = iVar18 + 1) {
      *(int *)((int)DAT_00a4eddc + iVar18 * 0x20) = iVar18;
      pvVar5 = calloc(__nmemb,8);
      *(void **)((int)pvVar17 + iVar18 * 0x20 + 0xc) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        if (DAT_000be63c < 4) {
          return 0xffffffff;
        }
        pcVar19 = "malloc %d domain_t failed\n";
        __nmemb_00 = __nmemb;
LAB_000138a8:
        snprintf((char *)&local_2028,0x2000,pcVar19,__nmemb_00);
        FUN_0004948c(3,&local_2028,0);
        goto LAB_00013924;
      }
      pvVar5 = calloc(__nmemb_00,0x1c);
      *(void **)((int)pvVar17 + iVar18 * 0x20 + 8) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        if (DAT_000be63c < 4) {
          return 0xffffffff;
        }
        pcVar19 = "malloc %d asic_t failed\n";
        goto LAB_000138a8;
      }
      iVar6 = 0;
      iVar15 = 0;
      while( true ) {
        iVar6 = iVar6 + iVar4 * 0x1c;
        if ((int)__nmemb <= iVar15) break;
        iVar14 = *(int *)((int)pvVar17 + iVar18 * 0x20 + 0xc);
        *(int *)(iVar14 + iVar15 * 8) = iVar15;
        iVar1 = iVar15 * 8;
        iVar15 = iVar15 + 1;
        *(int *)(iVar14 + iVar1 + 4) =
             *(int *)((int)pvVar17 + iVar18 * 0x20 + 8) + iVar4 * -0x1c + iVar6;
      }
    }
    piVar3 = (int *)FUN_0007eb20(piVar2,&DAT_00099da4);
    pcVar19 = DAT_00a4ed98;
    if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
      iVar4 = strcmp(DAT_00a4ed98,"H6HB70801");
      if ((iVar4 == 0) || (iVar4 = strcmp(pcVar19,"H6HB70802"), iVar4 == 0)) goto LAB_00013f90;
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      local_2028._0_1_ = 'g';
      local_2028._1_1_ = 'e';
      local_2028._2_1_ = 't';
      local_2028._3_1_ = ' ';
      local_2024._0_1_ = 'p';
      local_2024._1_1_ = 'i';
      local_2024._2_1_ = 'c';
      local_2024._3_1_ = ' ';
      local_2020._0_1_ = 'f';
      local_2020._1_1_ = 'a';
      local_2020._2_1_ = 'i';
      local_2020._3_1_ = 'l';
      local_201c._0_1_ = 'e';
      local_201c._1_1_ = 'd';
      local_201c._2_1_ = '\n';
      local_201c._3_1_ = '\0';
      FUN_0004948c(3,&local_2028,0);
    }
    else {
      if (4 < DAT_000be63c) {
        local_2028._0_1_ = 'p';
        local_2028._1_1_ = 'i';
        local_2028._2_1_ = 'c';
        local_2028._3_1_ = ':';
        local_2024._0_1_ = '\n';
        local_2024._1_1_ = '\0';
        FUN_0004948c(4,&local_2028);
      }
      piVar7 = (int *)FUN_0007eb20(piVar3,"type");
      if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
        if (DAT_000be63c < 4) {
          return 0xffffffff;
        }
        local_2028._0_1_ = 'g';
        local_2028._1_1_ = 'e';
        local_2028._2_1_ = 't';
        local_2028._3_1_ = ' ';
        local_2024._0_1_ = 't';
        local_2024._1_1_ = 'y';
        local_2024._2_1_ = 'p';
        local_2024._3_1_ = 'e';
        local_2020._0_1_ = ' ';
        local_2020._1_1_ = 'f';
        local_2020._2_1_ = 'a';
        local_2020._3_1_ = 'i';
        local_201c._0_1_ = 'l';
        local_201c._1_1_ = 'e';
        local_201c._2_1_ = 'd';
        local_201c._3_1_ = '\n';
        local_2018 = local_2018 & 0xffffff00;
        FUN_0004948c(3,&local_2028,0);
      }
      else {
        if (4 < DAT_000be63c) {
          pcVar19 = (char *)FUN_00080310();
          snprintf((char *)&local_2028,0x2000,"type: %s\n",pcVar19);
          FUN_0004948c(4,&local_2028,0);
        }
        piVar7 = (int *)FUN_0007eb20(piVar3,"i2c_addr");
        if ((piVar7 == (int *)0x0) || (*piVar7 != 3)) {
          if (DAT_000be63c < 4) {
            return 0xffffffff;
          }
          local_2028._0_1_ = 'g';
          local_2028._1_1_ = 'e';
          local_2028._2_1_ = 't';
          local_2028._3_1_ = ' ';
          local_2024._0_1_ = 'i';
          local_2024._1_1_ = '2';
          local_2024._2_1_ = 'c';
          local_2024._3_1_ = '_';
          local_2020._0_1_ = 'a';
          local_2020._1_1_ = 'd';
          local_2020._2_1_ = 'd';
          local_2020._3_1_ = 'r';
          local_201c._0_1_ = ' ';
          local_201c._1_1_ = 'f';
          local_201c._2_1_ = 'a';
          local_201c._3_1_ = 'i';
          local_2018._0_1_ = 'l';
          local_2018._1_1_ = 'e';
          local_2018._2_1_ = 'd';
          local_2018._3_1_ = '\n';
          local_2014 = local_2014 & 0xffffff00;
          FUN_0004948c(3,&local_2028,0);
        }
        else {
          if (4 < DAT_000be63c) {
            iVar4 = FUN_000807e0();
            snprintf((char *)&local_2028,0x2000,"i2c_addr: %d\n",iVar4);
            FUN_0004948c(4,&local_2028,0);
          }
          piVar3 = (int *)FUN_0007eb20(piVar3,"sensor");
          if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
            iVar4 = strcmp(DAT_00a4ed98,"BHB28601");
            if (iVar4 == 0) goto LAB_00013f90;
            if (DAT_000be63c < 4) {
              return 0xffffffff;
            }
            local_2028._0_1_ = 'g';
            local_2028._1_1_ = 'e';
            local_2028._2_1_ = 't';
            local_2028._3_1_ = ' ';
            local_2024._0_1_ = 'p';
            local_2024._1_1_ = 'i';
            local_2024._2_1_ = 'c';
            local_2024._3_1_ = ' ';
            local_2020._0_1_ = 's';
            local_2020._1_1_ = 'e';
            local_2020._2_1_ = 'n';
            local_2020._3_1_ = 's';
            local_201c._0_1_ = 'o';
            local_201c._1_1_ = 'r';
            local_201c._2_1_ = ' ';
            local_201c._3_1_ = 'f';
            local_2018._0_1_ = 'a';
            local_2018._1_1_ = 'i';
            local_2018._2_1_ = 'l';
            local_2018._3_1_ = 'e';
            local_2014 = CONCAT13(local_2014._3_1_,0xa64);
            FUN_0004948c(3,&local_2028,0);
          }
          else {
            if (4 < DAT_000be63c) {
              local_2028._0_1_ = 'p';
              local_2028._1_1_ = 'i';
              local_2028._2_1_ = 'c';
              local_2028._3_1_ = ' ';
              local_2024._0_1_ = 's';
              local_2024._1_1_ = 'e';
              local_2024._2_1_ = 'n';
              local_2024._3_1_ = 's';
              local_2020._0_1_ = 'o';
              local_2020._1_1_ = 'r';
              local_2020._2_1_ = ':';
              local_2020._3_1_ = '\n';
              local_201c = local_201c & 0xffffff00;
              FUN_0004948c(4,&local_2028,0);
            }
            DAT_00a4ede4 = FUN_0007f66c(piVar3);
            sVar8 = FUN_0007f66c(piVar3);
            DAT_00a4ede8 = calloc(sVar8,0x10);
            if (DAT_00a4ede8 != (void *)0x0) {
              for (uVar16 = 0; uVar9 = FUN_0007f66c(piVar3), uVar16 < uVar9; uVar16 = uVar16 + 1) {
                piVar7 = (int *)FUN_0007f6b8(piVar3,uVar16);
                if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
                  if (DAT_000be63c < 4) {
                    return 0xffffffff;
                  }
                  pcVar19 = "get array %d failed\n";
LAB_00013e34:
                  snprintf((char *)&local_2028,0x2000,pcVar19,uVar16);
                  FUN_0004948c(3,&local_2028,0);
                  goto LAB_00013f50;
                }
                piVar10 = (int *)FUN_0007eb20(piVar7,"index");
                if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                  if (DAT_000be63c < 4) {
                    return 0xffffffff;
                  }
                  pcVar19 = "get array %d index failed\n";
                  goto LAB_00013e34;
                }
                if (4 < DAT_000be63c) {
                  iVar4 = FUN_000807e0();
                  snprintf((char *)&local_2028,0x2000,"index: %d\n",iVar4);
                  FUN_0004948c(4,&local_2028,0);
                }
                pvVar17 = DAT_00a4ede8;
                iVar4 = FUN_000807e0(piVar10);
                uVar11 = FUN_000807e0(piVar10);
                *(undefined4 *)((int)pvVar17 + iVar4 * 0x10) = uVar11;
                piVar10 = (int *)FUN_0007eb20(piVar7,"type");
                if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                  if (DAT_000be63c < 4) {
                    return 0xffffffff;
                  }
                  pcVar19 = "get array %d type failed\n";
                  goto LAB_00013e34;
                }
                if (4 < DAT_000be63c) {
                  pcVar19 = (char *)FUN_00080310();
                  snprintf((char *)&local_2028,0x2000,"type: %s\n",pcVar19);
                  FUN_0004948c(4,&local_2028,0);
                }
                piVar10 = (int *)FUN_0007eb20(piVar7,&DAT_0009c4b0);
                if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                  if (DAT_000be63c < 4) {
                    return 0xffffffff;
                  }
                  pcVar19 = "get array %d bind_asic failed\n";
                  goto LAB_00013e34;
                }
                if (4 < DAT_000be63c) {
                  iVar18 = FUN_000807e0();
                  snprintf((char *)&local_2028,0x2000,"iic: %d\n",iVar18);
                  FUN_0004948c(4,&local_2028,0);
                }
                uVar11 = FUN_000807e0(piVar10);
                *(undefined4 *)((int)pvVar17 + iVar4 * 0x10 + 4) = uVar11;
                piVar7 = (int *)FUN_0007eb20(piVar7,"x");
                if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
                  if (DAT_000be63c < 4) {
                    return 0xffffffff;
                  }
                  pcVar19 = "get array %d x failed\n";
                  goto LAB_00013e34;
                }
                if (4 < DAT_000be63c) {
                  pcVar19 = (char *)FUN_00080310();
                  snprintf((char *)&local_2028,0x2000,"x: %s\n",pcVar19);
                  FUN_0004948c(4,&local_2028,0);
                }
                if (DAT_00a4edfc == 0) {
                  pcVar19 = (char *)FUN_00080310(piVar7);
                  iVar18 = strncasecmp(pcVar19,"right",5);
                  if (iVar18 == 0) {
                    *(undefined1 *)((int)pvVar17 + iVar4 * 0x10 + 0xc) = 1;
                  }
                  else {
                    *(undefined1 *)((int)pvVar17 + iVar4 * 0x10 + 0xc) = 0;
                  }
                }
              }
LAB_00013f90:
              piVar3 = (int *)FUN_0007eb20(piVar2,"eeprom");
              if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
                if (DAT_000be63c < 4) {
                  return 0xffffffff;
                }
                local_2028._0_1_ = 'g';
                local_2028._1_1_ = 'e';
                local_2028._2_1_ = 't';
                local_2028._3_1_ = ' ';
                local_2024._0_1_ = 'e';
                local_2024._1_1_ = 'e';
                local_2024._2_1_ = 'p';
                local_2024._3_1_ = 'r';
                local_2020._0_1_ = 'o';
                local_2020._1_1_ = 'm';
                local_2020._2_1_ = ' ';
                local_2020._3_1_ = 'f';
                local_201c._0_1_ = 'a';
                local_201c._1_1_ = 'i';
                local_201c._2_1_ = 'l';
                local_201c._3_1_ = 'e';
                local_2018 = CONCAT13(local_2018._3_1_,0xa64);
                FUN_0004948c(3,&local_2028,0);
              }
              else {
                if (4 < DAT_000be63c) {
                  local_2028._0_1_ = 'e';
                  local_2028._1_1_ = 'e';
                  local_2028._2_1_ = 'p';
                  local_2028._3_1_ = 'r';
                  local_2024._0_1_ = 'o';
                  local_2024._1_1_ = 'm';
                  local_2024._2_1_ = ':';
                  local_2024._3_1_ = '\n';
                  local_2020 = local_2020 & 0xffffff00;
                  FUN_0004948c(4,&local_2028,0);
                }
                piVar7 = (int *)FUN_0007eb20(piVar3,"type");
                if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
                  if (DAT_000be63c < 4) {
                    return 0xffffffff;
                  }
                  local_2028._0_1_ = 'g';
                  local_2028._1_1_ = 'e';
                  local_2028._2_1_ = 't';
                  local_2028._3_1_ = ' ';
                  local_2024._0_1_ = 't';
                  local_2024._1_1_ = 'y';
                  local_2024._2_1_ = 'p';
                  local_2024._3_1_ = 'e';
                  local_2020._0_1_ = ' ';
                  local_2020._1_1_ = 'f';
                  local_2020._2_1_ = 'a';
                  local_2020._3_1_ = 'i';
                  local_201c._0_1_ = 'l';
                  local_201c._1_1_ = 'e';
                  local_201c._2_1_ = 'd';
                  local_201c._3_1_ = '\n';
                  local_2018 = local_2018 & 0xffffff00;
                  FUN_0004948c(3,&local_2028,0);
                }
                else {
                  if (4 < DAT_000be63c) {
                    pcVar19 = (char *)FUN_00080310();
                    snprintf((char *)&local_2028,0x2000,"type: %s\n",pcVar19);
                    FUN_0004948c(4,&local_2028,0);
                  }
                  piVar3 = (int *)FUN_0007eb20(piVar3,"i2c_addr");
                  if ((piVar3 != (int *)0x0) && (*piVar3 == 3)) {
                    if (4 < DAT_000be63c) {
                      iVar4 = FUN_000807e0();
                      snprintf((char *)&local_2028,0x2000,"i2c_addr: %d\n",iVar4);
                      FUN_0004948c(4,&local_2028,0);
                    }
                    piVar3 = (int *)FUN_0007eb20(piVar2,"switchsensor");
                    if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
                      iVar4 = strcmp(DAT_00a4ed98,"BHB28601");
                      if ((iVar4 != 0) && (3 < DAT_000be63c)) {
                        local_2028._0_1_ = 'g';
                        local_2028._1_1_ = 'e';
                        local_2028._2_1_ = 't';
                        local_2028._3_1_ = ' ';
                        local_2024._0_1_ = 's';
                        local_2024._1_1_ = 'w';
                        local_2024._2_1_ = 'i';
                        local_2024._3_1_ = 't';
                        local_2020._0_1_ = 'c';
                        local_2020._1_1_ = 'h';
                        local_2020._2_1_ = ' ';
                        local_2020._3_1_ = 's';
                        local_201c._0_1_ = 'e';
                        local_201c._1_1_ = 'n';
                        local_201c._2_1_ = 's';
                        local_201c._3_1_ = 'o';
                        local_2018._0_1_ = 'r';
                        local_2018._1_1_ = ' ';
                        local_2018._2_1_ = 'f';
                        local_2018._3_1_ = 'a';
                        local_2014._0_1_ = 'i';
                        local_2014._1_1_ = 'l';
                        local_2014._2_1_ = 'e';
                        local_2014._3_1_ = 'd';
                        local_2010 = CONCAT22(local_2010._2_2_,10);
                        FUN_0004948c(3,&local_2028,0);
LAB_000144c4:
                        if (3 < DAT_000be63c) {
                          local_2028._0_1_ = 'p';
                          local_2028._1_1_ = 'a';
                          local_2028._2_1_ = 'r';
                          local_2028._3_1_ = 's';
                          local_2024._0_1_ = 'e';
                          local_2024._1_1_ = ' ';
                          local_2024._2_1_ = 'c';
                          local_2024._3_1_ = 'h';
                          local_2020._0_1_ = 'a';
                          local_2020._1_1_ = 'i';
                          local_2020._2_1_ = 'n';
                          local_2020._3_1_ = ' ';
                          local_201c._0_1_ = 'c';
                          local_201c._1_1_ = 't';
                          local_201c._2_1_ = 'r';
                          local_201c._3_1_ = 'l';
                          local_2018._0_1_ = 'b';
                          local_2018._1_1_ = 'o';
                          local_2018._2_1_ = 'a';
                          local_2018._3_1_ = 'r';
                          local_2014._0_1_ = 'd';
                          local_2014._1_1_ = ' ';
                          local_2014._2_1_ = 's';
                          local_2014._3_1_ = 'e';
                          local_2010._0_1_ = 'n';
                          local_2010._1_1_ = 's';
                          local_2010._2_1_ = 'o';
                          local_2010._3_1_ = 'r';
                          local_200c._0_1_ = ' ';
                          local_200c._1_1_ = 'f';
                          local_200c._2_1_ = 'a';
                          local_200c._3_1_ = 'i';
                          builtin_strncpy(acStack_2008,"led\n",5);
                          FUN_0004948c(3,&local_2028,0);
                        }
                      }
                    }
                    else {
                      if (4 < DAT_000be63c) {
                        local_2028._0_1_ = 's';
                        local_2028._1_1_ = 'w';
                        local_2028._2_1_ = 'i';
                        local_2028._3_1_ = 't';
                        local_2024._0_1_ = 'c';
                        local_2024._1_1_ = 'h';
                        local_2024._2_1_ = ' ';
                        local_2024._3_1_ = 's';
                        local_2020._0_1_ = 'e';
                        local_2020._1_1_ = 'n';
                        local_2020._2_1_ = 's';
                        local_2020._3_1_ = 'o';
                        local_201c._0_1_ = 'r';
                        local_201c._1_1_ = ':';
                        local_201c._2_1_ = '\n';
                        local_201c._3_1_ = '\0';
                        FUN_0004948c(4,&local_2028,0);
                      }
                      DAT_00a4edf4 = FUN_0007f66c(piVar3);
                      sVar8 = FUN_0007f66c(piVar3);
                      DAT_00a4edf8 = calloc(sVar8,0x10);
                      if (DAT_00a4edf8 == (void *)0x0) {
                        if (3 < DAT_000be63c) {
                          iVar4 = FUN_0007f66c(piVar3);
                          snprintf((char *)&local_2028,0x2000,"malloc %d sensor_t failed\n",iVar4);
                          FUN_0004948c(3,&local_2028,0);
                          goto LAB_000144c4;
                        }
                      }
                      else {
                        for (uVar16 = 0; uVar9 = FUN_0007f66c(piVar3), uVar16 < uVar9;
                            uVar16 = uVar16 + 1) {
                          piVar7 = (int *)FUN_0007f6b8(piVar3,uVar16);
                          if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
                            if (3 < DAT_000be63c) {
                              pcVar19 = "get array %d failed\n";
LAB_00014460:
                              snprintf((char *)&local_2028,0x2000,pcVar19,uVar16);
                              FUN_0004948c(3,&local_2028,0);
                              goto LAB_000144c4;
                            }
                            break;
                          }
                          piVar10 = (int *)FUN_0007eb20(piVar7,"index");
                          if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                            if (3 < DAT_000be63c) {
                              pcVar19 = "get array %d index failed\n";
                              goto LAB_00014460;
                            }
                            break;
                          }
                          if (4 < DAT_000be63c) {
                            iVar4 = FUN_000807e0();
                            snprintf((char *)&local_2028,0x2000,"index: %d\n",iVar4);
                            FUN_0004948c(4,&local_2028,0);
                          }
                          pvVar17 = DAT_00a4edf8;
                          iVar4 = FUN_000807e0(piVar10);
                          uVar11 = FUN_000807e0(piVar10);
                          *(undefined4 *)((int)pvVar17 + iVar4 * 0x10) = uVar11;
                          piVar10 = (int *)FUN_0007eb20(piVar7,"type");
                          if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                            if (3 < DAT_000be63c) {
                              pcVar19 = "get array %d type failed\n";
                              goto LAB_00014460;
                            }
                            break;
                          }
                          if (4 < DAT_000be63c) {
                            pcVar19 = (char *)FUN_00080310();
                            snprintf((char *)&local_2028,0x2000,"type: %s\n",pcVar19);
                            FUN_0004948c(4,&local_2028,0);
                          }
                          piVar7 = (int *)FUN_0007eb20(piVar7,&DAT_0009c4b0);
                          if ((piVar7 == (int *)0x0) || (*piVar7 != 3)) {
                            if (3 < DAT_000be63c) {
                              pcVar19 = "get array %d bind_asic failed\n";
                              goto LAB_00014460;
                            }
                            break;
                          }
                          if (4 < DAT_000be63c) {
                            iVar18 = FUN_000807e0();
                            snprintf((char *)&local_2028,0x2000,"iic: %d\n",iVar18);
                            FUN_0004948c(4,&local_2028,0);
                          }
                          uVar11 = FUN_000807e0(piVar7);
                          *(undefined4 *)((int)pvVar17 + iVar4 * 0x10 + 8) = uVar11;
                        }
                      }
                    }
                    piVar3 = (int *)FUN_0007eb20(piVar2,"sensor");
                    pcVar19 = DAT_00a4ed98;
                    if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
                      iVar4 = strcmp(DAT_00a4ed98,"H6HB70801");
                      if ((iVar4 == 0) || (iVar4 = strcmp(pcVar19,"H6HB70802"), iVar4 == 0))
                      goto LAB_000148a4;
                      if (DAT_000be63c < 4) {
                        return 0xffffffff;
                      }
                      local_2028._0_1_ = 'g';
                      local_2028._1_1_ = 'e';
                      local_2028._2_1_ = 't';
                      local_2028._3_1_ = ' ';
                      local_2024._0_1_ = 's';
                      local_2024._1_1_ = 'e';
                      local_2024._2_1_ = 'n';
                      local_2024._3_1_ = 's';
                      local_2020._0_1_ = 'o';
                      local_2020._1_1_ = 'r';
                      local_2020._2_1_ = ' ';
                      local_2020._3_1_ = 'f';
                      local_201c._0_1_ = 'a';
                      local_201c._1_1_ = 'i';
                      local_201c._2_1_ = 'l';
                      local_201c._3_1_ = 'e';
                      local_2018 = CONCAT13(local_2018._3_1_,0xa64);
                      FUN_0004948c(3,&local_2028,0);
                    }
                    else {
                      if (4 < DAT_000be63c) {
                        local_2028._0_1_ = 's';
                        local_2028._1_1_ = 'e';
                        local_2028._2_1_ = 'n';
                        local_2028._3_1_ = 's';
                        local_2024._0_1_ = 'o';
                        local_2024._1_1_ = 'r';
                        local_2024._2_1_ = ':';
                        local_2024._3_1_ = '\n';
                        local_2020 = local_2020 & 0xffffff00;
                        FUN_0004948c(4,&local_2028,0);
                      }
                      DAT_00a4edc0 = FUN_0007f66c(piVar3);
                      sVar8 = FUN_0007f66c(piVar3);
                      DAT_00a4ede0 = calloc(sVar8,0x10);
                      if (DAT_00a4ede0 != (void *)0x0) {
                        for (uVar16 = 0; uVar9 = FUN_0007f66c(piVar3), uVar16 < uVar9;
                            uVar16 = uVar16 + 1) {
                          piVar7 = (int *)FUN_0007f6b8(piVar3,uVar16);
                          if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
                            if (DAT_000be63c < 4) {
                              return 0xffffffff;
                            }
                            pcVar19 = "get array %d failed\n";
LAB_000147f4:
                            snprintf((char *)&local_2028,0x2000,pcVar19,uVar16);
                            FUN_0004948c(3,&local_2028,0);
                            goto LAB_00014858;
                          }
                          piVar10 = (int *)FUN_0007eb20(piVar7,"index");
                          if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                            if (DAT_000be63c < 4) {
                              return 0xffffffff;
                            }
                            pcVar19 = "get array %d index failed\n";
                            goto LAB_000147f4;
                          }
                          if (4 < DAT_000be63c) {
                            iVar4 = FUN_000807e0();
                            snprintf((char *)&local_2028,0x2000,"index: %d\n",iVar4);
                            FUN_0004948c(4,&local_2028,0);
                          }
                          pvVar17 = DAT_00a4ede0;
                          iVar4 = FUN_000807e0(piVar10);
                          piVar10 = (int *)FUN_0007eb20(piVar7,"type");
                          if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                            if (DAT_000be63c < 4) {
                              return 0xffffffff;
                            }
                            pcVar19 = "get array %d type failed\n";
                            goto LAB_000147f4;
                          }
                          if (4 < DAT_000be63c) {
                            pcVar19 = (char *)FUN_00080310();
                            snprintf((char *)&local_2028,0x2000,"type: %s\n",pcVar19);
                            FUN_0004948c(4,&local_2028,0);
                          }
                          piVar7 = (int *)FUN_0007eb20(piVar7,"bind_asic");
                          if ((piVar7 == (int *)0x0) || (*piVar7 != 3)) {
                            if (DAT_000be63c < 4) {
                              return 0xffffffff;
                            }
                            pcVar19 = "get array %d bind_asic failed\n";
                            goto LAB_000147f4;
                          }
                          if (4 < DAT_000be63c) {
                            iVar18 = FUN_000807e0();
                            snprintf((char *)&local_2028,0x2000,"bind_asic: %d\n",iVar18);
                            FUN_0004948c(4,&local_2028,0);
                          }
                          uVar11 = FUN_000807e0(piVar7);
                          *(undefined4 *)((int)pvVar17 + iVar4 * 0x10 + 4) = uVar11;
                        }
LAB_000148a4:
                        piVar3 = (int *)FUN_0007eb20(piVar2,"ctrlboardsensor");
                        pcVar19 = DAT_00a4ed98;
                        if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
                          iVar4 = strcmp(DAT_00a4ed98,"H6HB70801");
                          if ((iVar4 != 0) &&
                             ((((iVar4 = strcmp(pcVar19,"H6HB70802"), iVar4 != 0 &&
                                (iVar4 = strcmp(pcVar19,"HHB56601"), iVar4 != 0)) &&
                               (iVar4 = strcmp(pcVar19,"HHB56611"), iVar4 != 0)) &&
                              (3 < DAT_000be63c)))) {
                            local_2028._0_1_ = 'g';
                            local_2028._1_1_ = 'e';
                            local_2028._2_1_ = 't';
                            local_2028._3_1_ = ' ';
                            local_2024._0_1_ = 'c';
                            local_2024._1_1_ = 't';
                            local_2024._2_1_ = 'r';
                            local_2024._3_1_ = 'l';
                            local_2020._0_1_ = 'b';
                            local_2020._1_1_ = 'o';
                            local_2020._2_1_ = 'a';
                            local_2020._3_1_ = 'r';
                            local_201c._0_1_ = 'd';
                            local_201c._1_1_ = ' ';
                            local_201c._2_1_ = 's';
                            local_201c._3_1_ = 'e';
                            local_2018._0_1_ = 'n';
                            local_2018._1_1_ = 's';
                            local_2018._2_1_ = 'o';
                            local_2018._3_1_ = 'r';
                            local_2014._0_1_ = ' ';
                            local_2014._1_1_ = 'f';
                            local_2014._2_1_ = 'a';
                            local_2014._3_1_ = 'i';
                            local_2010._0_1_ = 'l';
                            local_2010._1_1_ = 'e';
                            local_2010._2_1_ = 'd';
                            local_2010._3_1_ = '\n';
                            local_200c = local_200c & 0xffffff00;
                            FUN_0004948c(3,&local_2028,0);
LAB_00014da4:
                            if (3 < DAT_000be63c) {
                              local_2028._0_1_ = 'p';
                              local_2028._1_1_ = 'a';
                              local_2028._2_1_ = 'r';
                              local_2028._3_1_ = 's';
                              local_2024._0_1_ = 'e';
                              local_2024._1_1_ = ' ';
                              local_2024._2_1_ = 'c';
                              local_2024._3_1_ = 'h';
                              local_2020._0_1_ = 'a';
                              local_2020._1_1_ = 'i';
                              local_2020._2_1_ = 'n';
                              local_2020._3_1_ = ' ';
                              local_201c._0_1_ = 'c';
                              local_201c._1_1_ = 't';
                              local_201c._2_1_ = 'r';
                              local_201c._3_1_ = 'l';
                              local_2018._0_1_ = 'b';
                              local_2018._1_1_ = 'o';
                              local_2018._2_1_ = 'a';
                              local_2018._3_1_ = 'r';
                              local_2014._0_1_ = 'd';
                              local_2014._1_1_ = ' ';
                              local_2014._2_1_ = 's';
                              local_2014._3_1_ = 'e';
                              local_2010._0_1_ = 'n';
                              local_2010._1_1_ = 's';
                              local_2010._2_1_ = 'o';
                              local_2010._3_1_ = 'r';
                              local_200c._0_1_ = ' ';
                              local_200c._1_1_ = 'f';
                              local_200c._2_1_ = 'a';
                              local_200c._3_1_ = 'i';
                              builtin_strncpy(acStack_2008,"led\n",5);
                              FUN_0004948c(3,&local_2028,0);
                            }
                          }
                        }
                        else {
                          if (4 < DAT_000be63c) {
                            local_2028._0_1_ = 'c';
                            local_2028._1_1_ = 't';
                            local_2028._2_1_ = 'r';
                            local_2028._3_1_ = 'l';
                            local_2024._0_1_ = 'b';
                            local_2024._1_1_ = 'o';
                            local_2024._2_1_ = 'a';
                            local_2024._3_1_ = 'r';
                            local_2020._0_1_ = 'd';
                            local_2020._1_1_ = ' ';
                            local_2020._2_1_ = 's';
                            local_2020._3_1_ = 'e';
                            local_201c._0_1_ = 'n';
                            local_201c._1_1_ = 's';
                            local_201c._2_1_ = 'o';
                            local_201c._3_1_ = 'r';
                            local_2018 = CONCAT13(local_2018._3_1_,0xa3a);
                            FUN_0004948c(4,&local_2028,0);
                          }
                          DAT_00a4edec = FUN_0007f66c(piVar3);
                          sVar8 = FUN_0007f66c(piVar3);
                          DAT_00a4edf0 = calloc(sVar8,0x10);
                          if (DAT_00a4edf0 == (void *)0x0) {
                            if (3 < DAT_000be63c) {
                              iVar4 = FUN_0007f66c(piVar3);
                              snprintf((char *)&local_2028,0x2000,"malloc %d sensor_t failed\n",
                                       iVar4);
                              FUN_0004948c(3,&local_2028,0);
                              goto LAB_00014da4;
                            }
                          }
                          else {
                            if (4 < DAT_000be63c) {
                              snprintf((char *)&local_2028,0x2000,"ctrlboard_sensor_num:%d\n",
                                       DAT_00a4edec);
                              FUN_0004948c(4,&local_2028,0);
                            }
                            for (uVar16 = 0; uVar9 = FUN_0007f66c(piVar3), uVar16 < uVar9;
                                uVar16 = uVar16 + 1) {
                              piVar7 = (int *)FUN_0007f6b8(piVar3,uVar16);
                              if ((piVar7 == (int *)0x0) || (*piVar7 != 0)) {
                                if (3 < DAT_000be63c) {
                                  pcVar19 = "get array %d failed\n";
LAB_00014c9c:
                                  snprintf((char *)&local_2028,0x2000,pcVar19,uVar16);
                                  FUN_0004948c(3,&local_2028,0);
                                  goto LAB_00014da4;
                                }
                                break;
                              }
                              piVar10 = (int *)FUN_0007eb20(piVar7,"index");
                              if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                                if (3 < DAT_000be63c) {
                                  pcVar19 = "get array %d index failed\n";
                                  goto LAB_00014c9c;
                                }
                                break;
                              }
                              if (4 < DAT_000be63c) {
                                iVar4 = FUN_000807e0();
                                snprintf((char *)&local_2028,0x2000,"index: %d\n",iVar4);
                                FUN_0004948c(4,&local_2028,0);
                              }
                              pvVar17 = DAT_00a4edf0;
                              iVar4 = FUN_000807e0(piVar10);
                              uVar11 = FUN_000807e0(piVar10);
                              *(undefined4 *)((int)pvVar17 + iVar4 * 0x10) = uVar11;
                              piVar10 = (int *)FUN_0007eb20(piVar7,"type");
                              if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                                if (3 < DAT_000be63c) {
                                  pcVar19 = "get array %d type failed\n";
                                  goto LAB_00014c9c;
                                }
                                break;
                              }
                              if (4 < DAT_000be63c) {
                                pcVar19 = (char *)FUN_00080310();
                                snprintf((char *)&local_2028,0x2000,"type: %s\n",pcVar19);
                                FUN_0004948c(4,&local_2028,0);
                              }
                              piVar10 = (int *)FUN_0007eb20(piVar7,&DAT_0009c4b0);
                              if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                                if (3 < DAT_000be63c) {
                                  pcVar19 = "get array %d bind_asic failed\n";
                                  goto LAB_00014c9c;
                                }
                                break;
                              }
                              if (4 < DAT_000be63c) {
                                iVar18 = FUN_000807e0();
                                snprintf((char *)&local_2028,0x2000,"iic: %d\n",iVar18);
                                FUN_0004948c(4,&local_2028,0);
                              }
                              uVar11 = FUN_000807e0(piVar10);
                              *(undefined4 *)((int)pvVar17 + iVar4 * 0x10 + 4) = uVar11;
                              piVar10 = (int *)FUN_0007eb20(piVar7,"x");
                              if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                                if (3 < DAT_000be63c) {
                                  pcVar19 = "get array %d x failed\n";
                                  goto LAB_00014c9c;
                                }
                                break;
                              }
                              if (4 < DAT_000be63c) {
                                pcVar19 = (char *)FUN_00080310();
                                snprintf((char *)&local_2028,0x2000,"x: %s\n",pcVar19);
                                FUN_0004948c(4,&local_2028,0);
                              }
                              piVar7 = (int *)FUN_0007eb20(piVar7,"y");
                              if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
                                if (3 < DAT_000be63c) {
                                  pcVar19 = "get array %d y failed\n";
                                  goto LAB_00014c9c;
                                }
                                break;
                              }
                              if (4 < DAT_000be63c) {
                                pcVar19 = (char *)FUN_00080310();
                                snprintf((char *)&local_2028,0x2000,"y: %s\n",pcVar19);
                                FUN_0004948c(4,&local_2028,0);
                              }
                              if (DAT_00a4edfc == 0) {
                                pcVar19 = (char *)FUN_00080310(piVar7);
                                iVar18 = strncasecmp(pcVar19,"right",5);
                                if (iVar18 == 0) {
                                  *(undefined1 *)((int)pvVar17 + iVar4 * 0x10 + 0xc) = 1;
                                }
                                else {
                                  *(undefined1 *)((int)pvVar17 + iVar4 * 0x10 + 0xc) = 0;
                                }
                              }
                            }
                          }
                        }
                        piVar2 = (int *)FUN_0007eb20(piVar2,&DAT_0009c694);
                        if ((piVar2 != (int *)0x0) && (*piVar2 == 1)) {
                          uVar11 = FUN_0007f66c();
                          *(undefined4 *)((int)DAT_00a4eddc + 0x10) = uVar11;
                          piVar3 = (int *)FUN_0007f6b8(piVar2,0);
                          if ((piVar3 != (int *)0x0) && (*piVar3 == 1)) {
                            uVar11 = FUN_0007f66c();
                            *(undefined4 *)((int)DAT_00a4eddc + 0x14) = uVar11;
                            pvVar17 = DAT_00a4eddc;
                            pvVar5 = calloc(*(int *)((int)DAT_00a4eddc + 0x14) *
                                            *(int *)((int)DAT_00a4eddc + 0x10),4);
                            local_2038 = "%3d],\n";
                            *(void **)((int)pvVar17 + 0x18) = pvVar5;
                            for (iVar4 = 0; iVar4 < *(int *)((int)DAT_00a4eddc + 0x10);
                                iVar4 = iVar4 + 1) {
                              uVar11 = FUN_0007f6b8(piVar2,iVar4);
                              iVar6 = *(int *)((int)DAT_00a4eddc + 0x14);
                              iVar18 = FUN_0007f66c();
                              if (iVar6 != iVar18) {
                                if (3 < DAT_000be63c) {
                                  snprintf((char *)&local_2028,0x2000,
                                           "tpl row:%d column size is different!!!\n",iVar4);
                                  FUN_0004948c(3,&local_2028,0);
                                  goto LAB_0001506c;
                                }
                                break;
                              }
                              for (iVar18 = 0; iVar18 < *(int *)((int)DAT_00a4eddc + 0x14);
                                  iVar18 = iVar18 + 1) {
                                FUN_0007f6b8(uVar11,iVar18);
                                uVar12 = FUN_000807e0();
                                *(undefined4 *)
                                 (*(int *)((int)DAT_00a4eddc + 0x18) +
                                 (*(int *)((int)DAT_00a4eddc + 0x14) * iVar4 + iVar18) * 4) = uVar12
                                ;
                                pvVar17 = DAT_00a4eddc;
                                if (iVar18 == 0) {
                                  if (4 < DAT_000be63c) {
                                    memset(&local_2028,0,0x2000);
                                    snprintf((char *)&local_2028,0x2000,"data[%2d]=[%d,",iVar4,
                                             *(int *)(*(int *)((int)pvVar17 + 0x18) +
                                                     *(int *)((int)pvVar17 + 0x14) * iVar4 * 4));
                                    FUN_0004a3a4(4,&local_2028,0);
                                  }
                                }
                                else if (iVar18 == *(int *)((int)DAT_00a4eddc + 0x14) + -1) {
                                  if (4 < DAT_000be63c) {
                                    memset(&local_2028,0,0x2000);
                                    iVar6 = *(int *)((int)pvVar17 + 0x14);
                                    iVar15 = *(int *)((int)pvVar17 + 0x18);
                                    pcVar19 = local_2038;
LAB_0001503c:
                                    snprintf((char *)&local_2028,0x2000,pcVar19,
                                             *(undefined4 *)(iVar15 + (iVar6 * iVar4 + iVar18) * 4))
                                    ;
                                    FUN_0004a3a4(4,&local_2028,0);
                                  }
                                }
                                else if (4 < DAT_000be63c) {
                                  memset(&local_2028,0,0x2000);
                                  iVar6 = *(int *)((int)pvVar17 + 0x14);
                                  iVar15 = *(int *)((int)pvVar17 + 0x18);
                                  pcVar19 = "%3d,";
                                  goto LAB_0001503c;
                                }
                              }
                            }
                            goto LAB_000150a4;
                          }
                        }
                        if (3 < DAT_000be63c) {
                          local_2028._0_1_ = 'g';
                          local_2028._1_1_ = 'e';
                          local_2028._2_1_ = 't';
                          local_2028._3_1_ = ' ';
                          local_2024._0_1_ = 't';
                          local_2024._1_1_ = 'p';
                          local_2024._2_1_ = 'l';
                          local_2024._3_1_ = '.';
                          local_2020._0_1_ = 'd';
                          local_2020._1_1_ = 'a';
                          local_2020._2_1_ = 't';
                          local_2020._3_1_ = 'a';
                          local_201c._0_1_ = ' ';
                          local_201c._1_1_ = 'a';
                          local_201c._2_1_ = 'r';
                          local_201c._3_1_ = 'r';
                          local_2018._0_1_ = 'a';
                          local_2018._1_1_ = 'y';
                          local_2018._2_1_ = ' ';
                          local_2018._3_1_ = 'f';
                          local_2014._0_1_ = 'a';
                          local_2014._1_1_ = 'i';
                          local_2014._2_1_ = 'l';
                          local_2014._3_1_ = 'e';
                          local_2010 = CONCAT13(local_2010._3_1_,0xa64);
                          FUN_0004948c(3,&local_2028,0);
LAB_0001506c:
                          if (3 < DAT_000be63c) {
                            local_2028._0_1_ = 'p';
                            local_2028._1_1_ = 'a';
                            local_2028._2_1_ = 'r';
                            local_2028._3_1_ = 's';
                            local_2024._0_1_ = 'e';
                            local_2024._1_1_ = ' ';
                            local_2024._2_1_ = 'c';
                            local_2024._3_1_ = 'h';
                            local_2020._0_1_ = 'a';
                            local_2020._1_1_ = 'i';
                            local_2020._2_1_ = 'n';
                            local_2020._3_1_ = ' ';
                            local_201c._0_1_ = 't';
                            local_201c._1_1_ = 'p';
                            local_201c._2_1_ = 'l';
                            local_201c._3_1_ = ' ';
                            local_2018._0_1_ = 'f';
                            local_2018._1_1_ = 'a';
                            local_2018._2_1_ = 'i';
                            local_2018._3_1_ = 'l';
                            local_2014._0_1_ = 'e';
                            local_2014._1_1_ = 'd';
                            local_2014._2_1_ = '\n';
                            local_2014._3_1_ = '\0';
                            FUN_0004948c(3,&local_2028,0);
                          }
                        }
LAB_000150a4:
                        pvVar17 = *(void **)((int)DAT_00a4eddc + 8);
                        for (iVar4 = 1; iVar4 < (int)DAT_00a4eda8; iVar4 = iVar4 + 1) {
                          memcpy(*(void **)((int)DAT_00a4eddc + iVar4 * 0x20 + 8),pvVar17,
                                 DAT_00a4edb8 * 0x1c);
                        }
                        iVar4 = 0;
                        do {
                          pvVar17 = DAT_00a4ede0;
                          if (DAT_00a4edc0 <= iVar4) {
                            return 0;
                          }
                          iVar18 = *(int *)((int)DAT_00a4ede0 + iVar4 * 0x10 + 4);
                          iVar6 = iVar18 * 0x1c + *(int *)((int)DAT_00a4eddc + 8);
                          if (3 < DAT_000be63c) {
                            snprintf((char *)&local_2028,0x2000,"asic %d, wind %d, y %d\n",iVar18,
                                     DAT_00a4edfc,*(int *)(iVar6 + 8));
                            FUN_0004948c(3,&local_2028,0);
                          }
                          if (DAT_00a4edfc == 1) {
                            if (DAT_00a4edb0 / 3 < *(int *)(iVar6 + 8)) goto LAB_00015280;
                            if (DAT_000be63c < 4) {
LAB_00015214:
                              uVar13 = 1;
                            }
                            else {
                              local_2028._0_1_ = 'a';
                              local_2028._1_1_ = 'i';
                              local_2028._2_1_ = 'r';
                              local_2028._3_1_ = ' ';
                              local_2024._0_1_ = 'i';
                              local_2024._1_1_ = 'n';
                              local_2024._2_1_ = '\n';
                              local_2024._3_1_ = '\0';
                              FUN_0004948c(3,&local_2028,0);
                              uVar13 = 1;
                            }
                          }
                          else {
                            if (DAT_00a4edfc == 0) {
                              if ((DAT_00a4edb0 << 1) / 3 <= *(int *)(iVar6 + 8))
                              goto joined_r0x00015268;
                            }
                            else if (DAT_00a4edfc == 2) {
                              if (*(int *)(iVar6 + 4) <= DAT_00a4edac / 3) {
joined_r0x00015268:
                                if (3 < DAT_000be63c) {
                                  local_2028._0_1_ = 'a';
                                  local_2028._1_1_ = 'i';
                                  local_2028._2_1_ = 'r';
                                  local_2028._3_1_ = ' ';
                                  local_2024._0_1_ = 'i';
                                  local_2024._1_1_ = 'n';
                                  local_2024._2_1_ = '\n';
                                  local_2024._3_1_ = '\0';
                                  FUN_0004948c(3,&local_2028,0);
                                }
                                goto LAB_00015214;
                              }
                            }
                            else if ((DAT_00a4edfc == 3) &&
                                    ((DAT_00a4edac << 1) / 3 <= *(int *)(iVar6 + 4)))
                            goto joined_r0x00015268;
LAB_00015280:
                            if (DAT_000be63c < 4) {
                              uVar13 = 0;
                            }
                            else {
                              local_2028._0_1_ = 'a';
                              local_2028._1_1_ = 'i';
                              local_2028._2_1_ = 'r';
                              local_2028._3_1_ = ' ';
                              local_2024._0_1_ = 'o';
                              local_2024._1_1_ = 'u';
                              local_2024._2_1_ = 't';
                              local_2024._3_1_ = '\n';
                              local_2020 = local_2020 & 0xffffff00;
                              FUN_0004948c(3,&local_2028,0);
                              uVar13 = 0;
                            }
                          }
                          *(undefined1 *)((int)pvVar17 + iVar4 * 0x10 + 0xc) = uVar13;
                          iVar4 = iVar4 + 1;
                        } while( true );
                      }
                      if (DAT_000be63c < 4) {
                        return 0xffffffff;
                      }
                      iVar4 = FUN_0007f66c(piVar3);
                      snprintf((char *)&local_2028,0x2000,"malloc %d sensor_t failed\n",iVar4);
                      FUN_0004948c(3,&local_2028,0);
                    }
LAB_00014858:
                    if (DAT_000be63c < 4) {
                      return 0xffffffff;
                    }
                    pcVar19 = "parse chain sensor failed\n";
                    goto LAB_0001486c;
                  }
                  if (DAT_000be63c < 4) {
                    return 0xffffffff;
                  }
                  local_2028._0_1_ = 'g';
                  local_2028._1_1_ = 'e';
                  local_2028._2_1_ = 't';
                  local_2028._3_1_ = ' ';
                  local_2024._0_1_ = 'i';
                  local_2024._1_1_ = '2';
                  local_2024._2_1_ = 'c';
                  local_2024._3_1_ = '_';
                  local_2020._0_1_ = 'a';
                  local_2020._1_1_ = 'd';
                  local_2020._2_1_ = 'd';
                  local_2020._3_1_ = 'r';
                  local_201c._0_1_ = ' ';
                  local_201c._1_1_ = 'f';
                  local_201c._2_1_ = 'a';
                  local_201c._3_1_ = 'i';
                  local_2018._0_1_ = 'l';
                  local_2018._1_1_ = 'e';
                  local_2018._2_1_ = 'd';
                  local_2018._3_1_ = '\n';
                  local_2014 = local_2014 & 0xffffff00;
                  FUN_0004948c(3,&local_2028,0);
                }
              }
              if (DAT_000be63c < 4) {
                return 0xffffffff;
              }
              pcVar19 = "parse chain eeprom failed\n";
              goto LAB_0001486c;
            }
            if (DAT_000be63c < 4) {
              return 0xffffffff;
            }
            iVar4 = FUN_0007f66c(piVar3);
            snprintf((char *)&local_2028,0x2000,"malloc %d sensor_t failed\n",iVar4);
            FUN_0004948c(3,&local_2028,0);
          }
        }
      }
    }
LAB_00013f50:
    if (3 < DAT_000be63c) {
      local_2028._0_1_ = 'p';
      local_2028._1_1_ = 'a';
      local_2028._2_1_ = 'r';
      local_2028._3_1_ = 's';
      local_2024._0_1_ = 'e';
      local_2024._1_1_ = ' ';
      local_2024._2_1_ = 'c';
      local_2024._3_1_ = 'h';
      local_2020._0_1_ = 'a';
      local_2020._1_1_ = 'i';
      local_2020._2_1_ = 'n';
      local_2020._3_1_ = ' ';
      local_201c._0_1_ = 'p';
      local_201c._1_1_ = 'i';
      local_201c._2_1_ = 'c';
      local_201c._3_1_ = ' ';
      local_2018._0_1_ = 'f';
      local_2018._1_1_ = 'a';
      local_2018._2_1_ = 'i';
      local_2018._3_1_ = 'l';
      local_2014._0_1_ = 'e';
      local_2014._1_1_ = 'd';
      local_2014._2_1_ = '\n';
      local_2014._3_1_ = '\0';
      FUN_0004948c(3,&local_2028,0);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

