// FUN_00062164 @ 00062164  size=300  callers=2
// program: bmminer


void FUN_00062164(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/rule.c",0x27,"a_rule is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/rule.c",0x41,
               "---rule:[%p][%s%c%d]-[%d,%d][%s,%p,%d:%ld*%d~%s][%d][%d][%s:%s:%p];[%p]---",param_1,
               param_1,*(undefined1 *)(param_1 + 0x1001),*(undefined4 *)(param_1 + 0x1004),
               *(undefined4 *)(param_1 + 0x1028),*(undefined4 *)(param_1 + 0x102c),param_1 + 0x1030,
               *(undefined4 *)(param_1 + 0x1434),*(undefined4 *)(param_1 + 0x1438),
               *(undefined4 *)(param_1 + 0x1450),*(undefined4 *)(param_1 + 0x1454),param_1 + 0x1458,
               *(undefined4 *)(param_1 + 0x1864),*(undefined4 *)(param_1 + 0x1874),param_1 + 0x1880,
               param_1 + 0x1c81,*(undefined4 *)(param_1 + 0x2084),*(undefined4 *)(param_1 + 0x1878))
  ;
  piVar2 = *(int **)(param_1 + 0x1434);
  if ((piVar2 != (int *)0x0) && (0 < piVar2[1])) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      FUN_00063f44(*(undefined4 *)(*piVar2 + iVar1),param_2);
      piVar2 = *(int **)(param_1 + 0x1434);
    } while (iVar3 < piVar2[1]);
  }
  return;
}

