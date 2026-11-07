// FUN_00f37d98 @ 00f37d98 size=920 calls_out=7 calls_in=0
// strings: x-dependsOn

int FUN_00f37d98(char *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_34;
  undefined4 *local_30;
  undefined4 local_2c [3];
  
  if (*param_1 != '\0') {
LAB_00f38014:
    local_2c[0] = 10;
    iVar2 = FUN_0157c50c(local_2c,0,0);
    return iVar2;
  }
  iVar2 = FUN_00f3ddb8(param_1,"x-dependsOn",0xb);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 == '\x01') {
LAB_00f38054:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  piVar5 = (int *)*puVar7;
  iVar2 = piVar5[2];
  if ((uint)(*piVar5 - iVar2) < 2) {
    FUN_00f411dc(piVar5,iVar2,2,1,1);
    iVar2 = piVar5[2];
  }
  piVar5[2] = iVar2 + 2;
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined2 *)(piVar5[1] + iVar2) = 0x203a;
  if (iVar4 == -0x80000000) {
    piVar5 = (int *)*puVar7;
    iVar3 = piVar5[2];
    if ((uint)(*piVar5 - iVar3) < 4) {
      FUN_00f411dc(piVar5,iVar3,4,1,1);
      iVar3 = piVar5[2];
    }
    *(undefined4 *)(piVar5[1] + iVar3) = 0x6c6c756e;
    iVar3 = iVar3 + 4;
  }
  else {
    piVar5 = (int *)*puVar7;
    iVar2 = piVar5[2];
    iVar4 = *piVar5;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[3] = puVar7[3] + 1;
    if (iVar4 == iVar2) {
      FUN_00f411dc(piVar5,iVar2,1,1,1);
      iVar2 = piVar5[2];
    }
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(piVar5[1] + iVar2) = 0x7b;
    piVar5[2] = iVar2 + 1;
    local_34 = CONCAT22(local_34._2_2_,0x100);
    local_30 = puVar7;
    iVar2 = FUN_00f3df58(&local_34,&DAT_004145fc,3,uVar6,*(undefined4 *)(param_2 + 0x20));
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)local_34 == '\x01') goto LAB_00f38014;
    iVar2 = FUN_00f3ddb8(&local_34,&DAT_00414725,5);
    puVar1 = local_30;
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)local_34 == '\x01') goto LAB_00f38054;
    piVar5 = (int *)*local_30;
    iVar2 = piVar5[2];
    if ((uint)(*piVar5 - iVar2) < 2) {
      FUN_00f411dc(piVar5,iVar2,2,1,1);
      iVar2 = piVar5[2];
    }
    piVar5[2] = iVar2 + 2;
    *(undefined2 *)(piVar5[1] + iVar2) = 0x203a;
    iVar2 = FUN_00f3e04c(param_2,puVar1);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined1 *)(puVar1 + 4) = 1;
    if (((local_34 & 0xff00) == 0) || ((local_34 & 1) != 0)) goto LAB_00f37e54;
    piVar5 = (int *)*puVar1;
    iVar4 = piVar5[2];
    iVar2 = puVar1[3] + -1;
    iVar3 = *piVar5;
    puVar1[3] = iVar2;
    if (iVar3 == iVar4) {
      FUN_00f411dc(piVar5,iVar4,1,1,1);
      iVar4 = piVar5[2];
    }
    uVar6 = puVar1[1];
    uVar8 = puVar1[2];
    iVar3 = iVar4 + 1;
    *(undefined1 *)(piVar5[1] + iVar4) = 10;
    piVar5[2] = iVar3;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if ((uint)(*piVar5 - iVar3) < uVar8) {
        FUN_00f411dc(piVar5,iVar3,uVar8,1,1);
        iVar3 = piVar5[2];
      }
      FUN_016dd1aa(piVar5[1] + iVar3,uVar6,uVar8);
      iVar3 = iVar3 + uVar8;
      piVar5[2] = iVar3;
    }
    if (*piVar5 == iVar3) {
      FUN_00f411dc(piVar5,iVar3,1,1,1);
      iVar3 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar3) = 0x7d;
    iVar3 = iVar3 + 1;
  }
  piVar5[2] = iVar3;
LAB_00f37e54:
  *(undefined1 *)(puVar7 + 4) = 1;
  return 0;
}

