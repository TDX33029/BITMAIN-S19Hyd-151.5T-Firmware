// FUN_01652eb4 @ 01652eb4 size=196 calls_out=3 calls_in=2
// strings: 

void FUN_01652eb4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x40);
  iVar5 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    uVar1 = 0;
    uVar6 = 0;
    if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_01652f14;
    FUN_015e8e6c(iVar5,FUN_01655ec4);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  uVar1 = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  *(undefined4 *)(iVar5 + 0x18) = uVar7;
  *(undefined4 *)(iVar5 + 0x1c) = uVar8;
LAB_01652f14:
  FUN_01652784((undefined4 *)(param_1 + 0x18));
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x30) = param_2[6];
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    if (*(char *)(iVar5 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar5,FUN_01655ec4);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  *(undefined4 *)(iVar5 + 0x18) = uVar1;
  *(undefined4 *)(iVar5 + 0x1c) = uVar6;
  return;
}

