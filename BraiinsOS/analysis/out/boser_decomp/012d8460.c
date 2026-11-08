// FUN_012d8460 @ 012d8460 size=412 calls_out=9 calls_in=2
// strings: 

void FUN_012d8460(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  switch(*param_1) {
  case 0:
    FUN_012d858c(param_1 + 2);
    return;
  case 1:
    FUN_012d7658(param_1 + 1);
    return;
  case 2:
    if (param_1[7] != -0x80000000) {
      FUN_019bb7e0(param_1[7],param_1[8]);
    }
    iVar3 = param_1[5];
    iVar1 = iVar3;
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_016553d4(iVar1);
      iVar1 = iVar1 + 0x18;
    }
    FUN_0134aee0(param_1[4],iVar3,4,0x18);
    return;
  case 4:
    iVar3 = param_1[2];
    iVar1 = iVar3;
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_01655468(iVar1);
      iVar1 = iVar1 + 0x1c;
    }
    FUN_0134aee0(param_1[1],iVar3,4,0x1c);
    iVar1 = param_1[5];
    iVar3 = param_1[6];
    if (iVar3 != 0) {
      piVar2 = (int *)(iVar1 + 4);
      do {
        if (*piVar2 != -0x80000000) {
          FUN_0134bd64(*piVar2,piVar2[1]);
        }
        piVar2 = piVar2 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0134aee0(param_1[4],iVar1,4,0x18);
    return;
  case 5:
    iVar3 = param_1[5];
    iVar1 = iVar3;
    for (iVar4 = param_1[6]; iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_01655520(iVar1);
      iVar1 = iVar1 + 0x18;
    }
    FUN_0134aee0(param_1[4],iVar3,8,0x18);
    return;
  case 6:
    if (param_1[9] != -0x80000000) {
      FUN_019bb7e0(param_1[9],param_1[10]);
    }
    FUN_012d76a8(param_1 + 6);
    return;
  }
  if (param_1[1] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

