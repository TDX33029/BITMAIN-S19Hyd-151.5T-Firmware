// FUN_006a1e6c @ 006a1e6c size=392 calls_out=4 calls_in=1
// strings: 0  NoVerifier

int * FUN_006a1e6c(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_28;
  
  uVar3 = *(uint *)(param_1 + 0x90);
  if (2 < uVar3) {
    return (int *)0x0;
  }
  if (uVar3 == 0) {
    local_44 = 0;
    local_4c = "0\r\n\r\nNoVerifier";
    uVar8 = 5;
    local_50 = 3;
    local_48 = 5;
    FUN_0075caa4(param_1 + 0x128,&local_50);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar8 = 6;
    }
    if (*(int *)(param_1 + 0x90) == 2) {
      uVar8 = 6;
    }
    if ((*(int *)(param_1 + 0x90) == 0) && (iVar4 = *(int *)(param_1 + 0x94), iVar4 != -0x80000000))
    {
      iVar7 = *(int *)(param_1 + 0x98);
      iVar5 = *(int *)(param_1 + 0x9c) + 1;
      iVar6 = 0;
      while (iVar5 = iVar5 + -1, iVar5 != 0) {
        piVar1 = (int *)(iVar7 + iVar6);
        iVar6 = iVar6 + 0x14;
        (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
      }
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
    }
    *(undefined4 *)(param_1 + 0x90) = uVar8;
    return (int *)0x0;
  }
  uVar8 = 6;
  if (uVar3 == 1) {
    iVar4 = *(int *)(param_1 + 0x98);
    iVar5 = *(int *)(param_1 + 0x9c);
    if (iVar4 != 0 || iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x90) = 6;
      piVar1 = (int *)thunk_FUN_016d4a50(0xc);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *(undefined2 *)(piVar1 + 2) = 0x101;
      *piVar1 = 0;
      local_28 = piVar1;
      piVar2 = (int *)thunk_FUN_016d4a50(8);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,8);
      }
      *piVar2 = iVar4;
      piVar2[1] = iVar5;
      *piVar1 = (int)piVar2;
      piVar1[1] = (int)&DAT_0185a580;
      return piVar1;
    }
    uVar8 = 5;
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar8 = 6;
    }
  }
  *(undefined4 *)(param_1 + 0x90) = uVar8;
  return (int *)0x0;
}

