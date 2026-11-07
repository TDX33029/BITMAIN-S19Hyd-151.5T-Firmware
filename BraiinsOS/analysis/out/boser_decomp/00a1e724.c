// FUN_00a1e724 @ 00a1e724 size=80 calls_out=3 calls_in=1
// strings: 

void FUN_00a1e724(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_01ab46bc();
  if (param_1[1] != 0) {
    thunk_FUN_01be4678(*param_1);
  }
  uVar1 = 0;
  iVar2 = 0x7c;
  do {
    if (param_1[uVar1 + 3] != 0) {
      FUN_01ac2198(param_1[uVar1 + 3],1 << (uVar1 & 0xff));
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + -4;
  } while (iVar2 != 0);
  return;
}

