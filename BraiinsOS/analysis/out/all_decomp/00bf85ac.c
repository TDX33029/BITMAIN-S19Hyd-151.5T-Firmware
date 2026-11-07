// FUN_00bf85ac @ 00bf85ac size=192 calls_out=3 calls_in=0
// strings: 

void FUN_00bf85ac(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_00bf8768(&local_28,*param_2,param_3,param_4,param_5,param_6);
  if (local_28 == 1) {
    *param_1 = 0;
    param_1[1] = local_24;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x10);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  *(undefined8 *)(puVar1 + 2) = local_20;
  *param_1 = puVar1;
  param_1[1] = &DAT_0187285c;
  param_1[2] = 0x84adcb7c;
  param_1[3] = 0xb073a66;
  param_1[4] = 0xe577a84e;
  param_1[5] = 0xc45c25bf;
  return;
}

