// FUN_015c8370 @ 015c8370 size=668 calls_out=11 calls_in=2
// strings: 

void FUN_015c8370(int param_1,char *param_2,undefined2 *param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  undefined2 *puVar16;
  uint *puVar17;
  undefined2 *local_6c;
  int local_68;
  undefined2 *local_64;
  char local_60 [4];
  short *local_5c;
  int local_58;
  char *local_44;
  undefined2 *local_40;
  char *local_3c;
  undefined4 local_28;
  
  if (param_3 == (undefined2 *)0x0) {
    bVar3 = false;
    local_64 = (undefined2 *)0x0;
    local_68 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(param_3);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    FUN_016dd1aa(iVar4,param_2,param_3);
    bVar3 = *param_2 == '/';
    local_68 = iVar4;
    local_64 = param_3;
  }
  local_3c = (char *)CONCAT31(local_3c._1_3_,6);
  local_28 = CONCAT22(CONCAT11(local_28._3_1_,bVar3),0x201);
  local_6c = local_64;
  local_44 = param_2;
  local_40 = param_3;
  FUN_015c7164(local_60,&local_44);
  if ((local_60[0] == '\t') && ((local_58 != 2 || (*local_5c != 0x2e2e)))) {
    iVar4 = local_58;
    do {
      iVar5 = iVar4;
      if (iVar5 == 0) goto LAB_015c84e4;
      iVar4 = iVar5 + -1;
    } while (*(char *)((int)local_5c + iVar5 + -1) != '.');
    if (iVar5 + -1 == 0) goto LAB_015c84e4;
    pcVar15 = (char *)(local_58 - iVar5);
    puVar16 = (undefined2 *)&DAT_00000001;
    if ((pcVar15 != (char *)0x0) &&
       (puVar16 = (undefined2 *)thunk_FUN_016d4a50(pcVar15), puVar16 == (undefined2 *)0x0))
    goto LAB_015c85f8;
    FUN_016dd1aa(puVar16,(int)local_5c + iVar5,pcVar15);
    local_44 = pcVar15;
    local_40 = puVar16;
    local_3c = pcVar15;
    FUN_015bf41c(&local_44,pcVar15,4,1,1);
    bVar3 = local_44 == (char *)0x0;
    builtin_strncpy((char *)((int)local_40 + (int)local_3c),".dwp",4);
    pcVar15 = local_3c + 4;
    puVar16 = local_40;
  }
  else {
LAB_015c84e4:
    pcVar15 = (char *)0x3;
    puVar16 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar16 == (undefined2 *)0x0) {
LAB_015c85f8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pcVar15);
    }
    *(undefined1 *)(puVar16 + 1) = 0x70;
    bVar3 = false;
    pcVar15 = (char *)0x3;
    *puVar16 = 0x7764;
  }
  FUN_015e4c80(&local_6c,puVar16,pcVar15);
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar16);
  }
  iVar4 = local_68;
  FUN_015c5480(&local_44,local_68,local_64);
  pcVar15 = local_3c;
  puVar16 = local_40;
  if (local_44 == &DAT_00000001) {
    uVar10 = *(uint *)(param_4 + 0x14);
    if (uVar10 == *(uint *)(param_4 + 0xc)) {
      FUN_015cbe88();
    }
    *(uint *)(param_4 + 0x14) = uVar10 + 1;
    puVar6 = (undefined4 *)(*(int *)(param_4 + 0x10) + uVar10 * 8);
    *puVar6 = puVar16;
    puVar6[1] = pcVar15;
    if (0xfffffffe < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018aaa7c);
    }
    iVar5 = *(int *)(param_4 + 0x10) + (uVar10 + 1) * 8;
    FUN_015c5808(param_1,*(undefined4 *)(iVar5 + -8),*(undefined4 *)(iVar5 + -4));
    if (*(int *)(param_1 + 0x40) != -0x80000000) goto joined_r0x015c85dc;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
joined_r0x015c85dc:
  if (local_6c == (undefined2 *)0x0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar10 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar12 = iVar7 * uVar10 + iVar7 + -4;
  iVar7 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - iVar4) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar11 = 1 << uVar10;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar5,uVar10);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

