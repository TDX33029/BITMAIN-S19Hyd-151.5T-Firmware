// FUN_007a395c @ 007a395c size=168 calls_out=1 calls_in=0
// strings: 

void FUN_007a395c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *unaff_r5;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = *(int *)(param_1 + 8) != 0;
  uVar1 = 0;
  if (bVar7) {
    unaff_r5 = (uint *)(param_1 + 0x14);
    uVar1 = *unaff_r5;
  }
  if (bVar7 && uVar1 != 0x80000006) {
    uVar3 = 4;
    if ((int)uVar1 < 0) {
      uVar3 = uVar1 ^ 0x80000000;
    }
    iVar4 = 0x10;
    iVar6 = 0x1c;
    iVar2 = 0x18;
    iVar5 = 4;
    switch(uVar3) {
    case 1:
      iVar5 = 8;
      if (*(uint *)(param_1 + 0x18) < 2) goto switchD_007a39bc_caseD_2;
      break;
    case 2:
    case 3:
      goto switchD_007a39bc_caseD_2;
    case 4:
      FUN_019bb7e0(uVar1,*(undefined4 *)(param_1 + 0x18));
      iVar4 = 0x18;
      iVar6 = 0x24;
      iVar2 = 0x20;
    case 0:
      FUN_019bb7e0(*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(param_1 + iVar6));
      iVar5 = iVar4;
    }
    FUN_019bb7e0(*(undefined4 *)((int)unaff_r5 + iVar5),((undefined4 *)((int)unaff_r5 + iVar5))[1]);
  }
switchD_007a39bc_caseD_2:
                    /* WARNING: Could not recover jumptable at 0x007a398c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

