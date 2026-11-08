// FUN_01ad80f4 @ 01ad80f4 size=208 calls_out=3 calls_in=2
// strings: 

void FUN_01ad80f4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  switch(*param_1) {
  case 0:
    FUN_01ad8208(param_1 + 10);
    break;
  case 1:
    FUN_0134bd64(param_1[0xf],param_1[0x10]);
    iVar1 = param_1[0xc];
    piVar3 = param_1 + 4;
    if (iVar1 == -0x80000000) goto LAB_01ad819c;
    uVar2 = param_1[0xd];
    goto LAB_01ad8198;
  case 2:
    if (param_1[10] != -0x80000000) {
      FUN_0134bd64(param_1[10],param_1[0xb]);
    }
    break;
  case 3:
    FUN_0134bd64(param_1[0xd],param_1[0xe]);
    iVar1 = param_1[10];
    piVar3 = param_1 + 2;
    if (iVar1 != -0x80000000) {
      uVar2 = param_1[0xb];
      goto LAB_01ad8198;
    }
    goto LAB_01ad819c;
  default:
    if (param_1[1] != -0x80000000) {
      FUN_0134bd64(param_1[1],param_1[2]);
    }
    piVar3 = param_1 + 4;
    iVar1 = *piVar3;
    goto LAB_01ad81bc;
  }
  piVar3 = param_1 + 2;
  iVar1 = param_1[0xd];
  if (iVar1 != -0x80000000) {
    uVar2 = param_1[0xe];
LAB_01ad8198:
    FUN_0134bd64(iVar1,uVar2);
  }
LAB_01ad819c:
  iVar1 = *piVar3;
LAB_01ad81bc:
  if (iVar1 == 0) {
    return;
  }
  FUN_01ada488(piVar3);
  return;
}

