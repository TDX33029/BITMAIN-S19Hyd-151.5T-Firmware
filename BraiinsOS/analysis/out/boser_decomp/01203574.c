// FUN_01203574 @ 01203574 size=604 calls_out=4 calls_in=5
// strings: 

void FUN_01203574(int param_1)

{
  uint uVar1;
  uint extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_01656cb0(&local_38);
  if (local_38 == 1) {
    local_28 = local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01c23430,&DAT_01c23498);
  }
  FUN_01203378(local_34 + 8,0);
  uVar1 = *(uint *)(local_34 + 0x2c);
  uVar2 = extraout_r1;
  if (uVar1 != 0x80000000) {
    uVar2 = *(uint *)(local_34 + 0x38);
  }
  if (uVar1 != 0x80000000 && uVar2 != 0) {
    iVar9 = *(int *)(local_34 + 0x30);
    uVar3 = *(uint *)(local_34 + 0x34);
    uVar4 = uVar1;
    if (uVar3 < uVar1) {
      uVar4 = 0;
    }
    uVar6 = uVar3 - uVar4;
    iVar5 = uVar2 - (uVar1 - uVar6);
    uVar8 = 0;
    if (uVar2 < uVar1 - uVar6 || iVar5 == 0) {
      uVar1 = uVar6 + uVar2;
    }
    else {
      uVar8 = iVar5 * 8;
    }
    if (uVar1 != uVar6) {
      iVar5 = uVar1 - uVar6;
      piVar7 = (int *)(iVar9 + uVar3 * 8 + uVar4 * -8 + 4);
      do {
        uVar2 = *(uint *)(*piVar7 + 8);
        uVar1 = uVar2 - 1;
        if (uVar2 < 5) {
          uVar2 = 4;
        }
        (**(code **)(*piVar7 + 0xc))
                  (piVar7[-1] + (uVar2 - 1 & 0xfffffff8) + (uVar1 & 0xffffffcc) + 0x3c);
        piVar7 = piVar7 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (uVar8 != 0) {
      piVar7 = (int *)(iVar9 + 4);
      uVar8 = uVar8 >> 3;
      do {
        uVar2 = *(uint *)(*piVar7 + 8);
        uVar1 = uVar2 - 1;
        if (uVar2 < 5) {
          uVar2 = 4;
        }
        (**(code **)(*piVar7 + 0xc))
                  (piVar7[-1] + (uVar2 - 1 & 0xfffffff8) + (uVar1 & 0xffffffcc) + 0x3c);
        piVar7 = piVar7 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  uVar2 = *(uint *)(local_34 + 0x24);
  if (uVar2 != 0) {
    uVar1 = *(uint *)(local_34 + 0x18);
    uVar3 = *(uint *)(local_34 + 0x20);
    iVar9 = *(int *)(local_34 + 0x1c);
    uVar4 = uVar1;
    if (uVar3 < uVar1) {
      uVar4 = 0;
    }
    uVar6 = uVar3 - uVar4;
    iVar5 = uVar2 - (uVar1 - uVar6);
    uVar8 = 0;
    if (uVar2 < uVar1 - uVar6 || iVar5 == 0) {
      uVar1 = uVar6 + uVar2;
    }
    else {
      uVar8 = iVar5 * 8;
    }
    if (uVar1 != uVar6) {
      iVar5 = uVar1 - uVar6;
      piVar7 = (int *)(iVar9 + uVar3 * 8 + uVar4 * -8 + 4);
      do {
        uVar2 = *(uint *)(*piVar7 + 8);
        uVar1 = uVar2 - 1;
        if (uVar2 < 5) {
          uVar2 = 4;
        }
        (**(code **)(*piVar7 + 0xc))
                  (piVar7[-1] + (uVar2 - 1 & 0xfffffff8) + (uVar1 & 0xffffffcc) + 0x3c);
        piVar7 = piVar7 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (uVar8 != 0) {
      piVar7 = (int *)(iVar9 + 4);
      uVar8 = uVar8 >> 3;
      do {
        uVar2 = *(uint *)(*piVar7 + 8);
        uVar1 = uVar2 - 1;
        if (uVar2 < 5) {
          uVar2 = 4;
        }
        (**(code **)(*piVar7 + 0xc))
                  (piVar7[-1] + (uVar2 - 1 & 0xfffffff8) + (uVar1 & 0xffffffcc) + 0x3c);
        piVar7 = piVar7 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  FUN_00a97e8c(local_34,local_30);
  return;
}

