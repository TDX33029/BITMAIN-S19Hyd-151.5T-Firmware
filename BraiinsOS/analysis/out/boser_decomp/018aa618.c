// FUN_018aa618 @ 018aa618 size=328 calls_out=5 calls_in=1
// strings: 

void FUN_018aa618(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uStack_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  FUN_018c2e04(&local_34);
  if ((char)local_34 == '\x14') {
    uVar6 = local_30;
    if (0xffff < local_30) {
      uVar6 = 0x10000;
    }
    uVar9 = FUN_018beed0(param_2,uVar6);
    if ((int)uVar9 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
      return;
    }
    iVar7 = 0;
    iVar8 = 4;
    local_44 = 0;
    local_38 = 0;
    local_3c = 4;
    local_40 = 0;
    if ((int)((ulonglong)uVar9 >> 0x20) != 0) {
      do {
        iVar1 = local_38;
        uStack_4c = uVar9;
        FUN_018c3ef4(&local_34,&uStack_4c);
        uVar3 = local_28;
        uVar2 = local_2c;
        uVar6 = local_30;
        if (local_34 != 0) {
          param_1[2] = local_2c;
          *param_1 = 1;
          param_1[1] = local_30;
          param_1[3] = local_28;
          FUN_006a41c0(&local_40);
          return;
        }
        uVar9 = uStack_4c;
        if (iVar1 == local_40) {
          FUN_018c4418(&local_40);
          iVar8 = local_3c;
          uVar9 = uStack_4c;
        }
        uStack_4c._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
        local_38 = iVar1 + 1;
        puVar4 = (uint *)(iVar8 + iVar7);
        *puVar4 = uVar6;
        iVar7 = iVar7 + 0xc;
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

