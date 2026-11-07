// FUN_018a9720 @ 018a9720 size=328 calls_out=4 calls_in=2
// strings: 

void FUN_018a9720(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uStack_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar9 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar9 == (ushort *)0x0) || ((int)((ulonglong)uVar9 >> 0x20) != 2)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    uVar1 = *(ushort *)uVar9;
    uVar9 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
    if ((int)uVar9 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
    }
    else {
      iVar7 = 0;
      iVar8 = 4;
      local_44 = 0;
      local_38 = 0;
      local_3c = 4;
      local_40 = 0;
      if ((int)((ulonglong)uVar9 >> 0x20) != 0) {
        do {
          iVar2 = local_38;
          uStack_4c = uVar9;
          FUN_018c41e4(&local_34,&uStack_4c);
          uVar5 = local_28;
          uVar4 = local_2c;
          uVar3 = local_30;
          if (local_34 != 0) {
            param_1[2] = local_2c;
            *param_1 = 1;
            param_1[1] = local_30;
            param_1[3] = local_28;
            FUN_018a8274(&local_40);
            return;
          }
          uVar9 = uStack_4c;
          if (iVar2 == local_40) {
            FUN_018c4418(&local_40);
            iVar8 = local_3c;
            uVar9 = uStack_4c;
          }
          uStack_4c._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
          local_38 = iVar2 + 1;
          puVar6 = (undefined4 *)(iVar8 + iVar7);
          *puVar6 = uVar3;
          iVar7 = iVar7 + 0xc;
          puVar6[1] = uVar4;
          puVar6[2] = uVar5;
        } while (local_44 < uStack_4c._4_4_);
      }
      param_1[1] = local_40;
      param_1[2] = local_3c;
      param_1[3] = local_38;
      *param_1 = 0;
    }
  }
  return;
}

