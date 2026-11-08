// FUN_015fbe00 @ 015fbe00 size=316 calls_out=6 calls_in=1
// strings: 

void FUN_015fbe00(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined4 *local_38;
  int iStack_34;
  int local_30;
  undefined4 *local_2c;
  int *local_28;
  
  iVar13 = param_1[3];
  local_38 = (undefined4 *)0x1;
  iStack_34 = iVar13;
  uVar19 = thunk_FUN_016de0ee(1,0x24c);
  piVar7 = (int *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
  if ((char)piVar7[1] != '\x01') {
    if ((char)piVar7[1] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ab0f4,&local_38);
    }
    FUN_015e8e6c(piVar7,FUN_015fc05c);
    *(undefined1 *)(piVar7 + 1) = 1;
  }
  local_28 = (int *)*piVar7;
  *piVar7 = iVar13;
  FUN_015fc100(&local_28);
  if (local_28 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *local_28;
      bVar1 = (bool)hasExclusiveAccess(local_28);
    } while (!bVar1);
    *local_28 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015fc220(&local_28);
    }
  }
  iVar13 = *param_1;
  puVar15 = (undefined4 *)param_1[1];
  puVar17 = puVar15 + param_1[2] * 2;
  puVar4 = puVar15;
  local_38 = puVar15;
  local_30 = iVar13;
  local_2c = puVar17;
  if (param_1[2] != 0) {
    do {
      puVar8 = puVar4 + 2;
      uVar6 = *puVar4;
      iVar14 = puVar4[1];
      (**(code **)(iVar14 + 0xc))(uVar6);
      if (*(int *)(iVar14 + 4) != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      puVar4 = puVar8;
    } while (puVar8 != puVar17);
  }
  if (iVar13 == 0) {
    return;
  }
  if (puVar15 == (undefined4 *)0x0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)puVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar14 = uVar9 - 0x10, uVar9 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)((int)puVar15 + -3) >> 5);
  iVar12 = *(int *)(iVar13 + 8) + 0x10;
  iVar10 = iVar14 * uVar16 + iVar14 + -4;
  iVar14 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar9 = *(uint *)(iVar14 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar14 - (int)puVar15) < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar13 + 0x14);
  uVar9 = 1 << uVar16;
  *(undefined1 *)((int)puVar15 + -3) = 0xff;
  *(undefined2 *)((int)puVar15 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar13 + 0x10);
    uVar5 = *(uint *)(iVar13 + 0xc) | uVar11;
    if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar13,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar18 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar5 = *puVar18;
      if (uVar11 != uVar5) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar1);
    *puVar18 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar5) {
      return;
    }
  } while( true );
}

