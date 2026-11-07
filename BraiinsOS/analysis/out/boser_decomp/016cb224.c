// FUN_016cb224 @ 016cb224 size=252 calls_out=5 calls_in=4
// strings: 

void FUN_016cb224(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_5c = 0;
  local_60 = 0;
  local_64 = 4;
  local_68 = 0;
  local_6c = 0;
  local_70 = 8;
  local_74 = 0;
  uStack_7c = 4;
  uStack_78 = 0;
  local_80 = 0;
  if (param_3 == 0) {
    FUN_016cabd4(&local_80);
    FUN_016cae14(&local_58,uStack_7c,uStack_78);
    if (local_58 == &DAT_80000004) {
      local_50 = local_80;
      uStack_4c = uStack_7c;
      uStack_48 = uStack_78;
      uStack_44 = local_74;
      local_40 = local_70;
      local_3c = local_6c;
      uStack_38 = local_68;
      uStack_34 = local_64;
      uStack_30 = local_60;
      uStack_2c = local_5c;
      local_54 = 1;
      local_58 = (undefined1 *)0x1;
      puVar1 = (undefined4 *)thunk_FUN_01be5118(0x30);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x30);
      }
      *puVar1 = local_58;
      puVar1[1] = local_54;
      puVar1[2] = local_50;
      puVar1[3] = uStack_4c;
      puVar1[4] = uStack_48;
      puVar1[5] = uStack_44;
      puVar1[6] = local_40;
      puVar1[7] = local_3c;
      puVar1[8] = uStack_38;
      puVar1[9] = uStack_34;
      puVar1[10] = uStack_30;
      puVar1[0xb] = uStack_2c;
      *param_1 = &DAT_80000004;
      param_1[1] = puVar1;
      return;
    }
    puVar1 = (undefined4 *)((uint)&local_58 | 4);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    param_1[1] = *puVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *param_1 = local_58;
  }
  else {
    *param_1 = 0x80000003;
    param_1[1] = 0;
  }
  FUN_016cb1b4(&local_80);
  return;
}

