// FUN_0120d6d0 @ 0120d6d0 size=76 calls_out=1 calls_in=12
// strings: 

void FUN_0120d6d0(uint *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 5) {
    if (*param_1 < 4) {
      return;
    }
    uVar2 = param_1[1];
    puVar3 = (undefined4 *)param_1[2];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(uVar2);
      return;
    }
  }
  return;
}

