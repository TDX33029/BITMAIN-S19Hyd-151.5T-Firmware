// FUN_015327f4 @ 015327f4 size=216 calls_out=3 calls_in=1
// strings: 

undefined4 * FUN_015327f4(undefined4 param_1,code *param_2,code *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 extraout_r1;
  undefined4 *puVar2;
  undefined1 auStack_6c [8];
  undefined4 local_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = (*param_3)();
  FUN_0150e454(auStack_6c,param_4);
  puVar2 = (undefined4 *)0x0;
  (*param_2)(&local_60,param_1,auStack_6c,0);
  if (local_60 != -0x80000000) {
    local_2c = local_64;
    local_3c = local_60;
    uStack_38 = uStack_5c;
    uStack_34 = uStack_58;
    local_44 = 1;
    local_4c = 1;
    local_50 = 1;
    local_40 = 0;
    local_48 = 0;
    local_28 = CONCAT22(extraout_r1,uVar1);
    local_30 = CONCAT22(extraout_r1,uVar1);
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x2c);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x2c);
    }
    *puVar2 = local_50;
    puVar2[1] = local_4c;
    puVar2[2] = local_48;
    puVar2[3] = local_44;
    puVar2[4] = local_40;
    puVar2[5] = local_3c;
    puVar2[6] = uStack_38;
    puVar2[7] = uStack_34;
    puVar2[8] = local_30;
    puVar2[9] = local_2c;
    puVar2[10] = local_28;
  }
  return puVar2;
}

