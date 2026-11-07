// FUN_01b70278 @ 01b70278 size=120 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01b70278(uint *param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  uint unaff_r5;
  code *unaff_r6;
  undefined4 unaff_r7;
  
  if (param_1 != (uint *)0x0) {
    unaff_r5 = 0;
    unaff_r6 = param_2;
    unaff_r7 = param_3;
  }
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    for (; unaff_r5 < *param_1; unaff_r5 = unaff_r5 + 1) {
      uVar1 = 0;
      if (*(int *)(param_1[1] + unaff_r5 * 4) != 0) {
        (*unaff_r6)(unaff_r7);
        uVar1 = extraout_r1;
      }
    }
    uVar1 = FUN_01b7023c(param_1,uVar1);
    return uVar1;
  }
  return 0;
}

