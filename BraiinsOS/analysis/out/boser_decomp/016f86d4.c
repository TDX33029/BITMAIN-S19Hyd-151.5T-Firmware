// FUN_016f86d4 @ 016f86d4 size=156 calls_out=4 calls_in=2
// strings: 

int FUN_016f86d4(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  uStack_28 = param_1[4];
  local_44 = 0;
  if (*param_2 != '\x04') {
    local_a0 = *(undefined4 *)param_2;
    uStack_9c = *(undefined4 *)(param_2 + 4);
    local_44 = FUN_0142322c(&local_a0);
  }
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  uStack_48 = param_1[4];
  local_a0 = 2;
  local_40 = &DAT_01cf48ac;
  iVar1 = thunk_FUN_01be5118(100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,100);
  }
  FUN_01bed4e2(iVar1,&local_a0,100);
  return iVar1;
}

