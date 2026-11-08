// FUN_00e20c64 @ 00e20c64 size=184 calls_out=3 calls_in=1
// strings: 

void FUN_00e20c64(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x40);
  iVar2 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    uVar4 = 0;
    uVar5 = 0;
    if (*(char *)(iVar2 + 0x38) == '\x02') goto LAB_00e20cc0;
    FUN_015e8e6c(iVar2,FUN_01655ec4);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x18);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar2 + 0x18) = uVar6;
  *(undefined4 *)(iVar2 + 0x1c) = uVar7;
LAB_00e20cc0:
  FUN_00de70d8((undefined4 *)(param_1 + 0x18));
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar1 = param_2[3];
  uVar3 = param_2[4];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  *(undefined4 *)(param_1 + 0x2c) = param_2[5];
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    if (*(char *)(iVar2 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar2,FUN_01655ec4);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  *(undefined4 *)(iVar2 + 0x18) = uVar4;
  *(undefined4 *)(iVar2 + 0x1c) = uVar5;
  return;
}

