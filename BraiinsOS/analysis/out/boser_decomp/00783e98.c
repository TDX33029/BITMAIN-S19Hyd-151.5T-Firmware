// FUN_00783e98 @ 00783e98 size=384 calls_out=4 calls_in=1
// strings: invalid key

void FUN_00783e98(uint *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  FUN_01656cb0(&local_34,param_1 + 1);
  if (local_34 == 1) {
    local_24 = local_2c;
    local_28 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01c08e5c,&DAT_01c08de0);
  }
  if (*(uint *)(local_30 + 0x10) <= param_2) {
LAB_00784004:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("invalid key",0xb,&DAT_01c08df0);
  }
  uVar7 = *(uint *)(local_30 + 0x18);
  puVar6 = (uint *)(*(int *)(local_30 + 0xc) + param_2 * 0xc);
  uVar8 = *puVar6;
  uVar3 = puVar6[1];
  uVar5 = puVar6[2];
  *puVar6 = 0;
  puVar6[1] = uVar7;
  if ((uVar8 & 1) == 0) {
    puVar6[1] = uVar3;
    goto LAB_00784004;
  }
  iVar9 = *(int *)(local_30 + 0x14) + -1;
  *(int *)(local_30 + 0x14) = iVar9;
  *(uint *)(local_30 + 0x18) = param_2;
  if ((param_3 == 0) || (uVar3 != 0)) {
    if (uVar3 == 0) goto LAB_00783f94;
    (**(code **)(uVar3 + 0xc))(uVar5);
  }
  else {
    iVar9 = *(int *)(local_30 + 0x10) * 0xc;
    piVar2 = (int *)(*(int *)(local_30 + 0xc) + -0xc);
    do {
      piVar4 = piVar2;
      if (iVar9 == 0) goto LAB_00783f90;
      iVar9 = iVar9 + -0xc;
      piVar2 = piVar4 + 3;
    } while (piVar4[3] != 1);
    iVar9 = piVar4[4];
    piVar4[4] = 0;
    if (iVar9 != 0) {
      (**(code **)(iVar9 + 4))(piVar4[5]);
    }
  }
LAB_00783f90:
  iVar9 = *(int *)(local_30 + 0x14);
LAB_00783f94:
  if (iVar9 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = *param_1 & 0xfffffffd;
  }
  FUN_00a97e8c(local_30,local_2c);
  return;
}

