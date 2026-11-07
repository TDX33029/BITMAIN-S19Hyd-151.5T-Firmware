// FUN_00ffdcf8 @ 00ffdcf8 size=4196 calls_out=5 calls_in=1
// strings: 

void FUN_00ffdcf8(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined8 uVar17;
  int *local_120;
  int *local_11c;
  int *local_118;
  int *local_114;
  int iStack_110;
  int *local_10c;
  int *local_108;
  undefined1 local_104;
  undefined3 uStack_103;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [12];
  
  if (*param_2 == 3) {
    uVar4 = FUN_011d891c(param_2[1],param_2[2],param_3);
    *param_1 = 3;
    param_1[1] = uVar4;
    param_1[2] = &DAT_01c1c408;
    return;
  }
  piVar16 = (int *)*param_3;
  piVar6 = piVar16 + 0x26;
  do {
    bVar3 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar3);
  *piVar6 = *piVar6 + 1;
  do {
    iVar5 = *piVar16;
    bVar3 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar3);
  *piVar16 = iVar5 + 1;
  if (-1 < iVar5) {
    piVar6 = (int *)param_3[1];
    do {
      iVar5 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar5 + 1;
    if (-1 < iVar5) {
      piVar7 = (int *)param_3[2];
      piVar11 = piVar7 + 0x26;
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar3);
      *piVar11 = *piVar11 + 1;
      do {
        iVar5 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar5 + 1;
      if (-1 < iVar5) {
        piVar11 = (int *)param_3[3];
        iVar5 = param_3[4];
        do {
          iVar8 = *piVar11;
          bVar3 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar3);
        *piVar11 = iVar8 + 1;
        if (-1 < iVar8) {
          piVar13 = piVar11 + 0x29;
          do {
            bVar3 = (bool)hasExclusiveAccess(piVar13);
          } while (!bVar3);
          *piVar13 = *piVar13 + 1;
          piVar13 = (int *)param_3[5];
          do {
            iVar8 = *piVar13;
            bVar3 = (bool)hasExclusiveAccess(piVar13);
          } while (!bVar3);
          *piVar13 = iVar8 + 1;
          if (-1 < iVar8) {
            piVar12 = (int *)param_3[6];
            piVar9 = piVar12 + 0x26;
            do {
              bVar3 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar3);
            *piVar9 = *piVar9 + 1;
            do {
              iVar8 = *piVar12;
              bVar3 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar3);
            *piVar12 = iVar8 + 1;
            if (-1 < iVar8) {
              iVar8 = param_3[7];
              _local_104 = CONCAT31(uStack_103,(char)iVar8);
              local_120 = piVar16;
              local_11c = piVar6;
              local_118 = piVar7;
              local_114 = piVar11;
              iStack_110 = iVar5;
              local_10c = piVar13;
              local_108 = piVar12;
              FUN_00fff008(local_b0,param_2,&local_120);
              piVar16 = (int *)*param_3;
              piVar6 = piVar16 + 0x26;
              do {
                bVar3 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar3);
              *piVar6 = *piVar6 + 1;
              do {
                iVar5 = *piVar16;
                bVar3 = (bool)hasExclusiveAccess(piVar16);
              } while (!bVar3);
              *piVar16 = iVar5 + 1;
              if (-1 < iVar5) {
                piVar6 = (int *)param_3[1];
                do {
                  iVar5 = *piVar6;
                  bVar3 = (bool)hasExclusiveAccess(piVar6);
                } while (!bVar3);
                *piVar6 = iVar5 + 1;
                if (-1 < iVar5) {
                  piVar7 = (int *)param_3[2];
                  piVar11 = piVar7 + 0x26;
                  do {
                    bVar3 = (bool)hasExclusiveAccess(piVar11);
                  } while (!bVar3);
                  *piVar11 = *piVar11 + 1;
                  do {
                    iVar5 = *piVar7;
                    bVar3 = (bool)hasExclusiveAccess(piVar7);
                  } while (!bVar3);
                  *piVar7 = iVar5 + 1;
                  if (-1 < iVar5) {
                    piVar11 = (int *)param_3[3];
                    iVar5 = param_3[4];
                    do {
                      iVar14 = *piVar11;
                      bVar3 = (bool)hasExclusiveAccess(piVar11);
                    } while (!bVar3);
                    *piVar11 = iVar14 + 1;
                    if (-1 < iVar14) {
                      piVar13 = piVar11 + 0x29;
                      do {
                        bVar3 = (bool)hasExclusiveAccess(piVar13);
                      } while (!bVar3);
                      *piVar13 = *piVar13 + 1;
                      piVar13 = (int *)param_3[5];
                      do {
                        iVar14 = *piVar13;
                        bVar3 = (bool)hasExclusiveAccess(piVar13);
                      } while (!bVar3);
                      *piVar13 = iVar14 + 1;
                      if (-1 < iVar14) {
                        piVar12 = (int *)param_3[6];
                        piVar9 = piVar12 + 0x26;
                        do {
                          bVar3 = (bool)hasExclusiveAccess(piVar9);
                        } while (!bVar3);
                        *piVar9 = *piVar9 + 1;
                        do {
                          iVar14 = *piVar12;
                          bVar3 = (bool)hasExclusiveAccess(piVar12);
                        } while (!bVar3);
                        *piVar12 = iVar14 + 1;
                        if (-1 < iVar14) {
                          _local_104 = CONCAT31(uStack_103,(char)iVar8);
                          local_120 = piVar16;
                          local_11c = piVar6;
                          local_118 = piVar7;
                          local_114 = piVar11;
                          iStack_110 = iVar5;
                          local_10c = piVar13;
                          local_108 = piVar12;
                          FUN_00fff008(local_a0,param_2 + 3,&local_120);
                          piVar16 = (int *)*param_3;
                          piVar6 = piVar16 + 0x26;
                          do {
                            bVar3 = (bool)hasExclusiveAccess(piVar6);
                          } while (!bVar3);
                          *piVar6 = *piVar6 + 1;
                          do {
                            iVar5 = *piVar16;
                            bVar3 = (bool)hasExclusiveAccess(piVar16);
                          } while (!bVar3);
                          *piVar16 = iVar5 + 1;
                          if (-1 < iVar5) {
                            piVar6 = (int *)param_3[1];
                            do {
                              iVar5 = *piVar6;
                              bVar3 = (bool)hasExclusiveAccess(piVar6);
                            } while (!bVar3);
                            *piVar6 = iVar5 + 1;
                            if (-1 < iVar5) {
                              piVar7 = (int *)param_3[2];
                              piVar11 = piVar7 + 0x26;
                              do {
                                bVar3 = (bool)hasExclusiveAccess(piVar11);
                              } while (!bVar3);
                              *piVar11 = *piVar11 + 1;
                              do {
                                iVar5 = *piVar7;
                                bVar3 = (bool)hasExclusiveAccess(piVar7);
                              } while (!bVar3);
                              *piVar7 = iVar5 + 1;
                              if (-1 < iVar5) {
                                piVar11 = (int *)param_3[3];
                                iVar5 = param_3[4];
                                do {
                                  iVar8 = *piVar11;
                                  bVar3 = (bool)hasExclusiveAccess(piVar11);
                                } while (!bVar3);
                                *piVar11 = iVar8 + 1;
                                if (-1 < iVar8) {
                                  piVar13 = piVar11 + 0x29;
                                  do {
                                    bVar3 = (bool)hasExclusiveAccess(piVar13);
                                  } while (!bVar3);
                                  *piVar13 = *piVar13 + 1;
                                  piVar13 = (int *)param_3[5];
                                  do {
                                    iVar8 = *piVar13;
                                    bVar3 = (bool)hasExclusiveAccess(piVar13);
                                  } while (!bVar3);
                                  *piVar13 = iVar8 + 1;
                                  if (-1 < iVar8) {
                                    piVar12 = (int *)param_3[6];
                                    piVar9 = piVar12 + 0x26;
                                    do {
                                      bVar3 = (bool)hasExclusiveAccess(piVar9);
                                    } while (!bVar3);
                                    *piVar9 = *piVar9 + 1;
                                    do {
                                      iVar8 = *piVar12;
                                      bVar3 = (bool)hasExclusiveAccess(piVar12);
                                    } while (!bVar3);
                                    *piVar12 = iVar8 + 1;
                                    if (-1 < iVar8) {
                                      iVar8 = param_3[7];
                                      _local_104 = CONCAT31(uStack_103,(char)iVar8);
                                      local_120 = piVar16;
                                      local_11c = piVar6;
                                      local_118 = piVar7;
                                      local_114 = piVar11;
                                      iStack_110 = iVar5;
                                      local_10c = piVar13;
                                      local_108 = piVar12;
                                      FUN_00fff008(local_90,param_2 + 6,&local_120);
                                      piVar16 = (int *)*param_3;
                                      piVar6 = piVar16 + 0x26;
                                      do {
                                        bVar3 = (bool)hasExclusiveAccess(piVar6);
                                      } while (!bVar3);
                                      *piVar6 = *piVar6 + 1;
                                      do {
                                        iVar5 = *piVar16;
                                        bVar3 = (bool)hasExclusiveAccess(piVar16);
                                      } while (!bVar3);
                                      *piVar16 = iVar5 + 1;
                                      if (-1 < iVar5) {
                                        piVar6 = (int *)param_3[1];
                                        do {
                                          iVar5 = *piVar6;
                                          bVar3 = (bool)hasExclusiveAccess(piVar6);
                                        } while (!bVar3);
                                        *piVar6 = iVar5 + 1;
                                        if (-1 < iVar5) {
                                          piVar7 = (int *)param_3[2];
                                          piVar11 = piVar7 + 0x26;
                                          do {
                                            bVar3 = (bool)hasExclusiveAccess(piVar11);
                                          } while (!bVar3);
                                          *piVar11 = *piVar11 + 1;
                                          do {
                                            iVar5 = *piVar7;
                                            bVar3 = (bool)hasExclusiveAccess(piVar7);
                                          } while (!bVar3);
                                          *piVar7 = iVar5 + 1;
                                          if (-1 < iVar5) {
                                            piVar11 = (int *)param_3[3];
                                            iVar5 = param_3[4];
                                            do {
                                              iVar14 = *piVar11;
                                              bVar3 = (bool)hasExclusiveAccess(piVar11);
                                            } while (!bVar3);
                                            *piVar11 = iVar14 + 1;
                                            if (-1 < iVar14) {
                                              piVar13 = piVar11 + 0x29;
                                              do {
                                                bVar3 = (bool)hasExclusiveAccess(piVar13);
                                              } while (!bVar3);
                                              *piVar13 = *piVar13 + 1;
                                              piVar13 = (int *)param_3[5];
                                              do {
                                                iVar14 = *piVar13;
                                                bVar3 = (bool)hasExclusiveAccess(piVar13);
                                              } while (!bVar3);
                                              *piVar13 = iVar14 + 1;
                                              if (-1 < iVar14) {
                                                piVar12 = (int *)param_3[6];
                                                piVar9 = piVar12 + 0x26;
                                                do {
                                                  bVar3 = (bool)hasExclusiveAccess(piVar9);
                                                } while (!bVar3);
                                                *piVar9 = *piVar9 + 1;
                                                do {
                                                  iVar14 = *piVar12;
                                                  bVar3 = (bool)hasExclusiveAccess(piVar12);
                                                } while (!bVar3);
                                                *piVar12 = iVar14 + 1;
                                                if (-1 < iVar14) {
                                                  _local_104 = CONCAT31(uStack_103,(char)iVar8);
                                                  local_120 = piVar16;
                                                  local_11c = piVar6;
                                                  local_118 = piVar7;
                                                  local_114 = piVar11;
                                                  iStack_110 = iVar5;
                                                  local_10c = piVar13;
                                                  local_108 = piVar12;
                                                  FUN_00fff008(local_80,param_2 + 9,&local_120);
                                                  piVar16 = (int *)*param_3;
                                                  piVar6 = piVar16 + 0x26;
                                                  do {
                                                    bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                  } while (!bVar3);
                                                  *piVar6 = *piVar6 + 1;
                                                  do {
                                                    iVar5 = *piVar16;
                                                    bVar3 = (bool)hasExclusiveAccess(piVar16);
                                                  } while (!bVar3);
                                                  *piVar16 = iVar5 + 1;
                                                  if (-1 < iVar5) {
                                                    piVar6 = (int *)param_3[1];
                                                    do {
                                                      iVar5 = *piVar6;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                    } while (!bVar3);
                                                    *piVar6 = iVar5 + 1;
                                                    if (-1 < iVar5) {
                                                      piVar7 = (int *)param_3[2];
                                                      piVar11 = piVar7 + 0x26;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                      } while (!bVar3);
                                                      *piVar11 = *piVar11 + 1;
                                                      do {
                                                        iVar5 = *piVar7;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar7);
                                                      } while (!bVar3);
                                                      *piVar7 = iVar5 + 1;
                                                      if (-1 < iVar5) {
                                                        piVar11 = (int *)param_3[3];
                                                        iVar5 = param_3[4];
                                                        do {
                                                          iVar8 = *piVar11;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                        } while (!bVar3);
                                                        *piVar11 = iVar8 + 1;
                                                        if (-1 < iVar8) {
                                                          piVar13 = piVar11 + 0x29;
                                                          do {
                                                            bVar3 = (bool)hasExclusiveAccess(piVar13
                                                  );
                                                  } while (!bVar3);
                                                  *piVar13 = *piVar13 + 1;
                                                  piVar13 = (int *)param_3[5];
                                                  do {
                                                    iVar8 = *piVar13;
                                                    bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                  } while (!bVar3);
                                                  *piVar13 = iVar8 + 1;
                                                  if (-1 < iVar8) {
                                                    piVar12 = (int *)param_3[6];
                                                    piVar9 = piVar12 + 0x26;
                                                    do {
                                                      bVar3 = (bool)hasExclusiveAccess(piVar9);
                                                    } while (!bVar3);
                                                    *piVar9 = *piVar9 + 1;
                                                    do {
                                                      iVar8 = *piVar12;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar12);
                                                    } while (!bVar3);
                                                    *piVar12 = iVar8 + 1;
                                                    if (-1 < iVar8) {
                                                      iVar8 = param_3[7];
                                                      _local_104 = CONCAT31(uStack_103,(char)iVar8);
                                                      local_120 = piVar16;
                                                      local_11c = piVar6;
                                                      local_118 = piVar7;
                                                      local_114 = piVar11;
                                                      iStack_110 = iVar5;
                                                      local_10c = piVar13;
                                                      local_108 = piVar12;
                                                      FUN_00fff008(local_70,param_2 + 0xc,&local_120
                                                                  );
                                                      piVar16 = (int *)*param_3;
                                                      piVar6 = piVar16 + 0x26;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                      } while (!bVar3);
                                                      *piVar6 = *piVar6 + 1;
                                                      do {
                                                        iVar5 = *piVar16;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar16);
                                                      } while (!bVar3);
                                                      *piVar16 = iVar5 + 1;
                                                      if (-1 < iVar5) {
                                                        piVar6 = (int *)param_3[1];
                                                        do {
                                                          iVar5 = *piVar6;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                        } while (!bVar3);
                                                        *piVar6 = iVar5 + 1;
                                                        if (-1 < iVar5) {
                                                          piVar7 = (int *)param_3[2];
                                                          piVar11 = piVar7 + 0x26;
                                                          do {
                                                            bVar3 = (bool)hasExclusiveAccess(piVar11
                                                  );
                                                  } while (!bVar3);
                                                  *piVar11 = *piVar11 + 1;
                                                  do {
                                                    iVar5 = *piVar7;
                                                    bVar3 = (bool)hasExclusiveAccess(piVar7);
                                                  } while (!bVar3);
                                                  *piVar7 = iVar5 + 1;
                                                  if (-1 < iVar5) {
                                                    piVar11 = (int *)param_3[3];
                                                    iVar5 = param_3[4];
                                                    do {
                                                      iVar14 = *piVar11;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                    } while (!bVar3);
                                                    *piVar11 = iVar14 + 1;
                                                    if (-1 < iVar14) {
                                                      piVar13 = piVar11 + 0x29;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                      } while (!bVar3);
                                                      *piVar13 = *piVar13 + 1;
                                                      piVar13 = (int *)param_3[5];
                                                      do {
                                                        iVar14 = *piVar13;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                      } while (!bVar3);
                                                      *piVar13 = iVar14 + 1;
                                                      if (-1 < iVar14) {
                                                        piVar12 = (int *)param_3[6];
                                                        piVar9 = piVar12 + 0x26;
                                                        do {
                                                          bVar3 = (bool)hasExclusiveAccess(piVar9);
                                                        } while (!bVar3);
                                                        *piVar9 = *piVar9 + 1;
                                                        do {
                                                          iVar14 = *piVar12;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar12);
                                                        } while (!bVar3);
                                                        *piVar12 = iVar14 + 1;
                                                        if (-1 < iVar14) {
                                                          _local_104 = CONCAT31(uStack_103,
                                                                                (char)iVar8);
                                                          local_120 = piVar16;
                                                          local_11c = piVar6;
                                                          local_118 = piVar7;
                                                          local_114 = piVar11;
                                                          iStack_110 = iVar5;
                                                          local_10c = piVar13;
                                                          local_108 = piVar12;
                                                          FUN_00fff008(local_60,param_2 + 0xf,
                                                                       &local_120);
                                                          piVar16 = (int *)*param_3;
                                                          piVar6 = piVar16 + 0x26;
                                                          do {
                                                            bVar3 = (bool)hasExclusiveAccess(piVar6)
                                                            ;
                                                          } while (!bVar3);
                                                          *piVar6 = *piVar6 + 1;
                                                          do {
                                                            iVar5 = *piVar16;
                                                            bVar3 = (bool)hasExclusiveAccess(piVar16
                                                  );
                                                  } while (!bVar3);
                                                  *piVar16 = iVar5 + 1;
                                                  if (-1 < iVar5) {
                                                    piVar6 = (int *)param_3[1];
                                                    do {
                                                      iVar5 = *piVar6;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                    } while (!bVar3);
                                                    *piVar6 = iVar5 + 1;
                                                    if (-1 < iVar5) {
                                                      piVar7 = (int *)param_3[2];
                                                      piVar11 = piVar7 + 0x26;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                      } while (!bVar3);
                                                      *piVar11 = *piVar11 + 1;
                                                      do {
                                                        iVar5 = *piVar7;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar7);
                                                      } while (!bVar3);
                                                      *piVar7 = iVar5 + 1;
                                                      if (-1 < iVar5) {
                                                        piVar11 = (int *)param_3[3];
                                                        iVar5 = param_3[4];
                                                        do {
                                                          iVar8 = *piVar11;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                        } while (!bVar3);
                                                        *piVar11 = iVar8 + 1;
                                                        if (-1 < iVar8) {
                                                          piVar13 = piVar11 + 0x29;
                                                          do {
                                                            bVar3 = (bool)hasExclusiveAccess(piVar13
                                                  );
                                                  } while (!bVar3);
                                                  *piVar13 = *piVar13 + 1;
                                                  piVar13 = (int *)param_3[5];
                                                  do {
                                                    iVar8 = *piVar13;
                                                    bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                  } while (!bVar3);
                                                  *piVar13 = iVar8 + 1;
                                                  if (-1 < iVar8) {
                                                    piVar12 = (int *)param_3[6];
                                                    piVar9 = piVar12 + 0x26;
                                                    do {
                                                      bVar3 = (bool)hasExclusiveAccess(piVar9);
                                                    } while (!bVar3);
                                                    *piVar9 = *piVar9 + 1;
                                                    do {
                                                      iVar8 = *piVar12;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar12);
                                                    } while (!bVar3);
                                                    *piVar12 = iVar8 + 1;
                                                    if (-1 < iVar8) {
                                                      iVar8 = param_3[7];
                                                      _local_104 = CONCAT31(uStack_103,(char)iVar8);
                                                      local_120 = piVar16;
                                                      local_11c = piVar6;
                                                      local_118 = piVar7;
                                                      local_114 = piVar11;
                                                      iStack_110 = iVar5;
                                                      local_10c = piVar13;
                                                      local_108 = piVar12;
                                                      FUN_00fff008(local_50,param_2 + 0x12,
                                                                   &local_120);
                                                      piVar16 = (int *)*param_3;
                                                      piVar6 = piVar16 + 0x26;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                      } while (!bVar3);
                                                      *piVar6 = *piVar6 + 1;
                                                      do {
                                                        iVar5 = *piVar16;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar16);
                                                      } while (!bVar3);
                                                      *piVar16 = iVar5 + 1;
                                                      if (-1 < iVar5) {
                                                        piVar6 = (int *)param_3[1];
                                                        do {
                                                          iVar5 = *piVar6;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                        } while (!bVar3);
                                                        *piVar6 = iVar5 + 1;
                                                        if (-1 < iVar5) {
                                                          piVar7 = (int *)param_3[2];
                                                          piVar11 = piVar7 + 0x26;
                                                          do {
                                                            bVar3 = (bool)hasExclusiveAccess(piVar11
                                                  );
                                                  } while (!bVar3);
                                                  *piVar11 = *piVar11 + 1;
                                                  do {
                                                    iVar5 = *piVar7;
                                                    bVar3 = (bool)hasExclusiveAccess(piVar7);
                                                  } while (!bVar3);
                                                  *piVar7 = iVar5 + 1;
                                                  if (-1 < iVar5) {
                                                    piVar11 = (int *)param_3[3];
                                                    iVar5 = param_3[4];
                                                    do {
                                                      iVar14 = *piVar11;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                    } while (!bVar3);
                                                    *piVar11 = iVar14 + 1;
                                                    if (-1 < iVar14) {
                                                      piVar13 = piVar11 + 0x29;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                      } while (!bVar3);
                                                      *piVar13 = *piVar13 + 1;
                                                      piVar13 = (int *)param_3[5];
                                                      do {
                                                        iVar14 = *piVar13;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                      } while (!bVar3);
                                                      *piVar13 = iVar14 + 1;
                                                      if (-1 < iVar14) {
                                                        piVar12 = (int *)param_3[6];
                                                        piVar9 = piVar12 + 0x26;
                                                        do {
                                                          bVar3 = (bool)hasExclusiveAccess(piVar9);
                                                        } while (!bVar3);
                                                        *piVar9 = *piVar9 + 1;
                                                        do {
                                                          iVar14 = *piVar12;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar12);
                                                        } while (!bVar3);
                                                        *piVar12 = iVar14 + 1;
                                                        if (-1 < iVar14) {
                                                          _local_104 = CONCAT31(uStack_103,
                                                                                (char)iVar8);
                                                          local_120 = piVar16;
                                                          local_11c = piVar6;
                                                          local_118 = piVar7;
                                                          local_114 = piVar11;
                                                          iStack_110 = iVar5;
                                                          local_10c = piVar13;
                                                          local_108 = piVar12;
                                                          FUN_00fff008(local_40,param_2 + 0x15,
                                                                       &local_120);
                                                          piVar16 = (int *)*param_3;
                                                          piVar6 = piVar16 + 0x26;
                                                          do {
                                                            bVar3 = (bool)hasExclusiveAccess(piVar6)
                                                            ;
                                                          } while (!bVar3);
                                                          *piVar6 = *piVar6 + 1;
                                                          do {
                                                            iVar5 = *piVar16;
                                                            bVar3 = (bool)hasExclusiveAccess(piVar16
                                                  );
                                                  } while (!bVar3);
                                                  *piVar16 = iVar5 + 1;
                                                  if (-1 < iVar5) {
                                                    piVar6 = (int *)param_3[1];
                                                    do {
                                                      iVar5 = *piVar6;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                    } while (!bVar3);
                                                    *piVar6 = iVar5 + 1;
                                                    if (-1 < iVar5) {
                                                      piVar7 = (int *)param_3[2];
                                                      piVar11 = piVar7 + 0x26;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                      } while (!bVar3);
                                                      *piVar11 = *piVar11 + 1;
                                                      do {
                                                        iVar5 = *piVar7;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar7);
                                                      } while (!bVar3);
                                                      *piVar7 = iVar5 + 1;
                                                      if (-1 < iVar5) {
                                                        piVar11 = (int *)param_3[3];
                                                        iVar5 = param_3[4];
                                                        do {
                                                          iVar8 = *piVar11;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                        } while (!bVar3);
                                                        *piVar11 = iVar8 + 1;
                                                        if (-1 < iVar8) {
                                                          piVar13 = piVar11 + 0x29;
                                                          do {
                                                            bVar3 = (bool)hasExclusiveAccess(piVar13
                                                  );
                                                  } while (!bVar3);
                                                  *piVar13 = *piVar13 + 1;
                                                  piVar13 = (int *)param_3[5];
                                                  do {
                                                    iVar8 = *piVar13;
                                                    bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                  } while (!bVar3);
                                                  *piVar13 = iVar8 + 1;
                                                  if (-1 < iVar8) {
                                                    piVar12 = (int *)param_3[6];
                                                    piVar9 = piVar12 + 0x26;
                                                    do {
                                                      bVar3 = (bool)hasExclusiveAccess(piVar9);
                                                    } while (!bVar3);
                                                    *piVar9 = *piVar9 + 1;
                                                    do {
                                                      iVar8 = *piVar12;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar12);
                                                    } while (!bVar3);
                                                    *piVar12 = iVar8 + 1;
                                                    if (-1 < iVar8) {
                                                      uVar2 = (undefined1)param_3[7];
                                                      _local_104 = CONCAT31(uStack_103,uVar2);
                                                      local_120 = piVar16;
                                                      local_11c = piVar6;
                                                      local_118 = piVar7;
                                                      local_114 = piVar11;
                                                      iStack_110 = iVar5;
                                                      local_10c = piVar13;
                                                      local_108 = piVar12;
                                                      FUN_00fff008(local_30,param_2 + 0x18,
                                                                   &local_120);
                                                      iVar8 = param_2[0x1b];
                                                      iVar5 = param_2[0x1c];
                                                      iVar14 = param_2[0x1d];
                                                      if (iVar8 == 0) {
                                                        piVar16 = (int *)*param_3;
                                                        piVar6 = piVar16 + 0x26;
                                                        do {
                                                          bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                        } while (!bVar3);
                                                        *piVar6 = *piVar6 + 1;
                                                        do {
                                                          iVar10 = *piVar16;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar16);
                                                        } while (!bVar3);
                                                        *piVar16 = iVar10 + 1;
                                                        if (-1 < iVar10) {
                                                          piVar6 = (int *)param_3[1];
                                                          do {
                                                            iVar10 = *piVar6;
                                                            bVar3 = (bool)hasExclusiveAccess(piVar6)
                                                            ;
                                                          } while (!bVar3);
                                                          *piVar6 = iVar10 + 1;
                                                          if (-1 < iVar10) {
                                                            piVar7 = (int *)param_3[2];
                                                            piVar11 = piVar7 + 0x26;
                                                            do {
                                                              bVar3 = (bool)hasExclusiveAccess(
                                                  piVar11);
                                                  } while (!bVar3);
                                                  *piVar11 = *piVar11 + 1;
                                                  do {
                                                    iVar10 = *piVar7;
                                                    bVar3 = (bool)hasExclusiveAccess(piVar7);
                                                  } while (!bVar3);
                                                  *piVar7 = iVar10 + 1;
                                                  if (-1 < iVar10) {
                                                    piVar11 = (int *)param_3[3];
                                                    iVar10 = param_3[4];
                                                    do {
                                                      iVar15 = *piVar11;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                    } while (!bVar3);
                                                    *piVar11 = iVar15 + 1;
                                                    if (-1 < iVar15) {
                                                      piVar13 = piVar11 + 0x29;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                      } while (!bVar3);
                                                      *piVar13 = *piVar13 + 1;
                                                      piVar13 = (int *)param_3[5];
                                                      do {
                                                        iVar15 = *piVar13;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                      } while (!bVar3);
                                                      *piVar13 = iVar15 + 1;
                                                      if (-1 < iVar15) {
                                                        piVar12 = (int *)param_3[6];
                                                        piVar9 = piVar12 + 0x26;
                                                        do {
                                                          bVar3 = (bool)hasExclusiveAccess(piVar9);
                                                        } while (!bVar3);
                                                        *piVar9 = *piVar9 + 1;
                                                        do {
                                                          iVar15 = *piVar12;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar12);
                                                        } while (!bVar3);
                                                        *piVar12 = iVar15 + 1;
                                                        if (-1 < iVar15) {
                                                          _local_104 = CONCAT31(uStack_103,uVar2);
                                                          local_120 = piVar16;
                                                          local_11c = piVar6;
                                                          local_118 = piVar7;
                                                          local_114 = piVar11;
                                                          iStack_110 = iVar10;
                                                          local_10c = piVar13;
                                                          local_108 = piVar12;
                                                          uVar17 = FUN_011d891c(iVar5,iVar14,
                                                                                &local_120);
                                                          FUN_00ffdc34(param_3);
                                                          goto LAB_00ffec90;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    if (iVar8 != 1) {
                                                      uVar17 = FUN_011d9290(iVar5,iVar14,param_3);
LAB_00ffec90:
                                                      iVar5 = param_2[0x1f];
                                                      iVar14 = param_2[0x20];
                                                      iVar10 = param_2[0x21];
                                                      iVar15 = param_2[0x22];
                                                      param_1[0x1e] = param_2[0x1e];
                                                      param_1[0x1f] = iVar5;
                                                      param_1[0x20] = iVar14;
                                                      param_1[0x21] = iVar10;
                                                      param_1[0x22] = iVar15;
                                                      FUN_01bed4e2(param_1,&local_120,0x6c);
                                                      param_1[0x1b] = iVar8;
                                                      *(undefined8 *)(param_1 + 0x1c) = uVar17;
                                                      return;
                                                    }
                                                    piVar6 = (int *)*param_3;
                                                    piVar16 = piVar6 + 0x26;
                                                    do {
                                                      bVar3 = (bool)hasExclusiveAccess(piVar16);
                                                    } while (!bVar3);
                                                    *piVar16 = *piVar16 + 1;
                                                    do {
                                                      iVar10 = *piVar6;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar6);
                                                    } while (!bVar3);
                                                    *piVar6 = iVar10 + 1;
                                                    if (-1 < iVar10) {
                                                      piVar16 = (int *)param_3[1];
                                                      do {
                                                        iVar10 = *piVar16;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar16);
                                                      } while (!bVar3);
                                                      *piVar16 = iVar10 + 1;
                                                      if (-1 < iVar10) {
                                                        piVar7 = (int *)param_3[2];
                                                        piVar11 = piVar7 + 0x26;
                                                        do {
                                                          bVar3 = (bool)hasExclusiveAccess(piVar11);
                                                        } while (!bVar3);
                                                        *piVar11 = *piVar11 + 1;
                                                        do {
                                                          iVar10 = *piVar7;
                                                          bVar3 = (bool)hasExclusiveAccess(piVar7);
                                                        } while (!bVar3);
                                                        *piVar7 = iVar10 + 1;
                                                        if (-1 < iVar10) {
                                                          piVar11 = (int *)param_3[3];
                                                          iVar10 = param_3[4];
                                                          do {
                                                            iVar15 = *piVar11;
                                                            bVar3 = (bool)hasExclusiveAccess(piVar11
                                                  );
                                                  } while (!bVar3);
                                                  *piVar11 = iVar15 + 1;
                                                  if (-1 < iVar15) {
                                                    piVar13 = piVar11 + 0x29;
                                                    do {
                                                      bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                    } while (!bVar3);
                                                    *piVar13 = *piVar13 + 1;
                                                    piVar13 = (int *)param_3[5];
                                                    do {
                                                      iVar15 = *piVar13;
                                                      bVar3 = (bool)hasExclusiveAccess(piVar13);
                                                    } while (!bVar3);
                                                    *piVar13 = iVar15 + 1;
                                                    if (-1 < iVar15) {
                                                      piVar12 = (int *)param_3[6];
                                                      piVar9 = piVar12 + 0x26;
                                                      do {
                                                        bVar3 = (bool)hasExclusiveAccess(piVar9);
                                                      } while (!bVar3);
                                                      *piVar9 = *piVar9 + 1;
                                                      do {
                                                        iVar15 = *piVar12;
                                                        bVar3 = (bool)hasExclusiveAccess(piVar12);
                                                      } while (!bVar3);
                                                      *piVar12 = iVar15 + 1;
                                                      if (-1 < iVar15) {
                                                        _local_104 = CONCAT31(uStack_103,uVar2);
                                                        local_120 = piVar6;
                                                        local_11c = piVar16;
                                                        local_118 = piVar7;
                                                        local_114 = piVar11;
                                                        iStack_110 = iVar10;
                                                        local_10c = piVar13;
                                                        local_108 = piVar12;
                                                        uVar17 = FUN_011d891c(iVar5,iVar14,
                                                                              &local_120);
                                                        FUN_00ffdc34(param_3);
                                                        goto LAB_00ffec90;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xffed5c);
  (*pcVar1)();
}

