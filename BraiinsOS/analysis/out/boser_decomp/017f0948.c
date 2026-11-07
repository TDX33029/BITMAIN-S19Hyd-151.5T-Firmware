// FUN_017f0948 @ 017f0948 size=128 calls_out=4 calls_in=3
// strings: 

int FUN_017f0948(undefined2 param_1,char *param_2)

{
  int iVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined2 local_18;
  undefined4 local_14;
  undefined *local_10;
  
  local_14 = 0;
  if (*param_2 != '\x04') {
    local_60 = *(undefined4 *)param_2;
    uStack_5c = *(undefined4 *)(param_2 + 4);
    local_14 = FUN_014333d0(&local_60);
  }
  local_60 = 2;
  local_10 = &DAT_01cf5e1c;
  local_18 = param_1;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,&local_60,0x54);
  return iVar1;
}

