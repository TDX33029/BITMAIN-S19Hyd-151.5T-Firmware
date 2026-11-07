// FUN_011c48c4 @ 011c48c4 size=884 calls_out=4 calls_in=1
// strings: 

void FUN_011c48c4(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = *param_1;
  iVar6 = 0x22;
  if (0x80000009 < uVar3) {
    iVar6 = uVar3 + 0x7ffffff6;
  }
  switch(iVar6) {
  case 0:
  case 5:
  case 0xc:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1e:
  case 0x21:
    goto switchD_011c48ec_caseD_0;
  case 1:
    piVar4 = (int *)param_1[2];
    piVar5 = piVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (piVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar5);
      }
      piVar5 = piVar5 + 3;
    }
    break;
  case 2:
    piVar4 = (int *)param_1[2];
    iVar6 = param_1[3] + 1;
    piVar5 = piVar4;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_01158554(piVar5);
      piVar5 = piVar5 + 3;
    }
    goto LAB_011c4b50;
  case 3:
    uVar3 = param_1[1];
    iVar6 = uVar3 - 0xf;
    if (uVar3 < 0xf) {
      iVar6 = 0;
    }
    if (iVar6 != 1) {
      if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011c4a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_011c4a88 + *(int *)(&DAT_011c4a88 + uVar3 * 4)))();
        return;
      }
      return;
    }
    piVar4 = (int *)param_1[2];
    iVar8 = *piVar4;
    iVar6 = 0;
    if (iVar8 != 0) {
      iVar6 = iVar8 + -1;
    }
    switch(iVar6) {
    case 0:
      puVar16 = (uint *)(piVar4 + 2);
      if (iVar8 == 0) {
        uVar3 = *puVar16;
LAB_011c4d08:
        if (uVar3 == 0x22) {
          iVar6 = piVar4[3];
          iVar8 = 8;
        }
        else {
          iVar6 = piVar4[9];
          iVar8 = 0x20;
        }
joined_r0x011c4d54:
        if (iVar6 != 0) {
          piVar5 = (int *)((int)puVar16 + iVar8);
          goto LAB_011c4c48;
        }
      }
      else {
        uVar3 = *puVar16;
        iVar6 = uVar3 - 0x22;
        if (uVar3 < 0x22) {
          iVar6 = 0;
        }
        if (iVar6 == 1) {
          iVar6 = piVar4[4];
          if (-0x7ffffffd < iVar6) {
            iVar8 = 0xc;
            goto joined_r0x011c4d54;
          }
        }
        else if (iVar6 == 0) goto LAB_011c4d08;
      }
      break;
    case 1:
    case 2:
    case 4:
    case 6:
    case 7:
      break;
    default:
      if (piVar4[1] != 0) {
        piVar5 = piVar4 + 2;
LAB_011c4c48:
        thunk_FUN_016d3fb4(*piVar5);
      }
    }
    goto LAB_014b47f4;
  case 4:
  case 9:
  case 10:
  case 0xb:
  case 0x10:
  case 0x14:
  case 0x18:
  case 0x1d:
    FUN_011c4800(param_1 + 2);
    return;
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x1b:
    goto switchD_011c48ec_caseD_6;
  case 8:
switchD_011c48ec_caseD_8:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    piVar4 = (int *)param_1[5];
    goto LAB_014b47f4;
  case 0x19:
    piVar4 = (int *)param_1[2];
    iVar6 = param_1[3] + 1;
    piVar5 = piVar4;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_01158554(piVar5);
      piVar5 = piVar5 + 3;
    }
    goto LAB_011c4b50;
  case 0x1a:
    piVar4 = (int *)param_1[2];
    iVar6 = param_1[3] + 1;
    piVar5 = piVar4;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_01158554(piVar5);
      piVar5 = piVar5 + 3;
    }
LAB_011c4b50:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 0x1c:
    piVar4 = (int *)param_1[1];
    iVar6 = *piVar4;
    FUN_011c4310(iVar6);
    thunk_FUN_016d3fb4(iVar6);
    goto LAB_014b47f4;
  case 0x1f:
    piVar4 = (int *)param_1[2];
    piVar5 = piVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (piVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar5);
      }
      piVar5 = piVar5 + 3;
    }
    break;
  case 0x20:
    piVar4 = (int *)param_1[2];
    piVar5 = piVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (piVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar5);
      }
      piVar5 = piVar5 + 3;
    }
    break;
  default:
    iVar6 = 6;
    if (0x80000000 < uVar3) {
      iVar6 = uVar3 + 0x7fffffff;
    }
    switch(iVar6) {
    case 0:
      if (param_1[1] != 0) {
        thunk_FUN_016d3fb4(param_1[2]);
      }
      piVar4 = (int *)param_1[4];
      puVar15 = (undefined4 *)param_1[5];
      pcVar7 = (code *)*puVar15;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(piVar4);
      }
      if (puVar15[1] == 0) {
        return;
      }
      goto LAB_014b47f4;
    case 3:
      goto switchD_011c48ec_caseD_8;
    case 6:
      if (uVar3 == 0) {
LAB_011c4cbc:
        uVar3 = param_1[3];
        iVar6 = 0x10;
      }
      else {
        if (uVar3 != 0x80000000) {
          thunk_FUN_016d3fb4(param_1[1]);
          goto LAB_011c4cbc;
        }
        uVar3 = param_1[1];
        iVar6 = 8;
      }
      if (uVar3 == 0) {
        return;
      }
      piVar4 = *(int **)((int)param_1 + iVar6);
      goto LAB_014b47f4;
    }
    goto switchD_011c48ec_caseD_6;
  }
  if (param_1[1] == 0) {
switchD_011c48ec_caseD_0:
    return;
  }
LAB_014b47f4:
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)piVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar4 - 3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar12 = iVar8 * uVar3 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar7)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar7)();
    }
  }
  if ((uint)(iVar8 - (int)piVar4) < uVar11) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar1 = *(byte *)(iVar6 + 0x14);
  uVar11 = 1 << uVar3;
  *(undefined1 *)((int)piVar4 - 3) = 0xff;
  *(undefined2 *)((int)piVar4 - 2) = 0;
  do {
    uVar13 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar15 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar15;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar15 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
switchD_011c48ec_caseD_6:
  if (param_1[1] == 0) {
    return;
  }
  piVar4 = (int *)param_1[2];
  goto LAB_014b47f4;
}

