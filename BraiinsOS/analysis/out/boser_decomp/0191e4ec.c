// FUN_0191e4ec @ 0191e4ec size=556 calls_out=2 calls_in=0
// strings: 

void FUN_0191e4ec(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar13 = *(int *)(param_2 + 0x48);
  uVar10 = *(undefined4 *)(iVar13 + 8);
  iVar11 = *(int *)(iVar13 + 0xc);
  uVar9 = (**(code **)(*(int *)(iVar13 + 0x14) + 0x14))(*(undefined4 *)(iVar13 + 0x10));
  FUN_018feb1c(&local_80,param_2 + 0x4c,uVar10,*(undefined4 *)(iVar11 + 0x18),uVar9);
  iVar8 = iStack_60;
  iVar7 = local_64;
  iVar6 = iStack_68;
  iVar5 = iStack_6c;
  iVar4 = local_70;
  iVar3 = iStack_74;
  iVar2 = iStack_78;
  iVar1 = local_7c;
  iVar11 = local_80;
  local_f8 = local_5c;
  iStack_f4 = iStack_58;
  iStack_f0 = iStack_54;
  uVar10 = *(undefined4 *)(iVar13 + 8);
  iVar12 = *(int *)(iVar13 + 0xc);
  uVar9 = (**(code **)(*(int *)(iVar13 + 0x14) + 0x14))(*(undefined4 *)(iVar13 + 0x10));
  FUN_018feb1c(&local_80,param_2 + 0x90,uVar10,*(undefined4 *)(iVar12 + 0x18),uVar9);
  local_e8 = local_80;
  iStack_e4 = local_7c;
  iStack_e0 = iStack_78;
  iStack_dc = iStack_74;
  local_d8 = local_70;
  iStack_d4 = iStack_6c;
  iStack_d0 = iStack_68;
  iStack_cc = local_64;
  iStack_c8 = iStack_60;
  local_c0 = local_5c;
  iStack_bc = iStack_58;
  iStack_b8 = iStack_54;
  local_48 = iVar11;
  iStack_44 = iVar1;
  iStack_40 = iVar2;
  iStack_3c = iVar3;
  local_38 = iVar4;
  iStack_34 = iVar5;
  iStack_30 = iVar6;
  iStack_2c = iVar7;
  iStack_28 = iVar8;
  (**(code **)(*(int *)(iVar13 + 0x14) + 0x18))
            (&local_80,*(undefined4 *)(iVar13 + 0x10),&local_48,&local_f8);
  iVar11 = local_80;
  if (local_80 == 3) {
    FUN_018f663c(param_1 + 2);
    *param_1 = 3;
    iVar11 = 0;
    do {
      *(undefined1 *)((int)&local_e8 + iVar11) = 0;
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x20);
  }
  else {
    local_b0 = local_7c;
    iStack_ac = iStack_78;
    iStack_a8 = iStack_74;
    iStack_a4 = local_70;
    iStack_a0 = iStack_6c;
    iStack_9c = iStack_68;
    local_98 = local_64;
    iStack_94 = iStack_60;
    iStack_90 = local_5c;
    iStack_8c = iStack_58;
    iStack_88 = iStack_54;
    iStack_84 = iStack_50;
    local_b4 = local_80;
    local_48 = local_e8;
    iStack_44 = iStack_e4;
    iStack_40 = iStack_e0;
    iStack_3c = iStack_dc;
    local_38 = local_d8;
    iStack_34 = iStack_d4;
    iStack_30 = iStack_d0;
    iStack_2c = iStack_cc;
    iStack_28 = iStack_c8;
    (**(code **)(*(int *)(iVar13 + 0x14) + 0x18))
              (&local_80,*(undefined4 *)(iVar13 + 0x10),&local_48,&local_c0);
    if (local_80 == 3) {
      FUN_018f663c(param_1 + 2);
      *param_1 = 3;
      iVar11 = 0;
      do {
        *(undefined1 *)((int)&local_b0 + iVar11) = 0;
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x20);
    }
    else {
      param_1[0xe] = local_7c;
      param_1[0xf] = iStack_78;
      param_1[0x10] = iStack_74;
      param_1[0x11] = local_70;
      param_1[0x12] = iStack_6c;
      param_1[0x13] = iStack_68;
      param_1[0x14] = local_64;
      param_1[0x15] = iStack_60;
      param_1[0x16] = local_5c;
      param_1[0x17] = iStack_58;
      param_1[0x18] = iStack_54;
      param_1[0x19] = iStack_50;
      param_1[1] = local_b0;
      param_1[2] = iStack_ac;
      param_1[3] = iStack_a8;
      param_1[4] = iStack_a4;
      param_1[5] = iStack_a0;
      param_1[6] = iStack_9c;
      param_1[7] = local_98;
      param_1[8] = iStack_94;
      param_1[9] = iStack_90;
      param_1[10] = iStack_8c;
      param_1[0xb] = iStack_88;
      param_1[0xc] = iStack_84;
      param_1[0xd] = local_80;
      *param_1 = iVar11;
    }
  }
  return;
}

