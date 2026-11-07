// FUN_016ba0c0 @ 016ba0c0 size=164 calls_out=2 calls_in=4
// strings: 

void FUN_016ba0c0(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined1 auStack_308 [192];
  undefined1 auStack_248 [176];
  undefined1 auStack_198 [192];
  undefined1 auStack_d8 [176];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = 2;
  if (*param_2 != 2 || param_2[1] != 0) {
    FUN_016c4d58(auStack_198,param_2);
    FUN_016c4d58(auStack_d8,param_2 + 0xa2);
    FUN_01bed4e2(auStack_308,auStack_198,0xc0);
    FUN_01bed4e2(auStack_248,auStack_d8,0xb0);
    local_318 = local_24;
    uStack_314 = uStack_20;
    uStack_310 = uStack_1c;
    uVar1 = local_28;
  }
  FUN_01bed4e2(param_1,auStack_308,0x170);
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  *(undefined4 *)(param_1 + 0x174) = local_318;
  *(undefined4 *)(param_1 + 0x178) = uStack_314;
  *(undefined4 *)(param_1 + 0x17c) = uStack_310;
  return;
}

