// FUN_0131bbfc @ 0131bbfc size=180 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0131bbfc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  char local_20 [4];
  undefined4 *local_1c;
  
  *(undefined1 *)*param_1 = 0;
  FUN_019b0c40(local_20);
  if (local_20[0] == '\x04') {
    iVar2 = (0xffffffffU >> LZCOUNT((int)local_1c * 4 + -1)) + 1;
    if (((uint)local_1c & 0x3fffffff) == 0) {
      iVar2 = 1;
    }
  }
  else {
    if (local_20[0] == '\x03') {
      uVar4 = *local_1c;
      puVar1 = (undefined4 *)local_1c[1];
      pcVar3 = (code *)*puVar1;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar4);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_01be4678(uVar4);
      }
      thunk_FUN_01be4678(local_1c);
    }
    iVar2 = 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  *puVar1 = 1;
  puVar1[1] = iVar2;
  return 1;
}

