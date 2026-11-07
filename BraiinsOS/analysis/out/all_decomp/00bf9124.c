// FUN_00bf9124 @ 00bf9124 size=172 calls_out=3 calls_in=0
// strings: 

void FUN_00bf9124(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_00bf92b8(*param_2,param_3,param_4,param_5,param_6);
  uVar2 = (undefined4)(uVar3 >> 0x20);
  if ((uVar3 & 1) != 0) {
    *param_1 = 0;
    param_1[1] = uVar2;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  puVar1[1] = 1;
  puVar1[2] = uVar2;
  *puVar1 = 1;
  *param_1 = puVar1;
  param_1[1] = &DAT_0187286c;
  param_1[2] = 0xd1a860c6;
  param_1[3] = 0x9208909e;
  param_1[4] = 0xccd31989;
  param_1[5] = 0x763d199b;
  return;
}

