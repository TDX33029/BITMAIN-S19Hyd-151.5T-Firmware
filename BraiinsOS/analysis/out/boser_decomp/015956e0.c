// FUN_015956e0 @ 015956e0 size=136 calls_out=3 calls_in=21
// strings: 

int FUN_015956e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 *local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_6c = 0;
  local_70 = &DAT_80000028;
  local_34 = param_7;
  local_90 = 1;
  local_38 = 6;
  local_1c = param_6;
  local_20 = param_5;
  local_6b = param_8;
  uStack_8c = param_3;
  uStack_88 = param_4;
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = thunk_FUN_01be5118(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar1,&local_90,0x80);
  return iVar1;
}

