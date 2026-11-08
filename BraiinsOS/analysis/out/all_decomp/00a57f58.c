// FUN_00a57f58 @ 00a57f58 size=420 calls_out=5 calls_in=2
// strings: 

void FUN_00a57f58(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  bool bVar20;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 == '\x03') {
    uVar3 = *(ushort *)(param_1 + 0x3c);
    bVar20 = uVar3 == 3;
    if (bVar20) {
      uVar3 = (ushort)*(byte *)(param_1 + 0x40);
    }
    if (!bVar20 || uVar3 != 3) {
      return;
    }
    puVar9 = *(undefined4 **)(param_1 + 0x44);
    uVar15 = *puVar9;
    puVar17 = (undefined4 *)puVar9[1];
    pcVar5 = (code *)*puVar17;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar15);
    }
    if (puVar17[1] != 0) {
      thunk_FUN_016d3fb4(uVar15);
    }
    if (puVar9 == (undefined4 *)0x0) {
      return;
    }
    iVar14 = FUN_016d3bc8();
    uVar18 = *(byte *)((int)puVar9 + -3) & 0x1f;
    if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
      iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) <<
              4;
    }
    uVar11 = (uint)(*(byte *)((int)puVar9 + -3) >> 5);
    iVar16 = *(int *)(iVar14 + 8) + 0x10;
    iVar12 = iVar7 * uVar18 + iVar7 + -4;
    iVar7 = iVar16 + iVar12;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar5)();
      }
      uVar11 = *(uint *)(iVar7 + -4);
      if (uVar11 < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar5)();
      }
      if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar5)();
      }
    }
    if ((uint)(iVar7 - (int)puVar9) < uVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar5)();
    }
    if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar5)();
    }
    if (*(char *)(iVar16 + iVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar5)();
    }
    bVar2 = *(byte *)(iVar14 + 0x14);
    uVar11 = 1 << uVar18;
    *(undefined1 *)((int)puVar9 + -3) = 0xff;
    *(undefined2 *)((int)puVar9 + -2) = 0;
    do {
      uVar13 = *(uint *)(iVar14 + 0x10);
      uVar8 = *(uint *)(iVar14 + 0xc) | uVar13;
      if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar5)();
      }
      if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar14,uVar18);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar9 = (undefined4 *)FUN_016d2bc8();
        uVar15 = *puVar9;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar9 = uVar15;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar14 + 0x10) = uVar11 + uVar13;
        return;
      }
      puVar19 = (uint *)(iVar14 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar19);
        uVar8 = *puVar19;
        if (uVar13 != uVar8) goto LAB_016d409c;
        bVar20 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar20);
      *puVar19 = uVar11 + uVar13;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar13 == uVar8) {
        return;
      }
    } while( true );
  }
  bVar20 = cVar1 == '\x04';
  if (bVar20) {
    cVar1 = *(char *)(param_1 + 0xf4);
  }
  if (!bVar20 || cVar1 != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0xb8) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xf0);
  bVar20 = cVar1 != '\x03';
  if (!bVar20) {
    cVar1 = *(char *)(param_1 + 0xec);
  }
  if (bVar20 || cVar1 != '\x03') {
    return;
  }
  iVar14 = *(int *)(param_1 + 0xcc);
  pcVar10 = (char *)(iVar14 + 0xc);
  if (*pcVar10 == '\0') {
    bVar20 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar20) goto LAB_00a5801c;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00a5801c:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  piVar4 = (int *)(param_1 + 0xd0);
  if (*piVar4 == 0) {
    if (*(int **)(iVar14 + 0x10) != piVar4) goto LAB_00a5808c;
    piVar6 = *(int **)(param_1 + 0xd4);
    *(int **)(iVar14 + 0x10) = piVar6;
  }
  else {
    piVar6 = *(int **)(param_1 + 0xd4);
    *(int **)(*piVar4 + 4) = piVar6;
  }
  if (piVar6 == (int *)0x0) {
    if (*(int **)(iVar14 + 0x14) != piVar4) goto LAB_00a5808c;
    *(int *)(iVar14 + 0x14) = *piVar4;
  }
  else {
    *piVar6 = *piVar4;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
LAB_00a5808c:
  FUN_01282570(pcVar10);
  if (*pcVar10 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar20 = (bool)hasExclusiveAccess(pcVar10);
      if (bVar20) {
        *pcVar10 = '\0';
        goto LAB_00a580cc;
      }
    } while (*pcVar10 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar10);
LAB_00a580cc:
  if (*(int *)(param_1 + 0xd8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a580e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xd8) + 0xc))(*(undefined4 *)(param_1 + 0xdc));
  return;
}

