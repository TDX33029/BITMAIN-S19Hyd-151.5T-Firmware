// FUN_012a87fc @ 012a87fc size=500 calls_out=13 calls_in=1
// strings: 

void FUN_012a87fc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_012a48d4(param_2,0);
  local_b0 = 4;
  local_bc = 4;
  local_a8 = 0;
  local_ac = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_e0 = 2;
  local_94 = 0;
  local_90 = 0;
  local_a0[0] = 0;
  local_98 = param_2;
  piVar3 = (int *)FUN_0129c360(local_a0,&local_e0,param_3,param_4);
  if (piVar3 != (int *)0x0) {
    bVar1 = *(byte *)(param_2 + 0x144);
    bVar5 = (bVar1 & 1) == 0;
    if (bVar5) {
      bVar1 = *(byte *)(param_2 + 0x148);
    }
    if ((bVar5 && (bVar1 & 1) == 0) || ((*(byte *)((int)piVar3 + 0xbd) & 0x1d) == 0xc)) {
      *param_1 = 0x80000000;
      param_1[1] = piVar3;
      FUN_012a8a9c(&local_e0);
      return;
    }
    FUN_019bb7e0(piVar3[4],piVar3[5]);
    iVar4 = piVar3[8];
    FUN_0129b928(iVar4,piVar3[9]);
    FUN_0134aee0(piVar3[7],iVar4,4,0x10);
    if (*piVar3 != 2) {
      FUN_0134bd64(piVar3[1],piVar3[2]);
    }
    FUN_012d40d0(piVar3[0xd],piVar3[0xe]);
    if (-0x7fffffff < piVar3[10]) {
      FUN_0134bd64(piVar3[10],piVar3[0xb]);
    }
    thunk_FUN_01be4678(piVar3);
  }
  local_84 = 0;
  local_88 = 4;
  local_8c = 0;
  FUN_012a8ae0(param_2,&local_c0,&local_8c);
  uVar2 = local_88;
  local_4c = 0;
  local_50 = 4;
  local_54 = 0;
  local_58 = 0;
  local_5c = 4;
  local_60 = 0;
  FUN_012bfcc8(&local_e0,local_88,local_84,&local_60);
  FUN_012bf8c8(&local_60);
  local_60 = local_e0;
  local_5c = uStack_dc;
  local_58 = uStack_d8;
  local_54 = uStack_d4;
  local_50 = uStack_d0;
  local_4c = local_cc;
  uStack_48 = uStack_c8;
  uStack_44 = uStack_c4;
  uStack_40 = local_c0;
  uStack_3c = local_bc;
  local_38 = local_b8;
  uStack_34 = local_b4;
  uStack_30 = local_b0;
  uStack_2c = local_ac;
  uStack_28 = local_a8;
  local_80 = local_c0;
  uStack_7c = local_bc;
  uStack_78 = local_b8;
  local_74 = local_b4;
  uStack_70 = local_b0;
  uStack_6c = local_ac;
  uStack_68 = local_a8;
  if (local_e0 != 2) {
    FUN_012987d4(&local_58);
  }
  *param_1 = local_80;
  param_1[1] = uStack_7c;
  param_1[2] = uStack_78;
  param_1[3] = local_74;
  param_1[4] = uStack_70;
  param_1[5] = uStack_6c;
  param_1[6] = uStack_68;
  FUN_0134aee0(local_8c,uVar2,4,8);
  return;
}

