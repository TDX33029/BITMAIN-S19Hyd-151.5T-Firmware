// FUN_00e17e0c @ 00e17e0c size=272 calls_out=4 calls_in=1
// strings: 

void FUN_00e17e0c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x40);
  iVar3 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    uVar4 = 0;
    uVar5 = 0;
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      iVar1 = *(int *)(param_1 + 0x18);
      goto joined_r0x00e17ec0;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x18);
  uVar5 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x18) = uVar6;
  *(undefined4 *)(iVar3 + 0x1c) = uVar7;
  iVar1 = *(int *)(param_1 + 0x18);
joined_r0x00e17ec0:
  if (iVar1 == 1) {
    FUN_00640fa4(param_1 + 0x20);
  }
  else if ((iVar1 == 0) && (*(int *)(param_1 + 0x20) != -0x80000000)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
    }
  }
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar2 = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar2 = param_2[7];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  *(undefined4 *)(iVar3 + 0x1c) = uVar5;
  return;
}

