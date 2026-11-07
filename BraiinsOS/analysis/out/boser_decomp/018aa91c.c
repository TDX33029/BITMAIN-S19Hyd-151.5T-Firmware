// FUN_018aa91c @ 018aa91c size=364 calls_out=4 calls_in=1
// strings: 

void FUN_018aa91c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
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
  
  uVar7 = FUN_018beed0(param_2,1);
  if (((undefined1 *)uVar7 == (undefined1 *)0x0) || ((int)((ulonglong)uVar7 >> 0x20) != 1)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    uVar7 = FUN_018beed0(param_2,*(undefined1 *)uVar7);
    if ((int)uVar7 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
    }
    else {
      iVar6 = 0;
      iVar5 = 2;
      local_44 = 0;
      local_38 = 0;
      local_3c = 2;
      local_40 = 0;
      if ((int)((ulonglong)uVar7 >> 0x20) != 0) {
        do {
          iVar1 = local_38;
          uStack_4c = uVar7;
          FUN_018d880c(&local_30,&uStack_4c);
          if (local_30 != '\x14') {
            *(char *)(param_1 + 1) = local_30;
            *(undefined2 *)((int)param_1 + 0xe) = local_26;
            *(undefined1 *)((int)param_1 + 5) = local_2f;
            *param_1 = 1;
            *(undefined4 *)((int)param_1 + 10) = local_2a;
            *(undefined4 *)((int)param_1 + 6) = local_2e;
            FUN_0134aee0(local_40,iVar5,2,4);
            return;
          }
          uVar3 = local_2e._2_2_;
          uVar2 = (undefined2)local_2e;
          uVar7 = uStack_4c;
          if (iVar1 == local_40) {
            FUN_018fa9a8(&local_40);
            iVar5 = local_3c;
            uVar7 = uStack_4c;
          }
          uStack_4c._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
          local_38 = iVar1 + 1;
          puVar4 = (undefined2 *)(iVar5 + iVar6);
          *puVar4 = uVar2;
          iVar6 = iVar6 + 4;
          puVar4[1] = uVar3;
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

