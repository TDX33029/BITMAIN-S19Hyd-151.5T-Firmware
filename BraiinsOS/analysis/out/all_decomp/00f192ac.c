// FUN_00f192ac @ 00f192ac size=892 calls_out=4 calls_in=4
// strings: 

void FUN_00f192ac(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x8c) == -0x80000000 || *(int *)(param_1 + 0x8c) == 0) {
    if (*(int *)(param_1 + 0x98) == -0x80000000 || *(int *)(param_1 + 0x98) == 0) goto LAB_00f192d4;
LAB_00f1952c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
    if (*(int *)(param_1 + 0xa4) != -0x80000000 && *(int *)(param_1 + 0xa4) != 0) goto LAB_00f19544;
LAB_00f192e4:
    if (*(int *)(param_1 + 0xb0) == -0x80000000 || *(int *)(param_1 + 0xb0) == 0) goto LAB_00f192f4;
LAB_00f1955c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
    if (*(int *)(param_1 + 0xbc) != -0x80000000 && *(int *)(param_1 + 0xbc) != 0) goto LAB_00f19574;
LAB_00f19304:
    if (*(int *)(param_1 + 200) == -0x80000000 || *(int *)(param_1 + 200) == 0) goto LAB_00f19314;
LAB_00f1958c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
    if (*(int *)(param_1 + 0xd4) != -0x80000000 && *(int *)(param_1 + 0xd4) != 0) goto LAB_00f195a4;
LAB_00f19324:
    if (*(int *)(param_1 + 0xe0) == -0x80000000 || *(int *)(param_1 + 0xe0) == 0) goto LAB_00f19334;
LAB_00f195bc:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    iVar1 = *(int *)(param_1 + 0x20);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
    if (*(int *)(param_1 + 0x98) != -0x80000000 && *(int *)(param_1 + 0x98) != 0) goto LAB_00f1952c;
LAB_00f192d4:
    if (*(int *)(param_1 + 0xa4) == -0x80000000 || *(int *)(param_1 + 0xa4) == 0) goto LAB_00f192e4;
LAB_00f19544:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
    if (*(int *)(param_1 + 0xb0) != -0x80000000 && *(int *)(param_1 + 0xb0) != 0) goto LAB_00f1955c;
LAB_00f192f4:
    if (*(int *)(param_1 + 0xbc) == -0x80000000 || *(int *)(param_1 + 0xbc) == 0) goto LAB_00f19304;
LAB_00f19574:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
    if (*(int *)(param_1 + 200) != -0x80000000 && *(int *)(param_1 + 200) != 0) goto LAB_00f1958c;
LAB_00f19314:
    if (*(int *)(param_1 + 0xd4) == -0x80000000 || *(int *)(param_1 + 0xd4) == 0) goto LAB_00f19324;
LAB_00f195a4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    if (*(int *)(param_1 + 0xe0) != -0x80000000 && *(int *)(param_1 + 0xe0) != 0) goto LAB_00f195bc;
LAB_00f19334:
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0xec) == -0x80000000 || *(int *)(param_1 + 0xec) == 0) {
    if (*(int *)(param_1 + 0xf8) == -0x80000000 || *(int *)(param_1 + 0xf8) == 0) goto LAB_00f19390;
LAB_00f195ec:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
    if (*(int *)(param_1 + 0x104) != -0x80000000 && *(int *)(param_1 + 0x104) != 0)
    goto LAB_00f19604;
LAB_00f193a0:
    if (*(int *)(param_1 + 0x110) == -0x80000000 || *(int *)(param_1 + 0x110) == 0)
    goto LAB_00f193b0;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
    if (*(int *)(param_1 + 0xf8) != -0x80000000 && *(int *)(param_1 + 0xf8) != 0) goto LAB_00f195ec;
LAB_00f19390:
    if (*(int *)(param_1 + 0x104) == -0x80000000 || *(int *)(param_1 + 0x104) == 0)
    goto LAB_00f193a0;
LAB_00f19604:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x108));
    if (*(int *)(param_1 + 0x110) == -0x80000000 || *(int *)(param_1 + 0x110) == 0)
    goto LAB_00f193b0;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
LAB_00f193b0:
  iVar7 = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(param_1 + 0x4c) + 1;
  iVar1 = iVar7;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    FUN_00f1a2a8(iVar1);
    iVar1 = iVar1 + 0x134;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  iVar7 = *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 100) + 1;
  iVar1 = iVar7;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    FUN_00f192ac(iVar1);
    iVar1 = iVar1 + 0x16c;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar1 = 0;
  for (iVar7 = *(int *)(param_1 + 0x70); iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*(int *)(iVar5 - iVar1) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((iVar5 - iVar1) + 4));
    }
    iVar3 = iVar5 - iVar1;
    if (*(int *)(iVar3 + 0xc) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x10));
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x1c));
    }
    iVar1 = iVar1 + -0x30;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  if ((*(uint *)(param_1 + 0x10) != 5) && (3 < *(uint *)(param_1 + 0x10))) {
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
  }
  FUN_00f19f14(param_1 + 0x80);
  return;
}

