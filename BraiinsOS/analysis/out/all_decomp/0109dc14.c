// FUN_0109dc14 @ 0109dc14 size=236 calls_out=6 calls_in=0
// strings: 

void FUN_0109dc14(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  iVar3 = *(int *)(param_1 + 0x58);
  *puVar2 = param_2;
  puVar2[1] = 0;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar3 + 4) = puVar2;
  }
  puVar2[2] = iVar3;
  iVar5 = *(int *)(param_3 + 0x84);
  if (iVar3 == 0) {
    *(undefined4 **)(param_1 + 0x54) = puVar2;
  }
  *(undefined4 **)(param_1 + 0x58) = puVar2;
  pcVar4 = (char *)(iVar5 + 4);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0109dc90;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_0109dc90:
  FUN_0128236c(pcVar4);
  *(undefined4 **)(iVar5 + 0xc) = puVar2;
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        return;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
  return;
}

