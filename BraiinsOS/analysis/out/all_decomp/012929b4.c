// FUN_012929b4 @ 012929b4 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_012929b4(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int local_28;
  undefined1 *local_24;
  int iStack_20;
  
  puVar11 = (uint *)*param_4;
  FUN_00602b88(&local_28);
  puVar4 = local_24;
  if (local_28 != -0x80000000) {
    if (local_28 != 0) {
      thunk_FUN_016d3fb4(local_24);
    }
    param_1[0] = 1;
    param_1[1] = 0xffea;
    return;
  }
  uVar5 = *puVar11;
  software_interrupt(0);
  if (uVar5 < 0x80000000) {
    *(uint *)(param_1 + 2) = uVar5;
  }
  else {
    param_1[1] = (ushort)uVar5;
  }
  *local_24 = 0;
  *param_1 = (ushort)(0x7fffffff < uVar5);
  if (iStack_20 == 0) {
    return;
  }
  if (local_24 == (undefined1 *)0x0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar5 = (byte)puVar4[-3] & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)((byte)puVar4[-3] >> 5);
  iVar15 = *(int *)(iVar6 + 8) + 0x10;
  iVar13 = iVar8 * uVar5 + iVar8 + -4;
  iVar8 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar8 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - (int)puVar4) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar12 = 1 << uVar5;
  puVar4[-3] = 0xff;
  *(undefined2 *)(puVar4 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar14;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar6,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == (undefined1 *)0x0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(local_28,local_24);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar11 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar11);
      uVar9 = *puVar11;
      if (uVar14 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar3);
    *puVar11 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar9) {
      return;
    }
  } while( true );
}

