// FUN_01ae3864 @ 01ae3864 size=68 calls_out=1 calls_in=1
// strings: 

void FUN_01ae3864(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x14) != '\x01') {
    if (iVar1 == -1) {
      return;
    }
    uVar2 = FUN_01beaf68();
    iVar1 = thunk_FUN_01bee080(6,uVar2,0,0,0,0,0);
    if (iVar1 == -4) {
      iVar1 = 0;
    }
    FUN_01be3b5a(iVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d25d00);
  }
  return;
}

