// FUN_01596344 @ 01596344 size=128 calls_out=3 calls_in=5
// strings: 

int FUN_01596344(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_2c = param_6;
  local_68 = 0x8000000f;
  local_30 = 6;
  local_14 = param_5;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  local_78 = param_3[4];
  uStack_74 = param_3[5];
  uStack_70 = param_3[6];
  uStack_6c = param_3[7];
  local_18 = param_4;
  local_10 = param_1;
  local_c = param_2;
  iVar1 = thunk_FUN_01be5118(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar1,&local_88,0x80);
  return iVar1;
}

