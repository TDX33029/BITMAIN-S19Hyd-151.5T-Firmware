// FUN_006c8080 @ 006c8080 size=180 calls_out=1 calls_in=0
// strings: 

void FUN_006c8080(undefined4 *param_1,int param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_006666fc(&local_48,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (*(int *)(param_2 + 0xc) == -0x80000000) {
    local_38 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_38,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  }
  (*(code *)**(undefined4 **)(param_2 + 0x18))
            (&local_28,param_2 + 0x24,*(undefined4 *)(param_2 + 0x1c),
             *(undefined4 *)(param_2 + 0x20));
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = local_38;
  param_1[4] = uStack_34;
  param_1[5] = uStack_30;
  param_1[6] = local_28;
  param_1[7] = uStack_24;
  param_1[8] = uStack_20;
  param_1[9] = uStack_1c;
  return;
}

