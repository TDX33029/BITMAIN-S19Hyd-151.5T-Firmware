// FUN_013e9378 @ 013e9378 size=76 calls_out=3 calls_in=3
// strings: 

int FUN_013e9378(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 local_50 [2];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  local_50[0] = 0x25;
  uStack_4c = param_1;
  uStack_48 = param_2;
  iVar1 = thunk_FUN_01be5118(0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x44);
  }
  FUN_01bed4e2(iVar1,local_50,0x44);
  return iVar1;
}

