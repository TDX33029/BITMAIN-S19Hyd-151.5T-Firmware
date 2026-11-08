// FUN_018e7c6c @ 018e7c6c size=132 calls_out=3 calls_in=1
// strings: 

void FUN_018e7c6c(char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_30 [16];
  int *local_20;
  
  FUN_01931148(auStack_30,&DAT_01d232f0);
  for (param_2 = param_2 << 1; param_2 != 0; param_2 = param_2 + -2) {
    iVar1 = local_20[2];
    cVar2 = param_1[1];
    if (*param_1 != '\x03') {
      cVar2 = *param_1;
    }
    if (iVar1 == *local_20) {
      FUN_006666a0(local_20);
    }
    param_1 = param_1 + 2;
    *(char *)(local_20[1] + iVar1) = cVar2;
    local_20[2] = iVar1 + 1;
  }
  FUN_01931818(auStack_30);
  return;
}

