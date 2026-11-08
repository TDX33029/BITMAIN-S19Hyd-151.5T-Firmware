// FUN_01a76658 @ 01a76658 size=140 calls_out=2 calls_in=4
// strings: bytes remaining on stream

void FUN_01a76658(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01a3bee8(&iStack_2c);
  piVar1 = param_1 + 1;
  if (iStack_2c == 1) {
    *piVar1 = iStack_28;
    param_1[2] = uStack_24;
  }
  else {
    if (iStack_28 != 0) {
      uVar2 = 0;
      param_1[1] = iStack_28;
      param_1[2] = uStack_24;
      param_1[3] = local_20;
      param_1[4] = local_1c;
      goto LAB_01a766a8;
    }
    if (*(int *)(param_3 + 4) == 0) {
      uVar2 = 0;
      *piVar1 = 0;
      goto LAB_01a766a8;
    }
    FUN_019a18a8(piVar1,0x28,"bytes remaining on stream",0x19);
  }
  uVar2 = 1;
LAB_01a766a8:
  *param_1 = uVar2;
  return;
}

