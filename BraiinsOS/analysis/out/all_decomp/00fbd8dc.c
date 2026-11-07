// FUN_00fbd8dc @ 00fbd8dc size=3224 calls_out=11 calls_in=0
// strings: 

void FUN_00fbd8dc(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  bool bVar20;
  int local_4f8;
  undefined4 *local_4f4;
  int local_4f0;
  int local_4e8;
  undefined4 *local_4e4;
  uint local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  int local_2b8;
  undefined4 *local_2b4;
  uint local_2b0;
  int local_2a8;
  int local_2a4;
  uint local_2a0;
  int *local_288;
  int *local_284;
  int *local_280;
  int *local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  undefined4 *local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int *local_48;
  undefined4 *local_44;
  int *local_40;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_4f0 = 0;
  local_4f4 = (undefined4 *)&DAT_00000004;
  local_4f8 = 0;
  FUN_00fc7fe8(&local_288,param_2 + 0x208);
  piVar5 = local_27c;
  piVar11 = local_280;
  piVar16 = local_284;
  if (local_288 == (int *)&DAT_00000001) {
    uVar10 = *(undefined4 *)(param_2 + 0x208);
    FUN_016dd1aa(param_1 + 4,param_2 + 0x20c,0x200);
    *param_1 = piVar16;
    param_1[1] = piVar11;
    param_1[2] = piVar5;
    puVar18 = (undefined4 *)&DAT_00000004;
    iVar4 = 0;
    param_1[3] = uVar10;
LAB_00fbd950:
    iVar4 = iVar4 + 1;
    puVar6 = puVar18;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_00fc59f4(puVar6);
      puVar6 = puVar6 + 8;
    }
    if (local_4f8 == 0) {
      return;
    }
    if (puVar18 == (undefined4 *)0x0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar17 = *(byte *)((int)puVar18 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
      iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar12 = (uint)(*(byte *)((int)puVar18 + -3) >> 5);
    iVar15 = *(int *)(iVar4 + 8) + 0x10;
    iVar13 = iVar8 * uVar17 + iVar8 + -4;
    iVar8 = iVar15 + iVar13;
    if (4 < uVar12) {
      if (uVar12 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar12 = *(uint *)(iVar8 + -4);
      if (uVar12 < 5) {
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
    if ((uint)(iVar8 - (int)puVar18) < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(iVar4 + 0x14);
    uVar12 = 1 << uVar17;
    *(undefined1 *)((int)puVar18 + -3) = 0xff;
    *(undefined2 *)((int)puVar18 + -2) = 0;
    do {
      uVar14 = *(uint *)(iVar4 + 0x10);
      uVar9 = *(uint *)(iVar4 + 0xc) | uVar14;
      if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar17);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar18 = (undefined4 *)FUN_016d2bc8();
        uVar10 = *puVar18;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar18 = uVar10;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
        return;
      }
      puVar19 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar19);
        uVar9 = *puVar19;
        if (uVar14 != uVar9) goto LAB_016d409c;
        bVar20 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar20);
      *puVar19 = uVar12 + uVar14;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar14 == uVar9) {
        return;
      }
    } while( true );
  }
  local_278 = 0;
  local_288 = (int *)0x80000005;
  FUN_015afa08(&local_4f8);
  puVar18 = local_4f4;
  *local_4f4 = local_288;
  local_4f4[1] = local_284;
  local_4f4[2] = local_280;
  local_4f4[3] = local_27c;
  local_4f4[4] = local_278;
  local_4f4[5] = local_274;
  local_4f4[6] = local_270;
  local_4f4[7] = local_26c;
  iVar4 = 1;
  bVar1 = *param_2;
  local_2b4 = (undefined4 *)&DAT_00000004;
  cVar7 = '\x01';
  local_4f0 = 1;
  if (8 < bVar1) {
    cVar7 = bVar1 - 9;
  }
  local_2b0 = 0;
  local_2b8 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar7) {
  case '\0':
    local_288 = (int *)&DAT_80000004;
    local_284 = (int *)0x0;
    FUN_015afa08(&local_2b8);
    *local_2b4 = local_288;
    local_2b4[1] = local_284;
    local_2b4[2] = local_280;
    local_2b4[3] = local_27c;
    local_2b4[4] = local_278;
    local_2b4[5] = local_274;
    local_2b4[6] = local_270;
    local_2b4[7] = local_26c;
    local_2b0 = 1;
    iVar4 = 1;
    goto LAB_00fbe480;
  case '\x01':
    local_70 = (int *)0x0;
    local_74 = (int *)&DAT_00000004;
    local_78 = (int *)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar1) {
    case 0:
      iVar4 = *(int *)(param_2 + 4);
      puVar18 = (undefined4 *)((uint)&local_68 | 4);
      if (iVar4 < 0) {
        local_30 = (int *)0x0;
        local_34 = (int *)&DAT_00000004;
        local_38 = (int *)0x0;
        FUN_0127ac28(&local_38);
        *puVar18 = local_38;
        puVar18[1] = local_34;
        puVar18[2] = 1;
        *local_34 = -iVar4;
        local_58 = (undefined4 *)((uint)local_58 & 0xffffff00);
      }
      else if (iVar4 == 0) {
        *puVar18 = 0;
        puVar18[1] = 4;
        puVar18[2] = 0;
        puVar18[3] = 1;
      }
      else {
        local_30 = (int *)0x0;
        local_34 = (int *)&DAT_00000004;
        local_38 = (int *)0x0;
        FUN_0127ac28(&local_38);
        *puVar18 = local_38;
        puVar18[1] = local_34;
        puVar18[2] = 1;
        *local_34 = iVar4;
        local_58 = (undefined4 *)CONCAT31(local_58._1_3_,2);
      }
      local_68 = (int *)0x80000001;
      local_54 = (int *)0x0;
      FUN_015afa08(&local_78);
      break;
    case 1:
      piVar16 = *(int **)(param_2 + 0xc);
      uVar10 = 0;
      if ((int)piVar16 < 0) {
LAB_00fbdd50:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar10,piVar16);
      }
      uVar10 = *(undefined4 *)(param_2 + 8);
      if (piVar16 == (int *)0x0) {
        piVar5 = (int *)&DAT_00000001;
        piVar11 = (int *)0x0;
      }
      else {
        piVar5 = (int *)thunk_FUN_016d4a50(piVar16);
        piVar11 = piVar16;
        if (piVar5 == (int *)0x0) {
          uVar10 = 1;
          goto LAB_00fbdd50;
        }
      }
      FUN_016dd1aa(piVar5,uVar10,piVar16);
      local_58 = (undefined4 *)0x0;
      local_68 = (int *)0x80000003;
      local_64 = piVar11;
      local_60 = piVar5;
      local_5c = piVar16;
      FUN_015afa08(&local_78);
      goto LAB_00fbe3f0;
    case 2:
      FUN_00fc7fe8(&local_68,param_2 + 4);
      if (local_68 != (int *)&DAT_00000001) {
        iVar4 = 0;
        local_58 = (undefined4 *)0x0;
        local_68 = (int *)0x80000005;
        FUN_015afa08(&local_78);
        uVar17 = 0;
        *local_74 = (int)local_68;
        local_74[1] = (int)local_64;
        local_74[2] = (int)local_60;
        local_74[3] = (int)local_5c;
        local_74[4] = (int)local_58;
        local_74[5] = (int)local_54;
        local_74[6] = local_50;
        local_74[7] = local_4c;
        local_70 = (int *)&DAT_00000001;
        goto LAB_00fbe414;
      }
      iVar4 = 0;
      local_27c = *(int **)(param_2 + 4);
      local_284 = local_60;
      local_280 = local_5c;
      puVar6 = (undefined4 *)((uint)&local_288 | 4);
      local_288 = local_64;
      if (local_64 != (int *)&DAT_00000010) {
        local_4d8 = *puVar6;
        local_4d4 = puVar6[1];
        local_4d0 = puVar6[2];
        local_4c4 = local_4d8;
        local_4c0 = local_4d4;
        local_4bc = local_4d0;
        FUN_016dd1aa(param_1 + 4,param_2 + 8,0x200);
        *param_1 = local_64;
        param_1[1] = local_4d8;
        param_1[2] = local_4d4;
        param_1[3] = local_4d0;
        iVar4 = 1;
        goto LAB_00fbd950;
      }
      uVar17 = 0;
      goto LAB_00fbe42c;
    case 3:
      uVar10 = *(undefined4 *)(param_2 + 1);
      local_58 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (local_58 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,4);
      }
      *local_58 = uVar10;
      local_4c = CONCAT22(local_4c._2_2_,0x100);
      local_50 = 0;
      local_68 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_60 = (int *)0x0;
      local_54 = (int *)&DAT_00000004;
      local_5c = (int *)&DAT_00000004;
      FUN_015afa08(&local_78);
      break;
    case 4:
      local_60 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_68 = (int *)0x0;
      FUN_0127ac28(&local_68);
      piVar11 = local_64;
      piVar16 = local_68;
      iVar4 = *(int *)(param_2 + 4);
      *local_64 = 1;
      if (iVar4 == 0) {
        local_2c = 1;
        local_34 = (int *)&DAT_00000004;
        local_38 = (int *)0x0;
      }
      else {
        local_60 = (int *)0x0;
        local_64 = (int *)&DAT_00000004;
        local_68 = (int *)0x0;
        FUN_0127ac28(&local_68);
        local_38 = local_68;
        *local_64 = iVar4;
        local_34 = local_64;
        local_2c = CONCAT31(local_2c._1_3_,2);
      }
      local_30 = (int *)(uint)(iVar4 != 0);
      FUN_00fbe8c8(&local_48,&local_38);
      local_4c = CONCAT22(local_4c._2_2_,0x100);
      local_50 = 0;
      local_60 = (int *)&DAT_00000001;
      local_5c = local_48;
      local_58 = local_44;
      local_54 = local_40;
      local_68 = piVar16;
      local_64 = piVar11;
      FUN_015afa08(&local_78);
      *local_74 = (int)local_68;
      local_74[1] = (int)local_64;
      local_74[2] = (int)local_60;
      local_74[3] = (int)local_5c;
      local_74[4] = (int)local_58;
      local_74[5] = (int)local_54;
      local_74[6] = local_50;
      local_74[7] = local_4c;
      local_70 = (int *)&DAT_00000001;
      if (local_38 != (int *)0x0) {
        piVar5 = local_34;
        goto LAB_00fbe23c;
      }
      goto LAB_00fbe40c;
    case 5:
      local_60 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_68 = (int *)0x0;
      FUN_0127ac28(&local_68);
      piVar11 = local_64;
      piVar16 = local_68;
      iVar4 = *(int *)(param_2 + 4);
      *local_64 = 2;
      local_60 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_68 = (int *)0x0;
      if (iVar4 == 0) {
        bVar20 = true;
        local_38 = (int *)0x0;
        local_34 = (int *)&DAT_00000004;
        local_2c = 1;
      }
      else {
        FUN_0127ac28(&local_68);
        local_38 = local_68;
        local_2c = CONCAT31(local_2c._1_3_,2);
        *local_64 = iVar4;
        bVar20 = local_68 == (int *)0x0;
        local_34 = local_64;
      }
      piVar5 = local_34;
      local_30 = (int *)(uint)(iVar4 != 0);
      local_68 = local_38;
      local_64 = local_34;
      FUN_00fbe8c8(&local_48,&local_38);
      local_4c = CONCAT22(local_4c._2_2_,0x100);
      local_60 = (int *)&DAT_00000001;
      local_50 = 0;
      local_5c = local_48;
      local_58 = local_44;
      local_54 = local_40;
      local_68 = piVar16;
      local_64 = piVar11;
      FUN_015afa08(&local_78);
      goto LAB_00fbe218;
    case 6:
      local_60 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_68 = (int *)0x0;
      FUN_0127ac28(&local_68);
      piVar11 = local_64;
      piVar16 = local_68;
      iVar4 = *(int *)(param_2 + 4);
      *local_64 = 3;
      local_60 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_68 = (int *)0x0;
      if (iVar4 == 0) {
        bVar20 = true;
        local_38 = (int *)0x0;
        local_34 = (int *)&DAT_00000004;
        local_2c = 1;
      }
      else {
        FUN_0127ac28(&local_68);
        local_38 = local_68;
        local_2c = CONCAT31(local_2c._1_3_,2);
        *local_64 = iVar4;
        bVar20 = local_68 == (int *)0x0;
        local_34 = local_64;
      }
      piVar5 = local_34;
      local_30 = (int *)(uint)(iVar4 != 0);
      local_68 = local_38;
      local_64 = local_34;
      FUN_00fbe8c8(&local_48,&local_38);
      local_4c = CONCAT22(local_4c._2_2_,0x100);
      local_60 = (int *)&DAT_00000001;
      local_50 = 0;
      local_5c = local_48;
      local_58 = local_44;
      local_54 = local_40;
      local_68 = piVar16;
      local_64 = piVar11;
      FUN_015afa08(&local_78);
