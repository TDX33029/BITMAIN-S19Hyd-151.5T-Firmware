// FUN_012c1ef4 @ 012c1ef4 size=216 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_012c1ef4(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r7;
  uint uVar3;
  
  if (param_2 < param_4) {
    uVar1 = 0;
  }
  else {
    unaff_r7 = param_2 - param_4;
    uVar1 = param_2;
    for (uVar3 = 0; unaff_r7 != uVar3; uVar3 = uVar3 + 1) {
      if (param_2 < uVar3) {
        unaff_r7 = uVar3;
        goto LAB_012c1fb0;
      }
      if ((param_4 <= uVar1) &&
         (iVar2 = thunk_FUN_01bed842(param_3,param_1 + uVar3,param_4), iVar2 == 0)) {
        uVar1 = 1;
        unaff_r7 = uVar3;
        goto LAB_012c1f9c;
      }
      uVar1 = uVar1 - 1;
    }
    if (param_2 < unaff_r7) {
LAB_012c1fb0:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(unaff_r7,param_2,param_2,&DAT_01ce297c);
    }
    uVar1 = 0;
    if (param_4 <= param_2 - unaff_r7) {
      iVar2 = thunk_FUN_01bed842(param_3,param_1 + unaff_r7,param_4);
      uVar1 = (uint)(iVar2 == 0);
    }
  }
LAB_012c1f9c:
  return CONCAT44(unaff_r7,uVar1);
}

