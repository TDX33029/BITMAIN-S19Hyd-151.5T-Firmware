// FUN_005c73cc @ 005c73cc size=468 calls_out=3 calls_in=12
// strings: 

void FUN_005c73cc(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
  }
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar3 = *(int *)(param_1 + 0xb8) + 1;
  iVar2 = iVar4;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    FUN_00f1fd84(iVar2);
    iVar2 = iVar2 + 0x98;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if (*(int *)(param_1 + 0xbc) == -0x80000000 || *(int *)(param_1 + 0xbc) == 0) {
    if (*(int *)(param_1 + 200) != -0x80000000 && *(int *)(param_1 + 200) != 0) goto LAB_005c74d8;
LAB_005c7440:
    if (*(int *)(param_1 + 0xd4) != -0x80000000 && *(int *)(param_1 + 0xd4) != 0) goto LAB_005c74f0;
LAB_005c7450:
    if (*(int *)(param_1 + 0xe0) != -0x80000000 && *(int *)(param_1 + 0xe0) != 0) goto LAB_005c7508;
LAB_005c7460:
    if (*(int *)(param_1 + 0xec) != -0x80000000 && *(int *)(param_1 + 0xec) != 0) goto LAB_005c7520;
LAB_005c7470:
    if (*(int *)(param_1 + 0xf8) != -0x80000000 && *(int *)(param_1 + 0xf8) != 0) goto LAB_005c7538;
LAB_005c7480:
    if (*(int *)(param_1 + 0x104) != -0x80000000 && *(int *)(param_1 + 0x104) != 0)
    goto LAB_005c7550;
LAB_005c7490:
    if (*(int *)(param_1 + 0x110) != -0x80000000 && *(int *)(param_1 + 0x110) != 0)
    goto LAB_005c7568;
LAB_005c74a0:
    if (*(int *)(param_1 + 0x11c) != -0x80000000 && *(int *)(param_1 + 0x11c) != 0)
    goto LAB_005c7580;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
    if (*(int *)(param_1 + 200) == -0x80000000 || *(int *)(param_1 + 200) == 0) goto LAB_005c7440;
LAB_005c74d8:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
    if (*(int *)(param_1 + 0xd4) == -0x80000000 || *(int *)(param_1 + 0xd4) == 0) goto LAB_005c7450;
LAB_005c74f0:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    if (*(int *)(param_1 + 0xe0) == -0x80000000 || *(int *)(param_1 + 0xe0) == 0) goto LAB_005c7460;
LAB_005c7508:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    if (*(int *)(param_1 + 0xec) == -0x80000000 || *(int *)(param_1 + 0xec) == 0) goto LAB_005c7470;
LAB_005c7520:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
    if (*(int *)(param_1 + 0xf8) == -0x80000000 || *(int *)(param_1 + 0xf8) == 0) goto LAB_005c7480;
LAB_005c7538:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
    if (*(int *)(param_1 + 0x104) == -0x80000000 || *(int *)(param_1 + 0x104) == 0)
    goto LAB_005c7490;
LAB_005c7550:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x108));
    if (*(int *)(param_1 + 0x110) == -0x80000000 || *(int *)(param_1 + 0x110) == 0)
    goto LAB_005c74a0;
LAB_005c7568:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
    if (*(int *)(param_1 + 0x11c) != -0x80000000 && *(int *)(param_1 + 0x11c) != 0) {
LAB_005c7580:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x120));
      cVar1 = *(char *)(param_1 + 0x60);
      goto joined_r0x005c7590;
    }
  }
  cVar1 = *(char *)(param_1 + 0x60);
joined_r0x005c7590:
  if (cVar1 == '\x06') {
    return;
  }
  FUN_005c37bc(param_1 + 0x60);
  return;
}

