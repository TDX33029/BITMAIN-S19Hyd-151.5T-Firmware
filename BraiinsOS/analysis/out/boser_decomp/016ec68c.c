// FUN_016ec68c @ 016ec68c size=108 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_016ec68c(int param_1)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_016eb8ac(param_1 + 0xc);
    uVar2 = 0;
    uVar1 = extraout_r1;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      FUN_016ec544(param_1);
      uVar2 = 0xb;
      uVar1 = extraout_r1_00;
      goto LAB_016ec6ec;
    }
    uVar2 = **(undefined4 **)(param_1 + 4);
    uVar1 = (*(undefined4 **)(param_1 + 4))[1];
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_016bedfc(param_1);
LAB_016ec6ec:
  return CONCAT44(uVar1,uVar2);
}

