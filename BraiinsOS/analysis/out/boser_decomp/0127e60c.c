// FUN_0127e60c @ 0127e60c size=284 calls_out=1 calls_in=2
// strings: cgminer | graphqlstruct RawPoolReconnectBackoffConfig | general_http

void FUN_0127e60c(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x63707267) {
      uVar1 = 3;
      goto LAB_0127e71c;
    }
    if (*param_2 == 0x6963756c) {
      uVar1 = 5;
      goto LAB_0127e71c;
    }
    if (*param_2 == 0x74736572) {
      uVar1 = 6;
      goto LAB_0127e71c;
    }
    break;
  case 7:
    iVar2 = thunk_FUN_01bed842(param_2,"cgminer",7);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_0127e71c;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"graphqlstruct RawPoolReconnectBackoffConfig",7);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_0127e71c;
    }
    break;
  case 8:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_0056fc48,8);
    if (iVar2 == 0) {
      uVar1 = 4;
      goto LAB_0127e71c;
    }
    break;
  case 0xc:
    iVar2 = thunk_FUN_01bed842(param_2,"general_http",0xc);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_0127e71c;
    }
  }
  uVar1 = 7;
LAB_0127e71c:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

