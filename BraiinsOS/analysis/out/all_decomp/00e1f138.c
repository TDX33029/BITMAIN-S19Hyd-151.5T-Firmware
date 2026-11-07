// FUN_00e1f138 @ 00e1f138 size=3484 calls_out=16 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

int FUN_00e1f138(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar19 = thunk_FUN_016de0ee(0,0x40);
  iVar17 = (int)uVar19 + (int)((ulonglong)uVar19 >> 0x20);
  puVar15 = *(undefined1 **)(param_1 + 8);
  uVar12 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar17 + 0x38) == '\x01') {
LAB_00e1f1a0:
    uVar16 = *(undefined4 *)(iVar17 + 0x18);
    uVar2 = *(undefined4 *)(iVar17 + 0x1c);
    *(undefined1 **)(iVar17 + 0x18) = puVar15;
    *(undefined4 *)(iVar17 + 0x1c) = uVar12;
  }
  else {
    uVar16 = 0;
    uVar2 = 0;
    if (*(char *)(iVar17 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar17,FUN_01655ec4);
      *(undefined1 *)(iVar17 + 0x38) = 1;
      goto LAB_00e1f1a0;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x4e)) {
  case 0:
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0xdd9f;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = 0x80000000;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x48) + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01879088);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01879088);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x5c)) {
    case 0:
      iVar3 = *(int *)(param_1 + 0x50);
      goto LAB_00e1f304;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879018);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879018);
    }
    goto switchD_00e1f2b0_caseD_3;
  case 5:
    goto switchD_00e1f1c0_caseD_5;
  case 6:
    uVar19 = *(undefined8 *)(param_1 + 0x50);
    goto LAB_00e1f43c;
  case 7:
    goto switchD_00e1f1c0_caseD_7;
  case 8:
    goto switchD_00e1f1c0_caseD_8;
  case 9:
    goto switchD_00e1f1c0_caseD_9;
  case 10:
    goto switchD_00e1f1c0_caseD_a;
  case 0xb:
    goto switchD_00e1f1c0_caseD_b;
  case 0xc:
    goto switchD_00e1f1c0_caseD_c;
  case 0xd:
    goto switchD_00e1f1c0_caseD_d;
  case 0xe:
    goto switchD_00e1f1c0_caseD_e;
  case 0xf:
    goto switchD_00e1f1c0_caseD_f;
  case 0x10:
    goto switchD_00e1f1c0_caseD_10;
  case 0x11:
    goto switchD_00e1f1c0_caseD_11;
  case 0x12:
    goto switchD_00e1f1c0_caseD_12;
  case 0x13:
    goto switchD_00e1f1c0_caseD_13;
  case 0x14:
    goto switchD_00e1f1c0_caseD_14;
  case 0x15:
    goto switchD_00e1f1c0_caseD_15;
  case 0x16:
    goto switchD_00e1f1c0_caseD_16;
  case 0x17:
    goto switchD_00e1f1c0_caseD_17;
  case 0x18:
    goto switchD_00e1f1c0_caseD_18;
  case 0x19:
    goto switchD_00e1f1c0_caseD_19;
  case 0x1a:
    goto switchD_00e1f1c0_caseD_1a;
  case 0x1b:
    goto switchD_00e1f1c0_caseD_1b;
  case 0x1c:
    goto switchD_00e1f1c0_caseD_1c;
  case 0x1d:
    goto switchD_00e1f1c0_caseD_1d;
  case 0x1e:
    goto switchD_00e1f1c0_caseD_1e;
  case 0x1f:
    goto switchD_00e1f1c0_caseD_1f;
  case 0x20:
    goto switchD_00e1f1c0_caseD_20;
  case 0x21:
    goto switchD_00e1f1c0_caseD_21;
  }
  iVar3 = FUN_00dec2f8(param_1 + 0x50);
  if (iVar3 == 0) {
    FUN_005c19d4(param_1 + 0x50);
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 8);
    *(undefined1 *)(param_1 + 0x5c) = 0;
    iVar3 = iVar3 + 8;
    *(int *)(param_1 + 0x50) = iVar3;
