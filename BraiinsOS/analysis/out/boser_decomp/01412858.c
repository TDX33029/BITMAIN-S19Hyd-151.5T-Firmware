// FUN_01412858 @ 01412858 size=104 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01412858(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      if (""[*(byte *)(param_1 + iVar2)] == '\0') {
        return 1;
      }
      if (param_4 == iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_4,param_4,&DAT_01cf40a4);
      }
      iVar1 = iVar2 + 1;
      *(char *)(param_3 + iVar2) = ""[*(byte *)(param_1 + iVar2)];
      iVar2 = iVar1;
    } while (param_2 != iVar1);
  }
  return 0;
}

