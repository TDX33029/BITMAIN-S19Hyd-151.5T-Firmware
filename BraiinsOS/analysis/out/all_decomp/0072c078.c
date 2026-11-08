// FUN_0072c078 @ 0072c078 size=244 calls_out=2 calls_in=2
// strings: 

void FUN_0072c078(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x20) == '\x03') {
    uVar1 = *(ushort *)(param_1 + 0x24);
    bVar6 = uVar1 == 3;
    if (bVar6) {
      uVar1 = (ushort)*(byte *)(param_1 + 0x28);
    }
    if (!bVar6 || uVar1 != 3) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      return;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x2c);
    uVar4 = *puVar3;
    puVar5 = (undefined4 *)puVar3[1];
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
    thunk_FUN_016d3fb4(puVar3);
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  else if (*(char *)(param_1 + 0x20) == '\x04') {
    if (*(char *)(param_1 + 0x88) == '\x03') {
      FUN_01434db4(param_1 + 0x6c);
    }
    if ((*(char *)(param_1 + 0x24) != '\x04') && (*(char *)(param_1 + 0x24) == '\x03')) {
      puVar3 = *(undefined4 **)(param_1 + 0x28);
      uVar4 = *puVar3;
      puVar5 = (undefined4 *)puVar3[1];
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      thunk_FUN_016d3fb4(puVar3);
    }
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    return;
  }
  return;
}