LAB_00fbe218:
      *local_74 = (int)local_68;
      local_74[1] = (int)local_64;
      local_74[2] = (int)local_60;
      local_74[3] = (int)local_5c;
      local_74[4] = (int)local_58;
      local_74[5] = (int)local_54;
      local_74[6] = local_50;
      local_74[7] = local_4c;
      local_70 = (int *)&DAT_00000001;
      if (!bVar20) {
LAB_00fbe23c:
        local_70 = (int *)&DAT_00000001;
        thunk_FUN_016d3fb4(piVar5);
      }
      goto LAB_00fbe40c;
    case 7:
      uVar10 = 0;
      local_60 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_68 = (int *)0x0;
      FUN_0127ac28(&local_68);
      piVar11 = local_64;
      piVar16 = local_68;
      local_54 = *(int **)(param_2 + 0xc);
      *local_64 = 4;
      if ((int)local_54 < 0) {
LAB_00fbdd30:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar10,local_54);
      }
      uVar10 = *(undefined4 *)(param_2 + 8);
      puVar18 = (undefined4 *)&DAT_00000001;
      piVar5 = (int *)0x0;
      if ((local_54 != (int *)0x0) &&
         (puVar18 = (undefined4 *)thunk_FUN_016d4a50(local_54), piVar5 = local_54,
         puVar18 == (undefined4 *)0x0)) {
        uVar10 = 1;
        goto LAB_00fbdd30;
      }
      FUN_016dd1aa(puVar18,uVar10,local_54);
      local_4c = CONCAT22(local_4c._2_2_,0x100);
      local_50 = 0;
      local_60 = (int *)&DAT_00000001;
      local_68 = piVar16;
      local_64 = piVar11;
      local_5c = piVar5;
      local_58 = puVar18;
      FUN_015afa08(&local_78);
