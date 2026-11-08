// FUN_0156404c @ 0156404c size=116 calls_out=1 calls_in=1
// strings: 

bool FUN_0156404c(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar2 = false;
  if (iVar3 == *(int *)(param_2 + 0x20)) {
    if (iVar3 == 0) {
      return true;
    }
    if (iVar3 - 0x21U < 0xffffffe0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0x20,0x20,&DAT_018a8fe8);
    }
    bVar1 = 0;
    do {
      iVar3 = iVar3 + -1;
      bVar1 = *param_2 ^ *param_1 | bVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (iVar3 != 0);
    bVar2 = bVar1 == 0;
  }
  return bVar2;
}

