// FUN_00815de4 @ 00815de4 size=288 calls_out=5 calls_in=6
// strings: 

void FUN_00815de4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\x04') {
    uVar12 = *(undefined4 *)(param_1 + 0x5c);
    puVar14 = *(undefined4 **)(param_1 + 0x60);
    pcVar4 = (code *)*puVar14;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar12);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    pcVar8 = *(char **)(param_1 + 0x54);
    if (*pcVar8 == '\0') {
      bVar17 = (bool)hasExclusiveAccess(pcVar8);
      if (!bVar17) goto LAB_00815ea8;
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00815ea8:
      FUN_01280da8(pcVar8);
    }
    FUN_0128236c(pcVar8);
    FUN_0163af68(pcVar8,1,pcVar8);
  }
  else {
    if (cVar1 != '\x03') {
      iVar7 = 8;
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_00815ee0;
    }
    if (*(char *)(param_1 + 0x94) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x90);
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = *(char *)(param_1 + 0x6c);
      }
      if (bVar17 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x70);
        if (*(int *)(param_1 + 0x74) != 0) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0xc))(*(undefined4 *)(param_1 + 0x78));
        }
      }
    }
  }
  iVar7 = 0x2c;
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
LAB_00815ee0:
  if (*(int *)(param_1 + iVar7) == 0) {
    return;
  }
  iVar7 = ((int *)(param_1 + iVar7))[1];
  if (iVar7 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar10 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar9 = *(uint *)(iVar5 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar5 - iVar7) < uVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar2 = *(byte *)(iVar3 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar3 + 0x10);
    uVar6 = *(uint *)(iVar3 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar17 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar17);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

