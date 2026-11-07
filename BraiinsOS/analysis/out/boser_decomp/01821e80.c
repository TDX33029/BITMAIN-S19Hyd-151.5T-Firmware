// FUN_01821e80 @ 01821e80 size=128 calls_out=2 calls_in=1
// strings: cannot poll Select twice

undefined4 FUN_01821e80(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((int *)*param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("cannot poll Select twice",0x18,&DAT_01d2d034);
  }
  iVar1 = FUN_0170f990(*(int *)*param_1 + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(((undefined4 *)param_1[1])[1] + 0xc))(*(undefined4 *)param_1[1],param_2);
    uVar2 = 1;
    if (iVar1 != 0) {
      return 2;
    }
  }
  *param_1 = 0;
  return uVar2;
}

