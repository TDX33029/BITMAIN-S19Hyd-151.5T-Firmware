// FUN_01ad2898 @ 01ad2898 size=208 calls_out=3 calls_in=2
// strings: 

void FUN_01ad2898(undefined4 *param_1)

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
    if (iVar1 == -0x80000000) goto LAB_01ad2940;
    uVar2 = param_1[0xd];
    goto LAB_01ad293c;
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
      goto LAB_01ad293c;
    }
    goto LAB_01ad2940;
  default:
    if (param_1[1] != -0x80000000) {
      FUN_0134bd64(param_1[1],param_1[2]);
    }
    piVar3 = param_1 + 4;
    iVar1 = *piVar3;
    goto LAB_01ad2960;
  }
  piVar3 = param_1 + 2;
  iVar1 = param_1[0xd];
  if (iVar1 != -0x80000000) {
    uVar2 = param_1[0xe];
LAB_01ad293c:
    FUN_0134bd64(iVar1,uVar2);
  }
LAB_01ad2940:
  iVar1 = *piVar3;
LAB_01ad2960:
  if (iVar1 == 0) {
    return;
  }
  FUN_01ada488(piVar3);
  return;
}

