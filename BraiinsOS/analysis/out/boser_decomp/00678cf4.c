// FUN_00678cf4 @ 00678cf4 size=260 calls_out=5 calls_in=1
// strings: 

void FUN_00678cf4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
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
    FUN_00677968(&local_2c,param_2);
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
    FUN_006784dc(param_1,param_2,param_3);
    return;
  }
  if (cVar1 == 'E' || cVar1 == 'e') {
    FUN_006786e0(param_1,param_2,param_3);
    return;
  }
  FUN_012c4418(param_1,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),param_3,
               param_5,param_6,iVar2);
  return;
}

