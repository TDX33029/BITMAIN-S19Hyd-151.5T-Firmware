// FUN_0183bbdc @ 0183bbdc size=132 calls_out=3 calls_in=1
// strings: 

int FUN_0183bbdc(undefined1 param_1)

{
  int iVar1;
  undefined4 local_78 [18];
  undefined2 local_30;
  undefined1 *local_1c;
  undefined *local_18;
  
  local_1c = (undefined1 *)thunk_FUN_01be5118(2);
  if (local_1c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,2);
  }
  *local_1c = param_1;
  local_30 = 0;
  local_78[0] = 2;
  local_18 = &DAT_01d1e738;
  iVar1 = thunk_FUN_01be5118(100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,100);
  }
  FUN_01bed4e2(iVar1,local_78,100);
  return iVar1;
}

