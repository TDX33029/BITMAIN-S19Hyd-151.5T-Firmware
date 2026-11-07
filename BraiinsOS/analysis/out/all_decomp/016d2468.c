// FUN_016d2468 @ 016d2468 size=228 calls_out=9 calls_in=2
// strings: 

void FUN_016d2468(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  
  uVar1 = FUN_017937a4(param_2);
  uVar2 = FUN_016dd8a2();
  FUN_00fab1e0(&local_2c,uVar1,uVar2);
  if (local_2c == 1) {
    local_20 = local_28;
    local_1c = local_24;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0041d945,0x1b,&local_20,&DAT_018af4a4,&DAT_018af4b4);
  }
  if (0x7fffffff < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  if (local_24 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(local_24);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_24);
    }
  }
  FUN_016dd1aa(iVar3,local_28,local_24);
  local_2c = local_24;
  local_28 = iVar3;
  FUN_016d23a8(param_1,0x28,&local_2c);
  return;
}

