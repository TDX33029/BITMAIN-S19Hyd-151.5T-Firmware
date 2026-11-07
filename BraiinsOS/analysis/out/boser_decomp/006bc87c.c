// FUN_006bc87c @ 006bc87c size=196 calls_out=5 calls_in=2
// strings: 

void FUN_006bc87c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined2 *local_34;
  undefined4 uStack_30;
  undefined4 *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_4c = param_2;
  local_48 = param_3;
  iVar1 = FUN_006c176c(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x40),
                       *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x44));
  if (iVar1 == 0) {
    local_40 = (undefined4 *)thunk_FUN_01be5118(8);
    if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    local_34 = &DAT_0132b6a0;
    local_38 = &local_4c;
    local_3c = 1;
    *local_40 = param_4;
    local_40[1] = param_5;
    local_44 = 1;
    FUN_00664898(&local_28,&DAT_00576220,&local_38);
    local_38 = local_28;
    local_34 = (undefined2 *)uStack_24;
    uStack_30 = uStack_20;
    FUN_006d6c3c(param_1,&local_44,&local_38);
  }
  return;
}

