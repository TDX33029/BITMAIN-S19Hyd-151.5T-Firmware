// FUN_0005d0d8 @ 0005d0d8  size=172  callers=2
// program: bmminer


void FUN_0005d0d8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/category.c",0x16,"a_category is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/category.c",0x1a,"--category[%p][%s][%p]--",param_1,param_1,
               *(undefined4 *)(param_1 + 0x448));
  piVar2 = *(int **)(param_1 + 0x448);
  if ((piVar2 != (int *)0x0) && (0 < piVar2[1])) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      FUN_00062164(*(undefined4 *)(*piVar2 + iVar1),param_2);
      piVar2 = *(int **)(param_1 + 0x448);
    } while (iVar3 < piVar2[1]);
  }
  return;
}

