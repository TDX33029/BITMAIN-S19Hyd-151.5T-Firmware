// FUN_01594754 @ 01594754 size=232 calls_out=4 calls_in=2
// strings: 

int FUN_01594754(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = thunk_FUN_01be5118(0xf);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xf);
  }
  FUN_01bed4e2(iVar1,param_8,0xf);
  local_50 = 6;
  local_7c = 0;
  local_84 = 0;
  local_34 = param_6;
  local_70 = 0xf;
  local_88 = 0x80000012;
  local_4c = param_7;
  local_80 = 1;
  local_38 = param_5;
  local_78 = 0xf;
  local_a8 = 1;
  uStack_a4 = param_3;
  uStack_a0 = param_4;
  local_74 = iVar1;
  local_30 = param_1;
  local_2c = param_2;
  iVar1 = thunk_FUN_01be5118(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar1,&local_a8,0x80);
  return iVar1;
}

