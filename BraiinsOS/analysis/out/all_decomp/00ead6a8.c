// FUN_00ead6a8 @ 00ead6a8 size=104 calls_out=2 calls_in=0
// strings: failed to resolve host

undefined4 FUN_00ead6a8(char *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar1 = FUN_00f155bc("failed to resolve host",0x16);
  if (*param_1 == '\x03') {
    puVar3 = *(undefined4 **)(param_1 + 4);
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
  return uVar1;
}

