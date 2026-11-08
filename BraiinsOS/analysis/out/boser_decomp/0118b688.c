// FUN_0118b688 @ 0118b688 size=204 calls_out=6 calls_in=1
// strings: 

void FUN_0118b688(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  cVar1 = *(char *)(param_1 + 0x32c);
  if (cVar1 == '\0') {
    FUN_00d3545c(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    puVar4 = *(undefined4 **)(param_1 + 0x33c);
    uVar3 = *(undefined4 *)(param_1 + 0x338);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(uVar3);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00d34ddc(param_1 + 0x338);
  }
  if (*(char *)(param_1 + 0x32f) != '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324));
  }
  *(undefined2 *)(param_1 + 0x32f) = 0;
  if (*(char *)(param_1 + 0x32e) != '\0') {
    FUN_005f87b4(param_1 + 0x2d8);
  }
  if (*(char *)(param_1 + 0x32d) != '\0') {
    FUN_00d35478(param_1 + 0x188);
  }
  *(undefined2 *)(param_1 + 0x32d) = 0;
  return;
}

