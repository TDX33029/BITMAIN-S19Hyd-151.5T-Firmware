// FUN_00e96e84 @ 00e96e84 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_00e96e84(undefined2 *param_1)

{
  int local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint *local_10;
  code *local_c;
  
  FUN_00efbe38(&local_38);
  if (local_38 != 1) {
    local_24 = local_2c;
    local_28 = local_30;
    if (local_2c == 0 && (0xffff < local_30) <= local_2c) {
      param_1[1] = (short)local_30;
      *param_1 = 0;
      return;
    }
    local_c = FUN_00fac4cc;
    local_10 = &local_28;
    FUN_00600d2c(&local_20,&DAT_0058dbfe,&local_10);
    local_34 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (local_34 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *local_34 = local_20;
    local_34[1] = uStack_1c;
    local_34[2] = uStack_18;
  }
  *(undefined4 **)(param_1 + 2) = local_34;
  *param_1 = 1;
  return;
}

