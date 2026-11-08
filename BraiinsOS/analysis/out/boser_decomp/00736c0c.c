// FUN_00736c0c @ 00736c0c size=132 calls_out=3 calls_in=16
// strings: 

undefined8 FUN_00736c0c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_18;
  code *local_14;
  
  local_18 = (undefined1 *)&local_30;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    local_14 = FUN_012fd074;
    local_30 = param_1;
    iStack_2c = param_2;
    FUN_00664898(&local_28,&DAT_005ac92b,&local_18);
    param_1 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *param_1 = local_28;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    uVar1 = 1;
  }
  return CONCAT44(param_1,uVar1);
}

