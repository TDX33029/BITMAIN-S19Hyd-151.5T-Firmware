// FUN_00b6a784 @ 00b6a784 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00b6a784(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined1 local_10;
  
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  local_10 = 0;
  local_7c = param_1;
  iVar1 = thunk_FUN_01be5118(0x7c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x7c);
  }
  FUN_01bed4e2(iVar1,&local_88,0x7c);
  return iVar1;
}

