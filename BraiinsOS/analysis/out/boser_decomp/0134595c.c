// FUN_0134595c @ 0134595c size=132 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_0134595c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  if (uVar4 < uVar3) goto LAB_013459b8;
  if (uVar3 != 0) {
    if (uVar3 < uVar2) {
      if (*(char *)(iVar1 + uVar3) < -0x40) goto LAB_013459b8;
    }
    else if (uVar3 != uVar2) goto LAB_013459b8;
  }
  if (uVar4 != 0) {
    if (uVar4 < uVar2) {
      if (*(char *)(iVar1 + uVar4) < -0x40) {
LAB_013459b8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514();
      }
    }
    else if (uVar4 != uVar2) goto LAB_013459b8;
  }
  return CONCAT44(uVar4 - uVar3,iVar1 + uVar3);
}

