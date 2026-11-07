// FUN_01bd3f6c @ 01bd3f6c size=144 calls_out=2 calls_in=1
// strings: 

void FUN_01bd3f6c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  FUN_01bd3f50(param_3,0x60);
  do {
    FUN_01bd3b3c(param_3,param_1 - 1U ^ uVar2,param_2,param_3);
    uVar1 = param_1 - 1U ^ uVar2;
    uVar2 = uVar2 + 1;
    FUN_01bd3b3c(param_3 + 0x20,uVar1,param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x40;
  } while (uVar2 != 0xf);
  FUN_01bd3b3c(param_3 + 0x40,param_1,param_3 + 0x40,&DAT_00564a84);
  return;
}

