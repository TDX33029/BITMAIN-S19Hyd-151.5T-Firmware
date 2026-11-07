// FUN_0165823c @ 0165823c size=200 calls_out=4 calls_in=3
// strings: 

void FUN_0165823c(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_1 + 0x2c);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01658268;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar3);
LAB_01658268:
  FUN_0128236c(pcVar3);
  iVar2 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(param_1 + 0x3c));
  }
  iVar2 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(param_1 + 0x44));
  }
  FUN_01282570(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        return;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar3);
  return;
}

