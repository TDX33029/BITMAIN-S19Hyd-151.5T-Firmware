// FUN_00a43e1c @ 00a43e1c size=268 calls_out=8 calls_in=1
// strings: 

void FUN_00a43e1c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 local_58 [2];
  undefined4 local_50;
  char local_48 [24];
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  local_50 = 0;
  local_58[0] = 0;
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  local_30 = param_3;
  local_2c = iVar1;
  local_28 = param_3;
  FUN_00ab0ca4(param_1,extraout_r1,param_5,param_6,param_7);
  if (*param_1 == '\x06') {
    FUN_019bb7e0(param_3,iVar1);
    FUN_0196afa8(local_58);
  }
  else {
    FUN_0196b484(local_48,local_58,&local_30,param_1);
    if (local_48[0] != '\x06') {
      FUN_00db4764(local_48);
    }
    FUN_01bed4e2((uint)local_48 | 3,local_58,0xc);
    *param_1 = '\x05';
    FUN_01bed4e2(param_1 + 1,local_48,0xf);
  }
  return;
}

