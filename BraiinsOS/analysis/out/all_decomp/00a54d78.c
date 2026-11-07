// FUN_00a54d78 @ 00a54d78 size=120 calls_out=2 calls_in=0
// strings: 

void FUN_00a54d78(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x90) == '\x03') {
    uVar1 = *(ushort *)(param_1 + 0x70);
    bVar6 = uVar1 == 3;
    if (bVar6) {
      uVar1 = (ushort)*(byte *)(param_1 + 0x74);
    }
    if (bVar6 && uVar1 == 3) {
      puVar3 = *(undefined4 **)(param_1 + 0x78);
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
      FUN_00a07b4c(param_1);
      return;
    }
  }
  FUN_00a07b4c(param_1);
  return;
}

