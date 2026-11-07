// FUN_01a436e0 @ 01a436e0 size=188 calls_out=2 calls_in=5
// strings: 

void FUN_01a436e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined1 auStack_84 [100];
  
  FUN_01a5c554(&local_98,param_3,3);
  if (local_88 == -0x7fffffff) {
    *param_1 = local_98;
    param_1[1] = uStack_94;
    param_1[2] = uStack_90;
  }
  else {
    FUN_01bed4e2(param_1 + 5,auStack_84,100);
    *param_1 = local_98;
    param_1[1] = uStack_94;
    param_1[2] = uStack_90;
    param_1[3] = uStack_8c;
    uVar1 = *param_2;
    *(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)(param_2 + 1);
    param_1[0x1e] = uVar1;
  }
  param_1[4] = local_88;
  return;
}

