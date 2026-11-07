// FUN_00ab7724 @ 00ab7724 size=120 calls_out=1 calls_in=1
// strings: 

void FUN_00ab7724(undefined1 *param_1,char *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char *local_14;
  char **local_10;
  code *local_c;
  
  if (*param_2 == '\x03') {
    uVar1 = 0;
    param_1[1] = 0;
  }
  else if (*param_2 == '\x04') {
    param_1[1] = 1;
    uVar1 = 0;
  }
  else {
    local_10 = &local_14;
    local_c = FUN_00a52110;
    local_14 = param_2;
    uVar2 = FUN_00a57a98(&DAT_00593a75,&local_10);
    *(undefined4 *)(param_1 + 4) = uVar2;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

