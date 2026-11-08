// FUN_009e365c @ 009e365c size=156 calls_out=3 calls_in=1
// strings: 

void FUN_009e365c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  
  puStack_20 = (undefined4 *)thunk_FUN_016d4a50(0xd);
  if (puStack_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  *puStack_20 = *param_3;
  uVar1 = param_3[1];
  uVar3 = param_3[2];
  local_24 = 0xd;
  uStack_1c = 0xd;
  *(undefined1 *)(puStack_20 + 3) = *(undefined1 *)(param_3 + 3);
  puStack_20[2] = uVar3;
  puStack_20[1] = uVar1;
  local_28 = 0;
  local_30 = 0;
  local_2c = 4;
  local_34 = 5;
  FUN_00a066d8(param_2,&local_34);
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  return;
}

