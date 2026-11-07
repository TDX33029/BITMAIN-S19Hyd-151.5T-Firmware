// FUN_010a4108 @ 010a4108 size=2364 calls_out=3 calls_in=2
// strings: 

void FUN_010a4108(undefined1 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined1 uVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  
  if (7 < param_3) {
switchD_010a4124_caseD_1:
    if (0xe < param_3) {
      iVar6 = FUN_016d38c8(param_3,1);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_3);
      }
      uVar10 = 0;
      do {
        if ((&DAT_0038606e)[param_2[uVar10]] == '\0') {
          thunk_FUN_016d3fb4();
          *param_1 = 0xb;
          return;
        }
        *(undefined *)(iVar6 + uVar10) = (&DAT_0038606e)[param_2[uVar10]];
        uVar10 = uVar10 + 1;
      } while (param_3 != uVar10);
      *(int *)(param_1 + 4) = iVar6;
      *(uint *)(param_1 + 8) = param_3;
      *param_1 = 10;
      return;
    }
    cVar7 = '\0';
    cVar16 = '\0';
    cVar9 = '\0';
    cVar19 = '\0';
    cVar18 = '\0';
    cVar13 = '\0';
    cVar12 = '\0';
    cVar11 = '\0';
    cVar17 = '\0';
    cVar14 = '\0';
    cVar5 = '\0';
    cVar4 = '\0';
    cVar3 = '\0';
    cVar2 = '\0';
    if (param_3 == 0) goto LAB_010a42b0;
    uVar15 = 0xb;
    cVar14 = (&DAT_0038606e)[*param_2];
    if (cVar14 == '\0') goto LAB_010a4308;
    cVar11 = '\0';
    cVar17 = '\0';
    if (param_3 == 1) {
LAB_010a4294:
      cVar7 = '\0';
      cVar12 = '\0';
LAB_010a42a8:
      cVar5 = '\0';
      cVar4 = '\0';
      cVar19 = '\0';
      cVar13 = '\0';
      cVar3 = '\0';
      cVar2 = '\0';
    }
    else {
      cVar17 = (&DAT_0038606e)[param_2[1]];
      if (cVar17 == '\0') goto LAB_010a4308;
      if (param_3 == 2) goto LAB_010a4294;
      cVar11 = (&DAT_0038606e)[param_2[2]];
      if (cVar11 == '\0') goto LAB_010a4308;
      if (param_3 == 3) goto LAB_010a4294;
      cVar7 = (&DAT_0038606e)[param_2[3]];
      if (cVar7 == '\0') goto LAB_010a4308;
      cVar12 = '\0';
      if (param_3 == 4) goto LAB_010a42a8;
      cVar12 = (&DAT_0038606e)[param_2[4]];
      if (cVar12 == '\0') goto LAB_010a4308;
      if (param_3 == 5) goto LAB_010a42a8;
      cVar13 = (&DAT_0038606e)[param_2[5]];
      if (cVar13 == '\0') goto LAB_010a4308;
      if (param_3 == 6) {
        cVar5 = '\0';
        cVar19 = '\0';
        cVar4 = '\0';
        cVar3 = '\0';
        cVar2 = '\0';
      }
      else {
        cVar18 = (&DAT_0038606e)[param_2[6]];
        if (cVar18 == '\0') {
LAB_010a4a1c:
          *param_1 = 0xb;
          return;
        }
        if (param_3 == 7) {
          cVar19 = '\0';
          cVar4 = '\0';
          cVar3 = '\0';
          cVar2 = '\0';
          cVar16 = '\0';
          cVar9 = '\0';
        }
        else {
          cVar19 = (&DAT_0038606e)[param_2[7]];
          if (cVar19 == '\0') goto LAB_010a4a1c;
          if (param_3 == 8) {
            cVar5 = '\0';
            cVar4 = '\0';
            cVar3 = '\0';
            cVar2 = '\0';
            goto LAB_010a42b0;
          }
          cVar9 = (&DAT_0038606e)[param_2[8]];
          if (cVar9 == '\0') goto LAB_010a4a1c;
          cVar16 = '\0';
          if (param_3 != 9) {
            cVar16 = (&DAT_0038606e)[param_2[9]];
            if (cVar16 == '\0') goto LAB_010a4a1c;
            if (param_3 != 10) {
              cVar2 = (&DAT_0038606e)[param_2[10]];
              if (cVar2 == '\0') goto LAB_010a4a1c;
              if (param_3 == 0xb) {
                cVar4 = '\0';
                cVar3 = '\0';
              }
              else {
                cVar3 = (&DAT_0038606e)[param_2[0xb]];
                if (cVar3 == '\0') goto LAB_010a4a1c;
                if (param_3 == 0xc) {
                  cVar4 = '\0';
                }
                else {
                  cVar4 = (&DAT_0038606e)[param_2[0xc]];
                  if (cVar4 == '\0') goto LAB_010a4a1c;
                  if (param_3 != 0xd) {
                    cVar5 = (&DAT_0038606e)[param_2[0xd]];
                    if (cVar5 == '\0') goto LAB_010a4308;
                    goto LAB_010a42b0;
                  }
                }
              }
              goto LAB_010a48c4;
            }
          }
          cVar4 = '\0';
          cVar3 = '\0';
          cVar2 = '\0';
        }
LAB_010a48c4:
        cVar5 = '\0';
      }
    }
