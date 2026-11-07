// FUN_00aa2644 @ 00aa2644 size=528 calls_out=3 calls_in=1
// strings: 

void FUN_00aa2644(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  uVar8 = param_1[1];
  if (uVar4 == 7 && uVar8 == 0) {
    if (param_1[2] == 0) {
      return;
    }
    uVar4 = param_1[3];
    goto LAB_014b47f4;
  }
  uVar7 = 1;
  iVar5 = -(uVar8 + (uVar4 >= 2));
  if ((uint)(uVar4 < 2) <= -uVar8) {
    uVar7 = uVar4 - 2;
  }
  if (3 < uVar7) {
    return;
  }
  switch(uVar7) {
  case 0:
    bVar2 = (byte)param_1[2];
    if (bVar2 < 3) {
      return;
    }
    if (bVar2 == 3) {
      if (param_1[3] == 0) {
        return;
      }
      uVar4 = param_1[4];
      goto LAB_014b47f4;
    }
    if (bVar2 != 4) {
      FUN_00a5be54(param_1 + 3);
      return;
    }
    uVar4 = param_1[4];
    FUN_00a6144c(uVar4,param_1[5]);
    uVar8 = param_1[3];
    break;
  case 1:
    if ((param_1[0x21] & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_1[0x22],0x7fffffff,iVar5);
    }
    if (param_1[0x1e] != 0) {
      thunk_FUN_016d3fb4(param_1[0x1f]);
    }
    uVar4 = param_1[0x31];
    puVar6 = (undefined4 *)(uVar4 + 0xc4);
    for (uVar8 = param_1[0x32]; uVar8 != 0; uVar8 = uVar8 - 1) {
      if (puVar6[-0xf] != 0) {
        thunk_FUN_016d3fb4(puVar6[-0xe]);
      }
      if (puVar6[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar6);
      }
      puVar6 = puVar6 + 0x34;
    }
    uVar8 = param_1[0x30];
    break;
  case 2:
    uVar4 = param_1[4];
    if (uVar4 == 0x11) {
      return;
    }
    iVar9 = 7;
    if (1 < uVar4) {
      iVar9 = uVar4 - 2;
    }
    iVar11 = 0x14;
    switch(iVar9) {
    case 0:
    case 1:
    case 10:
      return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      param_1 = param_1 + 5;
      uVar4 = *param_1;
      break;
    case 7:
      if (param_1[6] != 0) {
        thunk_FUN_016d3fb4(param_1[7],&switchD_00aa2704::switchdataD_00aa2708,iVar5);
      }
      param_1 = param_1 + 9;
      uVar4 = *param_1;
      break;
    case 8:
      if (param_1[5] != 0) {
        thunk_FUN_016d3fb4(param_1[6],&switchD_00aa2704::switchdataD_00aa2708,iVar5);
      }
      param_1 = param_1 + 8;
      uVar4 = *param_1;
      break;
    case 0xb:
      iVar11 = 0x20;
      if (param_1[5] != 0) {
        thunk_FUN_016d3fb4(param_1[6],&switchD_00aa2704::switchdataD_00aa2708,iVar5);
      }
    default:
      param_1 = (uint *)((int)param_1 + iVar11);
      uVar4 = *param_1;
      goto LAB_00aa2860;
    }
    if (uVar4 == 0x80000000) {
      return;
    }
LAB_00aa2860:
    if (uVar4 == 0) {
      return;
    }
    uVar4 = param_1[1];
    goto LAB_014b47f4;
  case 3:
    if ((param_1[0x18] & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_1[0x19],(&switchD_00aa2694::switchdataD_00aa2698)[uVar7],iVar5);
    }
    if ((param_1[0x1b] & 0x7fffffff) == 0) {
      return;
    }
    uVar4 = param_1[0x1c];
    goto LAB_014b47f4;
  }
  if (uVar8 == 0) {
    return;
  }
LAB_014b47f4:
  if (uVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar8 = *(byte *)(uVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar9 = uVar7 - 0x10, uVar7 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(uVar4 - 3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar9 * uVar8 + iVar9 + -4;
  iVar9 = iVar13 + iVar11;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar9 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar9 - uVar4 < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar7 = 1 << uVar8;
  *(undefined1 *)(uVar4 - 3) = 0xff;
  *(undefined2 *)(uVar4 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar4 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar4 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar8);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar7 + uVar12;
      return;
    }
    puVar14 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar12 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar7 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar4) {
      return;
    }
  } while( true );
}

