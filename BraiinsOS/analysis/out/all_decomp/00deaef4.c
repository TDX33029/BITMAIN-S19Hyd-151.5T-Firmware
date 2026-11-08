// FUN_00deaef4 @ 00deaef4 size=3376 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

int FUN_00deaef4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar14 = thunk_FUN_016de0ee(0,0x40);
  iVar6 = (int)uVar14 + (int)((ulonglong)uVar14 >> 0x20);
  uVar11 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar6 + 0x38) == '\x01') {
LAB_00deaf5c:
    uVar12 = *(undefined4 *)(iVar6 + 0x18);
    uVar1 = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined4 *)(iVar6 + 0x18) = uVar11;
    *(undefined4 *)(iVar6 + 0x1c) = uVar8;
  }
  else {
    uVar12 = 0;
    uVar1 = 0;
    if (*(char *)(iVar6 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar6,FUN_01655ec4);
      *(undefined1 *)(iVar6 + 0x38) = 1;
      goto LAB_00deaf5c;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x36)) {
  case 0:
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0x80000001;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x3c) = 0xdfb2230b;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x30) + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01879078);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01879078);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x44)) {
    case 0:
      piVar3 = *(int **)(param_1 + 0x38);
      goto LAB_00deb0c0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01878fd8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01878fd8);
    }
    goto switchD_00deb074_caseD_3;
  case 5:
    goto switchD_00deaf7c_caseD_5;
  case 6:
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    goto LAB_00deb1e0;
  case 7:
    goto switchD_00deaf7c_caseD_7;
  case 8:
    goto switchD_00deaf7c_caseD_8;
  case 9:
    goto switchD_00deaf7c_caseD_9;
  case 10:
    goto switchD_00deaf7c_caseD_a;
  case 0xb:
    goto switchD_00deaf7c_caseD_b;
  case 0xc:
    goto switchD_00deaf7c_caseD_c;
  case 0xd:
    goto switchD_00deaf7c_caseD_d;
  case 0xe:
    goto switchD_00deaf7c_caseD_e;
  case 0xf:
    goto switchD_00deaf7c_caseD_f;
  case 0x10:
    goto switchD_00deaf7c_caseD_10;
  case 0x11:
    goto switchD_00deaf7c_caseD_11;
  case 0x12:
    goto switchD_00deaf7c_caseD_12;
  case 0x13:
    goto switchD_00deaf7c_caseD_13;
  case 0x14:
    goto switchD_00deaf7c_caseD_14;
  case 0x15:
    goto switchD_00deaf7c_caseD_15;
  case 0x16:
    goto switchD_00deaf7c_caseD_16;
  case 0x17:
    goto switchD_00deaf7c_caseD_17;
  case 0x18:
    goto switchD_00deaf7c_caseD_18;
  case 0x19:
    goto switchD_00deaf7c_caseD_19;
  case 0x1a:
    goto switchD_00deaf7c_caseD_1a;
  case 0x1b:
    goto switchD_00deaf7c_caseD_1b;
  case 0x1c:
    goto switchD_00deaf7c_caseD_1c;
  case 0x1d:
    goto switchD_00deaf7c_caseD_1d;
  case 0x1e:
    goto switchD_00deaf7c_caseD_1e;
  case 0x1f:
    goto switchD_00deaf7c_caseD_1f;
  case 0x20:
    goto switchD_00deaf7c_caseD_20;
  case 0x21:
    goto switchD_00deaf7c_caseD_21;
  case 0x22:
    goto switchD_00deaf7c_caseD_22;
  case 0x23:
    goto switchD_00deaf7c_caseD_23;
  case 0x24:
    goto switchD_00deaf7c_caseD_24;
  }
  iVar2 = FUN_00dec2f8(param_1 + 0x38);
  if (iVar2 == 0) {
    FUN_005c19d4(param_1 + 0x38);
    iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 8);
    *(undefined1 *)(param_1 + 0x44) = 0;
    piVar3 = (int *)(iVar2 + 8);
    *(int **)(param_1 + 0x38) = piVar3;
