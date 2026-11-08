// FUN_009074c0 @ 009074c0 size=320 calls_out=2 calls_in=4
// strings: 

void FUN_009074c0(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (*param_1 == '\0') {
    if (param_1[1] == '\0') {
      return;
    }
    puVar3 = *(undefined4 **)(param_1 + 4);
    piVar2 = (int *)*puVar3;
    iVar5 = puVar3[3] + -1;
    puVar3[3] = iVar5;
    if (*(char *)(puVar3 + 4) == '\0') {
      iVar4 = piVar2[2];
    }
    else {
      iVar1 = piVar2[2];
      if (*piVar2 == iVar1) {
        FUN_00933680(piVar2,iVar1,1,1,1);
        iVar1 = piVar2[2];
      }
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      iVar4 = iVar1 + 1;
      piVar2[2] = iVar4;
      *(undefined1 *)(piVar2[1] + iVar1) = 10;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if ((uint)(*piVar2 - iVar4) < uVar7) {
          FUN_00933680(piVar2,iVar4,uVar7,1,1);
          iVar4 = piVar2[2];
        }
        FUN_016dd1aa(piVar2[1] + iVar4,uVar6,uVar7);
        iVar4 = iVar4 + uVar7;
        piVar2[2] = iVar4;
      }
    }
    if (*piVar2 == iVar4) {
      FUN_00933680(piVar2,iVar4,1,1,1);
      iVar4 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar4) = 0x7d;
    piVar2[2] = iVar4 + 1;
  }
  return;
}