LAB_00fbe3f0:
      *local_74 = (int)local_68;
      local_74[1] = (int)local_64;
      local_74[2] = (int)local_60;
      local_74[3] = (int)local_5c;
      local_74[4] = (int)local_58;
      local_74[5] = (int)local_54;
      local_74[6] = local_50;
      local_74[7] = local_4c;
      local_70 = (int *)&DAT_00000001;
LAB_00fbe40c:
      iVar4 = 0;
      uVar17 = 0;
      goto LAB_00fbe414;
    case 8:
      local_60 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_68 = (int *)0x0;
      FUN_0127ac28(&local_68);
      piVar11 = local_64;
      piVar16 = local_68;
      iVar4 = *(int *)(param_2 + 8);
      iVar8 = *(int *)(param_2 + 0xc);
      *local_64 = 6;
      local_60 = (int *)0x0;
      local_64 = (int *)&DAT_00000004;
      local_68 = (int *)0x0;
      if (iVar4 == 0 && iVar8 == 0) {
        bVar20 = true;
        local_38 = (int *)0x0;
        local_34 = (int *)&DAT_00000004;
        local_30 = (int *)0x0;
        local_2c = 1;
      }
      else {
        piVar5 = (int *)&DAT_00000004;
        do {
          piVar3 = local_60;
          if (local_60 == local_68) {
            FUN_0127ac28(&local_68);
            piVar5 = local_64;
          }
          piVar5[(int)piVar3] = iVar4;
          local_60 = (int *)((int)piVar3 + 1);
          bVar20 = iVar8 != 0;
          iVar4 = iVar8;
          iVar8 = 0;
        } while (bVar20);
        local_38 = local_68;
        local_2c = CONCAT31(local_2c._1_3_,2);
        bVar20 = local_68 == (int *)0x0;
        local_34 = local_64;
        local_30 = local_60;
      }
      piVar3 = local_34;
      local_68 = local_38;
      local_64 = local_34;
      local_60 = local_30;
      FUN_00fbe8c8(&local_48,&local_38);
      piVar5 = local_70;
      local_4c = CONCAT22(local_4c._2_2_,0x100);
      local_50 = 0;
      local_60 = (int *)&DAT_00000001;
      local_5c = local_48;
      local_58 = local_44;
      local_54 = local_40;
      local_68 = piVar16;
      local_64 = piVar11;
      if (local_70 == local_78) {
        FUN_015afa08(&local_78);
      }
      piVar16 = local_74 + (int)piVar5 * 8;
      *piVar16 = (int)local_68;
      piVar16[1] = (int)local_64;
      piVar16[2] = (int)local_60;
      piVar16[3] = (int)local_5c;
      piVar16[4] = (int)local_58;
      piVar16[5] = (int)local_54;
      piVar16[6] = local_50;
      piVar16[7] = local_4c;
      local_70 = (int *)((int)piVar5 + 1);
      if (!bVar20) {
        thunk_FUN_016d3fb4(piVar3);
      }
      uVar17 = local_2b0;
      iVar4 = local_2b8;
      goto LAB_00fbe414;
    }
    iVar4 = 0;
    uVar17 = 0;
    *local_74 = (int)local_68;
    local_74[1] = (int)local_64;
    local_74[2] = (int)local_60;
    local_74[3] = (int)local_5c;
    local_74[4] = (int)local_58;
    local_74[5] = (int)local_54;
    local_74[6] = local_50;
    local_74[7] = local_4c;
    local_70 = (int *)&DAT_00000001;
