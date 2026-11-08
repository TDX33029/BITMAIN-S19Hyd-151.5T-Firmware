// FUN_0125ee2c @ 0125ee2c size=632 calls_out=5 calls_in=0
// strings: /sys/class/pwm/pwmchip | duty_cycle

void FUN_0125ee2c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  puVar1[2] = 0x1c1;
  puVar1[3] = 0x1c2;
  *puVar1 = 0x1bf;
  puVar1[1] = 0x1c0;
  local_28 = 1;
  local_2c = 0;
  local_30 = 0;
  local_34 = 1;
  local_38 = 1;
  local_3c = 0;
  local_40 = 1;
  local_44 = 0;
  local_48 = 1;
  local_4c[0] = 0;
  FUN_0125e31c(&local_70,local_4c);
  iVar2 = thunk_FUN_01be5118(0x16);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x16);
  }
  FUN_01bed4e2(iVar2,"/sys/class/pwm/pwmchip",0x16);
  puVar3 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  *(undefined2 *)(puVar3 + 1) = 0x646f;
  *puVar3 = 0x69726570;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,8);
  }
  puVar4[1] = 0x79746972;
  *puVar4 = 0x616c6f70;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  *(undefined2 *)(puVar5 + 1) = 0x6c61;
  *puVar5 = 0x6d726f6e;
  iVar6 = thunk_FUN_01be5118(10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,10);
  }
  FUN_01bed4e2(iVar6,"duty_cycle",10);
  *param_1 = local_70;
  param_1[1] = uStack_6c;
  param_1[2] = uStack_68;
  param_1[3] = uStack_64;
  param_1[4] = local_60;
  param_1[5] = uStack_5c;
  param_1[6] = uStack_58;
  param_1[7] = uStack_54;
  param_1[0x11] = 8;
  param_1[0x14] = 6;
  param_1[0x15] = 10;
  param_1[0x16] = iVar6;
  param_1[0x17] = 10;
  param_1[8] = 100000;
  param_1[9] = 0x16;
  param_1[10] = iVar2;
  param_1[0xc] = 6;
  param_1[0xe] = 6;
  param_1[0x18] = 4;
  param_1[0x19] = puVar1;
  param_1[0x1a] = 4;
  param_1[0x10] = puVar4;
  param_1[0x12] = 6;
  param_1[0x13] = puVar5;
  param_1[0xb] = 0x16;
  param_1[0xd] = puVar3;
  param_1[0xf] = 8;
  return;
}

