// FUN_00a45368 @ 00a45368 size=252 calls_out=8 calls_in=2
// strings: 

void FUN_00a45368(char *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_78 [2];
  undefined4 local_70;
  char local_68 [28];
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  
  local_70 = 0;
  local_78[0] = 0;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,4);
  }
  *puVar1 = param_2;
  local_44 = 4;
  local_4c = 4;
  local_30 = 0x80000000;
  local_34 = 0;
  local_3c = 0;
  local_40 = 0;
  local_48 = puVar1;
  FUN_0196ac88(param_1,&local_40);
  if (*param_1 == '\x06') {
    FUN_019bb7e0(4,puVar1);
    FUN_0196afa8(local_78);
  }
  else {
    FUN_0196b484(local_68,local_78,&local_4c,param_1);
    if (local_68[0] != '\x06') {
      FUN_00db4764(local_68);
    }
    FUN_01bed4e2((uint)&local_40 | 3,local_78,0xc);
    *param_1 = '\x05';
    FUN_01bed4e2(param_1 + 1,&local_40,0xf);
  }
  return;
}

