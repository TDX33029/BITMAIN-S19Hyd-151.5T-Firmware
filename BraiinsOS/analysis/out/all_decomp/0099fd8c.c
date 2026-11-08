// FUN_0099fd8c @ 0099fd8c size=340 calls_out=3 calls_in=2
// strings: 

void FUN_0099fd8c(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = *param_1;
  if (iVar4 == -0x7ffffffd) {
    iVar14 = ((uint)(param_1[4] - param_1[2]) >> 3) * -0x33333333 + 1;
    iVar4 = param_1[2];
    while (iVar14 = iVar14 + -1, iVar14 != 0) {
      FUN_0099f0f8(iVar4);
      iVar4 = iVar4 + 0x28;
    }
    if (param_1[3] == 0) {
      return;
    }
    puVar5 = (undefined4 *)param_1[1];
    goto LAB_014b47f4;
  }
  if (iVar4 < -0x7ffffffe) {
    if (iVar4 == -0x80000000) {
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
      puVar5 = (undefined4 *)param_1[5];
      uVar12 = *puVar5;
      puVar15 = (undefined4 *)puVar5[1];
      pcVar7 = (code *)*puVar15;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar12);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      goto LAB_014b47f4;
    }
    if (iVar4 == -0x7fffffff) {
      return;
    }
LAB_0099fdf0:
    thunk_FUN_016d3fb4(param_1[1]);
  }
  else if (iVar4 != 0) {
    if (iVar4 == -0x7ffffffe) {
      piVar6 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015f4880(param_1[1]);
        return;
      }
      return;
    }
    goto LAB_0099fdf0;
  }
  if (param_1[3] == 0) {
    return;
  }
  puVar5 = (undefined4 *)param_1[4];
LAB_014b47f4:
  if (puVar5 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)puVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar14 = uVar9 - 0x10, uVar9 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)puVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar14 * uVar16 + iVar14 + -4;
  iVar14 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar9 = *(uint *)(iVar14 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar7)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar7)();
    }
  }
  if ((uint)(iVar14 - (int)puVar5) < uVar9) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar14 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar16;
  *(undefined1 *)((int)puVar5 + -3) = 0xff;
  *(undefined2 *)((int)puVar5 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar2);
    *puVar17 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

