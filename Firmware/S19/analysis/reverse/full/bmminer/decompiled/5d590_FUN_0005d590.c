// FUN_0005d590 @ 0005d590  size=80  callers=6
// program: bmminer


undefined4 FUN_0005d590(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x448);
  if (piVar3[1] < 1) {
    return 0;
  }
  iVar4 = 0;
  do {
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    uVar2 = FUN_000633d0(*(undefined4 *)(*piVar3 + iVar1),param_2);
    piVar3 = *(int **)(param_1 + 0x448);
  } while (iVar4 < piVar3[1]);
  return uVar2;
}

