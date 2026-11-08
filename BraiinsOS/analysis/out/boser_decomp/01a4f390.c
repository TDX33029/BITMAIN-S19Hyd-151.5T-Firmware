// FUN_01a4f390 @ 01a4f390 size=172 calls_out=0 calls_in=3
// strings: 

void FUN_01a4f390(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  if ((*(int *)(param_2 + 0xc) == 0) || (pcVar4 = *(char **)(param_2 + 8), *pcVar4 != '#')) {
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    uVar2 = 1;
  }
  else {
    iVar3 = *(int *)(param_2 + 0xc) + -1;
    iVar5 = 0;
    if (iVar3 != 0) {
      do {
        bVar1 = pcVar4[iVar5 + 1];
        if (((bVar1 != 9) && (0x5e < bVar1 - 0x20)) && ((uint)(int)(char)bVar1 < 0x80000000))
        goto LAB_01a4f3fc;
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
      iVar5 = iVar3;
    }
LAB_01a4f3fc:
    *(char **)(param_2 + 8) = pcVar4 + iVar5 + 1;
    *(int *)(param_2 + 0xc) = iVar3 - iVar5;
    uVar2 = 3;
  }
  *param_1 = uVar2;
  return;
}

