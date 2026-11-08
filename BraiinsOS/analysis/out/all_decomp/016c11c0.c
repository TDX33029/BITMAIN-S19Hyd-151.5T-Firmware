// FUN_016c11c0 @ 016c11c0 size=292 calls_out=3 calls_in=2
// strings: 

void FUN_016c11c0(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar5 = *param_1;
  if (iVar5 == -0x7ffffffd) {
    FUN_016c2ce4(param_1 + 1);
    return;
  }
  if (iVar5 < -0x7ffffffe) {
    if (iVar5 == -0x80000000) {
      if ((param_1[1] & 0x7fffffffU) == 0) {
        cVar1 = (char)param_1[4];
      }
      else {
        thunk_FUN_016d3fb4(param_1[2]);
        cVar1 = (char)param_1[4];
      }
      if (cVar1 != '\x03') {
        return;
      }
      puVar4 = (undefined4 *)param_1[5];
      uVar13 = *puVar4;
      puVar15 = (undefined4 *)puVar4[1];
      pcVar7 = (code *)*puVar15;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar13);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      goto LAB_014b47f4;
    }
    if (iVar5 == -0x7fffffff) {
      return;
    }
LAB_016c11f4:
    thunk_FUN_016d3fb4(param_1[1]);
  }
  else if (iVar5 != 0) {
    if (iVar5 == -0x7ffffffe) {
      piVar6 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015f4880(param_1[1]);
        return;
      }
      return;
    }
    goto LAB_016c11f4;
  }
  if (param_1[3] == 0) {
    return;
  }
  puVar4 = (undefined4 *)param_1[4];
LAB_014b47f4:
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)puVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)puVar4 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar8 * uVar16 + iVar8 + -4;
  iVar8 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar10 = *(uint *)(iVar8 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar8 - (int)puVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)((int)puVar4 + -3) = 0xff;
  *(undefined2 *)((int)puVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar2);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

