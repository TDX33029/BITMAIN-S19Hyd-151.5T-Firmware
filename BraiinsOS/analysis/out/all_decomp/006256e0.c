// FUN_006256e0 @ 006256e0 size=716 calls_out=11 calls_in=2
// strings: 

void FUN_006256e0(int param_1,char *param_2,undefined2 *param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  uint *puVar18;
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
      iVar7 = iVar4;
      if (iVar7 == 0) goto LAB_006257ec;
      iVar4 = iVar7 + -1;
    } while (*(char *)((int)local_5c + iVar7 + -1) != '.');
    if (iVar7 + -1 == 0) goto LAB_006257ec;
    pcVar16 = (char *)(local_58 - iVar7);
    if ((int)pcVar16 < 0) {
      uVar5 = 0;
      goto LAB_006257e0;
    }
    if (pcVar16 == (char *)0x0) {
      pcVar17 = (char *)0x0;
      puVar8 = (undefined2 *)&DAT_00000001;
    }
    else {
      puVar8 = (undefined2 *)thunk_FUN_016d4a50(pcVar16);
      if (puVar8 == (undefined2 *)0x0) {
        uVar5 = 1;
        goto LAB_006257e0;
      }
      pcVar17 = pcVar16;
    }
    FUN_016dd1aa(puVar8,(int)local_5c + iVar7,pcVar16);
    local_44 = pcVar17;
    local_40 = puVar8;
    local_3c = pcVar16;
    if ((uint)((int)pcVar17 - (int)pcVar16) < 4) {
      FUN_0061d240(&local_44,pcVar16,4,1,1);
    }
    pcVar16 = local_3c + 4;
    builtin_strncpy((char *)((int)local_40 + (int)local_3c),".dwp",4);
    bVar3 = local_44 == (char *)0x0;
    puVar8 = local_40;
  }
  else {
LAB_006257ec:
    pcVar16 = (char *)0x3;
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
      pcVar16 = (char *)0x3;
      uVar5 = 1;
LAB_006257e0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,pcVar16);
    }
    bVar3 = false;
    *(undefined1 *)(puVar8 + 1) = 0x70;
    *puVar8 = 0x7764;
  }
  FUN_015e4c80(&local_6c,puVar8,pcVar16);
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar8);
  }
  iVar4 = local_68;
  FUN_00620e6c(&local_44,local_68,local_64);
  pcVar16 = local_3c;
  puVar8 = local_40;
  if (local_44 == &DAT_00000001) {
    uVar11 = *(uint *)(param_4 + 0x14);
    if (uVar11 == *(uint *)(param_4 + 0xc)) {
      FUN_0061cbc8();
    }
    puVar6 = (undefined4 *)(*(int *)(param_4 + 0x10) + uVar11 * 8);
    *puVar6 = puVar8;
    puVar6[1] = pcVar16;
    *(uint *)(param_4 + 0x14) = uVar11 + 1;
    if (0xfffffffe < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018578c0);
    }
    iVar7 = *(int *)(param_4 + 0x10) + (uVar11 + 1) * 8;
    FUN_0062ddfc(param_1,*(undefined4 *)(iVar7 + -8),*(undefined4 *)(iVar7 + -4));
    if (*(int *)(param_1 + 0x40) != -0x80000000) goto LAB_006258cc;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
LAB_006258cc:
  if (local_6c == (undefined2 *)0x0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar11 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar15 = *(int *)(iVar7 + 8) + 0x10;
  iVar13 = iVar9 * uVar11 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
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
  if ((uint)(iVar9 - iVar4) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar12 = 1 << uVar11;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar7 + 0x10);
    uVar10 = *(uint *)(iVar7 + 0xc) | uVar14;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar7,uVar11);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar18 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar10 = *puVar18;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

