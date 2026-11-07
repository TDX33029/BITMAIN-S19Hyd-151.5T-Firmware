// FUN_00d8fa60 @ 00d8fa60 size=396 calls_out=6 calls_in=1
// strings: 

void FUN_00d8fa60(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = (char)param_1[6];
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_00d8f5e8(param_1 + 7);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (param_1[0xb] != 0) {
        FUN_00e44660(param_1[0xb],param_1[0xc],1);
      }
      iVar4 = param_1[7];
      if (iVar4 != 0 && iVar4 != -1) {
        piVar5 = (int *)(iVar4 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          uVar8 = *(uint *)(param_1[8] + 8);
          if (uVar8 < 5) {
            uVar8 = 4;
          }
          if ((*(int *)(param_1[8] + 4) + uVar8 + 7 & -uVar8) != 0) {
            thunk_FUN_016d3fb4();
          }
        }
      }
      piVar5 = (int *)param_1[9];
      *(undefined1 *)(param_1 + 5) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(param_1[9],param_1[10]);
      }
    }
    piVar5 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0099ada8(param_1[3]);
    }
    piVar5 = (int *)param_1[2];
    *(undefined2 *)((int)param_1 + 0x15) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba47c(param_1[2]);
    }
    *(undefined1 *)((int)param_1 + 0x17) = 0;
    return;
  }
  iVar4 = *param_1;
  puVar16 = (undefined4 *)param_1[1];
  pcVar7 = (code *)*puVar16;
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(iVar4);
  }
  if (puVar16[1] == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar8 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar15 = *(int *)(iVar6 + 8) + 0x10;
  iVar13 = iVar9 * uVar8 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar7)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar7)();
    }
  }
  if ((uint)(iVar9 - iVar4) < uVar12) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar12 = 1 << uVar8;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar6 + 0x10);
    uVar10 = *(uint *)(iVar6 + 0xc) | uVar14;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar8);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar16 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar16;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar16 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar17 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar10 = *puVar17;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar2);
    *puVar17 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

