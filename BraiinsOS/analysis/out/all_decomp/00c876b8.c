// FUN_00c876b8 @ 00c876b8 size=428 calls_out=4 calls_in=2
// strings: 

void FUN_00c876b8(int *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1[10] == -0x80000000) {
    iVar15 = *param_1;
    iVar16 = param_1[1];
    iVar9 = iVar16 + 1;
    iVar14 = iVar15;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      FUN_00c87b78(iVar14);
      iVar14 = iVar14 + 0x490;
    }
  }
  else {
    piVar13 = param_1 + 4;
    FUN_00ced198(piVar13);
    piVar5 = (int *)*piVar13;
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d065f8(*piVar13);
    }
    piVar5 = (int *)param_1[8];
    iVar15 = param_1[9];
    if (iVar15 != 0) {
      piVar13 = piVar5;
      do {
        if (*piVar13 == 0) {
          bVar1 = *(byte *)(piVar13 + 2);
          cVar4 = bVar1 - 4;
          if (bVar1 < 4) {
            cVar4 = '\x04';
          }
          iVar16 = 0xc;
          if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00c87744;
        }
        else {
          iVar16 = 4;
          if (*piVar13 == 2) {
LAB_00c87744:
            (**(code **)**(undefined4 **)((int)piVar13 + iVar16))();
          }
        }
        piVar13 = piVar13 + 10;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    if (param_1[7] != 0) {
      thunk_FUN_016d3fb4(piVar5);
    }
    iVar15 = param_1[0xb];
    iVar16 = param_1[0xc];
    if (iVar16 != 0) {
      iVar14 = 0;
      do {
        if (*(int *)(iVar15 - iVar14) == 0) {
          bVar1 = *(byte *)((iVar15 - iVar14) + 8);
          cVar4 = bVar1 - 4;
          if (bVar1 < 4) {
            cVar4 = '\x04';
          }
          iVar9 = 0xc;
          if ((cVar4 == '\x05') || (cVar4 == '\x04' && bVar1 == 3)) goto LAB_00c877d4;
        }
        else {
          iVar9 = 4;
          if (*(int *)(iVar15 - iVar14) == 2) {
LAB_00c877d4:
            (**(code **)**(undefined4 **)((iVar15 + iVar9) - iVar14))();
          }
        }
        iVar14 = iVar14 + -0x20;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar16 = param_1[10];
  }
  if (iVar16 == 0) {
    return;
  }
  if (iVar15 == 0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar10 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar12 = *(int *)(iVar16 + 8) + 0x10;
  iVar9 = iVar14 * uVar17 + iVar14 + -4;
  iVar14 = iVar12 + iVar9;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar14 - iVar15) < uVar10) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar16 + 0x14);
  uVar10 = 1 << uVar17;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar16 + 0x10);
    uVar7 = *(uint *)(iVar16 + 0xc) | uVar11;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar16,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar18 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar7 = *puVar18;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar2);
    *puVar18 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