LAB_00fbe414:
    local_284 = local_78;
    local_280 = local_74;
    local_27c = local_70;
LAB_00fbe42c:
    piVar16 = (int *)((uint)&local_288 | 4);
    uVar12 = piVar16[2];
    local_2a8 = *piVar16;
    iVar8 = piVar16[1];
    local_2a4 = iVar8;
    local_2a0 = uVar12;
    if (iVar4 - uVar17 < uVar12) {
      FUN_00fc4a98(&local_2b8,uVar17,uVar12,4,0x20);
      uVar17 = local_2b0;
    }
    FUN_016dd1aa(local_2b4 + uVar17 * 8,iVar8,uVar12 << 5);
    local_2b0 = uVar17 + uVar12;
    if (local_2a8 != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
    iVar4 = local_4f0;
    goto LAB_00fbe480;
  case '\x02':
    local_60 = (int *)0x0;
    local_64 = (int *)&DAT_00000004;
    local_68 = (int *)0x0;
    break;
  case '\x04':
    iVar4 = 2;
  case '\x03':
    local_60 = (int *)0x0;
    local_64 = (int *)&DAT_00000004;
    local_68 = (int *)0x0;
    FUN_0127ac28(&local_68);
    *local_64 = iVar4;
    local_60 = (int *)&DAT_00000001;
  }
  local_288 = local_68;
  local_284 = local_64;
  local_280 = local_60;
  local_26c = CONCAT22(local_26c._2_2_,0x201);
  local_270 = 0;
  local_274 = 0;
  local_278 = 1;
  local_27c = (int *)0x0;
  FUN_015afa08(&local_2b8);
  *local_2b4 = local_288;
  local_2b4[1] = local_284;
  local_2b4[2] = local_280;
  local_2b4[3] = local_27c;
  local_2b4[4] = local_278;
  local_2b4[5] = local_274;
  local_2b4[6] = local_270;
  local_2b4[7] = local_26c;
  local_2b0 = 1;
  iVar4 = 1;
