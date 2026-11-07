// FUN_00893360 @ 00893360 size=168 calls_out=4 calls_in=2
// strings: 

void FUN_00893360(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = thunk_FUN_016de0ee(param_1,0x40);
  iVar1 = (int)uVar6 + (int)((ulonglong)uVar6 >> 0x20);
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    uVar2 = 0;
    uVar3 = 0;
    if (*(char *)(iVar1 + 0x38) == '\x02') goto LAB_008933b8;
    FUN_015e8e6c(iVar1,FUN_01655ec4);
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  uVar3 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x18) = uVar4;
  *(undefined4 *)(iVar1 + 0x1c) = uVar5;
LAB_008933b8:
  FUN_00888d98(param_1 + 0x10);
  FUN_016dd1aa(param_1 + 0x10,param_2,0xd8);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    if (*(char *)(iVar1 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar1,FUN_01655ec4);
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  return;
}

