// FUN_01652fc0 @ 01652fc0 size=168 calls_out=3 calls_in=0
// strings: 

void FUN_01652fc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = thunk_FUN_016de0ee(param_1,0x40);
  iVar2 = (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    uVar3 = 0;
    uVar4 = 0;
    if (*(char *)(iVar2 + 0x38) == '\x02') goto LAB_01653018;
    FUN_015e8e6c(iVar2,FUN_01655ec4);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x18);
  uVar4 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar2 + 0x18) = uVar5;
  *(undefined4 *)(iVar2 + 0x1c) = uVar6;
LAB_01653018:
  FUN_01652e08((undefined4 *)(param_1 + 0x18));
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar1 = param_2[7];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    if (*(char *)(iVar2 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar2,FUN_01655ec4);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined4 *)(iVar2 + 0x1c) = uVar4;
  return;
}

