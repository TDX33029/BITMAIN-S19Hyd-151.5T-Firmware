// FUN_00ecf3c4 @ 00ecf3c4 size=1192 calls_out=7 calls_in=0
// strings: stats | stats | mining | work_solver

int FUN_00ecf3c4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_3c;
  int *local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c [3];
  
  piVar4 = (int *)*param_2;
  *(undefined1 *)(param_2 + 4) = 0;
  iVar1 = piVar4[2];
  iVar7 = *piVar4;
  param_2[3] = param_2[3] + 1;
  if (iVar7 == iVar1) {
    FUN_00edff4c(piVar4,iVar1,1,1,1);
    iVar1 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar1) = 0x7b;
  piVar4[2] = iVar1 + 1;
  local_3c = CONCAT22(local_3c._2_2_,0x100);
  local_38 = param_2;
  iVar1 = FUN_00e5b230(&local_3c,"stats",5);
  piVar4 = local_38;
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((char)local_3c == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  piVar5 = (int *)*local_38;
  iVar1 = piVar5[2];
  if ((uint)(*piVar5 - iVar1) < 2) {
    FUN_00edff4c(piVar5,iVar1,2,1,1);
    iVar1 = piVar5[2];
  }
  iVar7 = *param_1;
  iVar2 = param_1[1];
  piVar5[2] = iVar1 + 2;
  *(undefined2 *)(piVar5[1] + iVar1) = 0x203a;
  if (iVar7 == 2 && iVar2 == 0) {
    piVar3 = (int *)*piVar4;
    iVar7 = piVar3[2];
    if ((uint)(*piVar3 - iVar7) < 4) {
      FUN_00edff4c(piVar3,iVar7,4,1,1);
      iVar7 = piVar3[2];
    }
    *(undefined4 *)(piVar3[1] + iVar7) = 0x6c6c756e;
    iVar7 = iVar7 + 4;
  }
  else {
    piVar5 = (int *)*piVar4;
    *(undefined1 *)(piVar4 + 4) = 0;
    iVar1 = piVar5[2];
    iVar7 = *piVar5;
    piVar4[3] = piVar4[3] + 1;
    if (iVar7 == iVar1) {
      FUN_00edff4c(piVar5,iVar1,1,1,1);
      iVar1 = piVar5[2];
    }
    local_30 = piVar4;
    *(undefined1 *)(piVar5[1] + iVar1) = 0x7b;
    piVar5[2] = iVar1 + 1;
    local_34 = CONCAT22(local_34._2_2_,0x100);
    iVar1 = FUN_00e5b898(&local_34,"mining",param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((char)local_34 == '\x01') {
      local_2c[0] = 10;
      iVar1 = FUN_0157c50c(local_2c,0,0);
      return iVar1;
    }
    iVar1 = FUN_00e66358(&local_34,"work_solver",param_1 + 0x3a);
    piVar5 = local_30;
    if (iVar1 != 0) {
      return iVar1;
    }
    if (((local_34 & 0xff00) == 0) || ((local_34 & 1) != 0)) goto LAB_00ecf4c0;
    piVar3 = (int *)*local_30;
    iVar1 = local_30[3] + -1;
    local_30[3] = iVar1;
    if ((char)local_30[4] == '\0') {
      iVar7 = piVar3[2];
    }
    else {
      iVar2 = piVar3[2];
      if (*piVar3 == iVar2) {
        FUN_00edff4c(piVar3,iVar2,1,1,1);
        iVar2 = piVar3[2];
      }
      iVar6 = piVar5[1];
      uVar8 = piVar5[2];
      iVar7 = iVar2 + 1;
      piVar3[2] = iVar7;
      *(undefined1 *)(piVar3[1] + iVar2) = 10;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        if ((uint)(*piVar3 - iVar7) < uVar8) {
          FUN_00edff4c(piVar3,iVar7,uVar8,1,1);
          iVar7 = piVar3[2];
        }
        FUN_016dd1aa(piVar3[1] + iVar7,iVar6,uVar8);
        iVar7 = iVar7 + uVar8;
        piVar3[2] = iVar7;
      }
    }
    if (*piVar3 == iVar7) {
      FUN_00edff4c(piVar3,iVar7,1,1,1);
      iVar7 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar7) = 0x7d;
    iVar7 = iVar7 + 1;
  }
  piVar3[2] = iVar7;
LAB_00ecf4c0:
  *(undefined1 *)(piVar4 + 4) = 1;
  if (((local_3c & 0xff00) == 0) || ((local_3c & 1) != 0)) {
    return 0;
  }
  piVar5 = (int *)*piVar4;
  iVar7 = piVar5[2];
  iVar1 = piVar4[3] + -1;
  iVar2 = *piVar5;
  piVar4[3] = iVar1;
  if (iVar2 == iVar7) {
    FUN_00edff4c(piVar5,iVar7,1,1,1);
    iVar7 = piVar5[2];
  }
  uVar8 = piVar4[2];
  iVar2 = iVar7 + 1;
  iVar6 = piVar4[1];
  piVar5[2] = iVar2;
  *(undefined1 *)(piVar5[1] + iVar7) = 10;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if ((uint)(*piVar5 - iVar2) < uVar8) {
      FUN_00edff4c(piVar5,iVar2,uVar8,1,1);
      iVar2 = piVar5[2];
    }
    FUN_016dd1aa(piVar5[1] + iVar2,iVar6,uVar8);
    iVar2 = iVar2 + uVar8;
    piVar5[2] = iVar2;
  }
  if (*piVar5 == iVar2) {
    FUN_00edff4c(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x7d;
  piVar5[2] = iVar2 + 1;
  return 0;
}

