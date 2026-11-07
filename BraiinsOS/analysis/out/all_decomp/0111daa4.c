// FUN_0111daa4 @ 0111daa4 size=308 calls_out=5 calls_in=1
// strings: 

void FUN_0111daa4(undefined1 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  int local_24;
  int local_20;
  undefined *local_1c;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  if (param_3 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(param_3);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  FUN_016dd1aa(iVar4,param_2,param_3);
  local_1c = &DAT_00563e90;
  local_20 = iVar4 + param_3;
  local_28 = &DAT_00110000;
  local_24 = iVar4;
  FUN_01124f94(&local_34,&local_28);
  if (param_3 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if (local_2c < 0) {
    uVar5 = 0;
LAB_0111db58:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,local_2c);
  }
  if (local_2c == 0) {
    iVar6 = 1;
    iVar4 = 0;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(local_2c);
    if (iVar6 == 0) {
      uVar5 = 1;
      goto LAB_0111db58;
    }
    iVar4 = local_2c;
  }
  FUN_016dd1aa(iVar6,local_30,local_2c);
  *(int *)(param_1 + 4) = iVar4;
  *(int *)(param_1 + 8) = iVar6;
  *(int *)(param_1 + 0xc) = local_2c;
  *param_1 = 3;
  if (local_34 == 0) {
    return;
  }
  if (local_30 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar13 = *(byte *)(local_30 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(local_30 + -3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar6 * uVar13 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - local_30) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar13;
  *(undefined1 *)(local_30 + -3) = 0xff;
  *(undefined2 *)(local_30 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar13);
      iVar4 = local_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (iVar4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar7;
      FUN_016d6ac4(local_28,iVar4);
      *puVar7 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar8 = *puVar14;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

