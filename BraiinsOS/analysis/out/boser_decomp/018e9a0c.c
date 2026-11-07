// FUN_018e9a0c @ 018e9a0c size=112 calls_out=3 calls_in=1
// strings: 

void FUN_018e9a0c(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2[2];
  uVar1 = *(uint *)(param_1 + 0x20);
  if (iVar2 == *param_2) {
    FUN_006666a0(param_2);
  }
  *(char *)(param_2[1] + iVar2) = (char)uVar1;
  param_2[2] = iVar2 + 1;
  if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x20,&DAT_01d23410);
  }
  FUN_01ac6cbc(param_2,param_1,uVar1);
  return;
}

