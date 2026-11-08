// FUN_015fff14 @ 015fff14 size=132 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_015fff14(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  if (uVar4 < uVar3) goto LAB_015fff70;
  if (uVar3 != 0) {
    if (uVar3 < uVar2) {
      if (*(char *)(iVar1 + uVar3) < -0x40) goto LAB_015fff70;
    }
    else if (uVar3 != uVar2) goto LAB_015fff70;
  }
  if (uVar4 != 0) {
    if (uVar4 < uVar2) {
      if (*(char *)(iVar1 + uVar4) < -0x40) {
LAB_015fff70:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514();
      }
    }
    else if (uVar4 != uVar2) goto LAB_015fff70;
  }
  return CONCAT44(uVar4 - uVar3,iVar1 + uVar3);
}

