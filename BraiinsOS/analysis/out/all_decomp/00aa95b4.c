// FUN_00aa95b4 @ 00aa95b4 size=116 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00aa95b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_488 [272];
  undefined1 auStack_378 [280];
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_254;
  
  local_260 = param_1;
  FUN_016dd1aa(auStack_378,param_2,0x110);
  local_254 = 0;
  local_25c = param_3;
  iVar1 = thunk_FUN_016d4a50(0x478);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x478);
  }
  FUN_016dd1aa(iVar1,auStack_488,0x478);
  return CONCAT44(&UNK_0186dfe4,iVar1);
}

