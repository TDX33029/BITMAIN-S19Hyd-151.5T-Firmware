// FUN_0102bab0 @ 0102bab0 size=288 calls_out=3 calls_in=2
// strings: 

void FUN_0102bab0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int unaff_r4;
  undefined4 uVar3;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar1 = *(char *)(param_2 + 0x90);
  if (cVar1 == '\x03') {
    *(undefined1 *)param_1 = 3;
    return;
  }
  if (cVar1 == '\0') {
    local_34 = *(int *)(param_2 + 0x94);
    local_30 = *(int *)(param_2 + 0x98);
    local_38._1_3_ = CONCAT21(local_38._2_2_,*(undefined1 *)(param_2 + 0x91));
  }
  else if (cVar1 == '\x01') {
    (*(code *)**(undefined4 **)(param_2 + 0x98))
              (&local_30,param_2 + 0xa4,*(undefined4 *)(param_2 + 0x9c),
               *(undefined4 *)(param_2 + 0xa0));
    local_34 = *(int *)(param_2 + 0x94);
    local_38._1_3_ = CONCAT21(local_38._2_2_,*(undefined1 *)(param_2 + 0x91));
  }
  else {
    uVar2 = *(undefined1 *)(param_2 + 0x91);
    if (*(int *)(param_2 + 0x94) == -0x80000000) {
      local_34 = -0x80000000;
    }
    else {
      local_34 = *(int *)(param_2 + 0x9c);
      uVar3 = *(undefined4 *)(param_2 + 0x98);
      if (local_34 == 0) {
        unaff_r4 = 1;
      }
      else {
        unaff_r4 = thunk_FUN_016d4a50(local_34);
        if (unaff_r4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_34);
        }
      }
      FUN_016dd1aa(unaff_r4,uVar3,local_34);
    }
    local_38._1_3_ = CONCAT21(local_38._2_2_,uVar2);
    local_30 = unaff_r4;
    local_2c = local_34;
  }
  local_38 = CONCAT31(local_38._1_3_,cVar1);
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  param_1[3] = local_2c;
  param_1[4] = uStack_28;
  param_1[5] = uStack_24;
  return;
}

