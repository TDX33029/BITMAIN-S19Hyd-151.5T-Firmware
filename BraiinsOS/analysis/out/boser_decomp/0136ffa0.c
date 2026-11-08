// FUN_0136ffa0 @ 0136ffa0 size=1396 calls_out=12 calls_in=3
// strings: recv_stream_window_updatestream.state | tracing::span::active | FieldSet corrupted (this is a bug) | FieldSet corrupted (this is a bug)

undefined4 FUN_0136ffa0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_ec;
  undefined4 local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 **local_a8;
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c;
  int *local_98;
  undefined *local_94;
  undefined4 *local_90;
  int *local_8c;
  undefined *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  int *local_74;
  undefined *local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  local_ec = param_2;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d3d0 - 1 < 2 ||
       ((DAT_01d4d3d0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d3c8), cVar2 != '\0')))) &&
      (iVar8 = FUN_01aaa278(DAT_01d4d3c8), iVar6 = DAT_01d4d3c8, iVar8 != 0)))) {
    uVar5 = *(uint *)(DAT_01d4d3c8 + 0x20);
    if (uVar5 == 0) {
LAB_01370500:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8fc4);
    }
    iVar10 = *param_3;
    puVar4 = (undefined4 *)(DAT_01d4d3c8 + 0x1c);
    uVar7 = *puVar4;
    local_5c = 0;
    iVar8 = param_3[1];
    iVar9 = param_3[2];
    uVar3 = *(uint *)(DAT_01d4d3c8 + 0x24);
    iVar11 = *(int *)(DAT_01d4d3c8 + 0x28);
    local_6c = uVar7;
    local_68 = uVar5;
    local_64 = uVar3;
    local_60 = iVar11;
    local_58 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar8,
                            iVar9);
    local_58 = local_58 + 0xd4;
    if (uVar5 == 1) goto LAB_01370500;
    local_44 = 1;
    local_54 = uVar7;
    local_50 = uVar5;
    local_4c = uVar3;
    local_48 = iVar11;
    local_40 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar8,
                            iVar9);
    local_40 = local_40 + 0x20;
    if ((uVar5 < 3) ||
       (local_2c = 2, local_3c = uVar7, local_38 = uVar5, local_34 = uVar3, local_30 = iVar11,
       uVar5 == 3)) goto LAB_01370500;
    local_b8 = 3;
    local_c8 = uVar7;
    local_c4 = uVar5;
    local_c0 = uVar3;
    iStack_bc = iVar11;
    local_28 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar8,
                            iVar9);
    local_28 = local_28 + 0x38;
    local_74 = &local_28;
    local_78 = &local_c8;
    local_80 = &local_ec;
    local_84 = &local_3c;
    local_8c = &local_40;
    local_90 = &local_54;
    local_98 = &local_58;
    local_9c = &local_6c;
    local_a4 = 4;
    local_a8 = &local_9c;
    local_7c = &DAT_01d2ea5c;
    local_70 = &DAT_01ce8fd4;
    local_88 = &DAT_01d2d0d4;
    local_94 = &DAT_01d2d754;
    local_a0 = puVar4;
    FUN_01aaa548(&local_e8,iVar6,&local_a8);
  }
  else {
    local_b0 = DAT_01d4d3c8;
    local_c0 = 2;
    if (DAT_01d51ae9 == '\0') {
      puVar4 = (undefined4 *)(DAT_01d4d3c8 + 0x1c);
      uVar7 = *puVar4;
      uVar5 = *(uint *)(DAT_01d4d3c8 + 0x20);
      if (uVar5 == 0) {
LAB_013704e4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8fc4);
      }
      uVar3 = *(uint *)(DAT_01d4d3c8 + 0x24);
      local_5c = 0;
      iVar6 = *(int *)(DAT_01d4d3c8 + 0x28);
      iVar10 = *param_3;
      iVar9 = param_3[1];
      iVar8 = param_3[2];
      local_6c = uVar7;
      local_68 = uVar5;
      local_64 = uVar3;
      local_60 = iVar6;
      local_58 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,
                              iVar8);
      local_58 = local_58 + 0xd4;
      if (uVar5 == 1) goto LAB_013704e4;
      local_44 = 1;
      local_54 = uVar7;
      local_50 = uVar5;
      local_4c = uVar3;
      local_48 = iVar6;
      local_40 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,
                              iVar8);
      local_40 = local_40 + 0x20;
      if ((uVar5 < 3) ||
         (local_2c = 2, local_3c = uVar7, local_38 = uVar5, local_34 = uVar3, local_30 = iVar6,
         uVar5 == 3)) goto LAB_013704e4;
      local_d8 = 3;
      local_e8 = uVar7;
      local_e4 = uVar5;
      local_e0 = uVar3;
      local_dc = iVar6;
      local_28 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,
                              iVar8);
      local_74 = &local_28;
      local_28 = local_28 + 0x38;
      local_78 = &local_e8;
      local_80 = &local_ec;
      local_84 = &local_3c;
      local_8c = &local_40;
      local_90 = &local_54;
      local_98 = &local_58;
      local_9c = &local_6c;
      local_a8 = &local_9c;
      local_a4 = 4;
      local_70 = &DAT_01ce8fd4;
      local_7c = &DAT_01d2ea5c;
      local_88 = &DAT_01d2d0d4;
      local_94 = &DAT_01d2d754;
      local_a0 = puVar4;
      FUN_01aaa3e0(&local_c8,&local_a8);
    }
    local_e8 = local_c8;
    local_e4 = local_c4;
    local_e0 = local_c0;
    local_dc = iStack_bc;
    local_d8 = local_b8;
    uStack_d4 = uStack_b4;
    local_d0 = local_b0;
    uStack_cc = uStack_ac;
  }
  if (local_e0 != 2) {
    if ((local_e0 & 1) == 0) {
      iVar6 = local_dc;
    }
    else {
      iVar6 = local_dc + (*(int *)(local_d8 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_d8 + 0x30))(iVar6,&local_e8);
  }
  if ((DAT_01d51ae9 == '\0') && (local_d0 != 0)) {
    local_c4 = *(uint *)(local_d0 + 0x10);
    local_c8 = *(undefined4 *)(local_d0 + 0xc);
    local_9c = &local_c8;
    local_98 = (int *)&DAT_0132b6a0;
    FUN_006404a8(&local_e8,"tracing::span::active",0x15,&DAT_00594cdd,&local_9c);
  }
  iVar8 = *param_3;
  iVar9 = param_3[1];
  iVar10 = param_3[2];
  iVar6 = FUN_01367c40(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar10);
  bVar1 = *(byte *)(iVar6 + 0x20) - 6;
  if (*(byte *)(iVar6 + 0x20) < 6) {
    bVar1 = 6;
  }
  if (((bVar1 < 7) && ((1 << (uint)bVar1 & 0x54U) != 0)) &&
     (iVar6 = FUN_01367c40(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar10)
     , *(int *)(iVar6 + 0xe0) == 0)) {
    uVar7 = 0;
  }
  else {
    iVar6 = FUN_01367cb8(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38),iVar9,iVar10);
    iVar6 = FUN_013808d0(iVar6 + 0x38,local_ec);
    uVar7 = 1;
    if (iVar6 == 0) {
      FUN_0136d86c(param_1,param_3);
      uVar7 = 0;
      FUN_0134c39c(&local_e8);
      goto LAB_013704ac;
    }
  }
  FUN_0134c39c(&local_e8);
LAB_013704ac:
  FUN_01834abc(&local_e8);
  return uVar7;
}