LAB_00fbe480:
  uVar17 = local_2b0;
  puVar18 = local_2b4;
  local_4e8 = local_2b8;
  local_4e4 = local_2b4;
  local_4e0 = local_2b0;
  if ((uint)(local_4f8 - iVar4) < local_2b0) {
    FUN_00fc4a98(&local_4f8,iVar4,local_2b0,4,0x20);
    iVar4 = local_4f0;
  }
  FUN_016dd1aa(local_4f4 + iVar4 * 8,puVar18,uVar17 << 5);
  local_4f0 = iVar4 + uVar17;
  local_288 = (int *)0x8000000e;
  local_4e0 = 0;
  local_280 = local_4f4;
  local_284 = (int *)local_4f8;
  local_278 = 0;
  local_27c = (int *)local_4f0;
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x20);
  }
  *puVar6 = local_288;
  puVar6[1] = local_284;
  puVar6[2] = local_280;
  puVar6[3] = local_27c;
  puVar6[4] = local_278;
  puVar6[5] = local_274;
  puVar6[6] = local_270;
  puVar6[7] = local_26c;
  *param_1 = 0x10;
  param_1[1] = 1;
  param_1[2] = puVar6;
  param_1[3] = 1;
  if (local_4e8 != 0) {
    thunk_FUN_016d3fb4(puVar18);
  }
  return;
}

