// FUN_011d3754 @ 011d3754 size=640 calls_out=5 calls_in=1
// strings: 

void FUN_011d3754(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
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
    goto switchD_011d377c_caseD_0;
  case 1:
    puVar4 = (undefined4 *)param_1[2];
    puVar14 = puVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar14[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar14);
      }
      puVar14 = puVar14 + 3;
    }
    break;
  case 2:
    puVar4 = (undefined4 *)param_1[2];
    iVar5 = param_1[3] + 1;
    puVar14 = puVar4;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_01158554(puVar14);
      puVar14 = puVar14 + 3;
    }
    goto LAB_011d3968;
  case 3:
    FUN_011648d0(param_1 + 1);
    return;
  case 4:
  case 9:
  case 10:
  case 0xb:
  case 0x10:
  case 0x14:
  case 0x18:
  case 0x1d:
    FUN_01164f34(param_1 + 2);
    return;
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x1b:
switchD_011d377c_caseD_6:
    if (param_1[1] == 0) {
      return;
    }
    puVar4 = (undefined4 *)param_1[2];
    goto LAB_014b47f4;
  case 8:
switchD_011d377c_caseD_8:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[4] == 0) {
      return;
    }
    puVar4 = (undefined4 *)param_1[5];
    goto LAB_014b47f4;
  case 0x19:
    puVar4 = (undefined4 *)param_1[2];
    iVar5 = param_1[3] + 1;
    puVar14 = puVar4;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_01158554(puVar14);
      puVar14 = puVar14 + 3;
    }
    goto LAB_011d3968;
  case 0x1a:
    puVar4 = (undefined4 *)param_1[2];
    iVar5 = param_1[3] + 1;
    puVar14 = puVar4;
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      FUN_01158554(puVar14);
      puVar14 = puVar14 + 3;
    }
LAB_011d3968:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 0x1c:
    puVar4 = (undefined4 *)param_1[1];
    uVar9 = *puVar4;
    FUN_011d3614(uVar9);
    thunk_FUN_016d3fb4(uVar9);
    goto LAB_014b47f4;
  case 0x1f:
    puVar4 = (undefined4 *)param_1[2];
    puVar14 = puVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar14[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar14);
      }
      puVar14 = puVar14 + 3;
    }
    break;
  case 0x20:
    puVar4 = (undefined4 *)param_1[2];
    puVar14 = puVar4 + 1;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar14[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar14);
      }
      puVar14 = puVar14 + 3;
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
      puVar4 = (undefined4 *)param_1[4];
      puVar14 = (undefined4 *)param_1[5];
      pcVar6 = (code *)*puVar14;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(puVar4);
      }
      if (puVar14[1] == 0) {
        return;
      }
      break;
    default:
      goto switchD_011d377c_caseD_6;
    case 3:
      goto switchD_011d377c_caseD_8;
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
      puVar4 = (undefined4 *)((int *)((int)param_1 + iVar5))[1];
    }
    goto LAB_014b47f4;
  }
  if (param_1[1] == 0) {
switchD_011d377c_caseD_0:
    return;
  }
LAB_014b47f4:
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)puVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)puVar4 - 3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar7 * uVar3 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - (int)puVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar3;
  *(undefined1 *)((int)puVar4 - 3) = 0xff;
  *(undefined2 *)((int)puVar4 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

