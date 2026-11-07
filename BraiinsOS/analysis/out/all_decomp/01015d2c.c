// FUN_01015d2c @ 01015d2c size=396 calls_out=3 calls_in=3
// strings: 

void FUN_01015d2c(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r5;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (5 < *(byte *)(param_2 + 0x20)) {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      local_3c = *(int *)(param_1 + 4);
      local_38 = *(int *)(param_1 + 8);
      local_40._1_3_ = CONCAT21(local_40._2_2_,param_1[1]);
    }
    else if (cVar1 == '\x01') {
      (*(code *)**(undefined4 **)(param_1 + 8))
                (&local_38,param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x10));
      local_3c = *(int *)(param_1 + 4);
      local_40._1_3_ = CONCAT21(local_40._2_2_,param_1[1]);
    }
    else {
      cVar2 = param_1[1];
      if (*(int *)(param_1 + 4) == -0x80000000) {
        local_3c = -0x80000000;
      }
      else {
        local_3c = *(int *)(param_1 + 0xc);
        uVar4 = *(undefined4 *)(param_1 + 8);
        if (local_3c == 0) {
          unaff_r5 = 1;
        }
        else {
          unaff_r5 = thunk_FUN_016d4a50(local_3c);
          if (unaff_r5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,local_3c);
          }
        }
        FUN_016dd1aa(unaff_r5,uVar4,local_3c);
      }
      local_40._1_3_ = CONCAT21(local_40._2_2_,cVar2);
      local_38 = unaff_r5;
      local_34 = local_3c;
    }
    local_40 = CONCAT31(local_40._1_3_,cVar1);
    *(undefined4 *)(param_2 + 0x20) = local_40;
    *(int *)(param_2 + 0x24) = local_3c;
    *(int *)(param_2 + 0x28) = local_38;
    *(int *)(param_2 + 0x2c) = local_34;
    *(undefined4 *)(param_2 + 0x30) = uStack_30;
    *(undefined4 *)(param_2 + 0x34) = uStack_2c;
  }
  iVar3 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(param_2 + 0x44));
  }
  iVar3 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(param_2 + 0x54));
  }
  iVar3 = *(int *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01015ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 4))(*(undefined4 *)(param_2 + 0x5c));
  return;
}

