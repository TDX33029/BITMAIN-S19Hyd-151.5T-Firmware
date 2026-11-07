// FUN_01ac9ac0 @ 01ac9ac0 size=160 calls_out=1 calls_in=4
// strings: 

undefined8 FUN_01ac9ac0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x34) == '\0') {
    iVar4 = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar3 = *(uint *)(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x14);
    uVar5 = *(uint *)(param_1 + 0x18);
    if (uVar3 < uVar2) goto LAB_01ac9b34;
    if (uVar2 != 0) {
      if (uVar2 < uVar5) {
        if (*(char *)(iVar4 + uVar2) < -0x40) goto LAB_01ac9b34;
      }
      else if (uVar2 != uVar5) goto LAB_01ac9b34;
    }
    if (uVar3 != 0) {
      if (uVar3 < uVar5) {
        if (*(char *)(iVar4 + uVar3) < -0x40) {
LAB_01ac9b34:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar4,uVar5,uVar2,uVar3,0x1d2fa58);
        }
      }
      else if (uVar3 != uVar5) goto LAB_01ac9b34;
    }
    iVar4 = iVar4 + uVar2;
    iVar1 = uVar3 - uVar2;
  }
  return CONCAT44(iVar1,iVar4);
}

