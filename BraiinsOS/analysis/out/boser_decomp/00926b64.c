// FUN_00926b64 @ 00926b64 size=1676 calls_out=13 calls_in=3
// strings: FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug)

void FUN_00926b64(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  undefined4 ****local_aa0;
  undefined4 local_a9c;
  int *local_a98;
  undefined4 ****local_a94;
  uint local_a90;
  int *local_a8c;
  undefined4 local_a88;
  undefined4 local_a84;
  undefined4 ****local_a80;
  uint uStack_a7c;
  int *piStack_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 ****local_a6c;
  undefined4 ****local_a68;
  uint local_a64;
  int *local_a60;
  undefined4 local_a5c;
  uint local_a58;
  undefined4 ****local_a50;
  uint uStack_a4c;
  int *piStack_a48;
  undefined4 local_a44;
  undefined4 local_a40;
  undefined4 ****local_a3c;
  uint uStack_a38;
  int *piStack_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  undefined4 ****local_a28;
  uint local_a24;
  int *local_a20;
  int iStack_a1c;
  uint local_a18;
  int iStack_a14;
  int local_a10;
  int iStack_a0c;
  int local_a08;
  int iStack_a04;
  int iStack_a00;
  int iStack_9fc;
  int iStack_9f8;
  int iStack_9f4;
  int local_9f0;
  int iStack_9ec;
  int iStack_9e8;
  int iStack_9e4;
  int iStack_9e0;
  int iStack_9dc;
  int local_9d8;
  int iStack_9d4;
  int iStack_9d0;
  int iStack_9cc;
  int local_9c8;
  int iStack_9c4;
  int iStack_9c0;
  int iStack_9bc;
  undefined4 ****local_9b8;
  uint local_9b4;
  int *local_9b0;
  int local_9ac;
  int local_9a4;
  undefined1 local_99d;
  int local_818;
  int iStack_814;
  int iStack_810;
  int iStack_80c;
  int iStack_808;
  int iStack_804;
  int iStack_800;
  int iStack_7fc;
  undefined1 auStack_7f8 [528];
  undefined4 ****local_5e8;
  int local_5e4;
  undefined *local_5e0;
  undefined4 ****local_5dc;
  undefined4 ****local_5d8;
  undefined *local_5d4;
  undefined4 ****local_5d0;
  undefined *local_5cc;
  undefined *local_5c8;
  undefined4 ****local_5c4;
  int *local_5c0;
  undefined *local_5bc;
  undefined1 auStack_308 [740];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x97)) {
  case 0:
    *(undefined2 *)(param_2 + 0x25) = 0;
    iVar29 = param_2[0x24];
    iVar8 = param_2[0x18];
    iVar12 = param_2[0x19];
    iVar18 = param_2[0x1a];
    iVar22 = param_2[0x1b];
    iVar9 = param_2[0x1c];
    iVar13 = param_2[0x1d];
    iVar19 = param_2[0x1e];
    iVar23 = param_2[0x1f];
    piVar28 = param_2 + 0x14;
    *piVar28 = param_2[0x16];
    ppppuVar4 = (undefined4 ****)param_2[0x20];
    uVar5 = param_2[0x21];
    piVar6 = (int *)param_2[0x22];
    param_2[0x15] = param_2[0x17];
    iVar7 = param_2[0x23];
    *(undefined1 *)((int)param_2 + 0x96) = 1;
    iVar10 = param_2[8];
    iVar14 = param_2[9];
    iVar16 = param_2[10];
    iVar20 = param_2[0xb];
    iVar24 = param_2[0xc];
    iVar26 = param_2[0xd];
    iVar11 = param_2[0xe];
    iVar15 = param_2[0xf];
    iVar17 = param_2[0x10];
    iVar21 = param_2[0x11];
    iVar25 = param_2[0x12];
    iVar27 = param_2[0x13];
    if ((DAT_01d50f88 < 3) &&
       (((DAT_01d503c4 - 1 < 2 ||
         ((DAT_01d503c4 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d503bc), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d503bc), iVar3 != 0)))) {
      uStack_a7c = *(uint *)(DAT_01d503bc + 0x20);
      if (uStack_a7c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c203c4);
      }
      piStack_a78 = *(int **)(DAT_01d503bc + 0x24);
      local_a74 = *(undefined4 *)(DAT_01d503bc + 0x28);
      local_a8c = (int *)(DAT_01d503bc + 0x1c);
      local_a80 = (undefined4 ****)*local_a8c;
      local_a70 = 0;
      if (uStack_a7c == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c203c4);
      }
      local_a40 = 1;
      local_aa0 = &local_a28;
      local_a18 = local_a18 & 0xffffff00;
      local_a50 = local_a80;
      uStack_a4c = uStack_a7c;
      piStack_a48 = piStack_a78;
      local_a44 = local_a74;
      local_a28 = ppppuVar4;
      local_a24 = uVar5;
      local_a20 = piVar6;
      if (uStack_a7c < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c203c4);
      }
      local_a2c = 2;
      local_a3c = local_a80;
      uStack_a38 = uStack_a7c;
      piStack_a34 = piStack_a78;
      local_a30 = local_a74;
      if (uStack_a7c == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c203c4);
      }
      local_5c4 = &local_a68;
      local_5d0 = &local_a3c;
      local_5d8 = &local_aa0;
      local_5dc = &local_a50;
      local_5e8 = &local_a80;
      local_a94 = &local_5e8;
      local_a58 = 3;
      local_5e4 = 1;
      local_a90 = 4;
      local_5bc = &DAT_01c24094;
      local_5c8 = &DAT_01c24094;
      local_5cc = &DAT_01c203f4;
      local_5d4 = &DAT_01c203e4;
      local_5e0 = &DAT_01c0c280;
      local_a68 = local_a80;
      local_a64 = uStack_a7c;
      local_a60 = piStack_a78;
      local_a5c = local_a74;
      local_5c0 = piVar28;
      FUN_01aaa548(param_2,DAT_01d503bc,&local_a94);
      *(undefined1 *)(param_2 + 0x25) = 1;
    }
    else {
      local_a10 = DAT_01d503bc;
      local_a20 = (int *)0x2;
      if (DAT_01d51ae9 == '\0') {
        local_a98 = (int *)(DAT_01d503bc + 0x1c);
        local_a94 = (undefined4 ****)*local_a98;
        local_a90 = *(uint *)(DAT_01d503bc + 0x20);
        if (local_a90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c203c4);
        }
        local_a88 = *(undefined4 *)(DAT_01d503bc + 0x28);
        local_a8c = *(int **)(DAT_01d503bc + 0x24);
        local_a84 = 0;
        if (local_a90 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c203c4);
        }
        local_a70 = 1;
        local_a6c = &local_a68;
        local_a58 = local_a58 & 0xffffff00;
        local_a80 = local_a94;
        uStack_a7c = local_a90;
        piStack_a78 = local_a8c;
        local_a74 = local_a88;
        local_a68 = ppppuVar4;
        local_a64 = uVar5;
        local_a60 = piVar6;
        if (local_a90 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c203c4);
        }
        local_a40 = 2;
        local_a50 = local_a94;
        uStack_a4c = local_a90;
        piStack_a48 = local_a8c;
        local_a44 = local_a88;
        if (local_a90 == 3) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c203c4);
        }
        local_5c4 = &local_a3c;
        local_5d0 = &local_a50;
        local_5d8 = &local_a6c;
        local_5dc = &local_a80;
        local_5e8 = &local_a94;
        local_aa0 = &local_5e8;
        local_a2c = 3;
        local_5e4 = 1;
        local_a9c = 4;
        local_5bc = &DAT_01c24094;
        local_5c8 = &DAT_01c24094;
        local_5cc = &DAT_01c203f4;
        local_5d4 = &DAT_01c203e4;
        local_5e0 = &DAT_01c0c280;
        local_a3c = local_a94;
        uStack_a38 = local_a90;
        piStack_a34 = local_a8c;
        local_a30 = local_a88;
        local_5c0 = piVar28;
        FUN_01aaa3e0(&local_a28,&local_aa0);
      }
      *(undefined1 *)(param_2 + 0x25) = 1;
      *param_2 = (int)local_a28;
      param_2[1] = local_a24;
      param_2[2] = (int)local_a20;
      param_2[3] = iStack_a1c;
      param_2[4] = local_a18;
      param_2[5] = iStack_a14;
      param_2[6] = local_a10;
      param_2[7] = iStack_a0c;
    }
    *(undefined2 *)((int)param_2 + 0x95) = 1;
    *(undefined1 *)((int)param_2 + 0x95) = 0;
    local_99d = 0;
    local_a08 = iVar10;
    iStack_a04 = iVar14;
    iStack_a00 = iVar16;
    iStack_9fc = iVar20;
    iStack_9f8 = iVar24;
    iStack_9f4 = iVar26;
    local_9f0 = iVar11;
    iStack_9ec = iVar15;
    iStack_9e8 = iVar17;
    iStack_9e4 = iVar21;
    iStack_9e0 = iVar25;
    iStack_9dc = iVar27;
    local_9d8 = iVar8;
    iStack_9d4 = iVar12;
    iStack_9d0 = iVar18;
    iStack_9cc = iVar22;
    local_9c8 = iVar9;
    iStack_9c4 = iVar13;
    iStack_9c0 = iVar19;
    iStack_9bc = iVar23;
    local_9b8 = ppppuVar4;
    local_9b4 = uVar5;
    local_9b0 = piVar6;
    local_9ac = iVar7;
    local_9a4 = iVar29;
    if (param_2[2] != 2) {
      FUN_01bed4e2(auStack_7f8,&local_a28,0x210);
      *(undefined1 *)(param_2 + 0x25) = 0;
      local_818 = *param_2;
      iStack_814 = param_2[1];
      iStack_810 = param_2[2];
      iStack_80c = param_2[3];
      iStack_808 = param_2[4];
      iStack_804 = param_2[5];
      iStack_800 = param_2[6];
      iStack_7fc = param_2[7];
      FUN_01bed4e2(param_2 + 0x26,&local_818,0x230);
      goto switchD_00926b84_caseD_3;
    }
    FUN_01bed4e2(param_2 + 0x26,&local_a28,0x210);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c203c4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c203c4);
  case 3:
