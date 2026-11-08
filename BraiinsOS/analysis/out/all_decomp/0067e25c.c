// FUN_0067e25c @ 0067e25c size=188 calls_out=3 calls_in=1
// strings: 

void FUN_0067e25c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x40);
  iVar3 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    uVar1 = 0;
    uVar6 = 0;
    if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_0067e2bc;
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x18);
  uVar6 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x18) = uVar7;
  *(undefined4 *)(iVar3 + 0x1c) = uVar8;
LAB_0067e2bc:
  FUN_00657574((undefined4 *)(param_1 + 0x18));
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar2 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar1;
  *(undefined4 *)(iVar3 + 0x1c) = uVar6;
  return;
}

