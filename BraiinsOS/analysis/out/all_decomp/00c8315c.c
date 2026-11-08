// FUN_00c8315c @ 00c8315c size=212 calls_out=5 calls_in=10
// strings: 

void FUN_00c8315c(int param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 != '\x04') {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00ac6f0c(param_1);
        return;
      }
      return;
    }
    if (*(char *)(param_1 + 100) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x60);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x3c);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x40);
        if (*(int *)(param_1 + 0x44) != 0) {
          (**(code **)(*(int *)(param_1 + 0x44) + 0xc))(*(undefined4 *)(param_1 + 0x48));
        }
      }
    }
    goto LAB_00c83218;
  }
  pcVar2 = *(char **)(param_1 + 0x24);
  if (*pcVar2 == '\0') {
    bVar3 = (bool)hasExclusiveAccess(pcVar2);
    if (!bVar3) goto LAB_00c831f8;
    *pcVar2 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00c831f8:
    FUN_01280da8(pcVar2);
  }
  FUN_0128236c(pcVar2);
  FUN_0163af68(pcVar2,1,pcVar2);
LAB_00c83218:
  FUN_00ac6f0c(param_1 + 0x14);
  return;
}

