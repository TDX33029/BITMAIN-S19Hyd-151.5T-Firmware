// FUN_0103b7d4 @ 0103b7d4 size=316 calls_out=3 calls_in=2
// strings: 

void FUN_0103b7d4(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  if (*(short *)(param_3 + 0x24) == 1) {
    local_23 = (undefined1)*(undefined4 *)(param_3 + 0x30);
  }
  else {
    local_23 = (undefined1)*(undefined2 *)(param_3 + 0x26);
  }
  local_24 = 0;
  local_28 = param_3;
  do {
    uVar10 = FUN_01039230(&local_28);
    if ((int)uVar10 == 0) {
      sVar1 = *param_2;
      iVar3 = *(int *)(param_2 + 2);
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x40);
      if (sVar1 != 2) {
        sVar2 = param_2[1];
        uVar9 = *(undefined4 *)(param_2 + 0x20);
        uVar5 = *(undefined4 *)(param_2 + 6);
        uVar6 = *(undefined4 *)(param_2 + 8);
        uVar7 = *(undefined4 *)(param_2 + 10);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_1 + 6) = uVar5;
        *(undefined4 *)(param_1 + 8) = uVar6;
        *(undefined4 *)(param_1 + 10) = uVar7;
        uVar5 = *(undefined4 *)(param_2 + 0xe);
        uVar6 = *(undefined4 *)(param_2 + 0x10);
        uVar7 = *(undefined4 *)(param_2 + 0x12);
        uVar8 = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0xe) = uVar5;
        *(undefined4 *)(param_1 + 0x10) = uVar6;
        *(undefined4 *)(param_1 + 0x12) = uVar7;
        *(undefined4 *)(param_1 + 0x14) = uVar8;
        uVar5 = *(undefined4 *)(param_2 + 0x18);
        uVar6 = *(undefined4 *)(param_2 + 0x1a);
        uVar7 = *(undefined4 *)(param_2 + 0x1c);
        uVar8 = *(undefined4 *)(param_2 + 0x1e);
        *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
        *(undefined4 *)(param_1 + 0x18) = uVar5;
        *(undefined4 *)(param_1 + 0x1a) = uVar6;
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
        *(undefined4 *)(param_1 + 0x1e) = uVar8;
        *(char *)((int)param_1 + 0x43) = (char)((uint)uVar9 >> 0x18);
        *(short *)((int)param_1 + 0x41) = (short)((uint)uVar9 >> 8);
        *(undefined1 *)(param_1 + 0x20) = 1;
        *(int *)(param_1 + 2) = iVar3;
        param_1[1] = sVar2;
        *param_1 = sVar1;
        return;
      }
      goto LAB_0103b8a8;
    }
    iVar3 = FUN_010398ac(param_2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  } while (iVar3 == 0);
  iVar4 = 0;
  if (*param_2 != 0) {
    iVar4 = *(int *)(param_2 + 2);
  }
  if (*param_2 != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 4));
  }
  iVar4 = 0;
  if (param_2[0x12] != 0) {
    iVar4 = *(int *)(param_2 + 0x14);
  }
  if (param_2[0x12] != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x16));
  }
LAB_0103b8a8:
  *(int *)(param_1 + 2) = iVar3;
  *param_1 = 2;
  return;
}

