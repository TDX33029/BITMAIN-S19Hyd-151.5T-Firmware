// FUN_01375c08 @ 01375c08 size=176 calls_out=2 calls_in=3
// strings: 

void FUN_01375c08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [92];
  
  local_c0 = 0;
  if (param_4[10] == 0) {
    local_c0 = 2;
  }
  local_b4 = 0;
  local_b8 = param_4;
  uVar1 = FUN_0137c00c(&local_c0);
  local_c0 = *param_4;
  uStack_bc = param_4[1];
  local_b8 = (undefined4 *)param_4[2];
  local_b4 = param_4[3];
  uStack_b0 = param_4[4];
  local_ac = param_4[5];
  uStack_a8 = param_4[6];
  uStack_a4 = param_4[7];
  uStack_a0 = param_4[8];
  uStack_9c = param_4[9];
  local_98 = param_4[10];
  uStack_94 = param_4[0xb];
  uStack_90 = param_4[0xc];
  uStack_8c = param_4[0xd];
  uStack_88 = param_4[0xe];
  uStack_84 = param_4[0xf];
  FUN_01bed4e2(auStack_80,param_3,0x58);
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  *(undefined1 *)(param_1 + 0xa5) = 2;
  FUN_01bed4e2(param_1,&local_c0,0x98);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined1 *)(param_1 + 0xac) = 4;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  return;
}

