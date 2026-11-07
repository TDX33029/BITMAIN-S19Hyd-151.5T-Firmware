// FUN_015b91c8 @ 015b91c8 size=156 calls_out=4 calls_in=0
// strings: 

void FUN_015b91c8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_50 [48];
  int local_20 [2];
  
  FUN_016dd606(auStack_50,0,0x30);
  uVar1 = 1;
  local_20[0] = FUN_015b6644(param_1,0x20,0xffffffff,0xffffffff,1,0,"",0x20,auStack_50,0x30);
  local_20[1] = 0x30;
  if (local_20[0] != 0x30) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,local_20,local_20 + 1,0,uVar1,&DAT_018aa718);
  }
  FUN_016dd1aa(param_1,auStack_50,0x20);
  return;
}

