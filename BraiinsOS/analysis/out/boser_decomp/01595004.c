// FUN_01595004 @ 01595004 size=144 calls_out=3 calls_in=1
// strings: 

int FUN_01595004(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_44 = param_6;
  local_48 = 6;
  local_80 = 0x8000000d;
  local_7c = *param_7;
  uStack_78 = param_7[1];
  uStack_74 = param_7[2];
  uStack_70 = param_7[3];
  uStack_6c = param_7[4];
  local_2c = param_5;
  local_a0 = *param_3;
  uStack_9c = param_3[1];
  uStack_98 = param_3[2];
  uStack_94 = param_3[3];
  local_90 = param_3[4];
  uStack_8c = param_3[5];
  uStack_88 = param_3[6];
  uStack_84 = param_3[7];
  local_30 = param_4;
  local_28 = param_1;
  local_24 = param_2;
  iVar1 = thunk_FUN_01be5118(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar1,&local_a0,0x80);
  return iVar1;
}

