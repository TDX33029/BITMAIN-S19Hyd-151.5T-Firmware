// FUN_00746658 @ 00746658 size=80 calls_out=2 calls_in=0
// strings: Ready polled after completion

void FUN_00746658(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = param_2[2];
  param_2[2] = 0x3b9aca01;
  if (iVar3 == 0x3b9aca01) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Ready polled after completion",0x1d,&DAT_018a4fc0);
  }
  FUN_016dd1aa(param_1 + 3,param_2 + 3,0x5c);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = iVar3;
  return;
}

