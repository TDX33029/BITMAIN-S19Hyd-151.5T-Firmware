// FUN_018e6f60 @ 018e6f60 size=332 calls_out=5 calls_in=1
// strings: 

void FUN_018e6f60(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uStack_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_01930f74(&local_34,"",param_2);
  if ((char)local_34 == '\x18') {
    uVar8 = FUN_0192fac8(param_2,local_30);
    if ((int)uVar8 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
      return;
    }
    iVar6 = 0;
    iVar7 = 4;
    local_44 = 0;
    local_38 = 0;
    local_3c = 4;
    local_40 = 0;
    if ((int)((ulonglong)uVar8 >> 0x20) != 0) {
      do {
        iVar1 = local_38;
        uStack_4c = uVar8;
        FUN_0191d6e4(&local_34,&uStack_4c);
        uVar3 = local_28;
        uVar2 = local_2c;
        uVar5 = local_30;
        if (local_34 != 0) {
          param_1[2] = local_2c;
          *param_1 = 1;
          param_1[1] = local_30;
          param_1[3] = local_28;
          FUN_0190f040(&local_40);
          return;
        }
        uVar8 = uStack_4c;
        if (iVar1 == local_40) {
          FUN_018c4418(&local_40);
          iVar7 = local_3c;
          uVar8 = uStack_4c;
        }
        uStack_4c._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
        local_38 = iVar1 + 1;
        puVar4 = (undefined4 *)(iVar7 + iVar6);
        *puVar4 = uVar5;
        iVar6 = iVar6 + 0xc;
        puVar4[1] = uVar2;
        puVar4[2] = uVar3;
      } while (local_44 < uStack_4c._4_4_);
    }
    param_1[1] = local_40;
    param_1[2] = local_3c;
    param_1[3] = local_38;
    uVar5 = 0;
  }
  else {
    *(char *)(param_1 + 1) = (char)local_34;
    uVar5 = 1;
    *(undefined1 *)((int)param_1 + 7) = local_34._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_34._1_2_;
    param_1[2] = local_30;
    param_1[3] = local_2c;
  }
  *param_1 = uVar5;
  return;
}

