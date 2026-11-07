// FUN_016b53a4 @ 016b53a4 size=228 calls_out=3 calls_in=2
// strings: 

void FUN_016b53a4(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
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
  
  if (*(uint *)(param_2 + 0x15c) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,*(uint *)(param_2 + 0x15c),&DAT_01d08948);
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0x158) + param_3 * 4);
  if (iVar1 == 0) {
    FUN_016b4ab8(&local_60,param_2);
    if (local_60 == 0x30) {
      if (*(uint *)(param_2 + 0x15c) <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_3,*(uint *)(param_2 + 0x15c),&DAT_01d08958);
      }
      iVar1 = *(int *)(param_2 + 0x148);
      iVar2 = *(int *)(param_2 + 0x150);
      *(int *)(*(int *)(param_2 + 0x158) + param_3 * 4) = iStack_5c;
      if (iVar2 == iVar1) {
        FUN_01a54b48();
      }
      local_60 = 0x30;
      *(uint *)(*(int *)(param_2 + 0x14c) + iVar2 * 4) = param_3;
      *(int *)(param_2 + 0x150) = iVar2 + 1;
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
  }
  else {
    *param_1 = 0x30;
    param_1[1] = iVar1;
  }
  return;
}

