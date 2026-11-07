// FUN_00e24aa8 @ 00e24aa8 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e24aa8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_990 [760];
  undefined4 local_698;
  undefined1 local_640;
  
  local_698 = param_1;
  FUN_01bed4e2(auStack_990,param_2,0xb8);
  local_640 = 0;
  iVar1 = thunk_FUN_01be5118(0x980);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x980);
  }
  FUN_01bed4e2(iVar1,auStack_990,0x980);
  return iVar1;
}

