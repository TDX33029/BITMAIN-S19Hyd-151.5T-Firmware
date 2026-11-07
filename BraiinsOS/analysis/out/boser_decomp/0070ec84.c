// FUN_0070ec84 @ 0070ec84 size=252 calls_out=3 calls_in=2
// strings: WouldBlock | tokio_tungstenite::compat | tokio_tungstenite::compat

void FUN_0070ec84(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcStack_24;
  undefined4 uStack_20;
  char *local_1c;
  undefined4 local_18;
  undefined *local_14;
  
  if (*param_2 == 0xf && param_2[1] == 0) {
    *param_1 = 0xf;
    param_1[1] = 0;
    return;
  }
  if ((*param_2 != 5 || param_2[1] != 0) || (cVar1 = FUN_005ef5e8(param_2 + 2), cVar1 != '\r')) {
    FUN_01bed4e2(param_1,param_2,0x58);
    return;
  }
  if (DAT_01d51b00 < 5) {
    *param_1 = 0x10;
    param_1[1] = 0;
  }
  else {
    local_18 = 0x19;
    local_14 = &DAT_01c071bc;
    local_1c = "tokio_tungstenite::compat";
    pcStack_24 = "tokio_tungstenite::compat";
    uStack_20 = 0x19;
    FUN_01ac6264("WouldBlock",0x15,5,&pcStack_24);
    iVar2 = *param_2;
    iVar3 = param_2[1];
    *param_1 = 0x10;
    param_1[1] = 0;
    if (iVar2 == 0xf && iVar3 == 0) {
      return;
    }
  }
  FUN_0070edb8(param_2);
  return;
}

