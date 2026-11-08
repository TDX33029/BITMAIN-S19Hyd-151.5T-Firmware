// FUN_000533e4 @ 000533e4  size=200  callers=0
// program: bmminer


undefined4 FUN_000533e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined *__src;
  int iVar3;
  uint uVar4;
  uint local_9c;
  undefined1 auStack_98 [124];
  
  uVar4 = 0xffffffff;
  iVar3 = 0;
  do {
    iVar2 = FUN_0002a6f0(iVar3);
    if (iVar2 != 0) {
      FUN_0001c934(iVar3,(undefined1)DAT_000c94e8,&local_9c);
      if (uVar4 == 0xffffffff) {
        uVar1 = local_9c;
      }
      else {
        uVar1 = uVar4;
        if (local_9c != uVar4) {
          return 0xffffffff;
        }
      }
      if (uVar1 <= uVar4) {
        uVar4 = uVar1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (local_9c < 0x285) {
    if (local_9c < 600) {
      __src = &DAT_000a4680;
    }
    else {
      __src = &DAT_000a4608;
    }
  }
  else {
    __src = &DAT_000a4590;
  }
  memcpy(auStack_98,__src,0x78);
  FUN_0004e5e8(auStack_98,param_1,param_2,param_3);
  return 0;
}

