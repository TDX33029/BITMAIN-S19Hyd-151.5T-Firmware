// FUN_01b69998 @ 01b69998 size=220 calls_out=5 calls_in=0
// strings: 

int FUN_01b69998(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_3c [32];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b6ad8c(0x41,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_01b4777c(param_2,&DAT_01d3503c);
    iVar2 = FUN_01b698d0(auStack_3c,iVar1);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar1 + 0x40) = 1;
      FUN_01b6b1c4(*(undefined4 *)(param_2 + 8));
      *(int *)(param_2 + 8) = iVar1;
    }
  }
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar2;
}

