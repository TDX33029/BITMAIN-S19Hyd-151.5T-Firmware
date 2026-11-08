// FUN_016311d8 @ 016311d8 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_016311d8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    piVar1 = (int *)(iVar3 + iVar2 * 0x10);
    if (*piVar1 == -0x80000000) {
      piVar1 = piVar1 + 1;
    }
    FUN_0134bd64(*piVar1,piVar1[1]);
  }
  FUN_0134aee0(*param_1,iVar3,4,0x10);
  return;
}

