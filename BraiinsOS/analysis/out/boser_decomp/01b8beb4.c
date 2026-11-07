// FUN_01b8beb4 @ 01b8beb4 size=212 calls_out=3 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01b8be50) */
/* WARNING: Removing unreachable block (ram,0x01b8be3c) */

int FUN_01b8beb4(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xed0);
  if (iVar1 != 0) {
    FUN_01bed93e(iVar1,0,0xed0);
    *(undefined4 *)(iVar1 + 0x2c8) = 0;
    *(undefined4 *)(iVar1 + 0x2cc) = 0;
    *(undefined4 *)(iVar1 + 0x2d0) = 0;
    FUN_01b8bd70(iVar1,2);
  }
  return iVar1;
}

