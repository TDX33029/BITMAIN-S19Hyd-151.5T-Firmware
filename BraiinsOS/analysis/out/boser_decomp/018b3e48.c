// FUN_018b3e48 @ 018b3e48 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_018b3e48(int param_1,int *param_2)

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
    FUN_012faff4(0,uVar1,0x20,&DAT_01d22594);
  }
  FUN_01ac6d2c(param_2,param_1,param_1 + uVar1);
  return;
}

