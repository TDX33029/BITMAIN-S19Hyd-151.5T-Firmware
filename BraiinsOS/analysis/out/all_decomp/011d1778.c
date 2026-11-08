// FUN_011d1778 @ 011d1778 size=400 calls_out=4 calls_in=0
// strings: 

void FUN_011d1778(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_011c9534(&local_a8);
  if ((char)local_6c == '\0') {
    FUN_011c9534(&local_68,param_2 + 0x14,param_3,param_4,param_5,param_6);
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x40);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x40);
    }
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    puVar1[4] = uStack_58;
    puVar1[5] = local_54;
    puVar1[6] = uStack_50;
    puVar1[7] = uStack_4c;
    puVar1[8] = uStack_48;
    puVar1[9] = uStack_44;
    puVar1[10] = local_40;
    puVar1[0xb] = uStack_3c;
    puVar1[0xc] = uStack_38;
    puVar1[0xd] = uStack_34;
    puVar1[0xe] = uStack_30;
    puVar1[0xf] = uStack_2c;
    if (*(char *)(puVar1 + 0xf) == '\x01') {
      param_1[1] = 1;
      *param_1 = 0x80000000;
      param_1[2] = puVar1;
      param_1[3] = 1;
      param_1[4] = 0;
      FUN_011ca6a4(&local_a8);
      return;
    }
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = puVar1;
    param_1[5] = 1;
    param_1[6] = 0;
    FUN_011ca6a4(&local_a8);
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x40);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x40);
  }
  *puVar1 = local_a8;
  puVar1[1] = uStack_a4;
  puVar1[2] = uStack_a0;
  puVar1[3] = uStack_9c;
  puVar1[4] = uStack_98;
  puVar1[5] = local_94;
  puVar1[6] = uStack_90;
  puVar1[7] = uStack_8c;
  puVar1[8] = uStack_88;
  puVar1[9] = uStack_84;
  puVar1[10] = local_80;
  puVar1[0xb] = uStack_7c;
  puVar1[0xc] = uStack_78;
  puVar1[0xd] = uStack_74;
  puVar1[0xe] = uStack_70;
  puVar1[0xf] = local_6c;
  if (*(char *)(puVar1 + 0xf) == '\x01') {
    param_1[1] = 1;
    *param_1 = 0x80000000;
    param_1[2] = puVar1;
    param_1[3] = 1;
    param_1[4] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = puVar1;
  param_1[5] = 1;
  param_1[6] = 0;
  return;
}

