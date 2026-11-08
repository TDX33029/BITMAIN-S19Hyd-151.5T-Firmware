// FUN_00e6d378 @ 00e6d378 size=7752 calls_out=11 calls_in=1
// strings: 

int FUN_00e6d378(uint *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  uint uVar8;
  uint uVar9;
  char cVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar19;
  undefined8 uVar20;
  
  if (param_1[0xa8] == 1) {
    piVar13 = (int *)*param_2;
    uVar8 = param_1[0xa9];
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 1;
    piVar13[2] = iVar4 + 1;
    FUN_00f09308(piVar13,iVar4,uVar8,0);
    cVar10 = (char)param_1[0xb6];
    if (cVar10 != '\x02') goto LAB_00e6d3e4;
LAB_00e6d458:
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 0;
  }
  else {
    piVar13 = (int *)*param_2;
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 0;
    piVar13[2] = iVar4 + 1;
    cVar10 = (char)param_1[0xb6];
    if (cVar10 == '\x02') goto LAB_00e6d458;
LAB_00e6d3e4:
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 1;
    iVar4 = iVar4 + 1;
    piVar13[2] = iVar4;
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(char *)(piVar13[1] + iVar4) = cVar10;
  }
  iVar4 = iVar4 + 1;
  piVar13[2] = iVar4;
  if (param_1[0x88] == 5 && param_1[0x89] == 0) {
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 0;
    piVar13[2] = iVar4 + 1;
  }
  else {
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 1;
    piVar13[2] = iVar4 + 1;
    FUN_00efdc3c(param_1 + 0x88,piVar13);
  }
  uVar8 = *param_1;
  if (uVar8 == 2 && param_1[1] == 0) {
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 0;
    piVar13[2] = iVar4 + 1;
  }
  else {
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    uVar17 = param_1[0xf];
    *(undefined1 *)(piVar13[1] + iVar4) = 1;
    piVar13[2] = iVar4 + 1;
    FUN_00f09308(piVar13,iVar4,uVar17,0);
    FUN_00f09308(piVar13,extraout_r1,param_1[0x10],0);
    iVar4 = piVar13[2];
    uVar17 = param_1[4];
    uVar15 = param_1[5];
    if ((uint)(*piVar13 - iVar4) < 8) {
      FUN_00edff4c(piVar13,iVar4,8,1,1);
      iVar4 = piVar13[2];
    }
    iVar5 = piVar13[1];
    iVar3 = iVar4 + 8;
    piVar13[2] = iVar3;
    *(uint *)(iVar5 + iVar4) = uVar17;
    ((uint *)(iVar5 + iVar4))[1] = uVar15;
    if ((uVar8 & 1) == 0) {
      if (*piVar13 == iVar3) {
        FUN_00edff4c(piVar13,iVar3,1,1,1);
        iVar3 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar3) = 0;
      iVar3 = iVar3 + 1;
    }
    else {
      uVar8 = param_1[2];
      uVar17 = param_1[3];
      if (*piVar13 == iVar3) {
        FUN_00edff4c(piVar13,iVar3,1,1,1);
        iVar3 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar3) = 1;
      iVar3 = iVar3 + 1;
      piVar13[2] = iVar3;
      if ((uint)(*piVar13 - iVar3) < 8) {
        FUN_00edff4c(piVar13,iVar3,8,1,1);
        iVar3 = piVar13[2];
      }
      iVar4 = piVar13[1];
      *(uint *)(iVar4 + iVar3) = uVar8;
      ((uint *)(iVar4 + iVar3))[1] = uVar17;
      iVar3 = iVar3 + 8;
    }
    piVar13[2] = iVar3;
    FUN_00e66aa8(piVar13,param_1 + 6);
    FUN_00e66aa8(piVar13,param_1 + 9);
    FUN_00e66aa8(piVar13,param_1 + 0xc);
  }
  if (param_1[0xb0] == 0x80000000) {
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 0;
    piVar13[2] = iVar4 + 1;
  }
  else {
    iVar4 = piVar13[2];
    puVar6 = (uint *)param_1[0xb1];
    uVar8 = param_1[0xb2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 1;
    piVar13[2] = iVar4 + 1;
    FUN_00f09308(piVar13,iVar4,uVar8,0);
    puVar11 = puVar6 + 8;
    for (iVar4 = uVar8 * 0x30; iVar4 != 0; iVar4 = iVar4 + -0x30) {
      iVar5 = piVar13[2];
      uVar8 = puVar6[4];
      uVar17 = puVar6[5];
      if ((uint)(*piVar13 - iVar5) < 8) {
        FUN_00edff4c(piVar13,iVar5,8,1,1);
        iVar5 = piVar13[2];
      }
      iVar3 = piVar13[1];
      iVar7 = iVar5 + 8;
      uVar15 = *puVar6;
      piVar13[2] = iVar7;
      *(uint *)(iVar3 + iVar5) = uVar8;
      ((uint *)(iVar3 + iVar5))[1] = uVar17;
      if ((uVar15 & 1) == 0) {
        if (*piVar13 == iVar7) {
          FUN_00edff4c(piVar13,iVar7,1,1,1);
          iVar7 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar7) = 0;
        iVar5 = iVar7 + 1;
      }
      else {
        uVar8 = puVar11[-6];
        uVar17 = puVar11[-5];
        if (*piVar13 == iVar7) {
          FUN_00edff4c(piVar13,iVar7,1,1,1);
          iVar7 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar7) = 1;
        iVar7 = iVar7 + 1;
        piVar13[2] = iVar7;
        if ((uint)(*piVar13 - iVar7) < 8) {
          FUN_00edff4c(piVar13,iVar7,8,1,1);
          iVar7 = piVar13[2];
        }
        iVar5 = piVar13[1];
        *(uint *)(iVar5 + iVar7) = uVar8;
        ((uint *)(iVar5 + iVar7))[1] = uVar17;
        iVar5 = iVar7 + 8;
      }
      uVar8 = puVar6[9];
      piVar13[2] = iVar5;
      FUN_00f09308(piVar13,iVar7,uVar8,0);
      uVar8 = puVar6[10];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)uVar8) {
      case '\0':
        iVar5 = *piVar13;
        uVar2 = 0;
        break;
      case '\x01':
        iVar5 = *piVar13;
        uVar2 = 1;
        break;
      case '\x02':
        iVar5 = *piVar13;
        uVar2 = 2;
        break;
      case '\x03':
        iVar5 = *piVar13;
        uVar2 = 3;
        break;
      case '\x04':
        iVar5 = *piVar13;
        uVar2 = 4;
        break;
      case '\x05':
        iVar5 = *piVar13;
        uVar2 = 5;
      }
      iVar3 = piVar13[2];
      if (iVar5 == iVar3) {
        FUN_00edff4c(piVar13,iVar3,1,1,1);
        iVar3 = piVar13[2];
        uVar2 = (char)uVar8;
      }
      uVar8 = puVar6[6];
      *(undefined1 *)(piVar13[1] + iVar3) = uVar2;
      iVar3 = iVar3 + 1;
      piVar13[2] = iVar3;
      if (uVar8 == 1) {
        uVar8 = puVar11[-1];
        uVar17 = *puVar11;
        if (*piVar13 == iVar3) {
          FUN_00edff4c(piVar13,iVar3,1,1,1);
          iVar3 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar3) = 1;
        iVar3 = iVar3 + 1;
        piVar13[2] = iVar3;
        if ((uint)(*piVar13 - iVar3) < 4) {
          FUN_00edff4c(piVar13,iVar3,4,1,1);
          iVar3 = piVar13[2];
        }
        *(uint *)(piVar13[1] + iVar3) = uVar8;
        iVar3 = iVar3 + 4;
        piVar13[2] = iVar3;
        if ((uint)(*piVar13 - iVar3) < 4) {
          FUN_00edff4c(piVar13,iVar3,4,1,1);
          iVar3 = piVar13[2];
        }
        *(uint *)(piVar13[1] + iVar3) = uVar17;
        iVar3 = iVar3 + 4;
      }
      else {
        if (*piVar13 == iVar3) {
          FUN_00edff4c(piVar13,iVar3,1,1,1);
          iVar3 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar3) = 0;
        iVar3 = iVar3 + 1;
      }
      piVar13[2] = iVar3;
      puVar11 = puVar11 + 0xc;
      puVar6 = puVar6 + 0xc;
    }
  }
  uVar8 = param_1[0x12];
  if (uVar8 == 2 && param_1[0x13] == 0) {
    iVar5 = piVar13[2];
    if (*piVar13 == iVar5) {
LAB_00e6e328:
      FUN_00edff4c(piVar13,iVar5,1,1,1);
      iVar5 = piVar13[2];
    }
LAB_00e6d684:
    *(undefined1 *)(piVar13[1] + iVar5) = 0;
    puVar6 = (uint *)(iVar5 + 1);
    piVar13[2] = (int)puVar6;
    if (param_1[0xb3] == 0x80000000) goto LAB_00e6d6a4;
LAB_00e6e41c:
    puVar11 = (uint *)param_1[0xb4];
    uVar8 = param_1[0xb5];
    if ((uint *)*piVar13 == puVar6) {
      FUN_00edff4c(piVar13,puVar6,1,1,1);
      puVar6 = (uint *)piVar13[2];
    }
    puVar16 = puVar11 + 2;
    *(undefined1 *)(piVar13[1] + (int)puVar6) = 1;
    piVar13[2] = (int)puVar6 + 1;
    for (iVar4 = uVar8 << 5; FUN_00f09308(piVar13,puVar6,uVar8,0), iVar4 != 0; iVar4 = iVar4 + -0x20
        ) {
      uVar8 = puVar11[6];
      uVar17 = puVar11[5];
      FUN_00f09308(piVar13,extraout_r1_00,uVar8,0);
      iVar5 = piVar13[2];
      if ((uint)(*piVar13 - iVar5) < uVar8) {
        FUN_00edff4c(piVar13,iVar5,uVar8,1,1);
        iVar5 = piVar13[2];
      }
      FUN_016dd1aa(piVar13[1] + iVar5,uVar17,uVar8);
      uVar17 = *puVar11;
      iVar5 = iVar5 + uVar8;
      piVar13[2] = iVar5;
      if ((uVar17 & 1) == 0) {
        if (*piVar13 == iVar5) {
          FUN_00edff4c(piVar13,iVar5,1,1,1);
          iVar5 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar5) = 0;
        iVar5 = iVar5 + 1;
      }
      else {
        uVar17 = *puVar16;
        uVar8 = puVar16[1];
        if (*piVar13 == iVar5) {
          FUN_00edff4c(piVar13,iVar5,1,1,1);
          iVar5 = piVar13[2];
        }
        *(undefined1 *)(piVar13[1] + iVar5) = 1;
        iVar5 = iVar5 + 1;
        piVar13[2] = iVar5;
        if ((uint)(*piVar13 - iVar5) < 8) {
          FUN_00edff4c(piVar13,iVar5,8,1,1);
          iVar5 = piVar13[2];
        }
        iVar3 = piVar13[1];
        *(uint *)(iVar3 + iVar5) = uVar17;
        ((uint *)(iVar3 + iVar5))[1] = uVar8;
        iVar5 = iVar5 + 8;
      }
      puVar6 = puVar11 + 8;
      uVar8 = puVar11[7];
      piVar13[2] = iVar5;
      puVar16 = puVar16 + 8;
      puVar11 = puVar6;
    }
  }
  else {
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    cVar10 = (char)param_1[0x1e];
    *(undefined1 *)(piVar13[1] + iVar4) = 1;
    iVar4 = iVar4 + 1;
    piVar13[2] = iVar4;
    if (cVar10 == '\x02') {
      if (*piVar13 == iVar4) goto LAB_00e6ec3c;
      cVar10 = '\x02';
    }
    else if (cVar10 == '\x01') {
      if (*piVar13 == iVar4) {
LAB_00e6ec3c:
        FUN_00edff4c(piVar13,iVar4,1,1,1);
        iVar4 = piVar13[2];
      }
      else {
        cVar10 = '\x01';
      }
    }
    else {
      if (*piVar13 == iVar4) goto LAB_00e6ec3c;
      cVar10 = '\0';
    }
    *(char *)(piVar13[1] + iVar4) = cVar10;
    iVar4 = iVar4 + 1;
    piVar13[2] = iVar4;
    if ((uVar8 & 1) == 0) {
      if (*piVar13 == iVar4) {
        FUN_00edff4c(piVar13,iVar4,1,1,1);
        iVar4 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar4) = 0;
      iVar5 = iVar4 + 1;
      uVar8 = param_1[0x16];
      piVar13[2] = iVar5;
      if ((uVar8 & 1) != 0) goto LAB_00e6e374;
LAB_00e6e2f0:
      if (*piVar13 == iVar5) {
        FUN_00edff4c(piVar13,iVar5,1,1,1);
        iVar5 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar5) = 0;
      iVar5 = iVar5 + 1;
      uVar8 = param_1[0x1a];
      piVar13[2] = iVar5;
    }
    else {
      uVar8 = param_1[0x14];
      uVar17 = param_1[0x15];
      if (*piVar13 == iVar4) {
        FUN_00edff4c(piVar13,iVar4,1,1,1);
        iVar4 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar4) = 1;
      iVar4 = iVar4 + 1;
      piVar13[2] = iVar4;
      if ((uint)(*piVar13 - iVar4) < 8) {
        FUN_00edff4c(piVar13,iVar4,8,1,1);
        iVar4 = piVar13[2];
      }
      iVar3 = piVar13[1];
      *(uint *)(iVar3 + iVar4) = uVar8;
      iVar5 = iVar4 + 8;
      ((uint *)(iVar3 + iVar4))[1] = uVar17;
      uVar8 = param_1[0x16];
      piVar13[2] = iVar5;
      if ((uVar8 & 1) == 0) goto LAB_00e6e2f0;
LAB_00e6e374:
      uVar8 = param_1[0x18];
      uVar17 = param_1[0x19];
      if (*piVar13 == iVar5) {
        FUN_00edff4c(piVar13,iVar5,1,1,1);
        iVar5 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar5) = 1;
      iVar4 = iVar5 + 1;
      piVar13[2] = iVar4;
      if ((uint)(*piVar13 - iVar4) < 8) {
        FUN_00edff4c(piVar13,iVar4,8,1,1);
        iVar4 = piVar13[2];
      }
      iVar3 = piVar13[1];
      *(uint *)(iVar3 + iVar4) = uVar8;
      iVar5 = iVar4 + 8;
      ((uint *)(iVar3 + iVar4))[1] = uVar17;
      uVar8 = param_1[0x1a];
      piVar13[2] = iVar5;
    }
    if ((uVar8 & 1) == 0) {
      if (*piVar13 == iVar5) goto LAB_00e6e328;
      goto LAB_00e6d684;
    }
    uVar8 = param_1[0x1c];
    uVar17 = param_1[0x1d];
    if (*piVar13 == iVar5) {
      FUN_00edff4c(piVar13,iVar5,1,1,1);
      iVar5 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar5) = 1;
    iVar5 = iVar5 + 1;
    piVar13[2] = iVar5;
    if ((uint)(*piVar13 - iVar5) < 8) {
      FUN_00edff4c(piVar13,iVar5,8,1,1);
      iVar5 = piVar13[2];
    }
    iVar4 = piVar13[1];
    puVar6 = (uint *)(iVar5 + 8);
    piVar13[2] = (int)puVar6;
    *(uint *)(iVar4 + iVar5) = uVar8;
    ((uint *)(iVar4 + iVar5))[1] = uVar17;
    if (param_1[0xb3] != 0x80000000) goto LAB_00e6e41c;
LAB_00e6d6a4:
    if ((uint *)*piVar13 == puVar6) {
      FUN_00edff4c(piVar13,puVar6,1,1,1);
      puVar6 = (uint *)piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + (int)puVar6) = 0;
    piVar13[2] = (int)puVar6 + 1;
  }
  uVar8 = param_1[0x20];
  if (uVar8 == 2 && param_1[0x21] == 0) {
    iVar5 = piVar13[2];
    if (*piVar13 == iVar5) {
LAB_00e6db68:
      FUN_00edff4c(piVar13,iVar5,1,1,1);
      iVar5 = piVar13[2];
    }
LAB_00e6d6e8:
    *(undefined1 *)(piVar13[1] + iVar5) = 0;
    iVar5 = iVar5 + 1;
    piVar13[2] = iVar5;
  }
  else {
    iVar4 = piVar13[2];
    if (*piVar13 == iVar4) {
      FUN_00edff4c(piVar13,iVar4,1,1,1);
      iVar4 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar4) = 1;
    iVar4 = iVar4 + 1;
    piVar13[2] = iVar4;
    if ((uVar8 & 1) == 0) {
      if (*piVar13 == iVar4) {
        FUN_00edff4c(piVar13,iVar4,1,1,1);
        iVar4 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar4) = 0;
      iVar5 = iVar4 + 1;
      uVar8 = param_1[0x24];
      piVar13[2] = iVar5;
      if ((uVar8 & 1) != 0) goto LAB_00e6dbb4;
LAB_00e6db04:
      if (*piVar13 == iVar5) {
        FUN_00edff4c(piVar13,iVar5,1,1,1);
        iVar5 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar5) = 0;
      iVar5 = iVar5 + 1;
      uVar8 = param_1[0x28];
      piVar13[2] = iVar5;
      if ((uVar8 & 1) == 0) goto LAB_00e6db30;
LAB_00e6dc08:
      uVar8 = param_1[0x2a];
      uVar17 = param_1[0x2b];
      if (*piVar13 == iVar5) {
        FUN_00edff4c(piVar13,iVar5,1,1,1);
        iVar5 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar5) = 1;
      iVar4 = iVar5 + 1;
      piVar13[2] = iVar4;
      if ((uint)(*piVar13 - iVar4) < 8) {
        FUN_00edff4c(piVar13,iVar4,8,1,1);
        iVar4 = piVar13[2];
      }
      iVar3 = piVar13[1];
      *(uint *)(iVar3 + iVar4) = uVar8;
      iVar5 = iVar4 + 8;
      ((uint *)(iVar3 + iVar4))[1] = uVar17;
      uVar8 = param_1[0x2c];
      piVar13[2] = iVar5;
    }
    else {
      uVar8 = param_1[0x22];
      uVar17 = param_1[0x23];
      if (*piVar13 == iVar4) {
        FUN_00edff4c(piVar13,iVar4,1,1,1);
        iVar4 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar4) = 1;
      iVar4 = iVar4 + 1;
      piVar13[2] = iVar4;
      if ((uint)(*piVar13 - iVar4) < 8) {
        FUN_00edff4c(piVar13,iVar4,8,1,1);
        iVar4 = piVar13[2];
      }
      iVar3 = piVar13[1];
      *(uint *)(iVar3 + iVar4) = uVar8;
      iVar5 = iVar4 + 8;
      ((uint *)(iVar3 + iVar4))[1] = uVar17;
      uVar8 = param_1[0x24];
      piVar13[2] = iVar5;
      if ((uVar8 & 1) == 0) goto LAB_00e6db04;
LAB_00e6dbb4:
      uVar8 = param_1[0x26];
      uVar17 = param_1[0x27];
      if (*piVar13 == iVar5) {
        FUN_00edff4c(piVar13,iVar5,1,1,1);
        iVar5 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar5) = 1;
      iVar4 = iVar5 + 1;
      piVar13[2] = iVar4;
      if ((uint)(*piVar13 - iVar4) < 8) {
        FUN_00edff4c(piVar13,iVar4,8,1,1);
        iVar4 = piVar13[2];
      }
      iVar3 = piVar13[1];
      *(uint *)(iVar3 + iVar4) = uVar8;
      iVar5 = iVar4 + 8;
      ((uint *)(iVar3 + iVar4))[1] = uVar17;
      uVar8 = param_1[0x28];
      piVar13[2] = iVar5;
      if ((uVar8 & 1) != 0) goto LAB_00e6dc08;
LAB_00e6db30:
      if (*piVar13 == iVar5) {
        FUN_00edff4c(piVar13,iVar5,1,1,1);
        iVar5 = piVar13[2];
      }
      *(undefined1 *)(piVar13[1] + iVar5) = 0;
      iVar5 = iVar5 + 1;
      uVar8 = param_1[0x2c];
      piVar13[2] = iVar5;
    }
    if ((uVar8 & 1) == 0) {
      if (*piVar13 == iVar5) goto LAB_00e6db68;
      goto LAB_00e6d6e8;
    }
    uVar8 = param_1[0x2e];
    uVar17 = param_1[0x2f];
    if (*piVar13 == iVar5) {
      FUN_00edff4c(piVar13,iVar5,1,1,1);
      iVar5 = piVar13[2];
    }
    *(undefined1 *)(piVar13[1] + iVar5) = 1;
    iVar4 = iVar5 + 1;
    piVar13[2] = iVar4;
    if ((uint)(*piVar13 - iVar4) < 8) {
      FUN_00edff4c(piVar13,iVar4,8,1,1);
      iVar4 = piVar13[2];
    }
    iVar3 = piVar13[1];
    iVar5 = iVar4 + 8;
    piVar13[2] = iVar5;
    *(uint *)(iVar3 + iVar4) = uVar8;
    ((uint *)(iVar3 + iVar4))[1] = uVar17;
  }
  uVar8 = param_1[0x8e];
  uVar17 = param_1[0x8f];
  if (uVar8 == 7 && uVar17 == 0) {
    piVar14 = (int *)*param_2;
    iVar4 = piVar14[2];
    if (*piVar14 == iVar4) {
LAB_00e6e9dc:
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
LAB_00e6dcd4:
    *(undefined1 *)(piVar14[1] + iVar4) = 0;
    piVar14[2] = iVar4 + 1;
  }
  else {
    if (*piVar13 == iVar5) {
      FUN_00edff4c(piVar13,iVar5,1,1,1);
      iVar5 = piVar13[2];
    }
    piVar14 = (int *)*param_2;
    *(undefined1 *)(piVar13[1] + iVar5) = 1;
    uVar15 = param_1[0xa1];
    piVar13[2] = iVar5 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)uVar15) {
    case '\0':
      iVar4 = *piVar14;
      uVar2 = 0;
      break;
    case '\x01':
      iVar4 = *piVar14;
      uVar2 = 1;
      break;
    case '\x02':
      iVar4 = *piVar14;
      uVar2 = 2;
      break;
    case '\x03':
      iVar4 = *piVar14;
      uVar2 = 3;
      break;
    case '\x04':
      iVar4 = *piVar14;
      uVar2 = 4;
      break;
    case '\x05':
      iVar4 = *piVar14;
      uVar2 = 5;
      break;
    case '\x06':
      iVar4 = *piVar14;
      uVar2 = 6;
      break;
    case '\a':
      iVar4 = *piVar14;
      uVar2 = 7;
    }
    iVar5 = piVar14[2];
    if (iVar4 == iVar5) {
      FUN_00edff4c(piVar14,iVar5,1,1,1);
      iVar5 = piVar14[2];
      uVar2 = (char)uVar15;
    }
    puVar12 = (undefined1 *)param_1[0x96];
    *(undefined1 *)(piVar14[1] + iVar5) = uVar2;
    iVar5 = iVar5 + 1;
    piVar14[2] = iVar5;
    if (puVar12 == &DAT_3b9aca00) {
      if (*piVar14 == iVar5) {
        FUN_00edff4c(piVar14,iVar5,1,1,1);
        iVar5 = piVar14[2];
      }
      *(undefined1 *)(piVar14[1] + iVar5) = 0;
      piVar14[2] = iVar5 + 1;
      puVar12 = (undefined1 *)param_1[0x9a];
      if (puVar12 != &DAT_3b9aca00) goto LAB_00e6e808;
LAB_00e6e8dc:
      iVar4 = piVar14[2];
      if (*piVar14 == iVar4) {
        FUN_00edff4c(piVar14,iVar4,1,1,1);
        iVar4 = piVar14[2];
      }
      *(undefined1 *)(piVar14[1] + iVar4) = 0;
      piVar14[2] = iVar4 + 1;
      if ((undefined1 *)param_1[0x9e] == &DAT_3b9aca00) goto LAB_00e6e910;
LAB_00e6e860:
      uVar20 = FUN_00ea7888(piVar14,param_1 + 0x9c);
      iVar4 = (int)((ulonglong)uVar20 >> 0x20);
      if ((int)uVar20 != 0) {
        return (int)uVar20;
      }
    }
    else {
      uVar15 = param_1[0x94];
      uVar9 = param_1[0x95];
      if (*piVar14 == iVar5) {
        FUN_00edff4c(piVar14,iVar5,1,1,1);
        iVar5 = piVar14[2];
      }
      *(undefined1 *)(piVar14[1] + iVar5) = 1;
      piVar14[2] = iVar5 + 1;
      FUN_00f09308(piVar14,iVar5,uVar15,uVar9);
      FUN_00f09308(piVar14,extraout_r1_05,puVar12,0);
      puVar12 = (undefined1 *)param_1[0x9a];
      if (puVar12 == &DAT_3b9aca00) goto LAB_00e6e8dc;
LAB_00e6e808:
      iVar4 = piVar14[2];
      uVar15 = param_1[0x98];
      uVar9 = param_1[0x99];
      if (*piVar14 == iVar4) {
        FUN_00edff4c(piVar14,iVar4,1,1,1);
        iVar4 = piVar14[2];
      }
      *(undefined1 *)(piVar14[1] + iVar4) = 1;
      piVar14[2] = iVar4 + 1;
      FUN_00f09308(piVar14,iVar4,uVar15,uVar9);
      FUN_00f09308(piVar14,extraout_r1_04,puVar12,0);
      if ((undefined1 *)param_1[0x9e] != &DAT_3b9aca00) goto LAB_00e6e860;
LAB_00e6e910:
      iVar4 = piVar14[2];
      if (*piVar14 == iVar4) {
        FUN_00edff4c(piVar14,iVar4,1,1,1);
        iVar4 = piVar14[2];
      }
      *(undefined1 *)(piVar14[1] + iVar4) = 0;
      piVar14[2] = iVar4 + 1;
    }
    FUN_00f09308(piVar14,iVar4,param_1[0xa0],0);
    iVar4 = 2;
    if ((uint)(uVar8 < 5) <= -uVar17) {
      iVar4 = uVar8 - 5;
    }
    if (iVar4 == 0) {
      iVar4 = piVar14[2];
      if (*piVar14 == iVar4) goto LAB_00e6e9dc;
      goto LAB_00e6dcd4;
    }
    if (iVar4 == 1) {
      iVar4 = piVar14[2];
      uVar8 = param_1[0x90];
      uVar17 = param_1[0x91];
      if (*piVar14 == iVar4) {
        FUN_00edff4c(piVar14,iVar4,1,1,1);
        iVar4 = piVar14[2];
      }
      *(undefined1 *)(piVar14[1] + iVar4) = 1;
      iVar4 = iVar4 + 1;
      piVar14[2] = iVar4;
      if ((uint)(*piVar14 - iVar4) < 8) {
        FUN_00edff4c(piVar14,iVar4,8,1,1);
        iVar4 = piVar14[2];
      }
      iVar5 = piVar14[1];
      piVar14[2] = iVar4 + 8;
      *(uint *)(iVar5 + iVar4) = uVar8;
      ((uint *)(iVar5 + iVar4))[1] = uVar17;
    }
    else {
      iVar4 = piVar14[2];
      if (*piVar14 == iVar4) {
        FUN_00edff4c(piVar14,iVar4,1,1,1);
        iVar4 = piVar14[2];
      }
      *(undefined1 *)(piVar14[1] + iVar4) = 2;
      piVar14[2] = iVar4 + 1;
      FUN_00efdc3c(param_1 + 0x8e,piVar14);
    }
  }
  uVar8 = param_1[0xa2];
  uVar17 = param_1[0xa3];
  if (uVar8 != 0xb || uVar17 != 0) {
    iVar4 = piVar14[2];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 1;
    iVar5 = 4;
    piVar14[2] = iVar4 + 1;
    if ((uint)(uVar8 < 5) <= -uVar17) {
      iVar5 = uVar8 - 5;
    }
                    /* WARNING: Could not recover jumptable at 0x00e6de08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (*(code *)(&DAT_00e6de0c + *(int *)(&DAT_00e6de0c + iVar5 * 4)))(param_1 + 0xa2);
    return iVar4;
  }
  iVar4 = piVar14[2];
  if (*piVar14 == iVar4) {
    FUN_00edff4c(piVar14,iVar4,1,1,1);
    iVar4 = piVar14[2];
  }
  *(undefined1 *)(piVar14[1] + iVar4) = 0;
  piVar14[2] = iVar4 + 1;
  uVar8 = param_1[0x30];
  if (uVar8 == 2 && param_1[0x31] == 0) {
    iVar4 = piVar14[2];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 0;
    piVar14[2] = iVar4 + 1;
    goto LAB_00e6e1b0;
  }
  iVar4 = piVar14[2];
  if (*piVar14 == iVar4) {
    FUN_00edff4c(piVar14,iVar4,1,1,1);
    iVar4 = piVar14[2];
  }
  uVar17 = param_1[0x44];
  *(undefined1 *)(piVar14[1] + iVar4) = 1;
  iVar4 = iVar4 + 1;
  piVar14[2] = iVar4;
  if ((short)uVar17 == 1) {
    uVar1 = *(undefined2 *)((int)param_1 + 0x112);
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 1;
    piVar14[2] = iVar4 + 1;
    FUN_00f09308(piVar14,iVar4,uVar1,0);
    if ((short)param_1[0x45] != 1) goto LAB_00e6dec8;
LAB_00e6e064:
    iVar4 = piVar14[2];
    uVar1 = *(undefined2 *)((int)param_1 + 0x116);
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 1;
    piVar14[2] = iVar4 + 1;
    FUN_00f09308(piVar14,iVar4,uVar1,0);
    if (param_1[0x38] == 0x80000000) goto LAB_00e6e0a8;
LAB_00e6def8:
    iVar4 = piVar14[2];
    uVar17 = param_1[0x39];
    uVar15 = param_1[0x3a];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 1;
    piVar14[2] = iVar4 + 1;
    FUN_00f09308(piVar14,iVar4,uVar15,0);
    iVar4 = piVar14[2];
    if ((uint)(*piVar14 - iVar4) < uVar15) {
      FUN_00edff4c(piVar14,iVar4,uVar15,1,1);
      iVar4 = piVar14[2];
    }
    FUN_016dd1aa(piVar14[1] + iVar4,uVar17,uVar15);
    iVar4 = iVar4 + uVar15;
    uVar17 = param_1[0x3b];
    piVar14[2] = iVar4;
    if (uVar17 != 0x80000000) goto LAB_00e6df70;
LAB_00e6e0d8:
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    iVar5 = iVar4 + 1;
    *(undefined1 *)(piVar14[1] + iVar4) = 0;
    piVar14[2] = iVar5;
    if ((uVar8 & 1) != 0) goto LAB_00e6e100;
LAB_00e6dfe0:
    if (*piVar14 == iVar5) {
      FUN_00edff4c(piVar14,iVar5,1,1,1);
      iVar5 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar5) = 0;
    piVar14[2] = iVar5 + 1;
    if ((param_1[0x34] & 1) == 0) goto LAB_00e6e00c;
LAB_00e6e150:
    iVar4 = piVar14[2];
    dVar19 = *(double *)(param_1 + 0x36);
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    uVar18 = FUN_016d6168(SUB84(dVar19 * 1000.0,0));
    *(undefined1 *)(piVar14[1] + iVar4) = 1;
    piVar14[2] = iVar4 + 1;
    FUN_00f09308(piVar14,1,
                 (uint)(0.0 < (double)CONCAT44(extraout_s1_00,uVar18)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1_00,uVar18),0);
  }
  else {
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 0;
    piVar14[2] = iVar4 + 1;
    if ((short)param_1[0x45] == 1) goto LAB_00e6e064;
LAB_00e6dec8:
    iVar4 = piVar14[2];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 0;
    piVar14[2] = iVar4 + 1;
    if (param_1[0x38] != 0x80000000) goto LAB_00e6def8;
LAB_00e6e0a8:
    iVar4 = piVar14[2];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 0;
    iVar4 = iVar4 + 1;
    uVar17 = param_1[0x3b];
    piVar14[2] = iVar4;
    if (uVar17 == 0x80000000) goto LAB_00e6e0d8;
LAB_00e6df70:
    uVar17 = param_1[0x3c];
    uVar15 = param_1[0x3d];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 1;
    piVar14[2] = iVar4 + 1;
    FUN_00f09308(piVar14,iVar4,uVar15,0);
    iVar5 = piVar14[2];
    if ((uint)(*piVar14 - iVar5) < uVar15) {
      FUN_00edff4c(piVar14,iVar5,uVar15,1,1);
      iVar5 = piVar14[2];
    }
    FUN_016dd1aa(piVar14[1] + iVar5,uVar17,uVar15);
    iVar5 = iVar5 + uVar15;
    piVar14[2] = iVar5;
    if ((uVar8 & 1) == 0) goto LAB_00e6dfe0;
LAB_00e6e100:
    dVar19 = *(double *)(param_1 + 0x32);
    if (*piVar14 == iVar5) {
      FUN_00edff4c(piVar14,iVar5,1,1,1);
      iVar5 = piVar14[2];
    }
    uVar18 = FUN_016d6168(SUB84(dVar19 * 1000.0,0));
    *(undefined1 *)(piVar14[1] + iVar5) = 1;
    piVar14[2] = iVar5 + 1;
    FUN_00f09308(piVar14,1,
                 (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar18)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1,uVar18),0);
    if ((param_1[0x34] & 1) != 0) goto LAB_00e6e150;
LAB_00e6e00c:
    iVar4 = piVar14[2];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 0;
    piVar14[2] = iVar4 + 1;
  }
  FUN_00e66944(piVar14,param_1 + 0x3e);
  FUN_00e66944(piVar14,param_1 + 0x41);
LAB_00e6e1b0:
  if (param_1[0x46] == 2 && param_1[0x47] == 0) {
    iVar4 = piVar14[2];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 0;
    piVar14[2] = iVar4 + 1;
  }
  else {
    iVar4 = piVar14[2];
    if (*piVar14 == iVar4) {
      FUN_00edff4c(piVar14,iVar4,1,1,1);
      iVar4 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar4) = 1;
    piVar14[2] = iVar4 + 1;
    iVar4 = FUN_00e70e68(param_1 + 0x46,piVar14);
    if (iVar4 != 0) {
      return iVar4;
    }
    if ((undefined1 *)param_1[0x86] == &DAT_3b9aca00) {
      iVar4 = piVar14[2];
      if (*piVar14 == iVar4) {
        FUN_00edff4c(piVar14,iVar4,1,1,1);
        iVar4 = piVar14[2];
      }
      *(undefined1 *)(piVar14[1] + iVar4) = 0;
      piVar14[2] = iVar4 + 1;
    }
    else {
      uVar20 = FUN_00ea7888(piVar14,param_1 + 0x84);
      iVar4 = (int)((ulonglong)uVar20 >> 0x20);
      if ((int)uVar20 != 0) {
        return (int)uVar20;
      }
    }
    FUN_00f09308(piVar14,iVar4,param_1[0x80],param_1[0x81]);
    FUN_00f09308(piVar14,extraout_r1_01,param_1[0x82],param_1[0x83]);
    iVar4 = extraout_r1_02;
  }
  uVar17 = param_1[0xac];
  uVar8 = param_1[0xab];
  FUN_00f09308(piVar14,iVar4,uVar17,0);
  iVar4 = uVar17 * 0x2e0;
  uVar18 = extraout_r1_03;
  do {
    if (iVar4 == 0) {
      uVar8 = param_1[0xaf];
      puVar12 = (undefined1 *)param_1[0xae];
      FUN_00f09308(piVar14,uVar18,uVar8,0);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        FUN_00e666d4(*puVar12,piVar14);
        puVar12 = puVar12 + 1;
      }
      return 0;
    }
    uVar20 = FUN_00e6d378(uVar8,param_2);
    uVar18 = (undefined4)((ulonglong)uVar20 >> 0x20);
    iVar4 = iVar4 + -0x2e0;
    uVar8 = uVar8 + 0x2e0;
  } while ((int)uVar20 == 0);
  return (int)uVar20;
}

