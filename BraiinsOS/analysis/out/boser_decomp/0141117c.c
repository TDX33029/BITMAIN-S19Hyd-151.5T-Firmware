// FUN_0141117c @ 0141117c size=228 calls_out=1 calls_in=3
// strings: 

longlong FUN_0141117c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  if (*param_1 == 2) {
    uVar1 = param_1[3] + 1;
    if (*(uint *)(param_1[2] + 0x28) <= uVar1) {
      return (ulonglong)uVar1 << 0x20;
    }
    piVar4 = (int *)(uVar1 * 0x34 + *(int *)(param_1[2] + 0x24));
    param_1[3] = uVar1;
  }
  else {
    uVar1 = param_1[2];
    uVar5 = param_1[3];
    if (*(uint *)(uVar1 + 0x28) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,*(uint *)(uVar1 + 0x28),&DAT_01cf4010);
    }
    piVar4 = (int *)(uVar5 * 0x34 + *(int *)(uVar1 + 0x24));
    if ((*param_1 & 1) != 0) {
      uVar5 = param_1[1];
      if (*(uint *)(uVar1 + 0x34) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,*(uint *)(uVar1 + 0x34),&DAT_01cf4020);
      }
      iVar2 = *(int *)(uVar1 + 0x30) + uVar5 * 0x24;
      uVar1 = 2;
      if (*(int *)(iVar2 + 8) != 0) {
        param_1[1] = *(uint *)(iVar2 + 0xc);
        uVar1 = 1;
      }
      piVar3 = (int *)(iVar2 + 0x10);
      *param_1 = uVar1;
      goto LAB_01411230;
    }
  }
  uVar1 = piVar4[1];
  *param_1 = 2 - *piVar4;
  param_1[1] = uVar1;
  piVar3 = piVar4 + 3;
LAB_01411230:
  return CONCAT44(piVar3,piVar4 + 8);
}

