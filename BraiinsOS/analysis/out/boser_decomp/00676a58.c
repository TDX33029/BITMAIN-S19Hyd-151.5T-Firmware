// FUN_00676a58 @ 00676a58 size=128 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_00676a58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_1c0 [216];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [192];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_17;
  
  local_20 = param_1;
  FUN_01bed4e2(auStack_e0,param_3,0xc0);
  local_e4 = param_5;
  local_17 = 0;
  local_e8 = param_4;
  local_1c = param_2;
  iVar1 = thunk_FUN_01be5118(0x1b0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1b0);
  }
  FUN_01bed4e2(iVar1,auStack_1c0,0x1b0);
  return CONCAT44(&UNK_01c046c4,iVar1);
}

