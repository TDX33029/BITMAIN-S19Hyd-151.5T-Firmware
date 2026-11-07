// FUN_019f993c @ 019f993c size=108 calls_out=1 calls_in=3
// strings: 

void FUN_019f993c(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    do {
      *param_1 = 0xffffffff;
      if (param_1[3] == 0) goto LAB_019f999c;
      uVar2 = param_1[3] - 1;
      param_1[3] = uVar2;
      piVar1 = (int *)(param_1[2] + uVar2 * 8);
      (**(code **)(*piVar1 + 4))(piVar1[1]);
      uVar2 = *param_1;
      *param_1 = uVar2 + 1;
    } while (0xfffffffe < uVar2);
  }
  FUN_01306fc8(&DAT_01d29af8);
LAB_019f999c:
  *param_1 = 0;
  return;
}

