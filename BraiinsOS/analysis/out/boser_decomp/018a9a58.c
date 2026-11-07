// FUN_018a9a58 @ 018a9a58 size=368 calls_out=4 calls_in=3
// strings: 

void FUN_018a9a58(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uStack_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined2 local_26;
  
  uVar8 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar8 == (ushort *)0x0) || ((int)((ulonglong)uVar8 >> 0x20) != 2)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    uVar1 = *(ushort *)uVar8;
    uVar8 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
    if ((int)uVar8 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
    }
    else {
      iVar7 = 0;
      iVar6 = 2;
      local_44 = 0;
      local_38 = 0;
      local_3c = 2;
      local_40 = 0;
      if ((int)((ulonglong)uVar8 >> 0x20) != 0) {
        do {
          iVar2 = local_38;
          uStack_4c = uVar8;
          FUN_018d89cc(&local_30,&uStack_4c);
          if (local_30 != '\x14') {
            *(char *)(param_1 + 1) = local_30;
            *(undefined2 *)((int)param_1 + 0xe) = local_26;
            *(undefined1 *)((int)param_1 + 5) = local_2f;
            *param_1 = 1;
            *(undefined4 *)((int)param_1 + 10) = local_2a;
            *(undefined4 *)((int)param_1 + 6) = local_2e;
            FUN_0134aee0(local_40,iVar6,2,4);
            return;
          }
          uVar4 = local_2e._2_2_;
          uVar3 = (undefined2)local_2e;
          uVar8 = uStack_4c;
          if (iVar2 == local_40) {
            FUN_018fa9a8(&local_40);
            iVar6 = local_3c;
            uVar8 = uStack_4c;
          }
          uStack_4c._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
          local_38 = iVar2 + 1;
          puVar5 = (undefined2 *)(iVar6 + iVar7);
          *puVar5 = uVar3;
          iVar7 = iVar7 + 4;
          puVar5[1] = uVar4;
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

