// FUN_00fa83fc @ 00fa83fc size=252 calls_out=5 calls_in=3
// strings: 

void FUN_00fa83fc(int *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  if ((char)param_1[2] != '\0') {
    return;
  }
  pcVar5 = (char *)(param_1[1] + 8);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar1) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00fa8438;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar5);
LAB_00fa8438:
  FUN_0128236c(pcVar5);
  iVar3 = *param_1;
  iVar6 = *(int *)(iVar3 + 8);
  do {
    puVar2 = &DAT_018ac74c;
    if (iVar6 == 0) {
LAB_00fa84f4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar2);
    }
    if (iVar6 == iVar3) {
      FUN_01282570(pcVar5);
      if (*pcVar5 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar5);
          if (bVar1) {
            *pcVar5 = '\0';
            return;
          }
        } while (*pcVar5 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar5);
      return;
    }
    iVar4 = *(int *)(iVar6 + 8);
    if (iVar4 == 0) {
      puVar2 = &DAT_018ac75c;
      goto LAB_00fa84f4;
    }
    *(int *)(iVar3 + 8) = iVar4;
    *(int *)(iVar4 + 0xc) = iVar3;
    *(undefined4 *)(iVar6 + 8) = 0;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    iVar6 = *(int *)(iVar3 + 8);
  } while( true );
}

