// FUN_016917f4 @ 016917f4 size=380 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_016917f4(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_3[2];
  if (iVar1 == 0) {
    iVar1 = *param_3;
    uVar2 = param_3[1];
    if (param_2 < param_1) goto LAB_01691904;
    if (param_1 != 0) {
      if (param_1 < uVar2) {
        if (*(char *)(iVar1 + param_1) < -0x40) goto LAB_01691904;
      }
      else if (param_1 != uVar2) goto LAB_01691904;
    }
    if (param_2 != 0) {
      if (param_2 < uVar2) {
        if (*(char *)(iVar1 + param_2) < -0x40) {
LAB_01691904:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar1,uVar2,param_1,param_2,&DAT_018ae000);
        }
      }
      else if (param_2 != uVar2) goto LAB_01691904;
    }
  }
  else {
    uVar2 = param_3[3];
    if (uVar2 < param_2) {
      iVar1 = *param_3;
      uVar4 = param_3[1];
      param_2 = param_2 - uVar2;
      uVar3 = param_1 - uVar2;
      if (param_2 < uVar3) goto LAB_01691948;
      if (param_1 != uVar2) {
        if (uVar3 < uVar4) {
          if (*(char *)(iVar1 + uVar3) < -0x40) goto LAB_01691948;
        }
        else if (uVar3 != uVar4) goto LAB_01691948;
      }
      if (param_2 < uVar4) {
        if (-0x41 < *(char *)(iVar1 + param_2)) {
LAB_01691960:
          return CONCAT44(param_2 - uVar3,iVar1 + uVar3);
        }
      }
      else if (param_2 == uVar4) goto LAB_01691960;
LAB_01691948:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar1,uVar4,uVar3,param_2,&DAT_018adfe0);
    }
    if (((param_2 < param_1) ||
        (((param_1 != 0 && (param_1 < uVar2)) && (*(char *)(iVar1 + param_1) < -0x40)))) ||
       (((param_2 != 0 && (param_2 < uVar2)) && (*(char *)(iVar1 + param_2) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar1,uVar2,param_1,param_2,&DAT_018adff0);
    }
  }
  return CONCAT44(param_2 - param_1,iVar1 + param_1);
}

