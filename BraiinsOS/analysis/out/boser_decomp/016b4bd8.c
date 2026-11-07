// FUN_016b4bd8 @ 016b4bd8 size=216 calls_out=3 calls_in=1
// strings: assertion failed: self.dfa.starts.len() == pid.one_more() | assertion failed: self.dfa.starts.is_empty()

void FUN_016b4bd8(int *param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if ((param_3 & 1) == 0) {
    if (*(int *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.dfa.starts.is_empty()",0x2c,&DAT_01d08928);
    }
  }
  else if (*(int *)(param_2 + 0x20) != param_4 + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.dfa.starts.len() == pid.one_more()",0x39,&DAT_01d08938);
  }
  FUN_016b53a4(&local_60,param_2,param_5);
  if (local_60 == 0x30) {
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 == *(int *)(param_2 + 0x18)) {
      FUN_01a54b48();
    }
    *(int *)(*(int *)(param_2 + 0x1c) + iVar1 * 4) = iStack_5c;
    *(int *)(param_2 + 0x20) = iVar1 + 1;
    local_60 = 0x30;
  }
  else {
    param_1[2] = local_58;
    param_1[3] = iStack_54;
    param_1[4] = iStack_50;
    param_1[5] = iStack_4c;
    param_1[6] = local_48;
    param_1[7] = iStack_44;
    param_1[8] = iStack_40;
    param_1[9] = iStack_3c;
    param_1[10] = iStack_38;
    param_1[0xb] = local_34;
    param_1[0xc] = iStack_30;
    param_1[0xd] = iStack_2c;
    param_1[0xe] = iStack_28;
    param_1[0xf] = iStack_24;
  }
  *param_1 = local_60;
  param_1[1] = iStack_5c;
  return;
}

