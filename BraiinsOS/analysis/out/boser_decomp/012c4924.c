// FUN_012c4924 @ 012c4924 size=260 calls_out=5 calls_in=1
// strings: 

void FUN_012c4924(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
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
    FUN_012c39c8(&local_2c,param_2);
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
    FUN_012c6160(param_2 + 0xc);
    iVar2 = iVar2 + 1;
  }
  if (cVar1 == '.') {
    FUN_012c400c(param_1,param_2,param_3);
    return;
  }
  if (cVar1 == 'E' || cVar1 == 'e') {
    FUN_012c4210(param_1,param_2,param_3);
    return;
  }
  FUN_012c4418(param_1,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),param_3,
               param_5,param_6,iVar2);
  return;
}

