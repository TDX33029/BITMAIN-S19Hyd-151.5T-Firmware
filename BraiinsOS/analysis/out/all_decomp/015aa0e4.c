// FUN_015aa0e4 @ 015aa0e4 size=156 calls_out=3 calls_in=1
// strings: 

void FUN_015aa0e4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  if (uVar1 < 0xf) {
    if (uVar1 == 0xe) goto LAB_015aa128;
  }
  else if (-0x41 < *(char *)(uVar2 + 0xe)) {
LAB_015aa128:
    if (*param_1 == uVar1) {
      FUN_015afa68(param_1,uVar1,1,1,1);
      uVar2 = param_1[1];
    }
    FUN_016dd52c(uVar2 + 0xf,uVar2 + 0xe,uVar1 - 0xe);
    *(undefined1 *)(uVar2 + 0xe) = 0x2e;
    param_1[2] = uVar1 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_004186db,0x2c,&DAT_018aa0a4);
}

