// FUN_0101c8fc @ 0101c8fc size=1112 calls_out=6 calls_in=8
// strings: 

void FUN_0101c8fc(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int local_ec;
  uint *local_e8;
  code *local_e4;
  uint local_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  uint **local_c4;
  undefined4 local_c0;
  uint *local_bc;
  uint *local_b8;
  uint **local_b4;
  undefined *local_b0;
  uint *local_ac;
  int *local_a8;
  undefined *local_a4;
  uint *local_a0;
  int *local_9c;
  undefined *local_98;
  uint *local_94;
  int *local_90;
  undefined *local_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint *local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_d0 = DAT_018d8094;
  local_e0 = 2;
  local_ec = param_2;
  if (DAT_018dd947 == '\0') {
    local_bc = (uint *)(DAT_018d8094 + 0x1c);
    uVar11 = *local_bc;
    uVar8 = *(uint *)(DAT_018d8094 + 0x20);
    if (uVar8 == 0) goto LAB_0101ccdc;
    uStack_88 = *local_bc;
    uStack_84 = *(undefined4 *)(DAT_018d8094 + 0x20);
    uVar10 = *(undefined4 *)(DAT_018d8094 + 0x24);
    uStack_80 = *(undefined4 *)(DAT_018d8094 + 0x24);
    uStack_7c = *(undefined4 *)(DAT_018d8094 + 0x28);
    local_94 = &local_40;
    local_b8 = &local_3c;
    local_78 = 0;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar9 = *(undefined4 *)(DAT_018d8094 + 0x28);
    local_40 = uVar4;
    local_3c = uVar5;
    if (*(uint *)(*param_3 + 0x38) <= uVar4) {
LAB_0101cd34:
      local_b4 = (uint **)FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_b8,&DAT_01882550);
    }
    local_90 = (int *)(*(int *)(*param_3 + 0x34) + uVar4 * 0xf8);
    if (!(*local_90 != 3 || local_90[1] != 0)) goto LAB_0101cd34;
    puVar1 = (uint *)(local_90 + 0x35);
    if (*puVar1 != uVar5) goto LAB_0101cd34;
    local_70 = puVar1;
    if (uVar8 == 1) {
LAB_0101ccdc:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01882704);
    }
    local_5c = 1;
    local_6c = uVar11;
    local_68 = uVar8;
    local_64 = uVar10;
    local_60 = uVar9;
    if (uVar8 < 3) goto LAB_0101ccdc;
    local_48 = 2;
    local_58 = uVar11;
    local_54 = uVar8;
    local_50 = uVar10;
    local_4c = uVar9;
    if ((!(*local_90 != 3 || local_90[1] != 0)) || (*puVar1 != uVar5)) goto LAB_0101cd34;
    local_44 = local_90[0x38] + param_2;
    if (uVar8 == 3) goto LAB_0101ccdc;
    local_30 = 3;
    local_40 = uVar11;
    local_3c = uVar8;
    local_38 = uVar10;
    local_34 = uVar9;
    uStack_2c = uVar4;
    uStack_28 = uVar5;
    if ((*local_90 == 3 && local_90[1] == 0) || (*puVar1 != uVar5)) {
      local_b8 = &uStack_28;
      goto LAB_0101cd34;
    }
    local_9c = &local_44;
    local_90 = local_90 + 0x37;
    local_a0 = &local_58;
    local_a8 = &local_ec;
    local_ac = &local_6c;
    local_b4 = &local_70;
    local_b8 = &uStack_88;
    local_c4 = &local_b8;
    local_c0 = 4;
    local_8c = &DAT_018a4904;
    local_98 = &DAT_018abaa8;
    local_a4 = &DAT_018a4904;
    local_b0 = &DAT_01882fc4;
    FUN_01694880(&local_e8,&local_c4);
  }
  local_b8 = local_e8;
  local_b4 = (uint **)local_e4;
  local_b0 = (undefined *)local_e0;
  local_ac = (uint *)iStack_dc;
  local_a8 = (int *)local_d8;
  local_a4 = (undefined *)uStack_d4;
  local_a0 = (uint *)local_d0;
  local_9c = (int *)uStack_cc;
  if (local_e0 != 2) {
    if ((local_e0 & 1) != 0) {
      iStack_dc = iStack_dc + (*(int *)(local_d8 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_d8 + 0x30))(iStack_dc,&local_b8);
  }
  iVar3 = *param_3;
  local_40 = param_3[1];
  local_e8 = &local_3c;
  local_3c = param_3[2];
  if (((*(uint *)(iVar3 + 0x38) <= local_40) ||
      (piVar6 = (int *)(*(int *)(iVar3 + 0x34) + local_40 * 0xf8), *piVar6 == 3 && piVar6[1] == 0))
     || (piVar6[0x35] != local_3c)) {
LAB_0101ccf8:
    local_e4 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882550);
  }
  uVar11 = piVar6[0x37];
  uVar8 = piVar6[0x38] + local_ec;
  cVar7 = (uVar8 >= uVar11 && uVar8 != uVar11) - (uVar8 < uVar11);
  if (cVar7 == -1) {
    piVar6[0x37] = uVar8;
    if (((*(uint *)(iVar3 + 0x38) <= local_40) ||
        (piVar6 = (int *)(*(int *)(iVar3 + 0x34) + local_40 * 0xf8), *piVar6 == 3 && piVar6[1] == 0)
        ) || (piVar6[0x35] != local_3c)) goto LAB_0101ccf8;
    uVar4 = piVar6[0xf];
    uVar11 = uVar4 & ~((int)uVar4 >> 0x1f);
    if (uVar8 < uVar11) {
      iVar3 = uVar11 - uVar8;
      if (!SBORROW4(uVar4,iVar3)) {
        piVar6[0xf] = uVar4 - iVar3;
      }
      FUN_0101cdd0(param_1,iVar3,param_3,param_4);
    }
  }
  else if (cVar7 == '\x01') {
    bVar2 = *(byte *)(piVar6 + 8) - 6;
    if (*(byte *)(piVar6 + 8) < 6) {
      bVar2 = 6;
    }
    if ((6 < bVar2) || ((1 << (uint)bVar2 & 0x54U) == 0)) {
      piVar6[0x37] = uVar8;
      FUN_0101d22c(param_1,param_3);
    }
  }
  if (local_b0 != (undefined *)0x2) {
    puVar1 = local_ac;
    if (((uint)local_b0 & 1) != 0) {
      puVar1 = (uint *)((int)local_ac + (*(int *)((int)local_a8 + 8) - 1U & 0xfffffff8) + 8);
    }
    (**(code **)((int)local_a8 + 0x34))(puVar1,&local_b8);
  }
  FUN_005c3320(&local_b8);
  return;
}

