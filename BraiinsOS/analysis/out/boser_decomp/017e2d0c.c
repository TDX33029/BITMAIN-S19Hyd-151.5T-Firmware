// FUN_017e2d0c @ 017e2d0c size=128 calls_out=4 calls_in=3
// strings: 

int FUN_017e2d0c(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined4 local_68 [18];
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined *local_18;
  
  if (param_3 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = FUN_017beab4(param_3);
  }
  local_68[0] = 2;
  local_18 = &DAT_01d1c1a8;
  local_20 = param_1;
  local_1e = param_2;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,local_68,0x54);
  return iVar1;
}

