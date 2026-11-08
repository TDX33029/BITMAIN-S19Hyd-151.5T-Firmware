// FUN_0062c1b8 @ 0062c1b8 size=308 calls_out=2 calls_in=1
// strings: 

void FUN_0062c1b8(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 local_20;
  
  iVar5 = param_1[2];
  uVar10 = param_2[2];
  if (iVar5 == 0) {
    bVar15 = false;
    pcVar13 = (char *)param_2[1];
    if (uVar10 != 0) goto LAB_0062c20c;
LAB_0062c21c:
    if (!bVar15) {
      uVar3 = *param_1 - iVar5;
      iVar12 = iVar5;
      goto joined_r0x0062c264;
    }
    if (*param_1 == iVar5) {
      local_20 = 1;
      FUN_015bf41c(param_1,iVar5,1,1);
      iVar5 = param_1[2];
    }
    iVar12 = iVar5 + 1;
    *(undefined1 *)(param_1[1] + iVar5) = 0x2f;
  }
  else {
    bVar15 = *(char *)(param_1[1] + iVar5 + -1) != '/';
    pcVar13 = (char *)param_2[1];
    if (uVar10 == 0) goto LAB_0062c21c;
LAB_0062c20c:
    iVar12 = 0;
    if (*pcVar13 != '/') goto LAB_0062c21c;
  }
  param_1[2] = iVar12;
  uVar3 = *param_1 - iVar12;
joined_r0x0062c264:
  if (uVar3 < uVar10) {
    local_20 = 1;
    FUN_015bf41c(param_1,iVar12,uVar10,1);
    iVar12 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + iVar12,pcVar13,uVar10);
  iVar5 = *param_2;
  param_1[2] = iVar12 + uVar10;
  if (iVar5 == 0) {
    return;
  }
  if (pcVar13 == (char *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar10 = (byte)pcVar13[-3] & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar3 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar12 = uVar3 - 0x10, uVar3 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar3 = (uint)((byte)pcVar13[-3] >> 5);
  iVar11 = *(int *)(iVar5 + 8) + 0x10;
  iVar8 = iVar12 * uVar10 + iVar12 + -4;
  iVar12 = iVar11 + iVar8;
  if (4 < uVar3) {
    if (uVar3 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar3 = *(uint *)(iVar12 + -4);
    if (uVar3 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar12 - (int)pcVar13) < uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar3) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar3 = 1 << uVar10;
  pcVar13[-3] = -1;
  pcVar13[-0xffffffff00000002] = '\0';
  pcVar13[-0xffffffff00000001] = '\0';
  do {
    uVar9 = *(uint *)(iVar5 + 0x10);
    uVar6 = *(uint *)(iVar5 + 0xc) | uVar9;
    if ((uVar3 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar6 + uVar3 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar10);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar3 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar6 = *puVar14;
      if (uVar9 != uVar6) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar3 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar6) {
      return;
    }
  } while( true );
}