switchD_00926b84_caseD_3:
    FUN_009277fc(&local_5e8,param_2 + 0x26,param_3);
    if (local_5e8 == (undefined4 ****)&DAT_0000001e && local_5e4 == 0) {
      *param_1 = 0x1e;
      param_1[1] = 0;
      uVar1 = 3;
      goto LAB_009270f8;
    }
    FUN_01bed4e2(auStack_308,&local_5e8,0x2e0);
    FUN_00dfba30(param_2 + 0x26);
    goto LAB_009270bc;
  }
  FUN_00927904(&local_5e8,param_2 + 0x26,param_3);
  if (local_5e8 == (undefined4 ****)&DAT_0000001e && local_5e4 == 0) {
    *param_1 = 0x1e;
    param_1[1] = 0;
    uVar1 = 4;
  }
  else {
    FUN_01bed4e2(auStack_308,&local_5e8,0x2e0);
    FUN_00928574(param_2 + 0x26);
LAB_009270bc:
    *(undefined1 *)((int)param_2 + 0x95) = 0;
    if ((char)param_2[0x25] != '\0') {
      FUN_01834abc(param_2);
    }
    *(undefined1 *)((int)param_2 + 0x96) = 0;
    *(undefined1 *)(param_2 + 0x25) = 0;
    FUN_01bed4e2(param_1,auStack_308,0x2e0);
    uVar1 = 1;
  }
LAB_009270f8:
  *(undefined1 *)((int)param_2 + 0x97) = uVar1;
  return;
}

