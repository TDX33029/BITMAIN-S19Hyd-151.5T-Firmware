// FUN_00f3a894 @ 00f3a894 size=872 calls_out=4 calls_in=1
// strings: 

void FUN_00f3a894(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
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
  iVar5 = 0x22;
  if (0x80000009 < uVar3) {
    iVar5 = uVar3 + 0x7ffffff6;
  }
  switch(iVar5) {
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
    goto switchD_00f3a8bc_caseD_0;
  case 1:
    piVar4 = (int *)param_1[2];
    piVar7 = piVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (piVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar7);
      }
      piVar7 = piVar7 + 3;
    }
    break;
  case 2:
    piVar4 = (int *)param_1[2];
    iVar5 = param_1[3] + 1;
    piVar7 = piVar4;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_00f3ad6c(piVar7);
      piVar7 = piVar7 + 3;
    }
    goto LAB_00f3aae4;
  case 3:
    uVar3 = param_1[1];
    iVar5 = uVar3 - 0xf;
    if (uVar3 < 0xf) {
      iVar5 = 0;
    }
    if (iVar5 != 1) {
      if (iVar5 != 0) {
        return;
      }
      if ((1 << (uVar3 & 0xff) & 0x7bdeU) != 0) {
        return;
      }
      if (param_1[2] == 0) {
        return;
      }
      piVar4 = (int *)param_1[3];
      goto LAB_014b47f4;
    }
    piVar4 = (int *)param_1[2];
    iVar8 = *piVar4;
    iVar5 = 0;
    if (iVar8 != 0) {
      iVar5 = iVar8 + -1;
    }
    switch(iVar5) {
    case 0:
      puVar16 = (uint *)(piVar4 + 2);
      if (iVar8 == 0) {
        uVar3 = *puVar16;
LAB_00f3ac9c:
        iVar5 = 0x1c;
        if (uVar3 == 0x22) {
          iVar5 = 4;
        }
        piVar7 = (int *)((int)puVar16 + iVar5);
        goto LAB_00f3abcc;
      }
      uVar3 = *puVar16;
      iVar5 = uVar3 - 0x22;
      if (uVar3 < 0x22) {
        iVar5 = 0;
      }
      if (iVar5 == 1) {
        piVar7 = piVar4 + 4;
        iVar5 = *piVar7;
        if (iVar5 < -0x7ffffffc) break;
        goto LAB_00f3abd0;
      }
      if (iVar5 == 0) goto LAB_00f3ac9c;
      break;
    case 1:
    case 2:
    case 4:
    case 6:
    case 7:
      break;
    default:
      piVar7 = piVar4 + 1;
LAB_00f3abcc:
      iVar5 = *piVar7;
LAB_00f3abd0:
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(piVar7[1]);
        goto LAB_014b47f4;
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
    FUN_00f3a7d0(param_1 + 2);
    return;
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x1b:
switchD_00f3a8bc_caseD_6:
    if (param_1[1] == 0) {
      return;
    }
    piVar4 = (int *)param_1[2];
    goto LAB_014b47f4;
  case 8:
switchD_00f3a8bc_caseD_8:
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
    iVar5 = param_1[3] + 1;
    piVar7 = piVar4;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_00f3ad6c(piVar7);
      piVar7 = piVar7 + 3;
    }
    goto LAB_00f3aae4;
  case 0x1a:
    piVar4 = (int *)param_1[2];
    iVar5 = param_1[3] + 1;
    piVar7 = piVar4;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_00f3ad6c(piVar7);
      piVar7 = piVar7 + 3;
    }
LAB_00f3aae4:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 0x1c:
    piVar4 = (int *)param_1[1];
    iVar5 = *piVar4;
    FUN_00f3a6bc(iVar5);
    thunk_FUN_016d3fb4(iVar5);
    goto LAB_014b47f4;
  case 0x1f:
    piVar4 = (int *)param_1[2];
    piVar7 = piVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (piVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar7);
      }
      piVar7 = piVar7 + 3;
    }
    break;
  case 0x20:
    piVar4 = (int *)param_1[2];
    piVar7 = piVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (piVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar7);
      }
      piVar7 = piVar7 + 3;
    }
    break;
  default:
    iVar5 = 6;
    if (0x80000000 < uVar3) {
      iVar5 = uVar3 + 0x7fffffff;
    }
    switch(iVar5) {
    case 0:
      if (param_1[1] != 0) {
        thunk_FUN_016d3fb4(param_1[2]);
      }
      piVar4 = (int *)param_1[4];
      puVar15 = (undefined4 *)param_1[5];
      pcVar6 = (code *)*puVar15;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(piVar4);
      }
      if (puVar15[1] == 0) {
        return;
      }
      break;
    default:
      goto switchD_00f3a8bc_caseD_6;
    case 3:
      goto switchD_00f3a8bc_caseD_8;
    case 6:
      if (uVar3 == 0x80000000) {
        iVar5 = 4;
      }
      else {
        if (uVar3 != 0) {
          thunk_FUN_016d3fb4(param_1[1]);
        }
        iVar5 = 0xc;
      }
      if (*(int *)((int)param_1 + iVar5) == 0) {
        return;
      }
      piVar4 = (int *)((int *)((int)param_1 + iVar5))[1];
    }
    goto LAB_014b47f4;
  }
  if (param_1[1] == 0) {
switchD_00f3a8bc_caseD_0:
    return;
  }
LAB_014b47f4:
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)piVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar4 - 3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar12 = iVar8 * uVar3 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar8 - (int)piVar4) < uVar11) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar11 = 1 << uVar3;
  *(undefined1 *)((int)piVar4 - 3) = 0xff;
  *(undefined2 *)((int)piVar4 - 2) = 0;
  do {
    uVar13 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar3);
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
      *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
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
}

