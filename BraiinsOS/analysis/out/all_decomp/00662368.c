// FUN_00662368 @ 00662368 size=248 calls_out=4 calls_in=1
// strings: 

void FUN_00662368(int param_1,undefined4 *param_2)

{
  int iVar1;
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
    uVar5 = 0;
    uVar6 = 0;
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      iVar1 = *(int *)(param_1 + 0x18);
      goto joined_r0x00662404;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x18);
  uVar6 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x18) = uVar7;
  *(undefined4 *)(iVar3 + 0x1c) = uVar8;
  iVar1 = *(int *)(param_1 + 0x18);
joined_r0x00662404:
  if (iVar1 == 1) {
    FUN_006556e4(param_1 + 0x20);
  }
  else if ((iVar1 == 0) && ((*(uint *)(param_1 + 0x20) & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar2 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar2 = param_2[8];
  uVar4 = param_2[9];
  *(undefined4 *)(param_1 + 0x2c) = param_2[5];
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar5;
  *(undefined4 *)(iVar3 + 0x1c) = uVar6;
  return;
}

