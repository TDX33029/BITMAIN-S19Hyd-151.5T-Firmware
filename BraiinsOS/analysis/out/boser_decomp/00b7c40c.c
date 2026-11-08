// FUN_00b7c40c @ 00b7c40c size=128 calls_out=3 calls_in=3
// strings: 

int FUN_00b7c40c(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_24;
  undefined1 local_23;
  
  local_70 = *param_5;
  uStack_6c = param_5[1];
  uStack_68 = param_5[2];
  local_48 = param_6;
  local_64 = *param_7;
  uStack_60 = param_7[1];
  uStack_5c = param_7[2];
  uStack_58 = param_7[3];
  uStack_54 = param_7[4];
  uStack_50 = param_7[5];
  local_23 = 0;
  local_4c = param_1;
  local_44 = param_3;
  local_40 = param_4;
  local_24 = param_2;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,&local_70,0x54);
  return iVar1;
}

