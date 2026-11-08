// FUN_00736b58 @ 00736b58 size=144 calls_out=3 calls_in=2
// strings: 

void FUN_00736b58(undefined2 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_18;
  code *local_14;
  
  local_18 = (undefined1 *)&local_30;
  if (param_4 == 0 && (0xffff < param_3) <= param_4) {
    uVar1 = 0;
    param_1[1] = (short)param_3;
  }
  else {
    local_14 = FUN_012fd074;
    local_30 = param_3;
    uStack_2c = param_4;
    FUN_00664898(&local_28,&DAT_0058e503,&local_18);
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar2 = local_28;
    puVar2[1] = uStack_24;
    puVar2[2] = uStack_20;
    *(undefined4 **)(param_1 + 2) = puVar2;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

