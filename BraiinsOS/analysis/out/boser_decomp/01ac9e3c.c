// FUN_01ac9e3c @ 01ac9e3c size=220 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01ac9e3c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ushort *)(param_1 + 0x1e);
    iVar4 = 1;
    if (9 < uVar1) {
      iVar4 = 2;
      if (99 < uVar1) {
        iVar4 = 3;
      }
      if ((999 < uVar1) && (iVar4 = 5, uVar1 < 10000)) {
        iVar4 = 4;
      }
    }
    uVar3 = *(int *)(param_1 + 0x2c) + 1 + iVar4;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x2c);
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x14);
  if (uVar3 < uVar2) goto LAB_01ac9ee4;
  if (uVar2 != 0) {
    if (uVar2 < uVar5) {
      if (*(char *)(iVar4 + uVar2) < -0x40) goto LAB_01ac9ee4;
    }
    else if (uVar2 != uVar5) goto LAB_01ac9ee4;
  }
  if (uVar3 != 0) {
    if (uVar3 < uVar5) {
      if (*(char *)(iVar4 + uVar3) < -0x40) {
LAB_01ac9ee4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar4,uVar5,uVar2,uVar3,param_2);
      }
    }
    else if (uVar3 != uVar5) goto LAB_01ac9ee4;
  }
  return CONCAT44(uVar3 - uVar2,iVar4 + uVar2);
}

