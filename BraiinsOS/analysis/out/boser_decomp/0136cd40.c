// FUN_0136cd40 @ 0136cd40 size=1524 calls_out=12 calls_in=9
// strings: FieldSet corrupted (this is a bug) | tracing::span::active | FieldSet corrupted (this is a bug)

void FUN_0136cd40(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  int local_ec;
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
  int local_bc;
  int local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 **local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  int *local_94;
  undefined *local_90;
  undefined4 *local_8c;
  int *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  int *local_7c;
  undefined *local_78;
  undefined4 *local_74;
  int local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  local_ec = param_2;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d388 - 1 < 2 ||
       ((DAT_01d4d388 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d380), cVar2 != '\0')))) &&
      (iVar5 = FUN_01aaa278(DAT_01d4d380), iVar4 = DAT_01d4d380, iVar5 != 0)))) {
    uVar7 = *(uint *)(DAT_01d4d380 + 0x20);
    if (uVar7 != 0) {
      uVar6 = *(uint *)(DAT_01d4d380 + 0x24);
      iVar5 = *(int *)(DAT_01d4d380 + 0x28);
      puVar8 = (undefined4 *)(DAT_01d4d380 + 0x1c);
      uVar11 = *puVar8;
      local_58 = 0;
      iVar10 = *param_3;
      iVar12 = param_3[1];
      iVar9 = param_3[2];
      local_68 = uVar11;
      local_64 = uVar7;
      local_60 = uVar6;
      local_5c = iVar5;
      local_54 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar12,
                              iVar9);
      bVar13 = uVar7 != 0;
      local_54 = local_54 + 0xd4;
      if (uVar7 != 1) {
        local_40 = 1;
        bVar13 = 1 < uVar7;
        local_50 = uVar11;
        local_4c = uVar7;
        local_48 = uVar6;
        local_44 = iVar5;
      }
      if (bVar13 && (uVar7 != 1 && uVar7 != 2)) {
        local_2c = 2;
        local_3c = uVar11;
        local_38 = uVar7;
        local_34 = uVar6;
        local_30 = iVar5;
        iVar3 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar12,
                             iVar9);
        local_28 = *(int *)(iVar3 + 0xe0) + param_2;
        if (uVar7 != 3) {
          local_b8 = 3;
          local_c8 = uVar11;
          local_c4 = uVar7;
          local_c0 = uVar6;
          local_bc = iVar5;
          local_70 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),
                                  iVar12,iVar9);
          local_70 = local_70 + 0xdc;
          local_74 = &local_c8;
          local_7c = &local_28;
          local_80 = &local_3c;
          local_88 = &local_ec;
          local_8c = &local_50;
          local_94 = &local_54;
          local_98 = &local_68;
          local_a0 = 4;
          local_a4 = &local_98;
          local_6c = &DAT_01d2ea5c;
          local_84 = &DAT_01d2ea5c;
          local_78 = &DAT_01d2dd1c;
          local_90 = &DAT_01d2d754;
          local_9c = puVar8;
          FUN_01aaa548(&local_e8,iVar4,&local_a4);
          goto LAB_0136cf30;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8d24);
  }
  local_b0 = DAT_01d4d380;
  local_c0 = 2;
  if (DAT_01d51ae9 == '\0') {
    puVar8 = (undefined4 *)(DAT_01d4d380 + 0x1c);
    uVar11 = *puVar8;
    uVar7 = *(uint *)(DAT_01d4d380 + 0x20);
    if (uVar7 == 0) {
LAB_0136d31c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8d24);
    }
    uVar6 = *(uint *)(DAT_01d4d380 + 0x24);
    local_58 = 0;
    iVar9 = *(int *)(DAT_01d4d380 + 0x28);
    iVar10 = *param_3;
    iVar5 = param_3[1];
    iVar12 = param_3[2];
    local_68 = uVar11;
    local_64 = uVar7;
    local_60 = uVar6;
    local_5c = iVar9;
    local_54 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar5,
                            iVar12);
    iVar4 = local_ec;
    local_54 = local_54 + 0xd4;
    if ((uVar7 == 1) ||
       (local_40 = 1, local_50 = uVar11, local_4c = uVar7, local_48 = uVar6, local_44 = iVar9,
       uVar7 < 3)) goto LAB_0136d31c;
    local_2c = 2;
    local_3c = uVar11;
    local_38 = uVar7;
    local_34 = uVar6;
    local_30 = iVar9;
    iVar3 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar5,iVar12)
    ;
    local_28 = *(int *)(iVar3 + 0xe0) + iVar4;
    if (uVar7 == 3) goto LAB_0136d31c;
    local_d8 = 3;
    local_e8 = uVar11;
    local_e4 = uVar7;
    local_e0 = uVar6;
    local_dc = iVar9;
    local_70 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar5,
                            iVar12);
    local_74 = &local_e8;
    local_70 = local_70 + 0xdc;
    local_7c = &local_28;
    local_80 = &local_3c;
    local_88 = &local_ec;
    local_8c = &local_50;
    local_94 = &local_54;
    local_98 = &local_68;
    local_a4 = &local_98;
    local_a0 = 4;
    local_6c = &DAT_01d2ea5c;
    local_78 = &DAT_01d2dd1c;
    local_84 = &DAT_01d2ea5c;
    local_90 = &DAT_01d2d754;
    local_9c = puVar8;
    FUN_01aaa3e0(&local_c8,&local_a4);
  }
  local_e8 = local_c8;
  local_e4 = local_c4;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_d8 = local_b8;
  uStack_d4 = uStack_b4;
  local_d0 = local_b0;
  uStack_cc = uStack_ac;
