// FUN_0108a284 @ 0108a284 size=616 calls_out=8 calls_in=14
// strings: 

void FUN_0108a284(int param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar14 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) == 0) goto LAB_0108a42c;
  iVar13 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_20 = 0;
  pcVar11 = (char *)(iVar13 + 8);
  local_24 = 0;
  if (*pcVar11 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar11);
    if (!bVar2) goto LAB_0108a2dc;
    *pcVar11 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0108a2dc:
    FUN_01280da8(pcVar11);
  }
  FUN_0128236c(pcVar11);
  iVar9 = *(int *)(iVar13 + 0x18);
  iVar7 = local_1c;
  while (local_1c = iVar9, local_1c != 0) {
    iVar7 = *(int *)(local_1c + 4);
    *(int *)(iVar13 + 0x18) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)(iVar13 + 0x14) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 8) = 0;
    }
    *(undefined1 *)(local_1c + 0x10) = 2;
    *(undefined4 *)(local_1c + 4) = 0;
    *(undefined4 *)(local_1c + 8) = 0;
    if (local_24 == local_1c) {
      FUN_010557ec(&local_24,&local_1c,&DAT_018ac72c);
      goto LAB_0108a4e8;
    }
    *(undefined4 *)(local_1c + 4) = 0;
    *(int *)(local_1c + 8) = local_24;
    if (local_24 != 0) {
      *(int *)(local_24 + 4) = local_1c;
    }
    if (local_20 == 0) {
      local_20 = local_1c;
    }
    local_24 = local_1c;
    iVar7 = local_1c;
    iVar9 = *(int *)(iVar13 + 0x18);
  }
  iVar9 = *(int *)(iVar13 + 0x10);
  while (local_1c = iVar9, local_1c != 0) {
    iVar7 = *(int *)(local_1c + 4);
    *(int *)(iVar13 + 0x10) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)(iVar13 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 8) = 0;
    }
    *(undefined1 *)(local_1c + 0x10) = 2;
    *(undefined4 *)(local_1c + 4) = 0;
    *(undefined4 *)(local_1c + 8) = 0;
    if (local_24 == local_1c) {
      FUN_010557ec(&local_24,&local_1c,&DAT_018ac72c);
LAB_0108a4e8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x108a4e8);
      (*pcVar1)();
    }
    *(undefined4 *)(local_1c + 4) = 0;
    *(int *)(local_1c + 8) = local_24;
    if (local_24 != 0) {
      *(int *)(local_24 + 4) = local_1c;
    }
    if (local_20 == 0) {
      local_20 = local_1c;
    }
    local_24 = local_1c;
    iVar7 = local_1c;
    iVar9 = *(int *)(iVar13 + 0x10);
  }
  local_1c = iVar7;
  FUN_01282570(pcVar11);
  if (*pcVar11 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar11);
      if (bVar2) {
        *pcVar11 = '\0';
        goto LAB_0108a404;
      }
    } while (*pcVar11 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar11);
LAB_0108a404:
  do {
    iVar13 = FUN_0109eff0(&local_24);
  } while (iVar13 != 0);
  do {
    iVar13 = FUN_0109eff0(&local_24);
  } while (iVar13 != 0);
LAB_0108a42c:
  FUN_0109f308(puVar14);
  piVar4 = (int *)*puVar14;
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0105b2cc(*puVar14);
  }
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar15 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar7 = uVar8 - 0x10, uVar8 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar12 = *(int *)(iVar13 + 8) + 0x10;
      iVar9 = iVar7 * uVar15 + iVar7 + -4;
      iVar7 = iVar12 + iVar9;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar8 = *(uint *)(iVar7 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar7 - param_1) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar3 = *(byte *)(iVar13 + 0x14);
      uVar8 = 1 << uVar15;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar13 + 0x10);
        uVar5 = *(uint *)(iVar13 + 0xc) | uVar10;
        if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar15);
          iVar13 = local_24;
          FUN_016dddc0(&DAT_018ddd48);
          if (iVar13 == 0) {
            return;
          }
          puVar14 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar14;
          FUN_016d6ac4(uStack_28,iVar13);
          *puVar14 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar16 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar5 = *puVar16;
          if (uVar10 != uVar5) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar2);
        *puVar16 = uVar8 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

