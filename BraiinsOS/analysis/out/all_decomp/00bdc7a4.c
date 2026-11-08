// FUN_00bdc7a4 @ 00bdc7a4 size=144 calls_out=3 calls_in=0
// strings: 

void FUN_00bdc7a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_00bdc87c(param_3,param_4,param_5,param_6);
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
  param_1[1] = &DAT_0187287c;
  param_1[2] = 0x11f2e4d7;
  param_1[3] = 0x3eb65e7c;
  param_1[4] = 0xa020268;
  param_1[5] = 0x1378bb1c;
  return;
}

