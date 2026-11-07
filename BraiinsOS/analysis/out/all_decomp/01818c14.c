// FUN_01818c14 @ 01818c14 size=460 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01818c14(int param_1,uint param_2,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  
  if (param_3 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_4 != 0x38 || *param_3 != '1') {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0xfffffffe;
  }
  piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bd0);
  if (piVar1 == (int *)0x0) {
    return 0xfffffffc;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  *(int **)(param_1 + 0x1c) = piVar1;
  piVar1[0xe] = 0;
  *piVar1 = param_1;
  pcVar5 = *(code **)(param_1 + 0x24);
  piVar1[1] = 0x3f34;
  if ((((iVar2 != 0) && (pcVar5 != (code *)0x0)) &&
      (piVar3 = *(int **)(param_1 + 0x1c), piVar3 != (int *)0x0)) &&
     ((param_1 == *piVar3 && (piVar3[1] - 0x3f34U < 0x20)))) {
    if ((int)param_2 < 0) {
      if ((int)param_2 < -0xf) goto LAB_01818cd4;
      uVar4 = -param_2;
      iVar2 = 0;
    }
    else {
      if (0x2f < (int)param_2) goto LAB_01818cd4;
      uVar4 = param_2 & 0xf;
      iVar2 = ((int)param_2 >> 4) + 5;
    }
    if ((0xff01U >> (uVar4 & 0xff) & 1) != 0) {
      if ((piVar3[0xe] != 0) && (uVar4 != piVar3[10])) {
        (*pcVar5)(*(undefined4 *)(param_1 + 0x28));
        piVar3[0xe] = 0;
      }
      piVar3[3] = iVar2;
      piVar3[10] = uVar4;
      iVar2 = FUN_01818b14(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      pcVar5 = *(code **)(param_1 + 0x24);
    }
  }
LAB_01818cd4:
  (*pcVar5)(*(undefined4 *)(param_1 + 0x28),piVar1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0xfffffffe;
}

