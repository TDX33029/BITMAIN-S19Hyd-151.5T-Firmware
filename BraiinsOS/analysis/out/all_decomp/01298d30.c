// FUN_01298d30 @ 01298d30 size=200 calls_out=2 calls_in=9
// strings: 

undefined4 FUN_01298d30(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar3 < uVar1) {
LAB_01298ddc:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,uVar3,&DAT_01890988);
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x24);
  bVar4 = uVar1 == 1;
  if (bVar4) {
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if ((!bVar4 || uVar1 != 0) &&
     ((*(char *)(param_1 + 0x2c) == '\0' || (*(int *)(param_1 + 0x28) != 0)))) {
    if (*(char *)(param_1 + 0x34) != '\0') {
      iVar2 = *(int *)(param_1 + 0x30);
      if (iVar2 == 0) goto LAB_01298dec;
      uVar3 = *(uint *)(iVar2 + 0x28);
      uVar1 = *(uint *)(iVar2 + 0x2c);
      if (uVar3 < uVar1) goto LAB_01298ddc;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x3c);
    bVar4 = uVar1 == 1;
    if (bVar4) {
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if (!bVar4 || uVar1 != 0) {
      if (*(char *)(param_1 + 0x44) != '\0') {
        iVar2 = *(int *)(param_1 + 0x40);
        if (iVar2 == 0) goto LAB_01298dec;
        uVar3 = *(uint *)(iVar2 + 0x28);
        uVar1 = *(uint *)(iVar2 + 0x2c);
        if (uVar3 < uVar1) goto LAB_01298ddc;
      }
      return 1;
    }
  }
LAB_01298dec:
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_01890768);
}

