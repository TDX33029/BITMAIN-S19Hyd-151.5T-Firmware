// FUN_012bd5e8 @ 012bd5e8 size=528 calls_out=9 calls_in=1
// strings: 

undefined4
FUN_012bd5e8(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5,int *param_6
            )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined **local_c0;
  undefined *local_bc;
  undefined **local_b8;
  undefined *local_b4;
  int local_b0;
  undefined4 *local_ac;
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined ***local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 *local_88;
  undefined ***local_84;
  undefined *local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 local_6c;
  undefined1 local_68;
  undefined1 auStack_67 [15];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [20];
  
  puVar4 = (undefined *)FUN_012b9138(param_1 + 0x74);
  local_c0 = &local_bc;
  local_b4 = &DAT_00420598;
  if (puVar4 != (undefined *)0x0) {
    local_b4 = puVar4;
  }
  local_bc = local_b4 + 0x54;
  local_b8 = &local_b4;
  local_b4 = local_b4 + 0x46;
  uVar5 = FUN_012bc650(2);
  FUN_012bc780(uVar5,param_1);
  local_a8 = 0;
  local_ac = (undefined4 *)&SUB_00000004;
  local_b0 = 0;
  if (param_5 != 0) {
    local_78 = &LAB_00632348;
    local_88 = &LAB_00632348;
    local_94 = &local_c0;
    local_9c = 1;
    local_84 = &local_b8;
    local_98 = 0;
    local_a0 = 0;
    local_80 = &DAT_012b59c8;
    local_90 = &DAT_012b59c8;
    local_8c = param_2;
    local_7c = param_4;
    FUN_012fa178(&local_a0,&DAT_01ce25b4,&DAT_004204a7,&local_94);
    uVar3 = local_98;
    uVar2 = local_9c;
    uVar1 = local_a0;
    FUN_018c4418(&local_b0);
    *local_ac = uVar1;
    local_ac[1] = uVar2;
    local_ac[2] = uVar3;
  }
  local_a8 = (uint)(param_5 != 0);
  FUN_01bed4e2((uint)auStack_58 | 3,param_2,0xc);
  FUN_01bed4e2((uint)auStack_48 | 3,param_3,0xc);
  FUN_01bed4e2((uint)auStack_38 | 3,&local_b0,0xc);
  local_90 = (undefined *)CONCAT31(local_90._1_3_,2);
  local_94 = (undefined ***)((uint)local_94 & 0xffffff00);
  FUN_01bed4e2((int)&local_90 + 1,auStack_58,0xf);
  local_7c = (undefined4 *)CONCAT31(local_7c._1_3_,3);
  local_80 = (undefined *)CONCAT31(local_80._1_3_,10);
  FUN_01bed4e2((int)&local_7c + 1,auStack_48,0xf);
  local_68 = 5;
  local_6c = 0xe;
  FUN_01bed4e2(auStack_67,auStack_38,0xf);
  FUN_012bc91c(uVar5,&local_94);
  if (*param_6 != -0x80000000) {
    local_90 = (undefined *)*param_6;
    local_8c = param_6[1];
    local_88 = (undefined1 *)param_6[2];
    local_94 = (undefined ***)CONCAT31(local_94._1_3_,4);
    FUN_012bca08(uVar5,0xf,&local_94);
  }
  FUN_0134bd64(*param_4,param_4[1]);
  return uVar5;
}

