// FUN_008b6720 @ 008b6720 size=76 calls_out=1 calls_in=25
// strings: 

void FUN_008b6720(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 0x90);
  bVar5 = cVar1 == '\x03';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x54);
  }
  if (bVar5 && cVar1 == '\x03') {
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    puVar4 = *(undefined4 **)(param_1 + 0x5c);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(uVar3);
      return;
    }
  }
  return;
}

