// FUN_0087a4ec @ 0087a4ec size=276 calls_out=3 calls_in=1
// strings: 

void FUN_0087a4ec(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x88) == '\x03') {
      if (*(char *)(param_1 + 0x84) == '\x03') {
        FUN_00875460(param_1 + 0x40);
        *(undefined1 *)(param_1 + 0x85) = 0;
      }
      else if ((*(char *)(param_1 + 0x84) == '\0') && (*(int *)(param_1 + 0x30) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
      }
    }
    goto LAB_0087a524;
  }
  if (cVar1 != '\x04') {
    if (cVar1 != '\x05') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x94);
    bVar16 = cVar1 == '\x03';
    if (bVar16) {
      cVar1 = *(char *)(param_1 + 0x84);
    }
    if (bVar16 && cVar1 == '\x03') {
      FUN_00a07b4c(param_1 + 0x28);
    }
    goto LAB_0087a524;
  }
  if (*(char *)(param_1 + 0x75) != '\x03') goto LAB_0087a524;
  if (*(char *)(param_1 + 100) == '\x03') {
    if ((*(uint *)(param_1 + 0x54) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x58));
    }
    iVar6 = *(int *)(param_1 + 0x44);
    iVar4 = 0x3c;
LAB_0087a5d0:
    if (iVar6 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar4));
    }
  }
  else if (*(char *)(param_1 + 100) == '\0') {
    iVar6 = *(int *)(param_1 + 0x28);
    iVar4 = 0x2c;
    goto LAB_0087a5d0;
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
LAB_0087a524:
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar7 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

