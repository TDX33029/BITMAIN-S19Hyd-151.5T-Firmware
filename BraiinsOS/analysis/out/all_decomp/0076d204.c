// FUN_0076d204 @ 0076d204 size=1236 calls_out=12 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0076d204(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int local_4c;
  undefined1 local_48 [4];
  uint local_44;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined1 local_39;
  uint local_38;
  int local_34;
  int *local_30;
  code *local_2c;
  
  if (param_4 == 0) {
LAB_0076d66c:
    *(undefined1 *)param_1 = 4;
    return;
  }
  local_4c = param_3;
LAB_0076d274:
  if (*(int *)(param_2 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,param_2 + 0x48,&DAT_00568f30,0);
  }
  if (*(uint *)(param_2 + 0x54) != 0) {
    iVar1 = *(int *)(param_2 + 0x30);
    uVar5 = *(uint *)(param_2 + 0x54);
    while( true ) {
      if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01881ec8);
      }
      iVar6 = *(int *)(param_2 + 0x38);
      uVar2 = *(undefined4 *)(param_2 + 0x50);
      if ((uint)(iVar1 - iVar6) < uVar5) {
        FUN_006bca64(param_2 + 0x30,iVar6,uVar5,1,1);
        iVar6 = *(int *)(param_2 + 0x38);
        uVar7 = *(uint *)(param_2 + 0x54);
      }
      else {
        uVar7 = uVar5;
      }
      FUN_016dd1aa(*(int *)(param_2 + 0x34) + iVar6,uVar2,uVar5);
      *(uint *)(param_2 + 0x38) = iVar6 + uVar5;
      if (uVar7 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar5,uVar7,&DAT_018af198);
      }
      uVar7 = uVar7 - uVar5;
      *(undefined4 *)(param_2 + 0x54) = 0;
      if (uVar7 == 0) break;
      FUN_016dd52c(*(int *)(param_2 + 0x50),*(int *)(param_2 + 0x50) + uVar5,uVar7);
      *(uint *)(param_2 + 0x54) = uVar7;
      iVar1 = *(int *)(param_2 + 0x30);
      uVar5 = uVar7;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x44);
LAB_0076d344:
  if (uVar5 != 0) {
    iVar1 = *(int *)(param_2 + 0x30);
    while( true ) {
      if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01881ea8);
      }
      iVar6 = *(int *)(param_2 + 0x38);
      uVar2 = *(undefined4 *)(param_2 + 0x40);
      if ((uint)(iVar1 - iVar6) < uVar5) {
        FUN_006bca64(param_2 + 0x30,iVar6,uVar5,1,1);
        iVar6 = *(int *)(param_2 + 0x38);
        uVar7 = *(uint *)(param_2 + 0x44);
      }
      else {
        uVar7 = uVar5;
      }
      FUN_016dd1aa(*(int *)(param_2 + 0x34) + iVar6,uVar2,uVar5);
      *(uint *)(param_2 + 0x38) = iVar6 + uVar5;
      if (uVar7 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar5,uVar7,&DAT_018af198);
      }
      uVar7 = uVar7 - uVar5;
      *(undefined4 *)(param_2 + 0x44) = 0;
      if (uVar7 == 0) break;
      FUN_016dd52c(*(int *)(param_2 + 0x40),*(int *)(param_2 + 0x40) + uVar5,uVar7);
      *(uint *)(param_2 + 0x44) = uVar7;
      iVar1 = *(int *)(param_2 + 0x30);
      uVar5 = uVar7;
    }
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  piVar10 = *(int **)(param_2 + 0x28);
  uVar7 = *(uint *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x24);
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar5 = *(uint *)(param_2 + 0x3c);
  iVar8 = *(int *)(param_2 + 0x40);
  *piVar10 = local_4c;
  piVar10[1] = param_4;
  piVar10[3] = iVar8;
  piVar10[6] = 0;
  piVar10[4] = uVar5;
  local_34 = FUN_018162dc(piVar10,0);
  uVar4 = *piVar10 - local_4c;
  *piVar10 = 0;
  uVar9 = piVar10[3] - iVar8;
  piVar10[1] = 0;
  piVar10[3] = 0;
  piVar10[4] = 0;
  *(uint *)(param_2 + 0x18) = uVar7 + uVar4;
  *(uint *)(param_2 + 0x1c) = iVar1 + (uint)CARRY4(uVar7,uVar4);
  *(uint *)(param_2 + 0x20) = uVar3 + uVar9;
  *(uint *)(param_2 + 0x24) = iVar6 + (uint)CARRY4(uVar3,uVar9);
  switch(local_34) {
  case 1:
    break;
  case -5:
    local_34 = 1;
  case 0:
    if (uVar9 < uVar5) {
      uVar5 = uVar9;
    }
    *(uint *)(param_2 + 0x44) = uVar5;
    if ((uVar4 != 0) || (local_34 == 2)) goto LAB_0076d510;
    goto LAB_0076d344;
  default:
    local_30 = &local_34;
    local_2c = FUN_00fac2b8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00593ed6,&local_30,&DAT_01881fe4);
  case -2:
    iVar1 = piVar10[6];
    if (iVar1 != 0) {
      uVar2 = FUN_016dd8a2(iVar1);
      FUN_00fab1e0(&local_30,iVar1,uVar2);
    }
    if (uVar9 < uVar5) {
      uVar5 = uVar9;
    }
    *(uint *)(param_2 + 0x44) = uVar5;
    FUN_015e79d4(&local_3c,0x14,&DAT_00378037,0x16);
    *(undefined2 *)((uint)local_48 | 1) = local_3b;
    *(undefined1 *)((undefined2 *)((uint)local_48 | 1) + 1) = local_39;
    local_44 = local_38;
    local_48[0] = local_3c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(local_3c) {
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (local_38 != 0) goto LAB_0076d5cc;
    goto LAB_0076d6d8;
  }
  if (uVar9 < uVar5) {
    uVar5 = uVar9;
  }
  *(uint *)(param_2 + 0x44) = uVar5;
LAB_0076d510:
  if (param_4 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar4,param_4,&DAT_01881ee8);
  }
  FUN_010078bc(param_2,local_4c,uVar4);
  local_48[0] = 4;
  local_44 = uVar4;
  if (uVar4 == 0) {
LAB_0076d6d8:
    *param_1 = 2;
    param_1[1] = &DAT_018aeae8;
    return;
  }
LAB_0076d5cc:
  if (param_4 < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(local_44,param_4,param_4,&DAT_018aeb00);
  }
  param_4 = param_4 - local_44;
  local_4c = local_4c + local_44;
  if (param_4 == 0) goto LAB_0076d66c;
  goto LAB_0076d274;
}

