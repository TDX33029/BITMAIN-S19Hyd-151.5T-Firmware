// FUN_018e725c @ 018e725c size=372 calls_out=5 calls_in=1
// strings: 

void FUN_018e725c(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
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
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  
  FUN_01930f74(&local_30,&DAT_01d23370,param_2);
  if (local_30 == '\x18') {
    uVar8 = FUN_0192fac8(param_2,CONCAT22(uStack_2a,uStack_2c));
    if ((int)uVar8 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
      return;
    }
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
        FUN_0190d2b4(&local_30,&uStack_4c);
        uVar3 = uStack_2c;
        if (local_30 != '\x18') {
          *(char *)(param_1 + 1) = local_30;
          *(undefined2 *)((int)param_1 + 0xe) = uStack_26;
          *(undefined1 *)((int)param_1 + 5) = local_2f;
          *param_1 = 1;
          *(uint *)((int)param_1 + 10) = CONCAT22(uStack_28,uStack_2a);
          *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2c,CONCAT11(uStack_2d,uStack_2e));
          FUN_0134aee0(local_40,iVar6,2,4);
          return;
        }
        uVar1 = CONCAT11(uStack_2d,uStack_2e);
        uVar8 = uStack_4c;
        if (iVar2 == local_40) {
          FUN_018fa9a8(&local_40);
          iVar6 = local_3c;
          uVar8 = uStack_4c;
        }
        uStack_4c._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
        local_38 = iVar2 + 1;
        puVar4 = (undefined2 *)(iVar6 + iVar7);
        *puVar4 = uVar1;
        iVar7 = iVar7 + 4;
        puVar4[1] = uVar3;
      } while (local_44 < uStack_4c._4_4_);
    }
    param_1[1] = local_40;
    param_1[2] = local_3c;
    param_1[3] = local_38;
    uVar5 = 0;
  }
  else {
    *(char *)(param_1 + 1) = local_30;
    uVar5 = 1;
    *(undefined1 *)((int)param_1 + 7) = uStack_2d;
    *(ushort *)((int)param_1 + 5) = CONCAT11(uStack_2e,local_2f);
    param_1[2] = CONCAT22(uStack_2a,uStack_2c);
    param_1[3] = CONCAT22(uStack_26,uStack_28);
  }
  *param_1 = uVar5;
  return;
}