LAB_00deb0c0:
    *(int *)(param_1 + 0x3c) = *piVar3 + 8;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
switchD_00deb074_caseD_3:
    iVar2 = FUN_00e442f8((int *)(param_1 + 0x3c),param_2);
    if (iVar2 == 0) {
      iVar2 = 1;
      uVar7 = 4;
      *(undefined1 *)(param_1 + 0x44) = 3;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x3c);
      if (iVar5 != 0) {
        FUN_00e44660(iVar5,*(undefined4 *)(param_1 + 0x40),1);
      }
      iVar5 = *(int *)(iVar2 + 0x20);
      puVar9 = *(undefined **)(iVar2 + 0x24);
      *(undefined4 *)(iVar2 + 0x20) = 0;
      FUN_00e44900();
      *(undefined1 *)(param_1 + 0x35) = 1;
      bVar13 = iVar5 == 0;
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x3c) = 0x7efc;
      if (bVar13) {
        iVar5 = 1;
      }
      *(undefined4 *)(param_1 + 0x38) = 0x80000000;
      if (bVar13) {
        puVar9 = &DAT_01878fe8;
      }
      *(int *)(param_1 + 0x18) = iVar5;
      *(undefined **)(param_1 + 0x1c) = puVar9;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_5:
      iVar2 = FUN_00dec2f8(param_1 + 0x38);
      if (iVar2 == 0) {
        FUN_005c19d4(param_1 + 0x38);
        iVar2 = *(int *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x35) = 0;
        uVar8 = *(undefined4 *)(param_1 + 0x18);
        uVar14 = (**(code **)(iVar2 + 0xc))(uVar8);
        if (*(int *)(iVar2 + 4) != 0) {
          thunk_FUN_016d3fb4(uVar8);
        }
        *(undefined8 *)(param_1 + 0x38) = uVar14;
LAB_00deb1e0:
        (**(code **)((int)((ulonglong)uVar14 >> 0x20) + 0xc))(&local_88,(int)uVar14,param_2);
        if (local_88 == -0x80000000) {
          iVar2 = 1;
          uVar7 = 6;
        }
        else {
          *(undefined1 *)(param_1 + 0x34) = 1;
          uVar8 = *(undefined4 *)(param_1 + 0x38);
          puVar10 = *(undefined4 **)(param_1 + 0x3c);
          *(int *)(param_1 + 0x24) = local_88;
          *(undefined4 *)(param_1 + 0x28) = uStack_84;
          *(undefined4 *)(param_1 + 0x2c) = uStack_80;
          pcVar4 = (code *)*puVar10;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar8);
          }
          if (puVar10[1] != 0) {
            thunk_FUN_016d3fb4(uVar8);
          }
          *(undefined1 *)(param_1 + 0x68) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0x80000001;
          *(undefined4 *)(param_1 + 0x3c) = 0x5977ad96;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_7:
          iVar2 = FUN_00dec2f8(param_1 + 0x38);
          if (iVar2 == 0) {
            FUN_005c19d4(param_1 + 0x38);
            *(undefined4 *)(param_1 + 0x40) = 0xa99d602f;
            *(undefined4 *)(param_1 + 0x44) = 0x91397491;
            *(undefined4 *)(param_1 + 0x38) = 0x80000011;
            *(undefined1 *)(param_1 + 0x68) = 0;
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_8:
            iVar2 = FUN_00dec2f8(param_1 + 0x38);
            if (iVar2 == 0) {
              FUN_005c19d4(param_1 + 0x38);
              *(undefined4 *)(param_1 + 0x38) = 0x80000002;
              *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x24);
              *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x28);
              *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x2c);
              *(undefined1 *)(param_1 + 0x34) = 0;
              *(undefined1 *)(param_1 + 0x68) = 0;
              *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_9:
              iVar2 = FUN_00dec2f8(param_1 + 0x38);
              if (iVar2 == 0) {
                FUN_005c19d4(param_1 + 0x38);
                *(undefined1 *)(param_1 + 0x68) = 0;
                *(undefined2 *)(param_1 + 0x3c) = 0x6f06;
                *(undefined4 *)(param_1 + 0x38) = 0x80000000;
                *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_a:
                iVar2 = FUN_00dec2f8(param_1 + 0x38);
                if (iVar2 == 0) {
                  FUN_005c19d4(param_1 + 0x38);
                  *(undefined1 *)(param_1 + 0x68) = 0;
                  *(undefined4 *)(param_1 + 0x38) = 0x80000001;
                  *(undefined4 *)(param_1 + 0x3c) = 0xc93e5256;
                  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_b:
                  iVar2 = FUN_00dec2f8(param_1 + 0x38);
                  if (iVar2 == 0) {
                    FUN_005c19d4(param_1 + 0x38);
                    *(undefined4 *)(param_1 + 0x40) = 0xbab8bf19;
                    *(undefined4 *)(param_1 + 0x44) = 0x6a3a28a8;
                    *(undefined1 **)(param_1 + 0x38) = &DAT_80000010;
                    *(undefined1 *)(param_1 + 0x68) = 0;
                    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_c:
                    iVar2 = FUN_00dec2f8(param_1 + 0x38);
                    if (iVar2 == 0) {
                      FUN_005c19d4(param_1 + 0x38);
                      *(undefined1 *)(param_1 + 0x68) = 0;
                      *(undefined2 *)(param_1 + 0x3c) = 0x3c44;
                      *(undefined4 *)(param_1 + 0x38) = 0x80000009;
                      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_d:
                      iVar2 = FUN_00dec2f8(param_1 + 0x38);
                      if (iVar2 == 0) {
                        FUN_005c19d4(param_1 + 0x38);
                        *(undefined1 *)(param_1 + 0x68) = 0;
                        *(undefined4 *)(param_1 + 0x38) = 0x80000001;
                        *(undefined4 *)(param_1 + 0x3c) = 0x6a6df9fb;
                        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_e:
                        iVar2 = FUN_00dec2f8(param_1 + 0x38);
                        if (iVar2 == 0) {
                          FUN_005c19d4(param_1 + 0x38);
                          *(undefined1 *)(param_1 + 0x68) = 0;
                          *(undefined2 *)(param_1 + 0x3c) = 0xe45f;
                          *(undefined1 **)(param_1 + 0x38) = &DAT_80000008;
                          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_f:
                          iVar2 = FUN_00dec2f8(param_1 + 0x38);
                          if (iVar2 == 0) {
                            FUN_005c19d4(param_1 + 0x38);
                            *(undefined1 *)(param_1 + 0x68) = 0;
                            *(undefined2 *)(param_1 + 0x3c) = 0x958b;
                            *(undefined4 *)(param_1 + 0x38) = 0x80000000;
                            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_10:
                            iVar2 = FUN_00dec2f8(param_1 + 0x38);
                            if (iVar2 == 0) {
                              FUN_005c19d4(param_1 + 0x38);
                              *(undefined1 *)(param_1 + 0x68) = 0;
                              *(undefined1 **)(param_1 + 0x38) = &DAT_8000000c;
                              *(undefined4 *)(param_1 + 0x3c) = 0x242234f7;
                              *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_11:
                              iVar2 = FUN_00dec2f8(param_1 + 0x38);
                              if (iVar2 == 0) {
                                FUN_005c19d4(param_1 + 0x38);
                                *(undefined1 *)(param_1 + 0x68) = 0;
                                *(undefined2 *)(param_1 + 0x3c) = 0x5b47;
                                *(undefined4 *)(param_1 + 0x38) = 0x80000000;
                                *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_12:
                                iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                if (iVar2 == 0) {
                                  FUN_005c19d4(param_1 + 0x38);
                                  *(undefined1 *)(param_1 + 0x68) = 0;
                                  *(undefined2 *)(param_1 + 0x3c) = 0x4bdb;
                                  *(undefined4 *)(param_1 + 0x38) = 0x80000000;
                                  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_13:
                                  iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                  if (iVar2 == 0) {
                                    FUN_005c19d4(param_1 + 0x38);
                                    *(undefined4 *)(param_1 + 0x40) = 0xb6ed8665;
                                    *(undefined4 *)(param_1 + 0x44) = 0xfe5e252a;
                                    *(undefined1 **)(param_1 + 0x38) = &DAT_80000010;
                                    *(undefined1 *)(param_1 + 0x68) = 0;
                                    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_14:
                                    iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                    if (iVar2 == 0) {
                                      FUN_005c19d4(param_1 + 0x38);
                                      *(undefined1 *)(param_1 + 0x68) = 0;
                                      *(undefined1 **)(param_1 + 0x38) = &DAT_8000000c;
                                      *(undefined4 *)(param_1 + 0x3c) = 0x7cbe5ba5;
                                      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_15:
                                      iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                      if (iVar2 == 0) {
                                        FUN_005c19d4(param_1 + 0x38);
                                        *(undefined1 *)(param_1 + 0x68) = 0;
                                        *(undefined2 *)(param_1 + 0x3c) = 0x4c16;
                                        *(undefined1 **)(param_1 + 0x38) = &DAT_80000008;
                                        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_16:
                                        iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                        if (iVar2 == 0) {
                                          FUN_005c19d4(param_1 + 0x38);
                                          *(undefined1 *)(param_1 + 0x68) = 0;
                                          *(undefined4 *)(param_1 + 0x38) = 0x80000001;
                                          *(undefined4 *)(param_1 + 0x3c) = 0x42266a56;
                                          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_17:
                                          iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                          if (iVar2 == 0) {
                                            FUN_005c19d4(param_1 + 0x38);
                                            *(undefined1 *)(param_1 + 0x68) = 0;
                                            *(undefined4 *)(param_1 + 0x38) = 0x80000001;
                                            *(undefined4 *)(param_1 + 0x3c) = 0x39b3b135;
                                            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_18:
                                            iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                            if (iVar2 == 0) {
                                              FUN_005c19d4(param_1 + 0x38);
                                              *(undefined4 *)(param_1 + 0x40) = 0xff60e317;
                                              *(undefined4 *)(param_1 + 0x44) = 0x37cf58a6;
                                              *(undefined4 *)(param_1 + 0x38) = 0x80000011;
                                              *(undefined1 *)(param_1 + 0x68) = 0;
                                              *(int *)(param_1 + 0x60) =
                                                   *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_19:
                                              iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                              if (iVar2 == 0) {
                                                FUN_005c19d4(param_1 + 0x38);
                                                *(undefined1 *)(param_1 + 0x68) = 0;
                                                *(undefined2 *)(param_1 + 0x3c) = 0xdc46;
                                                *(undefined4 *)(param_1 + 0x38) = 0x80000009;
                                                *(int *)(param_1 + 0x60) =
                                                     *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_1a:
                                                iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                if (iVar2 == 0) {
                                                  FUN_005c19d4(param_1 + 0x38);
                                                  *(undefined4 *)(param_1 + 0x40) = 0xf9e006a7;
                                                  *(undefined4 *)(param_1 + 0x44) = 0x3d580e24;
                                                  *(undefined1 **)(param_1 + 0x38) = &DAT_80000010;
                                                  *(undefined1 *)(param_1 + 0x68) = 0;
                                                  *(int *)(param_1 + 0x60) =
                                                       *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_1b:
                                                  iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                  if (iVar2 == 0) {
                                                    FUN_005c19d4(param_1 + 0x38);
                                                    *(undefined1 *)(param_1 + 0x68) = 0;
                                                    *(undefined1 *)(param_1 + 0x3c) = 0x15;
                                                    *(undefined1 **)(param_1 + 0x38) = &DAT_80000004
                                                    ;
                                                    *(int *)(param_1 + 0x60) =
                                                         *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_1c:
                                                    iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                    if (iVar2 == 0) {
                                                      FUN_005c19d4(param_1 + 0x38);
                                                      *(undefined1 *)(param_1 + 0x68) = 0;
                                                      *(undefined1 **)(param_1 + 0x38) =
                                                           &DAT_8000000c;
                                                      *(undefined4 *)(param_1 + 0x3c) = 0x6b976f09;
                                                      *(int *)(param_1 + 0x60) =
                                                           *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_1d:
                                                      iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                      if (iVar2 == 0) {
                                                        FUN_005c19d4(param_1 + 0x38);
                                                        *(undefined1 *)(param_1 + 0x68) = 0;
                                                        *(undefined2 *)(param_1 + 0x3c) = 0x30b4;
                                                        *(undefined4 *)(param_1 + 0x38) = 0x80000000
                                                        ;
                                                        *(int *)(param_1 + 0x60) =
                                                             *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_1e:
                                                        iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                        if (iVar2 == 0) {
                                                          FUN_005c19d4(param_1 + 0x38);
                                                          *(undefined1 *)(param_1 + 0x68) = 0;
                                                          *(undefined1 *)(param_1 + 0x3c) = 0xef;
                                                          *(undefined4 *)(param_1 + 0x38) =
                                                               0x80000005;
                                                          *(int *)(param_1 + 0x60) =
                                                               *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_1f:
                                                          iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                          if (iVar2 == 0) {
                                                            FUN_005c19d4(param_1 + 0x38);
                                                            *(undefined1 *)(param_1 + 0x68) = 0;
                                                            *(undefined4 *)(param_1 + 0x38) =
                                                                 0x80000001;
                                                            *(undefined4 *)(param_1 + 0x3c) =
                                                                 0xcb5e0b97;
                                                            *(int *)(param_1 + 0x60) =
                                                                 *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_20:
                                                            iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                            if (iVar2 == 0) {
                                                              FUN_005c19d4(param_1 + 0x38);
                                                              *(undefined1 *)(param_1 + 0x68) = 0;
                                                              *(undefined1 **)(param_1 + 0x38) =
                                                                   &DAT_8000000c;
                                                              *(undefined4 *)(param_1 + 0x3c) =
                                                                   0xf23f9adf;
                                                              *(int *)(param_1 + 0x60) =
                                                                   *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_21:
                                                              iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                              if (iVar2 == 0) {
                                                                FUN_005c19d4(param_1 + 0x38);
                                                                *(undefined1 *)(param_1 + 0x68) = 0;
                                                                *(undefined1 *)(param_1 + 0x3c) =
                                                                     0x94;
                                                                *(undefined4 *)(param_1 + 0x38) =
                                                                     0x80000005;
                                                                *(int *)(param_1 + 0x60) =
                                                                     *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_22:
                                                                iVar2 = FUN_00dec2f8(param_1 + 0x38)
                                                                ;
                                                                if (iVar2 == 0) {
                                                                  FUN_005c19d4(param_1 + 0x38);
                                                                  *(undefined1 *)(param_1 + 0x68) =
                                                                       0;
                                                                  *(undefined1 *)(param_1 + 0x3c) =
                                                                       0x97;
                                                                  *(undefined1 **)(param_1 + 0x38) =
                                                                       &DAT_80000004;
                                                                  *(int *)(param_1 + 0x60) =
                                                                       *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_23:
                                                                  iVar2 = FUN_00dec2f8(param_1 + 
                                                  0x38);
                                                  if (iVar2 == 0) {
                                                    FUN_005c19d4(param_1 + 0x38);
                                                    *(undefined1 *)(param_1 + 0x68) = 0;
                                                    *(undefined1 **)(param_1 + 0x38) = &DAT_8000000d
                                                    ;
                                                    *(undefined4 *)(param_1 + 0x3c) = 0x8583997e;
                                                    *(int *)(param_1 + 0x60) =
                                                         *(int *)(param_1 + 0x20) + 8;
switchD_00deaf7c_caseD_24:
                                                    iVar2 = FUN_00dec2f8(param_1 + 0x38);
                                                    if (iVar2 == 0) {
                                                      FUN_005c19d4(param_1 + 0x38);
                                                      piVar3 = *(int **)(param_1 + 0x20);
                                                      *(undefined2 *)(param_1 + 0x34) = 0;
                                                      DataMemoryBarrier(0xb);
                                                      do {
                                                        iVar5 = *piVar3;
                                                        bVar13 = (bool)hasExclusiveAccess(piVar3);
                                                      } while (!bVar13);
                                                      *piVar3 = iVar5 + -1;
                                                      iVar2 = 0;
                                                      uVar7 = 1;
                                                      if (iVar5 == 1) {
                                                        DataMemoryBarrier(0xb);
                                                        FUN_00f36d34(*(undefined4 *)(param_1 + 0x20)
                                                                    );
                                                      }
                                                    }
                                                    else {
                                                      iVar2 = 1;
                                                      uVar7 = 0x24;
                                                    }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x23;
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x22;
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x21;
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x20;
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x1f;
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x1e;
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x1d;
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x1c;
                                                  }
                                                  }
                                                  else {
                                                    iVar2 = 1;
                                                    uVar7 = 0x1b;
                                                  }
                                                }
                                                else {
                                                  iVar2 = 1;
                                                  uVar7 = 0x1a;
                                                }
                                              }
                                              else {
                                                iVar2 = 1;
                                                uVar7 = 0x19;
                                              }
                                            }
                                            else {
                                              iVar2 = 1;
                                              uVar7 = 0x18;
                                            }
                                          }
                                          else {
                                            iVar2 = 1;
                                            uVar7 = 0x17;
                                          }
                                        }
                                        else {
                                          iVar2 = 1;
                                          uVar7 = 0x16;
                                        }
                                      }
                                      else {
                                        iVar2 = 1;
                                        uVar7 = 0x15;
                                      }
                                    }
                                    else {
                                      iVar2 = 1;
                                      uVar7 = 0x14;
                                    }
                                  }
                                  else {
                                    iVar2 = 1;
                                    uVar7 = 0x13;
                                  }
                                }
                                else {
                                  iVar2 = 1;
                                  uVar7 = 0x12;
                                }
                              }
                              else {
                                iVar2 = 1;
                                uVar7 = 0x11;
                              }
                            }
                            else {
                              iVar2 = 1;
                              uVar7 = 0x10;
                            }
                          }
                          else {
                            iVar2 = 1;
                            uVar7 = 0xf;
                          }
                        }
                        else {
                          iVar2 = 1;
                          uVar7 = 0xe;
                        }
                      }
                      else {
                        iVar2 = 1;
                        uVar7 = 0xd;
                      }
                    }
                    else {
                      iVar2 = 1;
                      uVar7 = 0xc;
                    }
                  }
                  else {
                    iVar2 = 1;
                    uVar7 = 0xb;
                  }
                }
                else {
                  iVar2 = 1;
                  uVar7 = 10;
                }
              }
              else {
                iVar2 = 1;
                uVar7 = 9;
              }
            }
            else {
              iVar2 = 1;
              uVar7 = 8;
            }
          }
          else {
            iVar2 = 1;
            uVar7 = 7;
          }
        }
      }
      else {
        iVar2 = 1;
        uVar7 = 5;
      }
    }
  }
  else {
    iVar2 = 1;
    uVar7 = 3;
  }
  *(undefined1 *)(param_1 + 0x36) = uVar7;
  if (*(char *)(iVar6 + 0x38) != '\x01') {
    if (*(char *)(iVar6 + 0x38) == '\x02') goto joined_r0x00debc64;
    FUN_015e8e6c(iVar6,FUN_01655ec4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar1;
joined_r0x00debc64:
  if (iVar2 == 0) {
    local_88 = 2;
    FUN_00dec164(param_1,&local_88);
    return 0;
  }
  return iVar2;
}

