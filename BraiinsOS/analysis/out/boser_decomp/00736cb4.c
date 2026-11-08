// FUN_00736cb4 @ 00736cb4 size=156 calls_out=3 calls_in=11
// strings: 

undefined8 FUN_00736cb4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *local_20;
  code *local_1c;
  undefined4 *local_18;
  code *local_14;
  
  local_20 = (undefined1 *)&local_38;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    local_18 = &DAT_0056d238;
    local_1c = FUN_012fd074;
    local_14 = FUN_012fd02c;
    local_38 = param_1;
    iStack_34 = param_2;
    FUN_00664898(&local_30,&DAT_0057208c,&local_20);
    param_1 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    uVar1 = 1;
  }
  return CONCAT44(param_1,uVar1);
}

