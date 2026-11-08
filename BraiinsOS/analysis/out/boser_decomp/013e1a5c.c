// FUN_013e1a5c @ 013e1a5c size=316 calls_out=2 calls_in=2
// strings: 

void FUN_013e1a5c(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_28 = *param_3;
  iStack_24 = param_3[1];
  iStack_20 = param_3[2];
  iStack_1c = param_3[3];
  DataMemoryBarrier(0xb);
  local_2c = param_2;
  if (*(char *)(param_2 + 0x34) == '\0') {
    piVar7 = (int *)(param_2 + 8);
    pcVar4 = (char *)(param_2 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar4;
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar2);
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      if (*piVar7 != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_0056c428,0x20,&DAT_01d2dfec);
      }
      *piVar7 = local_28;
      *(int *)(param_2 + 0xc) = iStack_24;
      *(int *)(param_2 + 0x10) = iStack_20;
      *(int *)(param_2 + 0x14) = iStack_1c;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_2 + 0x18) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(param_2 + 0x34) != '\0') {
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar4;
          bVar2 = (bool)hasExclusiveAccess(pcVar4);
        } while (!bVar2);
        *pcVar4 = '\x01';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
          iVar3 = *piVar7;
          *piVar7 = 4;
          if (iVar3 != 4) {
            iVar5 = *(int *)(param_2 + 0x10);
            iVar6 = *(int *)(param_2 + 0x14);
            param_1[1] = *(int *)(param_2 + 0xc);
            param_1[2] = iVar5;
            param_1[3] = iVar6;
            *param_1 = iVar3;
            DataMemoryBarrier(0xb);
            *(undefined1 *)(param_2 + 0x18) = 0;
            DataMemoryBarrier(0xb);
            goto LAB_013e1abc;
          }
          DataMemoryBarrier(0xb);
          *pcVar4 = '\0';
          DataMemoryBarrier(0xb);
        }
      }
      *param_1 = 4;
      goto LAB_013e1abc;
    }
  }
  *param_1 = local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  param_1[3] = iStack_1c;
LAB_013e1abc:
  FUN_013cef10(&local_2c);
  return;
}

