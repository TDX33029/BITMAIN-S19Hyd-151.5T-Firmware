// FUN_014c98b0 @ 014c98b0 size=184 calls_out=3 calls_in=2
// strings: 

int FUN_014c98b0(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_a8 [18];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = *param_1;
  uStack_3c = param_1[1];
  uStack_38 = param_1[2];
  uStack_34 = param_1[3];
  uStack_30 = param_1[4];
  local_4c = (undefined4 *)0x0;
  if (*param_2 != '\x04') {
    uVar2 = *(undefined4 *)param_2;
    uVar3 = *(undefined4 *)(param_2 + 4);
    local_28 = uVar2;
    local_24 = uVar3;
    local_4c = (undefined4 *)thunk_FUN_016d4a50(8);
    if (local_4c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *local_4c = uVar2;
    local_4c[1] = uVar3;
  }
  local_60 = *param_1;
  uStack_5c = param_1[1];
  uStack_58 = param_1[2];
  uStack_54 = param_1[3];
  uStack_50 = param_1[4];
  local_a8[0] = 2;
  local_48 = &DAT_018a500c;
  iVar1 = thunk_FUN_016d4a50(100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,100);
  }
  FUN_016dd1aa(iVar1,local_a8,100);
  return iVar1;
}

