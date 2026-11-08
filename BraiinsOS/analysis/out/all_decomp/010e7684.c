// FUN_010e7684 @ 010e7684 size=348 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010e7684(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  local_40 = 2;
  local_44 = param_2;
  FUN_010e1aa0(&local_30,&local_44);
  iVar6 = iStack_28;
  iVar5 = iStack_2c;
  puVar7 = local_44;
  if (local_30 != -0x7ffffff6) {
    param_1[1] = local_30;
    param_1[2] = iStack_2c;
    param_1[3] = iStack_28;
    *param_1 = 0;
    return;
  }
  if (iStack_2c == 0) {
    FUN_01613578(param_1 + 1,0,&DAT_01885c48,&DAT_018ab990);
    *param_1 = 0;
    return;
  }
  if (local_40 == 0) {
LAB_010e774c:
    FUN_01613578(&local_30,1,&DAT_01885c48,&DAT_018ab990);
    *param_1 = 0;
    param_1[1] = local_30;
    param_1[2] = iStack_2c;
    param_1[3] = iStack_28;
  }
  else {
    puVar15 = (undefined2 *)*local_44;
    if ((uint)(local_44[1] - (int)puVar15) < 2) {
      local_3c = -0x7ffffffb;
      local_34 = 2;
      local_38 = puVar15;
    }
    else {
      local_30 = -0x7ffffffb;
      FUN_00f2cc28(&local_30);
      uVar1 = *puVar15;
      *puVar7 = puVar15 + 1;
      FUN_0161be60(&local_3c,puVar7,uVar1);
      if (local_3c == -0x7ffffff6) {
        if (local_38 != (undefined2 *)0x0) {
          *param_1 = iVar5;
          param_1[1] = iVar6;
          param_1[2] = (int)local_38;
          param_1[3] = local_34;
          return;
        }
        goto LAB_010e774c;
      }
    }
    param_1[1] = local_3c;
    param_1[2] = (int)local_38;
    *param_1 = 0;
    param_1[3] = local_34;
  }
  if (iVar6 == 0) {
    return;
  }
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar12 = iVar8 * uVar16 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - iVar5) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&iStack_28,iVar6,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(iStack_28,iStack_24);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar4);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

