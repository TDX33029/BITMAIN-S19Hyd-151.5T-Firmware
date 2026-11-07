// FUN_00f7e8ac @ 00f7e8ac size=1192 calls_out=12 calls_in=1
// strings: 

void FUN_00f7e8ac(uint param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined *local_88;
  undefined4 *local_84;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 *local_60;
  undefined *local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  uVar3 = param_4 & 0xff;
  uVar7 = param_4;
  if (uVar3 == 2) {
    if (*(int *)(param_3 + 0x50) != 0) {
      puVar8 = *(undefined4 **)(param_3 + 0x4c);
      puVar12 = puVar8 + *(int *)(param_3 + 0x50) * 2;
      do {
        FUN_00f9c438(param_2,*puVar8,puVar8[1]);
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar12);
    }
    iVar22 = 0;
    puVar8 = *(undefined4 **)(param_2 + 0x24);
    local_58 = (undefined4 *)0x0;
    local_5c = (undefined *)0x4;
    local_60 = (undefined4 *)0x0;
    if (*(int *)(param_2 + 0x28) == 0) {
      bVar1 = true;
      local_84 = (undefined4 *)0x0;
    }
    else {
      puVar12 = puVar8 + *(int *)(param_2 + 0x28) * 2;
      local_84 = (undefined4 *)0x0;
      uVar16 = *(undefined4 *)(param_3 + 0x114);
      iVar15 = *(int *)(param_3 + 0x118);
      local_88 = (undefined *)0x4;
      do {
        uVar9 = *puVar8;
        iVar13 = puVar8[1];
        puVar8 = puVar8 + 2;
        iVar18 = *(int *)(*(int *)(param_1 + 8) + 0x48);
        for (iVar21 = *(int *)(*(int *)(param_1 + 8) + 0x4c) * 0x134; iVar21 != 0;
            iVar21 = iVar21 + -0x134) {
          if ((*(int *)(iVar18 + 0x118) == iVar13) &&
             (iVar4 = thunk_FUN_016dd50a(*(undefined4 *)(iVar18 + 0x114),uVar9,iVar13), iVar4 == 0))
          {
            iVar13 = *(int *)(iVar18 + 0x50) << 3;
            piVar10 = (int *)(*(int *)(iVar18 + 0x4c) + 4);
            goto LAB_00f7e9f8;
          }
          iVar18 = iVar18 + 0x134;
        }
LAB_00f7e97c:
      } while (puVar8 != puVar12);
      bVar1 = local_60 == (undefined4 *)0x0;
    }
    puVar2 = local_5c;
    for (; (int)local_84 * 4 != iVar22; iVar22 = iVar22 + 4) {
      puVar8 = *(undefined4 **)(puVar2 + iVar22);
      FUN_00f9c438(param_2,*puVar8,puVar8[1]);
    }
    if (!bVar1) {
      thunk_FUN_016d3fb4(puVar2);
    }
    uVar7 = 2;
  }
  FUN_00f9b31c(param_2,param_3,uVar7);
  if ((param_4 & 0xff) != 0) {
    uVar16 = *(undefined4 *)(param_3 + 0x114);
    uVar7 = *(uint *)(param_3 + 0x118);
    iVar15 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
    iVar13 = *(int *)(*(int *)(param_1 + 8) + 0x70);
    iVar22 = iVar15;
joined_r0x00f7eaf8:
    while (iVar18 = iVar22, iVar18 != iVar15 + iVar13 * 0x30) {
      puVar14 = (uint *)(*(int *)(iVar18 + 4) + 4);
      for (iVar21 = *(int *)(iVar18 + 8) << 3; iVar22 = iVar18 + 0x30, iVar21 != 0;
          iVar21 = iVar21 + -8) {
        if ((*puVar14 == uVar7) &&
           (iVar4 = thunk_FUN_016dd50a(puVar14[-1],uVar16,uVar7), iVar4 == 0)) {
          iVar19 = *(int *)(param_2 + 0x24);
          iVar4 = 0;
          iVar17 = *(int *)(iVar18 + 0x28);
          iVar21 = *(int *)(param_2 + 0x28) << 3;
          uVar11 = *(uint *)(iVar18 + 0x24);
          goto LAB_00f7eb74;
        }
        puVar14 = puVar14 + 2;
      }
    }
  }
  return;
LAB_00f7e9f8:
  if (iVar13 == 0) goto LAB_00f7e97c;
  if ((*piVar10 == iVar15) && (iVar21 = thunk_FUN_016dd50a(piVar10[-1],uVar16,iVar15), iVar21 == 0))
  {
    if (local_84 == local_60) {
      FUN_00f98d28(&local_60);
      local_88 = local_5c;
    }
    *(int *)(local_88 + (int)local_84 * 4) = iVar18 + 0x114;
    local_84 = (undefined4 *)((int)local_84 + 1);
    local_58 = local_84;
    goto LAB_00f7e97c;
  }
  iVar13 = iVar13 + -8;
  piVar10 = piVar10 + 2;
  goto LAB_00f7e9f8;
LAB_00f7eb74:
  if (iVar21 == 0) goto LAB_00f7ebb8;
  if ((*(int *)(iVar19 + iVar4 * 8 + 4) == iVar17) &&
     (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar19 + iVar4 * 8),uVar11,iVar17), iVar5 == 0)) {
    local_6c = 0;
    local_68 = param_2 + 0x20U;
    local_64 = iVar4;
    goto LAB_00f7ebc4;
  }
  iVar4 = iVar4 + 1;
  iVar21 = iVar21 + -8;
  goto LAB_00f7eb74;
LAB_00f7ebb8:
  local_6c = param_2 + 0x20U;
  local_68 = uVar11;
  local_64 = iVar17;
LAB_00f7ebc4:
  local_48 = 4;
  local_44 = 0;
  local_4c = 0;
  local_2c = 0;
  local_30 = 4;
  local_3c = 4;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_60 = (undefined4 *)0x0;
  local_28 = 0x300;
  iVar21 = FUN_00f9b4c4(&local_6c,&local_60);
  uVar6 = (uint)*(byte *)(iVar21 + 0x39);
  uVar20 = uVar6;
  if (uVar6 < uVar3) {
    uVar20 = uVar3;
  }
  if (uVar6 == 3) {
    uVar20 = param_4;
  }
  *(char *)(iVar21 + 0x39) = (char)uVar20;
  FUN_00f9b5d4();
  puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar8 = 1;
  puVar8[1] = 1;
  puVar8[2] = uVar16;
  puVar8[3] = uVar7;
  local_58 = (undefined4 *)0x624a6592;
  local_54 = 0x7a1e0425;
  local_50 = 0x352afdaa;
  local_4c = 0x26f1dca1;
  local_5c = &DAT_01880384;
  if (-1 < (int)uVar7) {
    param_1 = 1;
  }
  local_60 = puVar8;
  if ((int)uVar7 < 1) {
    uVar20 = 0;
    if (0x7fffffff < uVar7) {
LAB_00f7ed4c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar20,param_1);
    }
  }
  else {
    param_1 = thunk_FUN_016d4a50(uVar7);
    if (param_1 == 0) {
      uVar20 = 1;
      param_1 = uVar7;
      goto LAB_00f7ed4c;
    }
    uVar20 = uVar7;
  }
  FUN_016dd1aa(param_1,uVar16,uVar7);
  local_6c = uVar20;
  local_68 = param_1;
  local_64 = uVar7;
  FUN_00f9ac88(param_2,uVar11,iVar17,&local_60,&local_6c);
  goto joined_r0x00f7eaf8;
}

