// FUN_01292a6c @ 01292a6c size=160 calls_out=3 calls_in=1
// strings: 

void FUN_01292a6c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint *puVar16;
  int local_28;
  undefined1 *local_24;
  int local_20;
  
  puVar13 = (undefined4 *)param_4[3];
  iVar11 = *param_4;
  puVar14 = (undefined1 *)param_4[1];
  FUN_00602b88(&local_28);
  iVar5 = local_20;
  puVar4 = local_24;
  if (local_28 == -0x80000000) {
    local_28 = *param_4;
    local_24 = (undefined1 *)param_4[1];
    local_20 = param_4[2];
    FUN_01503064(param_1,*puVar13,puVar4,&local_28);
    *puVar4 = 0;
    puVar14 = puVar4;
    iVar11 = iVar5;
  }
  else {
    if (local_28 != 0) {
      thunk_FUN_016d3fb4(local_24);
    }
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0xffea;
  }
  if (iVar11 == 0) {
    return;
  }
  if (puVar14 == (undefined1 *)0x0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar15 = (byte)puVar14[-3] & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)((byte)puVar14[-3] >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar9 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar5 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar5 - (int)puVar14) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar11 + 0x14);
  uVar8 = 1 << uVar15;
  puVar14[-3] = 0xff;
  *(undefined2 *)(puVar14 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar11 + 0x10);
    uVar6 = *(uint *)(iVar11 + 0xc) | uVar10;
    if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar11,uVar15);
      puVar14 = local_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (puVar14 == (undefined1 *)0x0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar13;
      FUN_016d6ac4(local_28,puVar14);
      *puVar13 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

