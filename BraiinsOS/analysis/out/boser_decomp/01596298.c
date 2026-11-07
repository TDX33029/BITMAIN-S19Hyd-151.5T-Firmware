// FUN_01596298 @ 01596298 size=144 calls_out=3 calls_in=6
// strings: 

int FUN_01596298(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_3c = param_6;
  local_40 = 6;
  local_78 = 0x80000025;
  local_74 = *param_7;
  uStack_70 = param_7[1];
  uStack_6c = param_7[2];
  local_24 = param_5;
  local_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = param_3[3];
  local_88 = param_3[4];
  uStack_84 = param_3[5];
  uStack_80 = param_3[6];
  uStack_7c = param_3[7];
  local_28 = param_4;
  local_20 = param_1;
  local_1c = param_2;
  iVar1 = thunk_FUN_01be5118(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar1,&local_98,0x80);
  return iVar1;
}

