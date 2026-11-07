// FUN_014caeb4 @ 014caeb4 size=128 calls_out=1 calls_in=5
// strings: 

undefined4 FUN_014caeb4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_20 [4];
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 == *(int **)(param_1 + 0xc)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    local_20[0] = *piVar2;
    *(int **)(param_1 + 4) = piVar2 + 4;
    if (local_20[0] != -0x7fffffeb) {
      piVar3 = (int *)((uint)local_20 | 4);
      iVar4 = piVar2[2];
      iVar5 = piVar2[3];
      *piVar3 = piVar2[1];
      piVar3[1] = iVar4;
      piVar3[2] = iVar5;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      uVar1 = FUN_014f3ffc(local_20);
    }
  }
  return uVar1;
}

