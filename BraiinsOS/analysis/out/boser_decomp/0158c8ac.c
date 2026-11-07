// FUN_0158c8ac @ 0158c8ac size=260 calls_out=5 calls_in=1
// strings: 

void FUN_0158c8ac(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  char local_2c;
  char local_2b;
  char local_2a;
  undefined4 local_28;
  
  iVar2 = 0;
  while( true ) {
    FUN_0158c30c(&local_2c,param_2);
    if (local_2c == '\x01') {
      *param_1 = 1;
      param_1[1] = local_28;
      return;
    }
    cVar1 = local_2a;
    if (local_2b == '\0') {
      cVar1 = '\0';
    }
    if (9 < (byte)(cVar1 - 0x30U)) break;
    FUN_0157653c(param_2 + 0xc);
    iVar2 = iVar2 + 1;
  }
  if (cVar1 == '.') {
    FUN_0158c9b0(param_1,param_2,param_3);
    return;
  }
  if (cVar1 == 'E' || cVar1 == 'e') {
    FUN_0158cbb4(param_1,param_2,param_3);
    return;
  }
  FUN_012c4418(param_1,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),param_3,
               param_5,param_6,iVar2);
  return;
}

