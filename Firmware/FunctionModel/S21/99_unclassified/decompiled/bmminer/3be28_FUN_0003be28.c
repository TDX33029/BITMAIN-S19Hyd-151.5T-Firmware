// FUN_0003be28 @ 0003be28  size=180  callers=0
// program: bmminer


void FUN_0003be28(int param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_20 [16];
  
  FUN_0003b328(auStack_20,0x400,*(int *)(param_1 + 0x6c) + 8);
  if ((*(byte *)(param_1 + 0x7c) & 0x20) == 0) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 0x20;
    FUN_0003b2b4(param_2,"Transfer-Encoding","chunked");
    FUN_0003b5d0(param_1,param_2,auStack_20);
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_0003b44c(auStack_20,&DAT_0009fb60,*(undefined4 *)(param_2 + 8));
  FUN_0003b394(auStack_20,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_0003b44c(auStack_20,"\r\n");
  FUN_0003b668(param_1,param_2,auStack_20);
  return;
}

