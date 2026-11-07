// FUN_007390f0 @ 007390f0 size=84 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_007390f0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_80 [14];
  undefined1 local_48;
  
  local_48 = 0;
  local_80[0] = param_1;
  iVar1 = thunk_FUN_01be5118(0x78);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x78);
  }
  FUN_01bed4e2(iVar1,local_80,0x78);
  return CONCAT44(&DAT_01c07e88,iVar1);
}

