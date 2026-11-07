// FUN_01857490 @ 01857490 size=1712 calls_out=13 calls_in=1
// strings: 

void FUN_01857490(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 ****ppppuVar1;
  uint uVar2;
  undefined4 ****ppppuVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int *piVar21;
  undefined *puVar22;
  int iVar23;
  undefined *puVar24;
  undefined1 uVar25;
  undefined4 ****local_e0;
  undefined *local_dc;
  uint local_d8;
  int iStack_d4;
  int local_d0;
  int *local_cc;
  uint local_c8;
  undefined4 local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined1 local_9c;
  undefined4 ****local_98;
  undefined *local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  int local_4c;
  int *local_48;
  undefined4 local_44;
  int *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_29 [5];
  
  local_d8 = 0;
  local_e0 = (undefined4 ****)0x0;
  local_8c = 0;
  local_98 = &local_e0;
  local_dc = (undefined *)0x1;
  local_90 = 0x60000020;
  local_94 = &DAT_01d1f1c0;
  iVar17 = FUN_01415570(param_3[1],&local_98);
  uVar2 = local_d8;
  puVar24 = local_dc;
  ppppuVar1 = local_e0;
  if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,auStack_29,&DAT_01d1f208,&DAT_01d30334);
  }
  local_d8 = 0;
  local_e0 = (undefined4 ****)0x0;
  local_d0 = 0;
  FUN_01ac814c(&local_98,&local_e0,local_dc,uVar2);
  uVar16 = local_54;
  iVar15 = iStack_58;
  iVar14 = iStack_5c;
  iVar13 = iStack_60;
  iVar12 = local_64;
  iVar11 = local_68;
  iVar10 = local_6c;
  iVar9 = local_70;
  iVar8 = local_74;
  uVar7 = local_78;
  uVar19 = local_7c;
  iVar17 = local_8c;
  uVar2 = local_90;
  puVar4 = local_94;
  ppppuVar3 = local_98;
  if (local_98 == (undefined4 ****)0x2) {
    local_e0 = (undefined4 ****)CONCAT31(local_e0._1_3_,local_94._0_1_);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0050d9bc,0x1a,&local_e0,&DAT_01d1f1e8,&DAT_01d1f1b0);
  }
  uVar6 = local_7c._2_2_;
  uVar5 = (undefined2)local_7c;
  FUN_019bb7e0(ppppuVar1,puVar24);
  local_48 = (int *)&DAT_00000001;
  local_44 = 0;
  local_4c = 0;
  local_34 = 0;
  local_40 = &local_4c;
  local_38 = (undefined *)0x60000020;
  local_3c = &DAT_01d1f1c0;
  iVar18 = FUN_01415570(*param_3,&local_40);
  piVar21 = local_48;
  iVar23 = local_4c;
  if (iVar18 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,auStack_29,&DAT_01d1f208,&DAT_01d30334);
  }
  local_38 = (undefined *)0x0;
  local_40 = (int *)0x0;
  local_30 = 0;
  FUN_01ac814c(&local_98,&local_40,local_48,local_44);
  if (local_98 == (undefined4 ****)0x2) {
    local_40 = (int *)((uint)local_40 & 0xffff0000);
    uVar19 = FUN_0183badc(&local_40,(uint)local_94 & 0xff);
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = uVar19;
    local_cc = piVar21;
  }
  else {
    FUN_01bed4e2(&local_e0,&local_98,0x48);
    FUN_019bb7e0(iVar23,piVar21);
    FUN_006666fc(&local_88,local_84,local_80);
    iVar23 = param_2[2];
    local_98 = ppppuVar3;
    local_94 = puVar4;
    local_90 = uVar2;
    local_8c = iVar17;
    local_7c = uVar19;
    local_78 = uVar7;
    local_74 = iVar8;
    local_70 = iVar9;
    local_6c = iVar10;
    local_68 = iVar11;
    local_64 = iVar12;
    iStack_60 = iVar13;
    iStack_5c = iVar14;
    iStack_58 = iVar15;
    local_54 = uVar16;
    if (iVar23 == *param_2) {
      FUN_017342b0(param_2);
    }
    puVar24 = (undefined *)param_2[1];
    FUN_01bed4e2(puVar24 + iVar23 * 0x48,&local_98,0x48);
    iVar18 = param_2[3];
    uVar20 = iVar23 + 1;
    uVar25 = 1;
    param_2[2] = uVar20;
    if (*(int *)(iVar18 + 8) == 0) {
      local_98 = &local_e0;
      local_8c = CONCAT22(local_8c._2_2_,*(undefined2 *)(param_3 + 2));
      local_94 = puVar24;
      local_90 = uVar20;
      (**(code **)(*(int *)(iVar18 + 0x10) + 0x14))
                (&local_40,*(undefined4 *)(iVar18 + 0xc),&local_98);
      if (local_40 == (int *)0x0) goto LAB_018578b4;
      if (local_40 != (int *)0x1) {
        puVar24 = local_3c;
        puVar22 = local_38;
        goto LAB_018577e0;
      }
    }
    else if (*(int *)(iVar18 + 8) == 1) {
      if (*(uint *)(iVar18 + 0xc) < uVar20) {
        puVar24 = (undefined *)0x1;
        puVar22 = &DAT_01d1e70c;
LAB_018577e0:
        local_98 = (undefined4 ****)CONCAT22(local_98._2_2_,2);
        piVar21 = (int *)FUN_0183b9d4(&local_98,puVar24,puVar22);
        if (*piVar21 != 2) {
          FUN_019bb7e0(piVar21[4],piVar21[5]);
        }
        piVar21[8] = uVar7;
        piVar21[9] = iVar8;
        piVar21[10] = iVar9;
        piVar21[0xb] = iVar10;
        piVar21[0xc] = iVar11;
        *(undefined2 *)((int)piVar21 + 0x1e) = uVar6;
        *(undefined2 *)(piVar21 + 7) = uVar5;
        *piVar21 = (int)ppppuVar3;
        piVar21[1] = (int)puVar4;
        piVar21[2] = uVar2;
        piVar21[3] = iVar17;
        piVar21[4] = local_88;
        piVar21[5] = (int)local_84;
        piVar21[6] = local_80;
        piVar21[0xd] = iVar12;
        piVar21[0xe] = iVar13;
        piVar21[0xf] = iVar14;
        piVar21[0x10] = iVar15;
        *(int **)(param_1 + 4) = piVar21;
        *param_1 = 1;
        *(undefined1 *)(piVar21 + 0x11) = uVar16;
        *(undefined2 *)((int)piVar21 + 0x45) = local_53;
        *(undefined1 *)((int)piVar21 + 0x47) = local_51;
        local_88 = local_d0;
        local_84 = local_cc;
        goto LAB_01857ab0;
      }
LAB_018578b4:
      uVar2 = local_c0;
      piVar21 = local_cc;
      if (local_c0 == 0) {
LAB_0185794c:
        FUN_01bed4e2(&local_98,&local_e0,0x48);
        uVar19 = FUN_0183b6d8(&local_98);
LAB_01857968:
        *param_1 = 1;
        *(undefined4 *)(param_1 + 4) = uVar19;
        goto LAB_01857ab0;
      }
      if (local_c0 < local_c8) {
        if (*(char *)((int)local_cc + local_c0) < -0x40) goto LAB_018579a4;
      }
      else if (local_c0 != local_c8) goto LAB_018579a4;
      if ((local_c0 != 4) || (*local_cc != 0x70747468)) {
        if (local_c0 < local_c8) {
          if (*(char *)((int)local_cc + local_c0) < -0x40) goto LAB_018579a4;
        }
        else if (local_c0 != local_c8) goto LAB_018579a4;
        if ((local_c0 != 5) || (iVar17 = thunk_FUN_01bed842(local_cc,&DAT_0053278b,5), iVar17 != 0))
        goto LAB_0185794c;
      }
      uVar25 = 0;
      if (*(char *)((int)param_2 + 0x11) != '\0') {
        if (uVar2 < local_c8) {
          if (*(char *)((int)piVar21 + uVar2) < -0x40) goto LAB_018579a4;
        }
        else if (uVar2 != local_c8) {
LAB_018579a4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(piVar21,local_c8,0,uVar2,&DAT_01d2fde8);
        }
        if ((uVar2 != 5) || (iVar17 = thunk_FUN_01bed842(piVar21,&DAT_0053278b,5), iVar17 != 0)) {
          FUN_006666fc(&local_88,piVar21,local_c8);
          local_64 = local_ac;
          iStack_60 = iStack_a8;
          iStack_5c = iStack_a4;
          iStack_58 = iStack_a0;
          local_54 = local_9c;
          local_6c = local_b4;
          local_70 = local_b8;
          local_68 = local_b0;
          local_74 = local_bc;
          local_78 = local_c0;
          local_7c = local_c4;
          local_98 = local_e0;
          local_94 = local_dc;
          local_90 = local_d8;
          local_8c = iStack_d4;
          uVar19 = FUN_0183b6d8(&local_98);
          FUN_01bed4e2(&local_98,&local_e0,0x48);
          uVar19 = FUN_0183bd18(uVar19,&local_98);
          goto LAB_01857968;
        }
      }
    }
    *param_1 = 0;
    param_1[1] = uVar25;
    iVar23 = local_d0;
  }
  FUN_019bb7e0(iVar23,local_cc);
LAB_01857ab0:
  FUN_019bb7e0(local_88,local_84);
  return;
}

