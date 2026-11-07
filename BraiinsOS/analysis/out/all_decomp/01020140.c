// FUN_01020140 @ 01020140 size=364 calls_out=1 calls_in=2
// strings: 

void FUN_01020140(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar1 = *param_2;
  uVar5 = (uint)bVar1;
  uVar4 = uVar5 - 6;
  if (uVar5 < 6) {
    uVar4 = 6;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1 && uVar4 != 5) {
    if (uVar4 != 6) {
      *(undefined2 *)param_1 = 0x103;
      return;
    }
    uVar4 = 1;
    if (2 < uVar5) {
      uVar4 = uVar5 - 3;
    }
    if (uVar4 != 0) {
      if ((uVar4 & 0xff) != 1) {
        uVar3 = *(undefined4 *)(param_2 + 4);
        *(undefined2 *)param_1 = 0x101;
        param_1[1] = uVar3;
        param_1[2] = &PTR_LAB_01882ab4;
        param_1[3] = 1;
        param_1[4] = 0;
        param_1[5] = 0;
        return;
      }
      if (uVar5 == 0) {
        local_2c = *(undefined4 *)(param_2 + 4);
        local_30._1_3_ = CONCAT21(local_30._2_2_,param_2[1]);
        uVar3 = *(undefined4 *)(param_2 + 8);
      }
      else if (uVar5 == 1) {
        (*(code *)**(undefined4 **)(param_2 + 8))
                  (&local_28,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0x10));
        local_30._1_3_ = CONCAT21(local_30._2_2_,param_2[1]);
        local_2c = *(undefined4 *)(param_2 + 4);
        uVar3 = local_28;
      }
      else {
        bVar2 = param_2[1];
        if (*(int *)(param_2 + 4) == -0x80000000) {
          local_28 = 0x80000000;
          uVar3 = 0x80000000;
        }
        else {
          FUN_00602a1c(&local_30,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
          uVar3 = local_30;
          param_4 = local_2c;
        }
        local_30._1_3_ = CONCAT21(local_30._2_2_,bVar2);
        local_2c = uVar3;
        uVar3 = param_4;
        local_24 = local_28;
      }
      local_28 = uVar3;
      local_30 = CONCAT31(local_30._1_3_,bVar1);
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      param_1[3] = local_24;
      param_1[4] = uStack_20;
      param_1[5] = uStack_1c;
      return;
    }
  }
  *(undefined2 *)param_1 = 3;
  return;
}