LAB_010a42b0:
    uVar15 = 9;
    param_1[0xf] = 0;
    param_1[0xe] = cVar5;
    param_1[0xd] = cVar4;
    param_1[0xc] = cVar3;
    param_1[0x10] = (char)param_3;
    param_1[0xb] = cVar2;
    param_1[10] = cVar16;
    param_1[9] = cVar9;
    param_1[8] = cVar19;
    param_1[7] = cVar18;
    param_1[6] = cVar13;
    param_1[5] = cVar12;
    param_1[4] = cVar7;
    param_1[3] = cVar11;
    param_1[2] = cVar17;
    param_1[1] = cVar14;
LAB_010a4308:
    *param_1 = uVar15;
    return;
  }
  uVar10 = (&switchD_010a4124::switchdataD_010a4128)[param_3];
  switch(param_3) {
  case 0:
    *param_1 = 0xb;
    return;
  default:
    goto switchD_010a4124_caseD_1;
  case 3:
    uVar8 = (uint)*param_2;
    if (uVar8 == 0x47) {
      bVar1 = param_2[1];
      bVar20 = bVar1 == 0x45;
      if (bVar20) {
        bVar1 = param_2[2];
      }
      if (bVar20 && bVar1 == 0x54) {
        *param_1 = 1;
        return;
      }
    }
    else {
      if (uVar8 == 0x50) {
        uVar10 = (uint)param_2[1];
      }
      if ((uVar8 == 0x50 && uVar10 == 0x55) && (param_2[2] == 0x54)) {
        *param_1 = 3;
        return;
      }
    }
    cVar14 = (&DAT_0038606e)[uVar8];
    uVar15 = 0xb;
    if (((cVar14 == '\0') || (cVar17 = (&DAT_0038606e)[param_2[1]], cVar17 == '\0')) ||
       ((&DAT_0038606e)[param_2[2]] == '\0')) goto LAB_010a4720;
    param_1[3] = (&DAT_0038606e)[param_2[2]];
    uVar15 = 3;
    param_1[2] = cVar17;
    param_1[1] = cVar14;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    break;
  case 4:
    uVar8 = (uint)*param_2;
    if (uVar8 == 0x48) {
      if (param_2[1] == 0x45) {
        bVar1 = param_2[2];
        bVar20 = bVar1 == 0x41;
        if (bVar20) {
          bVar1 = param_2[3];
        }
        if (bVar20 && bVar1 == 0x44) {
          *param_1 = 5;
          return;
        }
      }
    }
    else {
      if (uVar8 == 0x50) {
        uVar10 = (uint)param_2[1];
      }
      if (uVar8 == 0x50 && uVar10 == 0x4f) {
        bVar1 = param_2[2];
        bVar20 = bVar1 == 0x53;
        if (bVar20) {
          bVar1 = param_2[3];
        }
        if (bVar20 && bVar1 == 0x54) {
          *param_1 = 2;
          return;
        }
      }
    }
    cVar14 = (&DAT_0038606e)[uVar8];
    uVar15 = 0xb;
    if (((cVar14 == '\0') || (cVar17 = (&DAT_0038606e)[param_2[1]], cVar17 == '\0')) ||
       ((cVar11 = (&DAT_0038606e)[param_2[2]], cVar11 == '\0' ||
        ((&DAT_0038606e)[param_2[3]] == '\0')))) goto LAB_010a4720;
    param_1[4] = (&DAT_0038606e)[param_2[3]];
    *(undefined4 *)(param_1 + 9) = 0;
    uVar15 = 4;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[3] = cVar11;
    param_1[2] = cVar17;
    param_1[1] = cVar14;
    *(undefined4 *)(param_1 + 0xc) = 0;
    break;
  case 5:
    uVar8 = (uint)*param_2;
    if (uVar8 == 0x50) {
      bVar1 = param_2[1];
      bVar20 = bVar1 == 0x41;
      if (bVar20) {
        bVar1 = param_2[2];
      }
      if (bVar20 && bVar1 == 0x54) {
        bVar1 = param_2[3];
        bVar20 = bVar1 == 0x43;
        if (bVar20) {
          bVar1 = param_2[4];
        }
        if (bVar20 && bVar1 == 0x48) {
          *param_1 = 8;
          return;
        }
      }
    }
    else {
      if (uVar8 == 0x54) {
        uVar10 = (uint)param_2[1];
      }
      if ((uVar8 == 0x54 && uVar10 == 0x52) && (param_2[2] == 0x41)) {
        bVar1 = param_2[3];
        bVar20 = bVar1 == 0x43;
        if (bVar20) {
          bVar1 = param_2[4];
        }
        if (bVar20 && bVar1 == 0x45) {
          *param_1 = 6;
          return;
        }
      }
    }
    cVar14 = (&DAT_0038606e)[uVar8];
    uVar15 = 0xb;
    if ((((cVar14 == '\0') || (cVar17 = (&DAT_0038606e)[param_2[1]], cVar17 == '\0')) ||
        (cVar11 = (&DAT_0038606e)[param_2[2]], cVar11 == '\0')) ||
       ((cVar7 = (&DAT_0038606e)[param_2[3]], cVar7 == '\0' || ((&DAT_0038606e)[param_2[4]] == '\0')
        ))) goto LAB_010a4720;
    param_1[5] = (&DAT_0038606e)[param_2[4]];
    *(undefined4 *)(param_1 + 6) = 0;
    uVar15 = 5;
    param_1[4] = cVar7;
    param_1[3] = cVar11;
    param_1[2] = cVar17;
    param_1[1] = cVar14;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    break;
  case 6:
    bVar20 = *param_2 == 0x44;
    if (bVar20) {
      uVar10 = (uint)param_2[1];
    }
    bVar21 = bVar20 && uVar10 == 0x45;
    if (bVar20 && uVar10 == 0x45) {
      bVar21 = param_2[2] == 0x4c;
    }
    if ((bVar21) && (param_2[3] == 0x45)) {
      bVar1 = param_2[4];
      bVar20 = bVar1 == 0x54;
      if (bVar20) {
        bVar1 = param_2[5];
      }
      if (bVar20 && bVar1 == 0x45) {
        *param_1 = 4;
        return;
      }
    }
    cVar14 = (&DAT_0038606e)[*param_2];
    uVar15 = 0xb;
    if ((((cVar14 == '\0') || (cVar17 = (&DAT_0038606e)[param_2[1]], cVar17 == '\0')) ||
        (cVar11 = (&DAT_0038606e)[param_2[2]], cVar11 == '\0')) ||
       (((cVar7 = (&DAT_0038606e)[param_2[3]], cVar7 == '\0' ||
         (cVar12 = (&DAT_0038606e)[param_2[4]], cVar12 == '\0')) ||
        ((&DAT_0038606e)[param_2[5]] == '\0')))) goto LAB_010a4720;
    param_1[6] = (&DAT_0038606e)[param_2[5]];
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[5] = cVar12;
    param_1[4] = cVar7;
    param_1[3] = cVar11;
    param_1[2] = cVar17;
    param_1[1] = cVar14;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 0xf) = 0x600;
    goto LAB_010a471c;
  case 7:
    uVar8 = (uint)*param_2;
    if (uVar8 == 0x43) {
      bVar1 = param_2[1];
      bVar20 = bVar1 == 0x4f;
      if (bVar20) {
        bVar1 = param_2[2];
      }
      if (bVar20 && bVar1 == 0x4e) {
        bVar1 = param_2[3];
        bVar20 = bVar1 == 0x4e;
        if (bVar20) {
          bVar1 = param_2[4];
        }
        if (bVar20 && bVar1 == 0x45) {
          bVar1 = param_2[5];
          bVar20 = bVar1 == 0x43;
          if (bVar20) {
            bVar1 = param_2[6];
          }
          if (bVar20 && bVar1 == 0x54) {
            *param_1 = 7;
            return;
          }
        }
      }
    }
    else {
      if (uVar8 == 0x4f) {
        uVar10 = (uint)param_2[1];
      }
      if ((uVar8 == 0x4f && uVar10 == 0x50) && (param_2[2] == 0x54)) {
        bVar1 = param_2[3];
        bVar20 = bVar1 == 0x49;
        if (bVar20) {
          bVar1 = param_2[4];
        }
        if (bVar20 && bVar1 == 0x4f) {
          bVar1 = param_2[5];
          bVar20 = bVar1 == 0x4e;
          if (bVar20) {
            bVar1 = param_2[6];
          }
          if (bVar20 && bVar1 == 0x53) {
            *param_1 = 0;
            return;
          }
        }
      }
    }
    cVar14 = (&DAT_0038606e)[uVar8];
    uVar15 = 0xb;
    if ((((cVar14 == '\0') || (cVar17 = (&DAT_0038606e)[param_2[1]], cVar17 == '\0')) ||
        (cVar11 = (&DAT_0038606e)[param_2[2]], cVar11 == '\0')) ||
       (((cVar7 = (&DAT_0038606e)[param_2[3]], cVar7 == '\0' ||
         (cVar12 = (&DAT_0038606e)[param_2[4]], cVar12 == '\0')) ||
        ((cVar13 = (&DAT_0038606e)[param_2[5]], cVar13 == '\0' ||
         ((&DAT_0038606e)[param_2[6]] == '\0')))))) goto LAB_010a4720;
    param_1[7] = (&DAT_0038606e)[param_2[6]];
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0x10] = 7;
    param_1[6] = cVar13;
    param_1[5] = cVar12;
    param_1[4] = cVar7;
    param_1[3] = cVar11;
    param_1[2] = cVar17;
    param_1[1] = cVar14;
    goto LAB_010a471c;
  }
  param_1[0x10] = uVar15;
LAB_010a471c:
  uVar15 = 9;
LAB_010a4720:
  *param_1 = uVar15;
  return;
}

