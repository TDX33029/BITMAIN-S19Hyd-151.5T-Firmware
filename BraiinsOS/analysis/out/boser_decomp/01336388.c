// FUN_01336388 @ 01336388 size=2452 calls_out=6 calls_in=3
// strings: (?s:.)StartTextEndTextStartLineEndLineLeftWordHalfBoundaryRightWordBoundaryRightWordHalfBoundaryWordBoundaryNotWordBoundary

void FUN_01336388(uint *param_1,int *param_2,byte param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *local_30;
  uint **local_2c;
  code *local_28;
  
  uVar1 = 9;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  local_30 = param_1;
  switch(uVar1) {
  case 0:
    goto switchD_013363c0_caseD_0;
  case 1:
    uVar1 = 1;
    pcVar2 = ".";
    iVar7 = param_2[2];
    if ((char)param_1[1] != '\0') {
      uVar1 = 6;
      pcVar2 = 
      "(?s:.)StartTextEndTextStartLineEndLineLeftWordHalfBoundaryRightWordBoundaryRightWordHalfBoundaryWordBoundaryNotWordBoundary"
      ;
    }
    if ((uint)(*param_2 - iVar7) < uVar1) {
      FUN_006520b4(param_2,iVar7,uVar1,1,1);
      iVar7 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar7,pcVar2,uVar1);
    iVar7 = param_2[2] + uVar1;
    goto LAB_013367e8;
  case 2:
    switch((char)param_1[1]) {
    case '\0':
      iVar7 = param_2[2];
      iVar5 = iVar7;
      if (*param_2 == iVar7) {
        FUN_006520b4(param_2,iVar7,1,1,1);
        iVar5 = param_2[2];
      }
      iVar3 = param_2[1];
      uVar9 = 0x5e;
      break;
    case '\x01':
      iVar7 = param_2[2];
      iVar5 = iVar7;
      if (*param_2 == iVar7) {
        FUN_006520b4(param_2,iVar7,1,1,1);
        iVar5 = param_2[2];
      }
      iVar3 = param_2[1];
      uVar9 = 0x24;
      break;
    case '\x02':
      iVar7 = param_2[2];
      if (*(char *)((int)param_1 + 5) == '\0') {
        if ((uint)(*param_2 - iVar7) < 6) {
          FUN_006520b4(param_2,iVar7,6,1,1);
          iVar7 = param_2[2];
        }
        puVar4 = (undefined4 *)(param_2[1] + iVar7);
        *puVar4 = 0x3a6d3f28;
        uVar6 = 0x295e;
LAB_013369f0:
        *(undefined2 *)(puVar4 + 1) = uVar6;
        iVar7 = param_2[2] + 6;
        goto LAB_013367e8;
      }
      if ((uint)(*param_2 - iVar7) < 7) {
        FUN_006520b4(param_2,iVar7,7,1,1);
        iVar7 = param_2[2];
      }
      puVar4 = (undefined4 *)(param_2[1] + iVar7);
      *puVar4 = 0x6d523f28;
      uVar8 = 0x295e3a6d;
      goto LAB_01336964;
    case '\x03':
      iVar7 = param_2[2];
      if (*(char *)((int)param_1 + 5) == '\0') {
        if ((uint)(*param_2 - iVar7) < 6) {
          FUN_006520b4(param_2,iVar7,6,1,1);
          iVar7 = param_2[2];
        }
        puVar4 = (undefined4 *)(param_2[1] + iVar7);
        *puVar4 = 0x3a6d3f28;
        uVar6 = 0x2924;
        goto LAB_013369f0;
      }
      if ((uint)(*param_2 - iVar7) < 7) {
        FUN_006520b4(param_2,iVar7,7,1,1);
        iVar7 = param_2[2];
      }
      puVar4 = (undefined4 *)(param_2[1] + iVar7);
      *puVar4 = 0x6d523f28;
      uVar8 = 0x29243a6d;
LAB_01336964:
      *(undefined4 *)((int)puVar4 + 3) = uVar8;
      iVar7 = param_2[2] + 7;
      goto LAB_013367e8;
    default:
      goto switchD_013363c0_caseD_7;
    }
    goto LAB_013367e0;
  case 3:
    if ((char)param_1[4] == '\0') {
      FUN_01337898(param_2,param_1[2],param_1[3]);
      return;
    }
    iVar7 = param_2[2];
    if ((uint)(*param_2 - iVar7) < 4) {
      FUN_006520b4(param_2,iVar7,4,1,1);
      iVar7 = param_2[2];
    }
    *(undefined4 *)(param_2[1] + iVar7) = 0x3a693f28;
    uVar1 = param_1[2];
    uVar11 = param_1[3];
    param_2[2] = param_2[2] + 4;
    FUN_01337898(param_2,uVar1,uVar11);
    break;
  case 4:
    if (1 < param_3) {
      iVar7 = param_2[2];
      if ((uint)(*param_2 - iVar7) < 3) {
        FUN_006520b4(param_2,iVar7,3,1,1);
        iVar7 = param_2[2];
      }
      iVar3 = param_2[1];
      *(undefined2 *)(iVar3 + iVar7) = 0x3f28;
      *(undefined1 *)((undefined2 *)(iVar3 + iVar7) + 1) = 0x3a;
      param_2[2] = param_2[2] + 3;
    }
    if (param_1[3] != 0) {
      uVar1 = param_1[2];
      iVar7 = param_1[3] * 0x14;
      do {
        FUN_01336388(uVar1,param_2,2);
        uVar1 = uVar1 + 0x14;
        iVar7 = iVar7 + -0x14;
      } while (iVar7 != 0);
    }
    if (param_3 < 2) {
      return;
    }
    break;
  case 5:
    if (param_3 != 0) {
      iVar7 = param_2[2];
      if ((uint)(*param_2 - iVar7) < 3) {
        FUN_006520b4(param_2,iVar7,3,1,1);
        iVar7 = param_2[2];
      }
      iVar3 = param_2[1];
      *(undefined2 *)(iVar3 + iVar7) = 0x3f28;
      *(undefined1 *)((undefined2 *)(iVar3 + iVar7) + 1) = 0x3a;
      param_2[2] = param_2[2] + 3;
    }
    if (param_1[3] != 0) {
      iVar3 = 0;
      iVar7 = param_1[3] * 0x14;
      uVar1 = param_1[2];
      do {
        if (iVar3 != 0) {
          iVar10 = param_2[2];
          iVar5 = iVar10;
          if (*param_2 == iVar10) {
            FUN_006520b4(param_2,iVar10,1,1,1);
            iVar5 = param_2[2];
          }
          *(undefined1 *)(param_2[1] + iVar5) = 0x7c;
          param_2[2] = iVar10 + 1;
        }
        FUN_01336388(uVar1,param_2,1);
        iVar3 = iVar3 + -1;
        iVar7 = iVar7 + -0x14;
        uVar1 = uVar1 + 0x14;
      } while (iVar7 != 0);
    }
    if (param_3 == 0) {
      return;
    }
    break;
  case 6:
    iVar3 = param_2[2];
    iVar7 = iVar3;
    if (*param_2 == iVar3) {
      FUN_006520b4(param_2,iVar3,1,1,1);
      iVar7 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar7) = 0x28;
    uVar1 = param_1[1];
    param_2[2] = iVar3 + 1;
    FUN_01336388(uVar1,param_2,0);
    break;
  default:
switchD_013363c0_caseD_7:
    local_2c = &local_30;
    local_28 = FUN_01337068;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005b5f67,&local_2c,&DAT_01ce661c);
  case 8:
    uVar11 = param_1[2];
    uVar12 = param_1[3];
    uVar1 = param_1[4];
    if (param_3 == 3) {
      iVar7 = param_2[2];
      if ((uint)(*param_2 - iVar7) < 3) {
        FUN_006520b4(param_2,iVar7,3,1,1);
        iVar7 = param_2[2];
      }
      iVar3 = param_2[1];
      *(undefined2 *)(iVar3 + iVar7) = 0x3f28;
      *(undefined1 *)((undefined2 *)(iVar3 + iVar7) + 1) = 0x3a;
      param_2[2] = param_2[2] + 3;
    }
    FUN_01336388(param_1[1],param_2,3);
    if (uVar11 == 0) {
      if (uVar12 == 0xffffffff) {
        iVar3 = param_2[2];
        iVar7 = iVar3;
        if (*param_2 == iVar3) {
          FUN_006520b4(param_2,iVar3,1,1,1);
          iVar7 = param_2[2];
        }
        iVar5 = param_2[1];
        uVar9 = 0x2a;
      }
      else {
        if (uVar12 != 1) goto LAB_013364b4;
        iVar3 = param_2[2];
        iVar7 = iVar3;
        if (*param_2 == iVar3) {
          FUN_006520b4(param_2,iVar3,1,1,1);
          iVar7 = param_2[2];
        }
        iVar5 = param_2[1];
        uVar9 = 0x3f;
      }
    }
    else if (uVar11 == 1 && uVar12 == 0xffffffff) {
      iVar3 = param_2[2];
      iVar7 = iVar3;
      if (*param_2 == iVar3) {
        FUN_006520b4(param_2,iVar3,1,1,1);
        iVar7 = param_2[2];
      }
      iVar5 = param_2[1];
      uVar9 = 0x2b;
    }
    else {
LAB_013364b4:
      iVar3 = param_2[2];
      iVar7 = iVar3;
      if (*param_2 == iVar3) {
        FUN_006520b4(param_2,iVar3,1,1,1);
        iVar7 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar7) = 0x7b;
      param_2[2] = iVar3 + 1;
      FUN_01337af0(param_2,uVar11);
      iVar3 = param_2[2];
      if (uVar11 != uVar12) {
        iVar7 = iVar3;
        if (*param_2 == iVar3) {
          FUN_006520b4(param_2,iVar3,1,1,1);
          iVar7 = param_2[2];
        }
        iVar3 = iVar3 + 1;
        *(undefined1 *)(param_2[1] + iVar7) = 0x2c;
        param_2[2] = iVar3;
        if (uVar12 != 0xffffffff) {
          FUN_01337af0(param_2,uVar12);
          iVar3 = param_2[2];
        }
      }
      iVar7 = iVar3;
      if (*param_2 == iVar3) {
        FUN_006520b4(param_2,iVar3,1,1,1);
        iVar7 = param_2[2];
      }
      iVar5 = param_2[1];
      uVar9 = 0x7d;
    }
    iVar10 = iVar3 + 1;
    *(undefined1 *)(iVar5 + iVar7) = uVar9;
    param_2[2] = iVar10;
    iVar7 = iVar10;
    if ((char)uVar1 == '\0') {
      if (*param_2 == iVar10) {
        FUN_006520b4(param_2,iVar10,1,1,1);
        iVar10 = param_2[2];
      }
      iVar7 = iVar3 + 2;
      *(undefined1 *)(param_2[1] + iVar10) = 0x3f;
      param_2[2] = iVar7;
    }
    if (param_3 != 3) {
      return;
    }
    iVar3 = *param_2;
    goto LAB_013367cc;
  case 9:
    if ((char)param_1[4] != '\0') {
      iVar7 = param_2[2];
      if ((uint)(*param_2 - iVar7) < 4) {
        FUN_006520b4(param_2,iVar7,4,1,1);
        iVar7 = param_2[2];
      }
      *(undefined4 *)(param_2[1] + iVar7) = 0x3a693f28;
      uVar1 = param_1[1];
      uVar11 = param_1[2];
      iVar7 = param_2[2] + 4;
      param_2[2] = iVar7;
      if ((uint)(*param_2 - iVar7) < uVar11) {
        FUN_006520b4(param_2,iVar7,uVar11,1,1);
        iVar7 = param_2[2];
      }
      FUN_01bed4e2(param_2[1] + iVar7,uVar1,uVar11);
      iVar3 = *param_2;
      iVar7 = param_2[2] + uVar11;
      param_2[2] = iVar7;
      goto LAB_013367cc;
    }
    iVar7 = param_2[2];
    uVar1 = param_1[1];
    uVar11 = param_1[2];
    if ((uint)(*param_2 - iVar7) < uVar11) {
      FUN_006520b4(param_2,iVar7,uVar11,1,1);
      iVar7 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar7,uVar1,uVar11);
    iVar7 = param_2[2] + uVar11;
    goto LAB_013367e8;
  }
  iVar3 = *param_2;
  iVar7 = param_2[2];
LAB_013367cc:
  iVar5 = iVar7;
  if (iVar3 == iVar7) {
    FUN_006520b4(param_2,iVar7,1,1,1);
    iVar5 = param_2[2];
  }
  iVar3 = param_2[1];
  uVar9 = 0x29;
LAB_013367e0:
  *(undefined1 *)(iVar3 + iVar5) = uVar9;
  iVar7 = iVar7 + 1;
LAB_013367e8:
  param_2[2] = iVar7;
switchD_013363c0_caseD_0:
  return;
}

