// FUN_008aaaa4 @ 008aaaa4 size=224 calls_out=5 calls_in=0
// strings: 

void FUN_008aaaa4(int param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x19) == '\x03') {
    if (*(char *)(param_1 + 0x54) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x50);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x2c);
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x30);
        if (*(int *)(param_1 + 0x34) != 0) {
                    /* WARNING: Could not recover jumptable at 0x008aab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(param_1 + 0x34) + 0xc))(*(undefined4 *)(param_1 + 0x38));
          return;
        }
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0x19) != '\x04') {
    return;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  puVar5 = *(undefined4 **)(param_1 + 0x20);
  pcVar2 = (code *)*puVar5;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar4);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(uVar4);
  }
  pcVar3 = *(char **)(param_1 + 0x10);
  if (*pcVar3 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar6) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_008aab10;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar3);
LAB_008aab10:
  FUN_0128236c(pcVar3);
  FUN_0163af68(pcVar3,1,pcVar3);
  return;
}

