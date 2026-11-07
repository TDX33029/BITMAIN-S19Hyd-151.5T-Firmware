// FUN_00879060 @ 00879060 size=220 calls_out=6 calls_in=1
// strings: 

void FUN_00879060(int param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(char *)(param_1 + 0x44) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x40);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x1c);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x20);
        if (*(int *)(param_1 + 0x24) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00879138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
          return;
        }
      }
    }
    return;
  }
  if (*(char *)(param_1 + 8) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x14) == '\x04') {
    FUN_00a07b4c(param_1 + 0x18);
  }
  else if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_0087875c(param_1 + 0x18);
  }
  pcVar2 = *(char **)(param_1 + 4);
  if (*pcVar2 == '\0') {
    bVar3 = (bool)hasExclusiveAccess(pcVar2);
    if (bVar3) {
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_008790ec;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar2);
LAB_008790ec:
  FUN_0128236c(pcVar2);
  FUN_0163af68(pcVar2,1,pcVar2);
  return;
}

