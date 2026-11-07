// FUN_01526ddc @ 01526ddc size=332 calls_out=6 calls_in=1
// strings: additionalProperties

void FUN_01526ddc(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_0155ee38(&local_58,param_3,param_2);
  if (local_58 == 0) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    *param_1 = 0;
    param_1[1] = local_54;
    FUN_019bb7e0(uVar1,uVar2);
    return;
  }
  local_80 = local_50;
  uStack_7c = uStack_4c;
  uStack_78 = uStack_48;
  uStack_74 = uStack_44;
  local_70 = uStack_40;
  local_6c = local_3c;
  uStack_68 = uStack_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = *(undefined4 *)(param_3 + 0x38);
  uVar6 = *(undefined4 *)(param_3 + 0x3c);
  local_84 = local_54;
  local_88 = local_58;
  uVar7 = FUN_015345a4(uVar5,uVar6,"additionalProperties",0x14);
  local_a0 = FUN_015345a4(uVar5,uVar6,&DAT_0056fdb8,8);
  local_d8 = local_88;
  iStack_d4 = local_84;
  uStack_d0 = local_80;
  uStack_cc = uStack_7c;
  uStack_c8 = uStack_78;
  uStack_c4 = uStack_74;
  local_c0 = local_70;
  uStack_bc = local_6c;
  uStack_b8 = uStack_68;
  uStack_b4 = uStack_64;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  uStack_98 = uVar1;
  local_94 = uVar2;
  local_90 = uVar4;
  local_a8 = uVar7;
  iVar3 = thunk_FUN_01be5118(0x50);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  FUN_01bed4e2(iVar3,&local_d8,0x50);
  *param_1 = iVar3;
  param_1[1] = (int)&DAT_01cfad10;
  return;
}

