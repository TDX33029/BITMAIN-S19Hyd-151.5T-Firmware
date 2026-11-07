// FUN_018e1a6c @ 018e1a6c size=120 calls_out=1 calls_in=4
// strings: 

void FUN_018e1a6c(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_14;
  
  uVar1 = 0x14;
  if (*(char *)(param_2 + 0xad) == '\0') {
    local_14 = 4;
    local_90 = 0x80000000;
    local_8c = 0x10001;
    FUN_018e077c(param_2,&local_90,*(char *)(param_2 + 0x28) == '\x02');
    param_1[1] = 0x1a;
    *(undefined1 *)(param_2 + 0xb1) = 1;
    uVar1 = 8;
  }
  *param_1 = uVar1;
  return;
}

