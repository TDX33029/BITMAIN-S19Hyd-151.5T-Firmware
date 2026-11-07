// FUN_006f6be4 @ 006f6be4 size=132 calls_out=0 calls_in=1
// strings: 

void FUN_006f6be4(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 < 2) {
    return;
  }
  pcVar6 = *(char **)(param_1 + 4);
  iVar2 = uVar4 - 2;
  uVar3 = 1;
  pcVar5 = pcVar6;
  do {
    if (pcVar5[1] == *pcVar5) {
      if (uVar3 + 1 < uVar4) {
        pcVar5 = pcVar5 + 2;
        do {
          pcVar1 = pcVar6 + uVar3;
          if (*pcVar5 != pcVar1[-1]) {
            *pcVar1 = *pcVar5;
            uVar3 = uVar3 + 1;
          }
          iVar2 = iVar2 + -1;
          pcVar5 = pcVar5 + 1;
        } while (iVar2 != 0);
      }
      *(uint *)(param_1 + 8) = uVar3;
      return;
    }
    bVar7 = iVar2 != 0;
    iVar2 = iVar2 + -1;
    uVar3 = uVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar7);
  return;
}

