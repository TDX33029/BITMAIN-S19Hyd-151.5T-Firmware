// FUN_01645800 @ 01645800 size=456 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01645800(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 *local_2c;
  code *local_28;
  
  local_2c = (undefined1 *)&local_40;
  local_40 = *(undefined4 *)(param_1 + 0x18);
  uStack_3c = *(undefined4 *)(param_1 + 0x1c);
  uStack_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  local_30 = *(undefined1 *)(param_1 + 0x28);
  uVar7 = *param_2;
  iVar5 = param_2[1];
  local_28 = FUN_016459ec;
  iVar1 = FUN_012fa178(uVar7,iVar5,&DAT_00590e5f,&local_2c);
  uVar4 = 1;
  if (iVar1 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0xc) == -0x7fffffff) {
    pcVar6 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar6)(uVar7,&DAT_0056cec8,4);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar6)(uVar7,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 2;
    puVar2 = &DAT_004c11f2;
  }
  else {
    if (*(int *)(param_1 + 0xc) == -0x7ffffffe) {
      iVar1 = (**(code **)(iVar5 + 0xc))
                        (uVar7,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      goto LAB_016458f4;
    }
    pcVar6 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar6)(uVar7,&DAT_004c11f4,5);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar6)(uVar7,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar6)(uVar7,&DAT_004c11f2,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar6)(uVar7,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 7;
    puVar2 = &DAT_004c11f9;
  }
  iVar1 = (*pcVar6)(uVar7,puVar2,uVar3);
LAB_016458f4:
  if (iVar1 == 0) {
    local_40 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    uStack_38 = *(undefined4 *)(param_1 + 0x20);
    uStack_34 = *(undefined4 *)(param_1 + 0x24);
    local_30 = *(undefined1 *)(param_1 + 0x28);
    local_28 = FUN_01645eec;
    local_2c = (undefined1 *)&local_40;
    uVar4 = FUN_012fa178(uVar7,iVar5,&DAT_00590e5f,&local_2c);
  }
  return uVar4;
}