LAB_0136cf30:
  if (local_e0 != 2) {
    if ((local_e0 & 1) == 0) {
      iVar4 = local_dc;
    }
    else {
      iVar4 = local_dc + (*(int *)(local_d8 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_d8 + 0x30))(iVar4,&local_e8);
  }
  if ((DAT_01d51ae9 == '\0') && (local_d0 != 0)) {
    local_c4 = *(uint *)(local_d0 + 0x10);
    local_c8 = *(undefined4 *)(local_d0 + 0xc);
    local_98 = &local_c8;
    local_94 = (int *)&DAT_0132b6a0;
    FUN_006404a8(&local_e8,"tracing::span::active",0x15,&DAT_00594cdd,&local_98);
  }
  iVar4 = local_ec;
  iVar10 = *param_3;
  iVar9 = param_3[1];
  iVar3 = param_3[2];
  iVar5 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,iVar3);
  iVar12 = *(int *)(iVar5 + 0xe0);
  iVar5 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,iVar3);
  uVar7 = iVar12 + iVar4;
  bVar14 = uVar7 < *(uint *)(iVar5 + 0xdc);
  bVar13 = !bVar14 && uVar7 != *(uint *)(iVar5 + 0xdc);
  if (bVar13 != bVar14) {
    if ((char)(bVar13 - bVar14) == '\x01') {
      iVar4 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,iVar3
                          );
      bVar1 = *(byte *)(iVar4 + 0x20) - 6;
      if (*(byte *)(iVar4 + 0x20) < 6) {
        bVar1 = 6;
      }
      if ((6 < bVar1) || ((1 << (uint)bVar1 & 0x54U) == 0)) {
        iVar4 = FUN_01367cb8(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,
                             iVar3);
        *(uint *)(iVar4 + 0xdc) = uVar7;
        FUN_0136d86c(param_1,param_3);
      }
    }
    else {
      iVar4 = FUN_01367cb8(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,iVar3
                          );
      *(uint *)(iVar4 + 0xdc) = uVar7;
      iVar4 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,iVar3
                          );
      uVar6 = *(uint *)(iVar4 + 0x3c) & ~((int)*(uint *)(iVar4 + 0x3c) >> 0x1f);
      if (uVar7 < uVar6) {
        iVar4 = FUN_01367cb8(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar9,
                             iVar3);
        iVar5 = uVar6 - uVar7;
        if (!SBORROW4(*(int *)(iVar4 + 0x3c),iVar5)) {
          *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) - iVar5;
        }
        FUN_0136d3c8(param_1,iVar5,param_3,param_4);
      }
    }
  }
  FUN_0134c39c(&local_e8);
  FUN_01834abc(&local_e8);
  return;
}

