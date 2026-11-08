// FUN_013b695c @ 013b695c size=352 calls_out=1 calls_in=3
// strings: 

void FUN_013b695c(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = (uint)*param_2;
  uVar5 = uVar3 - 6;
  if (uVar3 < 6) {
    uVar5 = 6;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 1 && uVar5 != 5) {
    if (uVar5 != 6) {
      uVar2 = 0x103;
      goto LAB_013b698c;
    }
    uVar5 = 1;
    if (2 < uVar3) {
      uVar5 = uVar3 - 3;
    }
    if (uVar5 != 0) {
      if ((uVar5 & 0xff) != 1) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        *(undefined2 *)param_1 = 0x101;
        param_1[1] = uVar6;
        param_1[2] = &PTR_FUN_01cf1710;
        param_1[3] = 1;
        param_1[4] = 0;
        param_1[5] = 0;
        return;
      }
      if (uVar3 == 0) {
        local_3c = *(undefined4 *)(param_2 + 4);
        uStack_38 = *(undefined4 *)(param_2 + 8);
        bVar1 = param_2[1];
        local_40 = local_40 & 0xffffff00;
      }
      else {
        if (uVar3 != 1) {
          bVar1 = param_2[1];
          if (*(int *)(param_2 + 4) == -0x80000000) {
            local_28 = 0x80000000;
          }
          else {
            FUN_006666fc(&local_28,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
          }
          puVar4 = (undefined4 *)((uint)&local_40 | 4);
          *puVar4 = local_28;
          puVar4[1] = uStack_24;
          puVar4[2] = uStack_20;
          local_40 = CONCAT31(CONCAT21(local_40._2_2_,bVar1),2);
          goto LAB_013b6aac;
        }
        (*(code *)**(undefined4 **)(param_2 + 8))
                  (&uStack_38,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0x10));
        bVar1 = param_2[1];
        local_3c = *(undefined4 *)(param_2 + 4);
        local_40 = CONCAT31(local_40._1_3_,1);
      }
      local_40._0_2_ = CONCAT11(bVar1,(undefined1)local_40);
LAB_013b6aac:
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = uStack_38;
      param_1[3] = uStack_34;
      param_1[4] = uStack_30;
      param_1[5] = uStack_2c;
      return;
    }
  }
  uVar2 = 3;
LAB_013b698c:
  *(undefined2 *)param_1 = uVar2;
  return;
}

