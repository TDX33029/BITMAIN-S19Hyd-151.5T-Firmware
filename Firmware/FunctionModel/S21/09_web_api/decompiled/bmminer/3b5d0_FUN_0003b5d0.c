// FUN_0003b5d0 @ 0003b5d0  size=152  callers=2
// program: bmminer


void FUN_0003b5d0(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x7c);
  if ((bVar2 & 8) != 0) {
    FUN_0003b0e0();
    bVar2 = *(byte *)(param_1 + 0x7c);
  }
  if ((bVar2 & 1) == 0) {
    pcVar1 = "close";
  }
  else {
    pcVar1 = "keep-alive";
  }
  FUN_0003b2b4(param_2,"Connection",pcVar1);
  FUN_0003b44c(param_3,"HTTP/1.1 %d %s\r\nDate: %s\r\n",*(int *)(param_2 + 0xc),
               (&PTR_DAT_000bd36c)[*(int *)(param_2 + 0xc)],*(int *)(param_1 + 0x6c) + 0x3c);
  FUN_0003b558(param_1,param_2,param_3);
  return;
}

