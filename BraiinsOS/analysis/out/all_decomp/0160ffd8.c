// FUN_0160ffd8 @ 0160ffd8 size=564 calls_out=5 calls_in=1
// strings: 

void FUN_0160ffd8(int *param_1,int *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined2 *puVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  undefined4 uStack_28;
  
  piVar15 = (int *)*param_2;
  if ((uint)(param_2[1] - (int)piVar15) < 4) {
    param_1[1] = -0x7ffffffb;
    param_1[2] = (int)piVar15;
    *param_1 = 0;
    param_1[3] = 4;
    return;
  }
  local_48 = -0x7ffffffb;
  FUN_00f2cc28(&local_48);
  iVar16 = *piVar15;
  *param_2 = (int)(piVar15 + 1);
  FUN_01622628(&local_48,param_2);
  iVar6 = local_40;
  iVar5 = local_44;
  if (local_48 != -0x7ffffff6) {
    param_1[1] = local_48;
    param_1[2] = local_44;
    *param_1 = 0;
    param_1[3] = local_40;
    return;
  }
  if (local_44 == 0) {
    FUN_01613578(param_1 + 1,1,&DAT_018ab9f0,&DAT_018ab990);
    *param_1 = 0;
    return;
  }
  piVar15 = (int *)*param_2;
  if ((uint)(param_2[1] - (int)piVar15) < 4) {
    param_1[1] = -0x7ffffffb;
    param_1[2] = (int)piVar15;
    param_1[3] = 4;
    *param_1 = 0;
    local_48 = -0x7ffffff6;
  }
  else {
    local_48 = -0x7ffffffb;
    FUN_00f2cc28(&local_48);
    iVar10 = *piVar15;
    *param_2 = (int)(piVar15 + 1);
    FUN_0161f8fc(&local_48,param_2);
    if ((char)local_48 == '\x01') {
      param_1[3] = iStack_3c;
      param_1[2] = local_40;
      param_1[1] = local_44;
      *param_1 = 0;
    }
    else {
      FUN_016dd1aa(&local_68,(uint)&local_48 | 1,0x20);
      puVar14 = (undefined2 *)*param_2;
      if (1 < (uint)(param_2[1] - (int)puVar14)) {
        local_48 = -0x7ffffffb;
        FUN_00f2cc28(&local_48);
        uVar1 = *puVar14;
        *param_2 = (int)(puVar14 + 1);
        param_1[4] = local_68;
        param_1[5] = iStack_64;
        param_1[6] = iStack_60;
        param_1[7] = iStack_5c;
        param_1[8] = local_58;
        param_1[9] = iStack_54;
        param_1[10] = iStack_50;
        param_1[0xb] = iStack_4c;
        *(undefined2 *)(param_1 + 0xc) = uVar1;
        param_1[3] = iVar10;
        *param_1 = iVar5;
        param_1[1] = iVar6;
        param_1[2] = iVar16;
        return;
      }
      *(short *)(param_1 + 2) = (short)puVar14;
      param_1[3] = 2;
      param_1[1] = -0x7ffffffb;
      *(short *)((int)param_1 + 10) = (short)((uint)puVar14 >> 0x10);
      *param_1 = 0;
    }
  }
  if (iVar6 == 0) {
    return;
  }
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar16 = uVar11 - 0x10, uVar11 == 0)) {
    iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar16 * uVar17 + iVar16 + -4;
  iVar16 = iVar13 + iVar10;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar16 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar16 - iVar5) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar7;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar7 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar18 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar8 = *puVar18;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar4);
    *puVar18 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

