// FUN_01959f04 @ 01959f04 size=476 calls_out=10 calls_in=3
// strings: 

void FUN_01959f04(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined *local_108;
  undefined2 *local_104;
  int *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4;
  undefined *local_f0;
  undefined2 *local_ec;
  int *local_e8;
  undefined1 *local_e4;
  int *local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  int *local_d0;
  undefined2 local_cc;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_e8 = (int *)0x0;
  local_ec = (undefined2 *)0x1;
  local_f0 = (undefined *)0x0;
  local_34 = &LAB_00632348;
  local_38 = param_2;
  iVar3 = FUN_012fa178(&local_f0,&DAT_01d26724,&DAT_00590e5f,&local_38);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_38,&DAT_01d2673c,&DAT_01d30334);
  }
  local_108 = local_f0;
  local_104 = local_ec;
  local_100 = local_e8;
  local_cc = 1;
  local_d8 = 1;
  local_d0 = local_e8;
  local_d4 = 0;
  local_dc = 0x20;
  local_e0 = local_e8;
  local_e4 = (undefined1 *)0x0;
  local_f0 = (undefined *)0x20;
  FUN_01318634(&local_fc,&local_f0);
  if (local_f4 < 6) {
    local_ec = &DAT_0132b6a0;
    local_e4 = &LAB_00632348;
    local_f0 = &DAT_01d268fc;
    local_e8 = (int *)&local_108;
    FUN_00664898(&local_38,&DAT_0059d815,&local_f0);
    puVar2 = local_34;
    uVar1 = local_38;
    local_38 = 0;
    FUN_01313b0c(&local_f0,&local_38,local_34,local_30);
    if (local_f0 == (undefined *)0x80000000) {
      puVar4 = (undefined4 *)((uint)&local_f0 | 4);
      local_38 = *puVar4;
      local_34 = (undefined1 *)puVar4[1];
      local_30 = puVar4[2];
      uStack_2c = puVar4[3];
      uVar5 = FUN_0195a16c(&local_38);
      *param_1 = 0x80000000;
      param_1[1] = uVar5;
    }
    else {
      FUN_01bed4e2(param_1,&local_f0,0xb8);
    }
    FUN_019bb7e0(uVar1,puVar2);
  }
  else {
    FUN_01bed4e2(param_1,param_2,0xb8);
  }
  FUN_0134aee0(local_fc,local_f8,4,8);
  FUN_019bb7e0(local_108,local_104);
  if (local_f4 < 6) {
    FUN_0193f164(param_2);
  }
  return;
}

