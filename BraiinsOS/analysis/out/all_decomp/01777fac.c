// FUN_01777fac @ 01777fac size=224 calls_out=5 calls_in=0
// strings: 

int FUN_01777fac(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_3c [32];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_0177a6c0(0x41,param_2,&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    iVar2 = 0;
  }
  else {
    FUN_0173a734(param_2,&DAT_018b6024);
    iVar2 = FUN_01777ee4(auStack_3c,iVar1);
    uVar3 = 0;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar1 + 0x40) = 1;
      uVar3 = FUN_0177aafc(*(undefined4 *)(param_2 + 8));
      *(int *)(param_2 + 8) = iVar1;
    }
  }
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return iVar2;
}

