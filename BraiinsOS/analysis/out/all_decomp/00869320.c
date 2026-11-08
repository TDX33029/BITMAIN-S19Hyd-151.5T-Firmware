// FUN_00869320 @ 00869320 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_00869320(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)((int)param_1 + 0x1e) == '\x03') {
    uVar2 = *param_1;
    puVar3 = (undefined4 *)param_1[1];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(uVar2);
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
  }
  return;
}

