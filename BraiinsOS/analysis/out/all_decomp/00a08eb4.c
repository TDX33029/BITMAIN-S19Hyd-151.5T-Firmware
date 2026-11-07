// FUN_00a08eb4 @ 00a08eb4 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_00a08eb4(undefined4 *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      if (param_1[5] != 0) {
        FUN_00aa0a58(param_1[5],param_1[6],1);
      }
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      uVar3 = param_1[5];
      puVar4 = (undefined4 *)param_1[6];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      FUN_00aa13c0(param_1[2]);
    }
    FUN_00aa13c0(*param_1);
    return;
  }
  if (param_1[5] == 0) {
    return;
  }
  FUN_00aa0a58(param_1[5],param_1[6],1);
  return;
}

