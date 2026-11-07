// FUN_00faca34 @ 00faca34 size=368 calls_out=5 calls_in=1
// strings: 

void FUN_00faca34(undefined4 *param_1,uint param_2,uint param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  puVar1 = (uint *)thunk_FUN_01be5118(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  if ((param_4 == 0) || (iVar2 = (**(code **)(param_5 + 0x10))(param_4), iVar2 != 0)) {
    piVar5 = (int *)0x0;
    FUN_005f6438(param_4,param_5);
  }
  else {
    piVar5 = (int *)thunk_FUN_01be5118(8);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *piVar5 = param_4;
    piVar5[1] = param_5;
  }
  uVar6 = 0;
  if ((int)param_2 < 0) {
LAB_00facabc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,param_2);
  }
  iVar2 = 1;
  uVar4 = 0;
  if (param_2 != 0) {
    uVar6 = 1;
    iVar2 = FUN_01298504(param_2,1);
    if (iVar2 == 0) goto LAB_00facabc;
    uVar4 = param_2;
  }
  uVar3 = 0x20 - LZCOUNT(uVar4 >> 10);
  if (6 < uVar3) {
    uVar3 = 7;
  }
  param_1[0x2c] = iVar2;
  param_1[0x2d] = 0;
  param_1[0x2e] = uVar4;
  param_1[0x2f] = uVar3 << 2 | 1;
  param_1[0x10] = 4;
  *param_1 = 3;
  param_1[1] = 0;
  param_1[0x38] = puVar1;
  param_1[0x2a] = param_6;
  param_1[0x11] = 0;
  param_1[0x39] = &DAT_01c1bd68;
  *(undefined2 *)(param_1 + 0x36) = 0;
  param_1[0x30] = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 1;
  param_1[0x34] = piVar5;
  param_1[0x35] = &DAT_01c159b8;
  param_1[0x2b] = param_7;
  return;
}

