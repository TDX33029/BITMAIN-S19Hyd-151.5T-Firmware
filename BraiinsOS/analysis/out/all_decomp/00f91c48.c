// FUN_00f91c48 @ 00f91c48 size=348 calls_out=6 calls_in=2
// strings: a Display implementation returned an error unexpectedly

void FUN_00f91c48(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_48;
  undefined2 *puStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined2 *local_34;
  undefined4 local_30;
  undefined4 *local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  
  if (param_4[2] != 0) {
    iVar1 = param_4[1];
    iVar2 = param_4[2];
    *param_1 = *param_4;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    return;
  }
  if (param_3 == 0) {
    puStack_44 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puStack_44 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4();
    }
    *(undefined1 *)(puStack_44 + 1) = 0x2e;
    *puStack_44 = 0x2e2e;
    local_48 = 3;
    uStack_40 = 3;
  }
  else {
    local_30 = 0;
    local_24 = &DAT_018806ac;
    local_28 = &local_38;
    local_38 = 0;
    local_1c = 0;
    local_34 = (undefined2 *)&DAT_00000001;
    local_20 = &DAT_60000020;
    iVar1 = FUN_00f9d654(param_3,&local_28);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_48,
                   &DAT_018806c4,&DAT_018af130);
    }
    local_48 = local_38;
    puStack_44 = local_34;
    uStack_40 = local_30;
  }
  local_20 = (undefined1 *)0x0;
  local_24 = (undefined *)0x1;
  local_28 = (undefined4 *)0x0;
  iVar1 = FUN_00f94b78(param_2,&local_28,4,0,&local_48);
  iVar2 = *param_4;
  *param_1 = -0x80000000;
  param_1[1] = iVar1;
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(param_4[1]);
  }
  return;
}