LAB_00e1f304:
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 4) + 8;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
switchD_00e1f2b0_caseD_3:
    iVar3 = FUN_00e442f8((int *)(param_1 + 0x54),param_2);
    if (iVar3 == 0) {
      iVar3 = 1;
      *(undefined1 *)(param_1 + 0x5c) = 3;
      uVar11 = 4;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x54);
      if (iVar8 != 0) {
        FUN_00e44660(iVar8,*(undefined4 *)(param_1 + 0x58),1);
      }
      iVar8 = *(int *)(iVar3 + 0x20);
      puVar13 = *(undefined **)(iVar3 + 0x24);
      *(undefined4 *)(iVar3 + 0x20) = 0;
      FUN_00e44900();
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(undefined1 *)(param_1 + 0x5c) = 1;
      bVar18 = iVar8 == 0;
      *(undefined4 *)(param_1 + 0x50) = 0x80000001;
      *(undefined4 *)(param_1 + 0x54) = 0xa45db87a;
      if (bVar18) {
        iVar8 = 1;
      }
      if (bVar18) {
        puVar13 = &DAT_01879028;
      }
      *(undefined1 *)(param_1 + 0x80) = 0;
      *(int *)(param_1 + 0x18) = iVar8;
      *(undefined **)(param_1 + 0x1c) = puVar13;
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_5:
      iVar3 = FUN_00dec2f8(param_1 + 0x50);
      if (iVar3 == 0) {
        FUN_005c19d4(param_1 + 0x50);
        iVar3 = *(int *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x4c) = 0;
        uVar12 = *(undefined4 *)(param_1 + 0x18);
        uVar19 = (**(code **)(iVar3 + 0xc))(uVar12);
        if (*(int *)(iVar3 + 4) != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
        *(undefined8 *)(param_1 + 0x50) = uVar19;
LAB_00e1f43c:
        puVar15 = (undefined1 *)uVar19;
        (**(code **)((int)((ulonglong)uVar19 >> 0x20) + 0xc))(&local_a0,puVar15,param_2);
        if (local_a0 == -0x80000000) {
          iVar3 = 1;
          uVar11 = 6;
        }
        else {
          uVar12 = *(undefined4 *)(param_1 + 0x50);
          puVar14 = *(undefined4 **)(param_1 + 0x54);
          *(int *)(param_1 + 0x24) = local_a0;
          *(undefined4 *)(param_1 + 0x28) = uStack_9c;
          *(undefined4 *)(param_1 + 0x2c) = uStack_98;
          pcVar5 = (code *)*puVar14;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar12);
          }
          if (puVar14[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          *(undefined4 *)(param_1 + 0x58) = 0x6513b924;
          *(undefined4 *)(param_1 + 0x5c) = 0x7385ba;
          *(undefined4 *)(param_1 + 0x50) = 0x80000012;
          *(undefined1 *)(param_1 + 0x80) = 0;
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_7:
          iVar3 = FUN_00dec2f8(param_1 + 0x50);
          if (iVar3 == 0) {
            FUN_005c19d4(param_1 + 0x50);
            *(undefined1 *)(param_1 + 0x80) = 0;
            *(undefined4 *)(param_1 + 0x50) = 0x8000000e;
            *(undefined4 *)(param_1 + 0x54) = 0x15e4a109;
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_8:
            iVar3 = FUN_00dec2f8(param_1 + 0x50);
            if (iVar3 == 0) {
              FUN_005c19d4(param_1 + 0x50);
              *(undefined1 *)(param_1 + 0x80) = 0;
              *(undefined4 *)(param_1 + 0x50) = 0x8000000f;
              *(undefined4 *)(param_1 + 0x54) = 0x98791839;
              *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_9:
              iVar3 = FUN_00dec2f8(param_1 + 0x50);
              if (iVar3 == 0) {
                FUN_005c19d4(param_1 + 0x50);
                *(undefined1 *)(param_1 + 0x80) = 0;
                *(undefined2 *)(param_1 + 0x54) = 0x7df2;
                *(undefined4 *)(param_1 + 0x50) = 0x8000000a;
                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_a:
                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                if (iVar3 == 0) {
                  FUN_005c19d4(param_1 + 0x50);
                  *(undefined1 *)(param_1 + 0x80) = 0;
                  *(undefined2 *)(param_1 + 0x54) = 0xf543;
                  *(undefined4 *)(param_1 + 0x50) = 0x80000000;
                  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_b:
                  iVar3 = FUN_00dec2f8(param_1 + 0x50);
                  if (iVar3 == 0) {
                    FUN_005c19d4(param_1 + 0x50);
                    *(undefined1 *)(param_1 + 0x80) = 0;
                    *(undefined2 *)(param_1 + 0x54) = 0x5411;
                    *(undefined4 *)(param_1 + 0x50) = 0x8000000a;
                    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_c:
                    iVar3 = FUN_00dec2f8(param_1 + 0x50);
                    if (iVar3 == 0) {
                      FUN_005c19d4(param_1 + 0x50);
                      *(undefined1 *)(param_1 + 0x80) = 0;
                      *(undefined4 *)(param_1 + 0x50) = 0x80000001;
                      *(undefined4 *)(param_1 + 0x54) = 0x7ed69b4a;
                      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_d:
                      iVar3 = FUN_00dec2f8(param_1 + 0x50);
                      if (iVar3 == 0) {
                        FUN_005c19d4(param_1 + 0x50);
                        *(undefined1 *)(param_1 + 0x80) = 0;
                        *(undefined4 *)(param_1 + 0x50) = 0x8000000e;
                        *(undefined4 *)(param_1 + 0x54) = 0x43388dae;
                        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_e:
                        iVar3 = FUN_00dec2f8(param_1 + 0x50);
                        if (iVar3 == 0) {
                          FUN_005c19d4(param_1 + 0x50);
                          *(undefined1 *)(param_1 + 0x80) = 0;
                          *(undefined2 *)(param_1 + 0x54) = 0xbf74;
                          *(undefined1 **)(param_1 + 0x50) = &DAT_8000000b;
                          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_f:
                          iVar3 = FUN_00dec2f8(param_1 + 0x50);
                          if (iVar3 == 0) {
                            FUN_005c19d4(param_1 + 0x50);
                            *(undefined1 *)(param_1 + 0x80) = 0;
                            *(undefined1 *)(param_1 + 0x54) = 0xce;
                            *(undefined4 *)(param_1 + 0x50) = 0x80000006;
                            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_10:
                            iVar3 = FUN_00dec2f8(param_1 + 0x50);
                            if (iVar3 == 0) {
                              FUN_005c19d4(param_1 + 0x50);
                              puVar7 = *(undefined1 **)(param_1 + 0x2c);
                              *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x28);
                              *(undefined1 **)(param_1 + 0x34) = puVar7;
                              *(undefined4 *)(param_1 + 0x38) = 4;
                              while (puVar7 != (undefined1 *)0x0) {
                                puVar9 = *(undefined1 **)(param_1 + 0x38);
                                iVar3 = *(int *)(param_1 + 0x30);
                                puVar10 = puVar7;
                                if (puVar9 < puVar7) {
                                  puVar10 = puVar9;
                                }
                                *(undefined1 **)(param_1 + 0x30) = puVar10 + iVar3;
                                *(int *)(param_1 + 0x34) = (int)puVar7 - (int)puVar10;
                                uVar12 = 0;
                                if ((int)puVar10 < 0) {
LAB_00e1fac0:
                    /* WARNING: Subroutine does not return */
                                  FUN_00600af4(uVar12,puVar15);
                                }
                                puVar15 = &DAT_00000001;
                                puVar7 = (undefined1 *)0x0;
                                if (puVar9 != (undefined1 *)0x0) {
                                  puVar15 = (undefined1 *)thunk_FUN_016d4a50(puVar10);
                                  if (puVar15 == (undefined1 *)0x0) {
                                    uVar12 = 1;
                                    puVar15 = puVar10;
                                    goto LAB_00e1fac0;
                                  }
                                  puVar7 = puVar10;
                                }
                                FUN_016dd1aa(puVar15,iVar3,puVar10);
                                uVar6 = (uint)puVar10 >> 1;
                                *(undefined4 *)(param_1 + 0x3c) = puVar7;
                                *(undefined1 *)(param_1 + 0x4d) = 1;
                                *(undefined1 **)(param_1 + 0x40) = puVar15;
                                *(undefined1 **)(param_1 + 0x44) = puVar10;
                                if (uVar6 != 0) {
                                  puVar10 = puVar10 + (int)puVar15;
                                  puVar7 = puVar15;
                                  do {
                                    puVar10 = puVar10 + -1;
                                    uVar11 = *puVar10;
                                    uVar6 = uVar6 - 1;
                                    *puVar10 = *puVar7;
                                    *puVar7 = uVar11;
                                    puVar7 = puVar7 + 1;
                                  } while (uVar6 != 0);
                                }
                                *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x44);
                                *(undefined1 *)(param_1 + 0x4d) = 0;
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x3c);
                                *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x40);
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_11:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x11;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined4 *)(param_1 + 0x50) = 0x80000001;
                                *(undefined4 *)(param_1 + 0x54) = 0xd2e05350;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_12:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x12;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined2 *)(param_1 + 0x54) = 0x33f;
                                *(undefined4 *)(param_1 + 0x50) = 0x80000000;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_13:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x13;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined1 *)(param_1 + 0x54) = 0x23;
                                *(undefined4 *)(param_1 + 0x50) = 0x80000006;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_14:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x14;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined4 *)(param_1 + 0x50) = 0x80000001;
                                *(undefined4 *)(param_1 + 0x54) = 0x8c144653;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_15:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x15;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined4 *)(param_1 + 0x58) = 0xab63c381;
                                *(undefined4 *)(param_1 + 0x5c) = 0x1bc7d037;
                                *(undefined1 **)(param_1 + 0x50) = &DAT_80000013;
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_16:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x16;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined4 *)(param_1 + 0x50) = 0x8000000f;
                                *(undefined4 *)(param_1 + 0x54) = 0xc5e48e32;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_17:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x17;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined4 *)(param_1 + 0x50) = 0x80000001;
                                *(undefined4 *)(param_1 + 0x54) = 0xc1eb37a7;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_18:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x18;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined4 *)(param_1 + 0x50) = 0x8000000e;
                                *(undefined4 *)(param_1 + 0x54) = 0xabc895c0;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_19:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x19;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined4 *)(param_1 + 0x50) = 0x80000001;
                                *(undefined4 *)(param_1 + 0x54) = 0x82ae2457;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_1a:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x1a;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined2 *)(param_1 + 0x54) = 0x9d50;
                                *(undefined4 *)(param_1 + 0x50) = 0x8000000a;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_1b:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 != 0) {
                                  iVar3 = 1;
                                  uVar11 = 0x1b;
                                  goto LAB_00e20148;
                                }
                                FUN_005c19d4(param_1 + 0x50);
                                puVar7 = *(undefined1 **)(param_1 + 0x34);
                                *(undefined1 *)(param_1 + 0x4d) = 0;
                              }
                              *(undefined1 *)(param_1 + 0x80) = 0;
                              *(undefined4 *)(param_1 + 0x50) = 0x8000000e;
                              *(undefined4 *)(param_1 + 0x54) = 0xd17375d9;
                              *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_1c:
                              iVar3 = FUN_00dec2f8(param_1 + 0x50);
                              if (iVar3 == 0) {
                                FUN_005c19d4(param_1 + 0x50);
                                *(undefined1 *)(param_1 + 0x80) = 0;
                                *(undefined2 *)(param_1 + 0x54) = 0xc781;
                                *(undefined4 *)(param_1 + 0x50) = 0x80000000;
                                *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_1d:
                                iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                if (iVar3 == 0) {
                                  FUN_005c19d4(param_1 + 0x50);
                                  *(undefined4 *)(param_1 + 0x58) = 0x264bdc21;
                                  *(undefined4 *)(param_1 + 0x5c) = 0x8e68c6ba;
                                  *(undefined4 *)(param_1 + 0x50) = 0x80000012;
                                  *(undefined1 *)(param_1 + 0x80) = 0;
                                  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_1e:
                                  iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                  if (iVar3 == 0) {
                                    FUN_005c19d4(param_1 + 0x50);
                                    *(undefined1 *)(param_1 + 0x80) = 0;
                                    *(undefined1 *)(param_1 + 0x54) = 0xac;
                                    *(undefined4 *)(param_1 + 0x50) = 0x80000007;
                                    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_1f:
                                    iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                    if (iVar3 == 0) {
                                      FUN_005c19d4(param_1 + 0x50);
                                      *(undefined1 *)(param_1 + 0x80) = 0;
                                      *(undefined2 *)(param_1 + 0x54) = 0x1ef6;
                                      *(undefined4 *)(param_1 + 0x50) = 0x80000000;
                                      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_20:
                                      iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                      if (iVar3 == 0) {
                                        FUN_005c19d4(param_1 + 0x50);
                                        *(undefined1 *)(param_1 + 0x80) = 0;
                                        *(undefined1 *)(param_1 + 0x54) = 0x1a;
                                        *(undefined4 *)(param_1 + 0x50) = 0x80000007;
                                        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x20) + 8;
switchD_00e1f1c0_caseD_21:
                                        iVar3 = FUN_00dec2f8(param_1 + 0x50);
                                        if (iVar3 == 0) {
                                          FUN_005c19d4(param_1 + 0x50);
                                          puVar15 = *(undefined1 **)(param_1 + 0x28);
                                          iVar3 = *(int *)(param_1 + 0x2c);
                                          if (iVar3 != 0) {
                                            puVar7 = puVar15;
                                            do {
                                              *puVar7 = 0;
                                              iVar3 = iVar3 + -1;
                                              puVar7 = puVar7 + 1;
                                            } while (iVar3 != 0);
                                          }
                                          iVar3 = *(int *)(param_1 + 0x24);
                                          *(undefined4 *)(param_1 + 0x2c) = 0;
                                          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                                            *puVar15 = 0;
                                            puVar15 = puVar15 + 1;
                                          }
                                          if (*(int *)(param_1 + 0x24) != 0) {
                                            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
                                          }
                                          piVar4 = *(int **)(param_1 + 0x20);
                                          *(undefined1 *)(param_1 + 0x4c) = 0;
                                          DataMemoryBarrier(0xb);
                                          do {
                                            iVar8 = *piVar4;
                                            bVar18 = (bool)hasExclusiveAccess(piVar4);
                                          } while (!bVar18);
                                          *piVar4 = iVar8 + -1;
                                          iVar3 = 0;
                                          uVar11 = 1;
                                          if (iVar8 == 1) {
                                            DataMemoryBarrier(0xb);
                                            FUN_00f36d34(*(undefined4 *)(param_1 + 0x20));
                                          }
                                        }
                                        else {
                                          iVar3 = 1;
                                          uVar11 = 0x21;
                                        }
                                      }
                                      else {
                                        iVar3 = 1;
                                        uVar11 = 0x20;
                                      }
                                    }
                                    else {
                                      iVar3 = 1;
                                      uVar11 = 0x1f;
                                    }
                                  }
                                  else {
                                    iVar3 = 1;
                                    uVar11 = 0x1e;
                                  }
                                }
                                else {
                                  iVar3 = 1;
                                  uVar11 = 0x1d;
                                }
                              }
                              else {
                                iVar3 = 1;
                                uVar11 = 0x1c;
                              }
                            }
                            else {
                              iVar3 = 1;
                              uVar11 = 0x10;
                            }
                          }
                          else {
                            iVar3 = 1;
                            uVar11 = 0xf;
                          }
                        }
                        else {
                          iVar3 = 1;
                          uVar11 = 0xe;
                        }
                      }
                      else {
                        iVar3 = 1;
                        uVar11 = 0xd;
                      }
                    }
                    else {
                      iVar3 = 1;
                      uVar11 = 0xc;
                    }
                  }
                  else {
                    iVar3 = 1;
                    uVar11 = 0xb;
                  }
                }
                else {
                  iVar3 = 1;
                  uVar11 = 10;
                }
              }
              else {
                iVar3 = 1;
                uVar11 = 9;
              }
            }
            else {
              iVar3 = 1;
              uVar11 = 8;
            }
          }
          else {
            iVar3 = 1;
            uVar11 = 7;
          }
        }
      }
      else {
        iVar3 = 1;
        uVar11 = 5;
      }
    }
  }
  else {
    iVar3 = 1;
    uVar11 = 3;
  }
LAB_00e20148:
  cVar1 = *(char *)(iVar17 + 0x38);
  *(undefined1 *)(param_1 + 0x4e) = uVar11;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') goto joined_r0x00e20164;
    FUN_015e8e6c(iVar17,FUN_01655ec4);
    *(undefined1 *)(iVar17 + 0x38) = 1;
  }
  *(undefined4 *)(iVar17 + 0x18) = uVar16;
  *(undefined4 *)(iVar17 + 0x1c) = uVar2;
joined_r0x00e20164:
  if (iVar3 == 0) {
    local_a0 = 2;
    FUN_00e20374(param_1,&local_a0);
    return 0;
  }
  return iVar3;
}

