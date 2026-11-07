// FUN_013e2f08 @ 013e2f08 size=472 calls_out=6 calls_in=1
// strings: 

void FUN_013e2f08(undefined4 *param_1,int *param_2)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  bool bVar18;
  int local_50;
  char *pcStack_4c;
  int iStack_48;
  int local_40;
  char *local_3c;
  int local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  if (param_2[3] == 0) {
    bVar16 = true;
    local_24 = 0;
    local_28 = 1;
    local_2c = 0;
    FUN_013f9ed8((uint)&local_40 | 4,&local_2c);
    bVar18 = local_34 == 0;
    local_40 = 1;
    bVar4 = !bVar18;
    iVar7 = local_38;
    if (bVar4) {
      iVar7 = local_38 + local_34 * 2;
      bVar18 = iVar7 == 2;
    }
    uVar14 = (uint)bVar4;
    if (bVar18) {
      puVar5 = (uint *)thunk_FUN_016d4a50(0x34);
    }
    else {
      uVar14 = 1;
      bVar16 = (uint)(int)*(char *)(iVar7 + -1) < 0x80000000;
      puVar5 = (uint *)thunk_FUN_016d4a50(0x34);
    }
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    *puVar5 = uVar14;
    puVar5[1] = 1;
    puVar5[2] = uVar14;
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
    *(bool *)(puVar5 + 0xc) = bVar16;
    param_1[1] = local_40;
    param_1[2] = local_3c;
    param_1[3] = local_38;
    param_1[4] = local_34;
    param_1[5] = uStack_30;
    param_1[6] = puVar5;
    *param_1 = 2;
  }
  else {
    if (*param_2 == 1) {
      if ((param_2[3] != 1) || (cVar1 = *(char *)param_2[2], cVar1 != ((char *)param_2[2])[1])) {
LAB_013e3040:
        uVar6 = FUN_013e0328(param_2);
        iVar7 = param_2[1];
        iVar10 = param_2[2];
        iVar13 = param_2[3];
        iVar17 = param_2[4];
        param_1[1] = *param_2;
        param_1[2] = iVar7;
        param_1[3] = iVar10;
        param_1[4] = iVar13;
        param_1[5] = iVar17;
        param_1[6] = uVar6;
        *param_1 = 2;
        return;
      }
      local_3c = (char *)thunk_FUN_016d4a50(1);
      if (local_3c == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,1);
      }
      *local_3c = cVar1;
      local_38 = 1;
      local_40 = 1;
    }
    else {
      FUN_013e1408(&local_40,param_2[2]);
      if (local_40 == -0x80000000) goto LAB_013e3040;
    }
    local_50 = local_40;
    pcStack_4c = local_3c;
    iStack_48 = local_38;
    FUN_013e4248(param_1,&local_50);
  }
  if (param_2[1] == 0) {
    return;
  }
  iVar7 = param_2[2];
  if (iVar7 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar13 = uVar11 - 0x10, uVar11 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar15 = *(int *)(iVar10 + 8) + 0x10;
  iVar17 = iVar13 * uVar14 + iVar13 + -4;
  iVar13 = iVar15 + iVar17;
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
  if ((uint)(iVar13 - iVar7) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar17) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar10 + 0x14);
  uVar11 = 1 << uVar14;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
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
      FUN_016d3ca8(&local_28,iVar10,uVar14);
      iVar7 = local_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (iVar7 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar8;
      FUN_016d6ac4(local_28,iVar7);
      *puVar8 = uVar6;
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
      bVar16 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar16);
    *puVar5 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

