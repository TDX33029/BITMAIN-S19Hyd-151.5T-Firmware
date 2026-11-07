// FUN_0163b3c8 @ 0163b3c8 size=264 calls_out=5 calls_in=1
// strings: 

void FUN_0163b3c8(undefined4 *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  pcVar6 = (char *)(param_1[1] + 4);
  if (*pcVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar6);
    if (bVar1) {
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0163b404;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar6);
LAB_0163b404:
  FUN_0128236c(pcVar6);
  piVar3 = (int *)*param_1;
  piVar4 = (int *)*piVar3;
  puVar2 = &DAT_018ac74c;
  if (piVar4 != (int *)0x0) {
    do {
      if (piVar4 == piVar3) {
        FUN_01282570(pcVar6);
        if (*pcVar6 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(pcVar6);
            if (bVar1) {
              *pcVar6 = '\0';
              return;
            }
          } while (*pcVar6 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar6);
        return;
      }
      iVar5 = *piVar4;
      if (iVar5 == 0) {
        puVar2 = &DAT_018ac75c;
        break;
      }
      *piVar3 = iVar5;
      *(int **)(iVar5 + 4) = piVar3;
      *piVar4 = 0;
      piVar4[1] = 0;
      DataMemoryBarrier(0xb);
      piVar4[4] = 2;
      piVar4 = (int *)*piVar3;
    } while (piVar4 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(puVar2);
}

