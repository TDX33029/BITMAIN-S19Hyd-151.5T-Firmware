// FUN_015e6d48 @ 015e6d48 size=288 calls_out=7 calls_in=2
// strings: 

void FUN_015e6d48(uint *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint local_30;
  uint local_2c;
  uint local_28;
  int iStack_24;
  
  local_2c = thunk_FUN_016d4a50(0x100);
  if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x100);
  }
  local_30 = 0x100;
  while (uVar10 = local_2c, uVar6 = local_30, uVar4 = FUN_016e0272(param_2,local_2c,local_30),
        uVar4 != 0xffffffff) {
    local_28 = uVar4;
    if (uVar4 != uVar6) {
      if (uVar4 < uVar6) {
        if (uVar4 == 0) {
          thunk_FUN_016d3fb4(uVar10);
          uVar6 = 1;
        }
        else {
          uVar6 = thunk_FUN_016d4ea4(uVar10,uVar4);
          if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar4);
          }
        }
        local_30 = uVar4;
        local_2c = uVar6;
      }
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
    FUN_015bf41c(&local_30,uVar6,1,1,1);
  }
  puVar5 = (uint *)FUN_016d2bc8();
  uVar4 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x80000000;
  param_1[2] = uVar4;
  if (uVar6 == 0) {
    return;
  }
  if (uVar10 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar6 = *(byte *)(uVar10 - 3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar4 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar9 = uVar4 - 0x10, uVar4 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar4 = (uint)(*(byte *)(uVar10 - 3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar12 = iVar9 * uVar6 + iVar9 + -4;
  iVar9 = iVar14 + iVar12;
  if (4 < uVar4) {
    if (uVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(iVar9 + -4);
    if (uVar4 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar9 - uVar10 < uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar4 = 1 << uVar6;
  *(undefined1 *)(uVar10 - 3) = 0xff;
  *(undefined2 *)(uVar10 - 2) = 0;
  do {
    uVar13 = *(uint *)(iVar7 + 0x10);
    uVar10 = *(uint *)(iVar7 + 0xc) | uVar13;
    if ((uVar4 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar10 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar7,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar8;
      FUN_016d6ac4(local_28,iStack_24);
      *puVar8 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar4 + uVar13;
      return;
    }
    puVar5 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar5);
      uVar10 = *puVar5;
      if (uVar13 != uVar10) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar3);
    *puVar5 = uVar4 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar10) {
      return;
    }
  } while( true );
}

