// FUN_01ac97e4 @ 01ac97e4 size=248 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01ac97e4(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    uVar3 = param_1[1] + 1;
    if (param_1[2] == 0) {
      uVar4 = param_1[6];
      if (uVar3 != 0) {
        if (uVar3 < uVar4) {
          if (*(char *)(param_1[5] + uVar3) < -0x40) {
LAB_01ac986c:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514();
          }
        }
        else if (uVar4 != uVar3) goto LAB_01ac986c;
      }
      iVar1 = param_1[5] + uVar3;
      iVar2 = uVar4 - uVar3;
      goto LAB_01ac98d4;
    }
    uVar4 = param_1[3];
    uVar5 = param_1[6];
    iVar1 = param_1[5];
    if (uVar4 < uVar3) goto LAB_01ac98b4;
    if (uVar3 != 0) {
      if (uVar3 < uVar5) {
        if (*(char *)(iVar1 + uVar3) < -0x40) goto LAB_01ac98b4;
      }
      else if (uVar3 != uVar5) goto LAB_01ac98b4;
    }
    if (uVar4 != 0) {
      if (uVar4 < uVar5) {
        if (*(char *)(iVar1 + uVar4) < -0x40) {
LAB_01ac98b4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar1,uVar5,uVar3,uVar4,0x1d2fa58);
        }
      }
      else if (uVar4 != uVar5) goto LAB_01ac98b4;
    }
    iVar1 = iVar1 + uVar3;
    iVar2 = uVar4 - uVar3;
  }
  else {
    iVar1 = 0;
  }
LAB_01ac98d4:
  return CONCAT44(iVar2,iVar1);
}

