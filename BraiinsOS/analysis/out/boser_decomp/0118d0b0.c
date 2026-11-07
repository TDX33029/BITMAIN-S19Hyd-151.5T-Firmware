// FUN_0118d0b0 @ 0118d0b0 size=104 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0118d0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_af8 [2764];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_16;
  
  local_16 = 0;
  local_2c = param_1;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  iVar1 = thunk_FUN_01be5118(0xae8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xae8);
  }
  FUN_01bed4e2(iVar1,auStack_af8,0xae8);
  return CONCAT44(&UNK_01c20b90,iVar1);
}

