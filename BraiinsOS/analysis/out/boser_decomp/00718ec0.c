// FUN_00718ec0 @ 00718ec0 size=1016 calls_out=4 calls_in=2
// strings: 

void FUN_00718ec0(undefined4 *param_1,undefined4 *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *extraout_r1;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort *unaff_r10;
  ushort *puVar9;
  int iVar10;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  ushort *puVar11;
  uint local_58;
  ushort *local_50;
  ushort *local_4c;
  ushort *local_40;
  ushort *local_3c;
  byte local_38;
  byte local_37;
  ushort local_36;
  ushort *local_34;
  ushort *local_30;
  uint local_2c;
  
  uVar6 = param_2[1];
  if (uVar6 == 0) {
    *param_1 = 2;
    return;
  }
  uVar8 = param_2[2];
  FUN_00719ebc(&local_38);
  puVar2 = local_34;
  uVar7 = (uint)local_38;
  if (uVar7 == 0x4f) {
    puVar1 = (ushort *)*param_2;
    local_58 = extraout_r12;
    if ((ushort *)param_2[1] < local_34) {
LAB_00718f1c:
      uVar7 = 0x13;
      local_40 = puVar1;
LAB_00718f28:
      uVar6 = (uint)local_40 >> 8;
      local_2c = 0;
      puVar2 = local_40;
      puVar9 = unaff_r10;
      goto LAB_00718f5c;
    }
    uVar5 = (uint)local_30 & 0xff;
    iVar10 = (int)param_2[1] - (int)local_34;
    unaff_r10 = (ushort *)((int)puVar1 + (int)local_34);
    *param_2 = unaff_r10;
    param_2[1] = iVar10;
    if (local_34 < (ushort *)0x2) goto LAB_00718f1c;
    local_3c = local_34 + -1;
    local_40 = puVar1 + 1;
    puVar9 = (ushort *)(uint)*puVar1;
    unaff_r10 = puVar9;
    if (((uint)(puVar9 + -1) & 0xffff) < 3) {
      FUN_007194a0(&local_38,&local_40);
      uVar7 = (uint)local_38;
      if (uVar7 != 0x4f) goto LAB_007192b0;
      local_58 = extraout_r12_00;
      if (local_3c == (ushort *)0x0) {
        uVar7 = 0x13;
      }
      else {
        uVar7 = 0x19;
        puVar1 = (ushort *)((int)local_40 + 1);
        unaff_r10 = (ushort *)(uint)(byte)*local_40;
        local_3c = (ushort *)((int)local_3c + -1);
        if (&DAT_00000008 < unaff_r10) {
LAB_007191e4:
          uVar7 = 0x19;
          local_40 = puVar1;
        }
        else {
          uVar4 = 0;
          local_58 = 0;
          local_40 = (ushort *)&DAT_00000001;
          puVar11 = local_34;
          if ((1 << (int)unaff_r10 & 0x116U) != 0) goto switchD_00719130_caseD_0;
        }
      }
      goto LAB_00718f28;
    }
    if (puVar9 != (ushort *)&DAT_00000005) {
      uVar6 = (uint)(*puVar1 >> 8);
      local_2c = 0;
      uVar7 = 0x11;
      puVar2 = puVar9;
      goto LAB_00718f5c;
    }
    if (local_3c == (ushort *)0x0) {
      uVar6 = (uint)local_40 >> 8;
      local_2c = 0;
      uVar7 = 0x13;
      puVar2 = local_40;
      goto LAB_00718f5c;
    }
    local_4c = (ushort *)(uint)(byte)puVar1[1];
    local_40 = (ushort *)((int)puVar1 + 3);
    if (local_34 == (ushort *)&DAT_00000003) {
      uVar7 = 0x13;
      goto LAB_00718f28;
    }
    local_3c = local_34 + -2;
    unaff_r10 = (ushort *)(uint)*(byte *)((int)puVar1 + 3);
    local_40 = puVar1 + 2;
    if ((&DAT_00000008 < unaff_r10) ||
       (puVar1 = (ushort *)&DAT_00000001, (1 << (int)unaff_r10 & 0x116U) == 0)) goto LAB_007191e4;
    FUN_007194a0(&local_38,&local_40);
    puVar11 = local_34;
    uVar7 = (uint)local_38;
    if (uVar7 == 0x4f) {
      local_58 = 0;
      uVar4 = 0;
      puVar1 = local_40;
      switch((ushort *)((int)local_4c + -1)) {
      case (ushort *)0x1:
        FUN_00717efc(&local_38,&local_40);
        uVar7 = (uint)local_38;
        if (uVar7 == 0x4f) {
          local_4c = local_30;
          local_58 = local_2c;
          FUN_007194a0(&local_38,&local_40,uVar5);
          uVar7 = (uint)local_38;
          if (uVar7 == 0x4f) {
            uVar4 = 1;
LAB_007192a4:
            local_50 = local_34;
            puVar1 = local_40;
            goto switchD_00719130_caseD_0;
          }
        }
        break;
      case (ushort *)0x2:
        uVar4 = 2;
      case (ushort *)0x0:
switchD_00719130_caseD_0:
        local_40 = puVar1;
        param_1[2] = uVar4;
        param_1[3] = local_50;
        param_1[6] = local_40;
        iVar3 = param_2[2];
        param_1[8] = (int)puVar9 << 0x10 | uVar5 << 8 | (uint)unaff_r10;
        param_1[9] = puVar2;
        param_1[10] = puVar11;
        param_1[4] = local_4c;
        *param_1 = 0;
        param_1[1] = uVar8;
        param_1[5] = local_58;
        param_1[7] = local_3c;
        param_2[2] = (uVar6 - iVar10) + iVar3;
        return;
      case (ushort *)0x3:
        FUN_007169b4(&local_38,&local_40);
        uVar7 = (uint)local_38;
        if (uVar7 == 0x4f) {
          uVar4 = 3;
          local_4c = local_30;
LAB_0071924c:
          local_58 = local_2c;
          puVar1 = local_40;
          goto switchD_00719130_caseD_0;
        }
        break;
      case (ushort *)0x4:
        FUN_007169b4(&local_38,&local_40);
        uVar7 = (uint)local_38;
        if (uVar7 == 0x4f) {
          uVar4 = 4;
          local_4c = local_30;
          goto LAB_0071924c;
        }
        break;
      case (ushort *)0x5:
        FUN_00717efc(&local_38,&local_40);
        uVar7 = (uint)local_38;
        if (uVar7 == 0x4f) {
          local_4c = local_30;
          local_58 = local_2c;
          FUN_007194a0(&local_38,&local_40,uVar5);
          uVar7 = (uint)local_38;
          if (uVar7 == 0x4f) {
            uVar4 = 5;
            goto LAB_007192a4;
          }
        }
        break;
      default:
        uVar7 = 0x42;
        puVar2 = (ushort *)((int)local_4c + -1);
        local_40 = extraout_r1;
        local_2c = extraout_r2;
        puVar9 = unaff_r10;
        local_58 = extraout_r12_01;
        goto LAB_00718f5c;
      }
    }
LAB_007192b0:
    puVar2 = local_30;
    local_40 = local_34;
  }
  else {
    puVar2 = (ushort *)((uint)local_30 & 0xff);
    local_40 = local_34;
  }
  uVar6 = (uint)local_30 >> 8;
  local_58 = (uint)local_36;
  puVar9 = (ushort *)(uint)local_37;
LAB_00718f5c:
  *param_2 = 1;
  param_2[1] = 0;
  *param_1 = 3;
  param_1[3] = local_40;
  param_1[2] = local_58 << 0x10 | ((uint)puVar9 & 0xff) << 8 | uVar7;
  param_1[4] = (uint)puVar2 & 0xff | uVar6 << 8;
  param_1[5] = local_2c;
  return;
}

