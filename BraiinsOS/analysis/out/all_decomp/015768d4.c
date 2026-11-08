// FUN_015768d4 @ 015768d4 size=220 calls_out=4 calls_in=0
// strings: 

void FUN_015768d4(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 *local_58;
  undefined4 *puStack_54;
  undefined *puStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0152b020(&local_58,*param_2 + 8,param_3,param_4,param_5,param_6);
  if (local_58 == (undefined1 *)0x80000029) {
    *param_1 = 0x80000029;
    return;
  }
  bVar2 = (undefined1 *)0x80000011 < local_58;
  if (local_58 < &DAT_80000013) {
    bVar2 = (undefined1 *)0x1 < local_58 + 0x7ffffff1;
  }
  if (bVar2) {
    local_38 = local_4c;
    uStack_34 = uStack_48;
    uStack_30 = uStack_44;
    uStack_2c = uStack_40;
    uStack_28 = uStack_3c;
    puVar1 = puStack_54;
  }
  else {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar1 = 1;
    puVar1[1] = 1;
    FUN_015769d0(&local_58);
    local_58 = (undefined1 *)0x80000012;
    puStack_50 = &DAT_018a9190;
  }
  *param_1 = local_58;
  param_1[1] = puVar1;
  param_1[2] = puStack_50;
  param_1[3] = local_38;
  param_1[4] = uStack_34;
  param_1[5] = uStack_30;
  param_1[6] = uStack_2c;
  param_1[7] = uStack_28;
  return;
}

