// FUN_00bebbb8 @ 00bebbb8 size=364 calls_out=5 calls_in=2
// strings: 

void FUN_00bebbb8(int param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x68) == '\x03') {
      cVar1 = *(char *)(param_1 + 100);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0x40);
      }
      if (bVar7 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x44);
        if (*(int *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bebd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)(param_1 + 0x48) + 0xc))(*(undefined4 *)(param_1 + 0x4c));
          return;
        }
      }
    }
    return;
  }
  if (cVar1 == '\x04') {
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    puVar6 = *(undefined4 **)(param_1 + 0x34);
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    puVar6 = *(undefined4 **)(param_1 + 0x40);
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x34) + 4);
    for (iVar4 = *(int *)(param_1 + 0x38); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar6[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar6);
      }
      puVar6 = puVar6 + 4;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
    }
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  pcVar3 = *(char **)(param_1 + 0x28);
  if (*pcVar3 == '\0') {
    bVar7 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar7) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00bebcd4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar3);
LAB_00bebcd4:
  FUN_0128236c(pcVar3);
  FUN_0163af68(pcVar3,1,pcVar3);
  return;
}

