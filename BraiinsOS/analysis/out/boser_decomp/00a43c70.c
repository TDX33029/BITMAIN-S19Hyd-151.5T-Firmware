// FUN_00a43c70 @ 00a43c70 size=356 calls_out=10 calls_in=2
// strings: value

void FUN_00a43c70(char *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_a0 [2];
  undefined4 local_98;
  char local_90 [28];
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_98 = 0;
  local_a0[0] = 0;
  iVar1 = thunk_FUN_01be5118(0xf);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xf);
  }
  FUN_01bed4e2(iVar1,param_2,0xf);
  local_6c = 0xf;
  local_74 = 0xf;
  local_58 = 0x80000000;
  local_5c = 0;
  local_64 = 0;
  local_68 = 0;
  local_70 = iVar1;
  iVar2 = FUN_014a7bf4(&local_68,"value",5);
  if (iVar2 == 0) {
    local_48 = local_68;
    uStack_44 = local_64;
    uStack_40 = uStack_60;
    uStack_3c = local_5c;
    uStack_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    FUN_0196ac88(param_1,&local_48);
    if (*param_1 != '\x06') {
      FUN_0196b484(local_90,local_a0,&local_74,param_1);
      if (local_90[0] != '\x06') {
        FUN_00db4764(local_90);
      }
      FUN_01bed4e2((uint)&local_48 | 3,local_a0,0xc);
      *param_1 = '\x05';
      FUN_01bed4e2(param_1 + 1,&local_48,0xf);
      return;
    }
  }
  else {
    *(int *)(param_1 + 4) = iVar2;
    *param_1 = '\x06';
    FUN_0127464c(&local_68);
  }
  FUN_019bb7e0(0xf,iVar1);
  FUN_0196afa8(local_a0);
  return;
}

