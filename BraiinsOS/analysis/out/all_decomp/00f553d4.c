// FUN_00f553d4 @ 00f553d4 size=316 calls_out=4 calls_in=2
// strings: 

void FUN_00f553d4(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 local_68;
  undefined1 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar14 = 8;
  local_58 = 0;
  local_5c = 8;
  local_60 = 0;
  local_68 = param_2;
  local_64 = param_3;
  while( true ) {
    iVar13 = local_58;
    FUN_00f4df24(&local_38,&local_68);
    if ((char)local_38 == '\x01') break;
    if (local_38._1_1_ != '\x01') {
      *param_1 = 0x80000014;
      param_1[1] = local_60;
      param_1[2] = local_5c;
      param_1[3] = local_58;
      return;
    }
    FUN_00f55df8(&local_38,local_68);
    if (local_38 == -0x7fffffeb) break;
    local_4c = iStack_2c;
    local_50 = local_30;
    local_40 = local_30;
    iStack_3c = iStack_2c;
    local_44 = local_34;
    local_48 = local_38;
    if (iVar13 == local_60) {
      FUN_0111fdb4(&local_60);
      iVar14 = local_5c;
    }
    piVar7 = (int *)(iVar14 + iVar13 * 0x10);
    *piVar7 = local_48;
    local_58 = iVar13 + 1;
    piVar7[1] = local_44;
    piVar7[2] = local_40;
    piVar7[3] = iStack_3c;
  }
  iVar13 = iVar13 + 1;
  *param_1 = 0x80000015;
  param_1[1] = local_34;
  iVar5 = iVar14;
  while (iVar13 = iVar13 + -1, iVar13 != 0) {
    FUN_00f5401c(iVar5);
    iVar5 = iVar5 + 0x10;
  }
  if (local_60 == 0) {
    return;
  }
  if (iVar14 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar13 + 8) + 0x10;
  iVar10 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar5 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar5 - iVar14) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar13 + 0x10);
    uVar6 = *(uint *)(iVar13 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar4 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

