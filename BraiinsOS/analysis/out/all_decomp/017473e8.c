// FUN_017473e8 @ 017473e8 size=256 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_017473e8(int param_1,undefined4 param_2,code *param_3,int param_4)

{
  int *piVar1;
  int local_30 [6];
  
  local_30[5] = DAT_018ddaf8;
  FUN_016dd606(param_1,0,0x110,0);
  piVar1 = local_30 + 1;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  *(code **)(param_1 + 0x108) = param_3;
  (*param_3)(piVar1,piVar1,param_2);
  FUN_0174720c(param_1 + 0x100,param_1 + 0x104,param_1,local_30,piVar1);
  *(byte *)(param_1 + 0x10c) =
       *(byte *)(param_1 + 0x10c) & 0xfe | (local_30[0] != 0 && param_4 != 0);
  if (local_30[5] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

