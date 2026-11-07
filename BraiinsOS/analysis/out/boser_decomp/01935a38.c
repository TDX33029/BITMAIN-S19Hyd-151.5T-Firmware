// FUN_01935a38 @ 01935a38 size=228 calls_out=3 calls_in=0
// strings: 

undefined4 * FUN_01935a38(undefined4 param_1,code *param_2,code *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 extraout_r1;
  undefined4 *puVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = (*param_3)();
  FUN_018e95d0(&local_68,param_4);
  puVar2 = (undefined4 *)0x0;
  local_50 = local_68;
  local_4c = uStack_64;
  local_48 = local_60;
  (*param_2)(&local_5c,param_1,&local_50,0);
  if (local_5c != -0x80000000) {
    local_3c = local_5c;
    local_44 = 1;
    local_4c = 1;
    local_50 = 1;
    local_34 = local_54;
    local_38 = local_58;
    local_28 = CONCAT22(extraout_r1,uVar1);
    local_2c = local_60;
    local_30 = CONCAT22(extraout_r1,uVar1);
    local_40 = 0;
    local_48 = 0;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x2c);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x2c);
    }
    *puVar2 = local_50;
    puVar2[1] = local_4c;
    puVar2[2] = local_48;
    puVar2[3] = local_44;
    puVar2[4] = local_40;
    puVar2[5] = local_3c;
    puVar2[6] = local_38;
    puVar2[7] = local_34;
    puVar2[8] = local_30;
    puVar2[9] = local_2c;
    puVar2[10] = local_28;
  }
  return puVar2;
}

