// FUN_0003bedc @ 0003bedc  size=120  callers=0
// program: bmminer


void FUN_0003bedc(int param_1,undefined4 param_2)

{
  undefined1 auStack_20 [20];
  
  FUN_0003b328(auStack_20,0x400,*(int *)(param_1 + 0x6c) + 8);
  FUN_0003b44c(auStack_20,&DAT_0009fb68);
  FUN_0003b558(param_1,param_2,auStack_20);
  FUN_0003b44c(auStack_20,"\r\n");
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xdf;
  FUN_0003b668(param_1,param_2,auStack_20);
  return;
}

