// FUN_018e8458 @ 018e8458 size=288 calls_out=6 calls_in=0
// strings: 

void FUN_018e8458(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_64 [16];
  undefined4 local_54;
  ushort local_4c [8];
  undefined4 local_3c;
  undefined1 local_34 [16];
  
  FUN_01930a28(*(undefined4 *)(param_1 + 0x1c));
  FUN_01930a28(*(undefined4 *)(param_1 + 0x20),param_2);
  FUN_01935d5c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x18) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc);
  local_4c[0] = (ushort)((uVar4 & 0xff) << 8) | (ushort)(uVar4 >> 8) & 0xff;
  FUN_01ac6cbc(param_2,local_4c,2);
  FUN_01ac6cbc(param_2,uVar2,uVar4);
  piVar6 = *(int **)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x14);
  FUN_01931148(auStack_64,&DAT_0056a6b8,param_2);
  piVar5 = piVar6 + 2;
  for (iVar7 = iVar7 << 4; iVar7 != 0; iVar7 = iVar7 + -0x10) {
    iVar3 = *piVar6;
    uVar1 = (undefined2)piVar6[3];
    if (iVar3 == -0x7fffffff) {
      uVar1 = 0x19;
    }
    FUN_0190d8e0(uVar1,*(undefined2 *)((int)piVar6 + 0xe),local_54);
    local_34[0] = 0x19;
    FUN_01931148(local_4c,local_34,local_54);
    if (iVar3 == -0x7fffffff) {
      FUN_01930a28(piVar5[-1],local_3c);
    }
    else {
      FUN_01ac6cbc(local_3c,piVar5[-1],*piVar5);
    }
    FUN_01931818(local_4c);
    piVar6 = piVar6 + 4;
    piVar5 = piVar5 + 4;
  }
  FUN_01931818(auStack_64);
  return;
}

