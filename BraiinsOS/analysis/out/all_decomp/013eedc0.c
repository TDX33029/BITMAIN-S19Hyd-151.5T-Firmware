// FUN_013eedc0 @ 013eedc0 size=772 calls_out=9 calls_in=0
// strings: 

void FUN_013eedc0(undefined4 *param_1,int *param_2)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  undefined4 uStack_38;
  uint local_30;
  char *local_2c;
  uint local_28;
  
  if (param_2[3] == 0) {
    bVar15 = true;
    local_28 = 0;
    local_2c = &DAT_00000001;
    local_30 = 0;
    FUN_013f9ed8((uint)&local_48 | 4,&local_30);
    bVar19 = local_3c == 0;
    local_48 = 1;
    bVar4 = !bVar19;
    iVar8 = local_40;
    if (bVar4) {
      iVar8 = local_40 + local_3c * 2;
      bVar19 = iVar8 == 2;
    }
    uVar16 = (uint)bVar4;
    if (bVar19) {
      puVar5 = (uint *)thunk_FUN_016d4a50(0x34);
    }
    else {
      uVar16 = 1;
      bVar15 = (uint)(int)*(char *)(iVar8 + -1) < 0x80000000;
      puVar5 = (uint *)thunk_FUN_016d4a50(0x34);
    }
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    *puVar5 = uVar16;
    puVar5[1] = 1;
    puVar5[2] = uVar16;
    puVar5[3] = 1;
    puVar5[4] = 1;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(undefined2 *)((int)puVar5 + 0x31) = 0;
    *(bool *)(puVar5 + 0xc) = bVar15;
    param_1[1] = local_48;
    param_1[2] = uStack_44;
    param_1[3] = local_40;
    param_1[4] = local_3c;
    param_1[5] = uStack_38;
    param_1[6] = puVar5;
    *param_1 = 2;
    iVar8 = param_2[1];
    goto joined_r0x013eeef0;
  }
  if (*param_2 == 1) {
    if ((param_2[3] != 1) || (cVar1 = *(char *)param_2[2], cVar1 != ((char *)param_2[2])[1]))
    goto LAB_013eef14;
    uVar18 = 1;
    local_2c = (char *)thunk_FUN_016d4a50(1);
    uVar16 = 1;
    if (local_2c == (char *)0x0) goto LAB_013ef0b4;
    *local_2c = cVar1;
    local_28 = 1;
    local_30 = 1;
    pcVar6 = local_2c;
    goto LAB_013eefac;
  }
  FUN_013e1408(&local_30,param_2[2]);
  uVar16 = local_28;
  if (local_30 == 0x80000000) {
LAB_013eef14:
    uVar18 = FUN_013e0328(param_2);
    iVar8 = param_2[1];
    iVar10 = param_2[2];
    iVar13 = param_2[3];
    iVar17 = param_2[4];
    param_1[1] = *param_2;
    param_1[2] = iVar8;
    param_1[3] = iVar10;
    param_1[4] = iVar13;
    param_1[5] = iVar17;
    param_1[6] = uVar18;
    *param_1 = 2;
    return;
  }
  if (local_28 < local_30) {
    if (local_28 != 0) {
      pcVar6 = (char *)thunk_FUN_016d4ea4(local_2c,local_28);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar16);
      }
      goto LAB_013eefac;
    }
    thunk_FUN_016d3fb4(local_2c);
LAB_013ef028:
    uVar16 = 0x34;
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar7 == (undefined4 *)0x0) {
      uVar18 = 4;
LAB_013ef0b4:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(uVar18,uVar16);
    }
    *puVar7 = 1;
    puVar7[1] = 0;
    puVar7[2] = 1;
    puVar7[3] = 0;
    puVar7[4] = 1;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(undefined1 *)((int)puVar7 + 0x32) = 0;
    *(undefined2 *)(puVar7 + 0xc) = 1;
    *param_1 = 0;
  }
  else {
    pcVar6 = local_2c;
    if (local_28 == 0) goto LAB_013ef028;
LAB_013eefac:
    FUN_00fab1e0(&local_48,pcVar6,uVar16);
    uVar18 = local_48;
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(undefined2 *)((int)puVar7 + 0x31) = 0x101;
    *puVar7 = 1;
    puVar7[1] = uVar16;
    puVar7[2] = 1;
    puVar7[3] = uVar16;
    puVar7[4] = 1;
    *(byte *)(puVar7 + 0xc) = (byte)uVar18 ^ 1;
    *param_1 = 1;
    param_1[1] = pcVar6;
    param_1[2] = uVar16;
  }
  param_1[6] = puVar7;
  iVar8 = param_2[1];
joined_r0x013eeef0:
  if (iVar8 == 0) {
    return;
  }
  iVar8 = param_2[2];
  if (iVar8 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar13 = uVar11 - 0x10, uVar11 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar14 = *(int *)(iVar10 + 8) + 0x10;
  iVar17 = iVar13 * uVar16 + iVar13 + -4;
  iVar13 = iVar14 + iVar17;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar13 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar13 - iVar8) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar17) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar10 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar10 + 0x10);
    uVar9 = *(uint *)(iVar10 + 0xc) | uVar12;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar10,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar18 = *puVar7;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar7 = uVar18;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar5 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar5);
      uVar9 = *puVar5;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar15);
    *puVar5 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

