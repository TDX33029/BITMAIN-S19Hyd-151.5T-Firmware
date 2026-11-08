// FUN_0067e938 @ 0067e938 size=288 calls_out=5 calls_in=2
// strings: 

void FUN_0067e938(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x40);
  iVar4 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar4 + 0x38) != '\x01') {
    uVar7 = 0;
    uVar8 = 0;
    if (*(char *)(iVar4 + 0x38) == '\x02') {
      iVar1 = *(int *)(param_1 + 0x10);
      goto joined_r0x0067e9cc;
    }
    FUN_015e8e6c(iVar4,FUN_01655ec4);
    *(undefined1 *)(iVar4 + 0x38) = 1;
  }
  uVar7 = *(undefined4 *)(iVar4 + 0x18);
  uVar8 = *(undefined4 *)(iVar4 + 0x1c);
  *(undefined4 *)(iVar4 + 0x18) = uVar3;
  *(undefined4 *)(iVar4 + 0x1c) = uVar6;
  iVar1 = *(int *)(param_1 + 0x10);
joined_r0x0067e9cc:
  if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      puVar5 = *(undefined4 **)(param_1 + 0x24);
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(iVar1);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(iVar1);
      }
    }
  }
  else if (iVar1 == 0) {
    FUN_0065521c(param_1 + 0x18);
  }
  FUN_016dd1aa(param_1 + 0x10,param_2,0xa0);
  if (*(char *)(iVar4 + 0x38) != '\x01') {
    if (*(char *)(iVar4 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar4,FUN_01655ec4);
    *(undefined1 *)(iVar4 + 0x38) = 1;
  }
  *(undefined4 *)(iVar4 + 0x18) = uVar7;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  return;
}

