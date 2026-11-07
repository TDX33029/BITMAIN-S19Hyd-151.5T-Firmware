// FUN_01191f64 @ 01191f64 size=888 calls_out=8 calls_in=0
// strings: minContains | maxContains | maxContains | minContains | maxContains

void FUN_01191f64(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint local_e8;
  undefined *local_e4;
  uint local_e0;
  undefined *local_dc;
  uint local_d8;
  undefined *local_d4;
  uint local_d0;
  undefined **ppuStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 local_60;
  uint local_58;
  undefined *local_54;
  uint local_50;
  undefined **local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  undefined **local_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar8 = (uint)*(byte *)(param_2 + 0x88);
  if (uVar8 < 3) {
LAB_01191f84:
    FUN_011a2838(param_1 + 1,param_2,param_4);
    *param_1 = 1;
    return;
  }
  if (1 < uVar8 - 3) {
    *param_1 = 0;
    return;
  }
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar9 = *(undefined4 *)(param_2 + 0x38);
  uVar10 = *(undefined4 *)(param_2 + 0x3c);
  FUN_011a2940(&local_e8,uVar5,uVar6,uVar9,uVar10,"minContains");
  puVar2 = local_dc;
  uVar1 = local_e0;
  if (local_e8 == 2) {
    FUN_011a2940(&local_e8,uVar5,uVar6,uVar9,uVar10,"maxContains");
    if (local_e8 == 2) goto LAB_01191f84;
    if ((local_e8 & 1) == 0) {
      FUN_0119d4b4(&local_e8,param_2,"maxContains",0xb);
      uVar3 = FUN_01352d48(local_60,param_4);
      FUN_0125acb4(&local_38,&local_e8,param_4,uVar3);
      if (local_38 == 0) {
LAB_011921f4:
        puVar4 = (uint *)0x0;
        ppuVar7 = local_34;
        goto LAB_011921f8;
      }
      local_50 = local_38;
      local_58 = local_e0;
      local_48 = local_30;
      uStack_44 = uStack_2c;
      uStack_40 = uStack_28;
      local_4c = local_34;
      local_54 = local_dc;
      puVar4 = (uint *)thunk_FUN_016d4a50(0x20);
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x20);
      }
      ppuVar7 = (undefined **)&DAT_01889bc8;
LAB_011921b8:
      *puVar4 = local_58;
      puVar4[1] = (uint)local_54;
      puVar4[2] = local_50;
      puVar4[3] = (uint)local_4c;
      puVar4[4] = local_48;
      puVar4[5] = uStack_44;
      puVar4[6] = uStack_40;
      puVar4[7] = uStack_3c;
LAB_011921f8:
      FUN_01161600(&local_e8);
      param_1[1] = puVar4;
      param_1[2] = ppuVar7;
      *param_1 = 1;
      return;
    }
LAB_011921d8:
    local_54 = local_e4;
  }
  else {
    if ((local_e8 & 1) != 0) goto LAB_011921d8;
    FUN_011a2940(&local_e8,uVar5,uVar6,uVar9,uVar10,"maxContains");
    if (local_e8 == 2) {
      FUN_0119d4b4(&local_e8,param_2,"minContains",0xb);
      uVar3 = FUN_01352d48(local_60,param_4);
      FUN_0125acb4(&local_38,&local_e8,param_4,uVar3);
      if (local_38 == 0) goto LAB_011921f4;
      local_50 = local_38;
      local_54 = puVar2;
      local_48 = local_30;
      uStack_44 = uStack_2c;
      uStack_40 = uStack_28;
      local_58 = uVar1;
      local_4c = local_34;
      puVar4 = (uint *)thunk_FUN_016d4a50(0x20);
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x20);
      }
      ppuVar7 = &PTR_LAB_01889be8;
      goto LAB_011921b8;
    }
    if ((local_e8 & 1) != 0) goto LAB_011921d8;
    uVar3 = FUN_01352d48(uVar8,param_4);
    FUN_0125acb4(&local_58,param_2,param_4,uVar3);
    if (local_58 != 0) {
      local_d8 = local_58;
      local_d0 = local_50;
      ppuStack_cc = local_4c;
      uStack_c8 = local_48;
      local_e4 = puVar2;
      local_e8 = uVar1;
      local_d4 = local_54;
      puVar4 = (uint *)thunk_FUN_016d4a50(0x28);
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x28);
      }
      local_54 = &DAT_01889c08;
      *puVar4 = local_e8;
      puVar4[1] = (uint)local_e4;
      puVar4[2] = local_e0;
      puVar4[3] = (uint)local_dc;
      puVar4[4] = local_d8;
      puVar4[5] = (uint)local_d4;
      puVar4[6] = local_d0;
      puVar4[7] = (uint)ppuStack_cc;
      puVar4[8] = uStack_c8;
      puVar4[9] = uStack_c4;
      goto LAB_011921e0;
    }
  }
  puVar4 = (uint *)0x0;
LAB_011921e0:
  param_1[1] = puVar4;
  param_1[2] = local_54;
  *param_1 = 1;
  return;
}

