// FUN_00f9872c @ 00f9872c size=284 calls_out=2 calls_in=1
// strings: `Extensions` tracks values by type

int FUN_00f9872c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar7;
  int *piVar6;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  piVar3 = *(int **)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8) << 4;
  uVar4 = 0xffffffff;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar5 = *piVar3;
    piVar6 = piVar3 + 1;
    piVar7 = piVar3 + 2;
    iVar2 = iVar2 + -0x10;
    piVar1 = piVar3 + 3;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 4;
  } while ((iVar5 != -0x7e2dea42 || *piVar7 != -0x2f8246a2) ||
           (*piVar6 != 0x4c65521b || *piVar1 != 0x76f4a2ad));
  if (*(uint *)(param_1 + 0x14) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,*(uint *)(param_1 + 0x14),&DAT_01880824);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x10) + uVar4 * 0x18);
  iVar2 = piVar3[1];
  iVar5 = *piVar3 + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8;
  (**(code **)(iVar2 + 0xc))(&local_38,iVar5);
  if ((local_38 != -0x7e2dea42 || iStack_30 != -0x2f8246a2) ||
      (iStack_34 != 0x4c65521b || iStack_2c != 0x76f4a2ad)) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
  return iVar5;
}

