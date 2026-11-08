// FUN_0061e7dc @ 0061e7dc size=420 calls_out=6 calls_in=1
// strings: 

void FUN_0061e7dc(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar5;
  uint unaff_r5;
  uint uVar6;
  uint uVar7;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  bool bVar8;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar5 = *param_2;
  if (uVar5 == 3) {
    uVar4 = param_2[1];
    iVar1 = 8;
LAB_0061e814:
    FUN_0061da6c(&local_58,uVar4,*(undefined4 *)((int)param_2 + iVar1));
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
    if (local_58 != 3) {
      if (0x7fffffff < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00600c10();
      }
      if (local_34 == 0) {
        local_5c = 1;
      }
      else {
        local_5c = thunk_FUN_016d4a50(local_34);
        if (local_5c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_34);
        }
      }
      FUN_016dd1aa(local_5c,local_38,local_34);
      param_3 = extraout_r2_00;
      unaff_r5 = local_38;
      uVar4 = local_34;
      in_r12 = extraout_r12_00;
      goto LAB_0061e880;
    }
  }
  else {
    uVar4 = param_2[7];
    iVar1 = 0x20;
    if (uVar4 != 0) goto LAB_0061e814;
  }
  uVar4 = 0x80000000;
LAB_0061e880:
  uVar2 = param_2[6];
  bVar8 = uVar5 != 3;
  if (uVar5 < 2) {
    uVar6 = param_2[4];
    if (uVar6 == 0) {
      uVar7 = 0x80000000;
    }
    else {
      uVar7 = param_2[5];
      if (uVar7 == 0) {
        in_r12 = 1;
      }
      else {
        in_r12 = thunk_FUN_016d4a50(uVar7);
        if (in_r12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar7);
        }
      }
      FUN_016dd1aa(in_r12,uVar6,uVar7);
    }
    unaff_r5 = param_2[1];
    uStack_48 = param_2[2];
    param_3 = param_2[3];
  }
  else {
    uVar5 = 0;
    uVar7 = 0x80000000;
    uStack_48 = 0;
  }
  iVar1 = param_1[2];
  local_3c = local_5c;
  local_58 = (uint)bVar8;
  local_54 = uVar2;
  uStack_50 = uVar5;
  uStack_4c = unaff_r5;
  uStack_44 = param_3;
  local_40 = uVar4;
  local_38 = uVar4;
  local_34 = uVar7;
  local_30 = in_r12;
  local_2c = uVar7;
  if (iVar1 == *param_1) {
    FUN_0061d074(param_1);
  }
  puVar3 = (uint *)(param_1[1] + iVar1 * 0x30);
  *puVar3 = local_58;
  puVar3[1] = local_54;
  puVar3[2] = uStack_50;
  puVar3[3] = uStack_4c;
  puVar3[4] = uStack_48;
  puVar3[5] = uStack_44;
  puVar3[6] = local_40;
  puVar3[7] = local_3c;
  puVar3[8] = local_38;
  puVar3[9] = local_34;
  puVar3[10] = local_30;
  puVar3[0xb] = local_2c;
  param_1[2] = iVar1 + 1;
  return;
}

