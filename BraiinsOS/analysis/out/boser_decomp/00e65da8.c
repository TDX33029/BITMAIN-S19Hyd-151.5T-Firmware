// FUN_00e65da8 @ 00e65da8 size=200 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_00e65da8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_2c;
  undefined4 uStack_28;
  int local_24;
  
  *(undefined4 *)(param_2 + 8) = 0;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  FUN_01968828(&iStack_2c,param_2 + 0xc);
  if (iStack_2c != 2) {
    uVar2 = 0;
    if (local_24 < 0) {
LAB_00e65df8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar2,local_24);
    }
    if (local_24 == 0) {
      iVar1 = 1;
      iVar3 = 0;
    }
    else {
      uVar2 = 1;
      iVar1 = FUN_01298504(local_24,1);
      iVar3 = local_24;
      if (iVar1 == 0) goto LAB_00e65df8;
    }
    FUN_01bed4e2(iVar1,uStack_28,local_24);
    if (*param_1 != -0x80000000) {
      FUN_019bb7e0(*param_1,param_1[1]);
    }
    uStack_28 = 0;
    *param_1 = iVar3;
    param_1[1] = iVar1;
    param_1[2] = local_24;
  }
  return uStack_28;
}

