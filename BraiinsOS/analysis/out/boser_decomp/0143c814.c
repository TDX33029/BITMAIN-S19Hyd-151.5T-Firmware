// FUN_0143c814 @ 0143c814 size=72 calls_out=3 calls_in=0
// strings: 

void FUN_0143c814(undefined4 *param_1)

{
  char cVar1;
  int extraout_r1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2d5c4);
  }
  uVar2 = param_1[2];
  FUN_006665a4(*param_1,param_1[1]);
  if (extraout_r1 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar2);
  return;
}

