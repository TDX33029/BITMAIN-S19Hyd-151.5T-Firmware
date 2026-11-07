// FUN_00e6bd18 @ 00e6bd18 size=932 calls_out=6 calls_in=1
// strings: 

int FUN_00e6bd18(char *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 local_30 [3];
  
  if (*param_1 != '\0') {
    local_30[0] = 10;
    iVar2 = FUN_0157c50c(local_30,0,0);
    return iVar2;
  }
  iVar2 = FUN_00e5b230(param_1,&DAT_0056a170,8);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar8 = *(undefined4 **)(param_1 + 4);
  piVar4 = (int *)*puVar8;
  iVar2 = piVar4[2];
  if ((uint)(*piVar4 - iVar2) < 2) {
    FUN_00edff4c(piVar4,iVar2,2,1,1);
    iVar2 = piVar4[2];
  }
  piVar4[2] = iVar2 + 2;
  iVar9 = *(int *)(param_2 + 4);
  iVar10 = *(int *)(param_2 + 8);
  *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
  piVar4 = (int *)*puVar8;
  iVar5 = puVar8[3];
  *(undefined1 *)(puVar8 + 4) = 0;
  iVar2 = piVar4[2];
  iVar3 = *piVar4;
  puVar8[3] = iVar5 + 1;
  if (iVar3 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar2) = 0x5b;
  piVar4[2] = iVar2 + 1;
  if (iVar10 == 0) {
    puVar8[3] = iVar5;
  }
  else {
    iVar2 = iVar10 * 0x2e0 + iVar9;
    bVar1 = true;
    do {
      piVar4 = (int *)*puVar8;
      if (bVar1) {
        iVar3 = piVar4[2];
        if (*piVar4 == iVar3) {
          FUN_00edff4c(piVar4,iVar3,1,1,1);
          iVar3 = piVar4[2];
        }
        iVar5 = iVar3 + 1;
        *(undefined1 *)(piVar4[1] + iVar3) = 10;
      }
      else {
        iVar3 = piVar4[2];
        if ((uint)(*piVar4 - iVar3) < 2) {
          FUN_00edff4c(piVar4,iVar3,2,1,1);
          iVar3 = piVar4[2];
        }
        iVar5 = iVar3 + 2;
        *(undefined2 *)(piVar4[1] + iVar3) = 0xa2c;
      }
      iVar3 = puVar8[3];
      uVar7 = puVar8[1];
      uVar6 = puVar8[2];
      piVar4[2] = iVar5;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if ((uint)(*piVar4 - iVar5) < uVar6) {
          FUN_00edff4c(piVar4,iVar5,uVar6,1,1);
          iVar5 = piVar4[2];
        }
        FUN_016dd1aa(piVar4[1] + iVar5,uVar7,uVar6);
        iVar5 = iVar5 + uVar6;
        piVar4[2] = iVar5;
      }
      iVar3 = FUN_00e67ce8(iVar9,puVar8);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar9 = iVar9 + 0x2e0;
      *(undefined1 *)(puVar8 + 4) = 1;
      bVar1 = false;
    } while (iVar9 != iVar2);
    piVar4 = (int *)*puVar8;
    iVar3 = piVar4[2];
    iVar2 = puVar8[3] + -1;
    iVar5 = *piVar4;
    puVar8[3] = iVar2;
    if (iVar5 == iVar3) {
      FUN_00edff4c(piVar4,iVar3,1,1,1);
      iVar3 = piVar4[2];
    }
    iVar5 = iVar3 + 1;
    uVar7 = puVar8[1];
    uVar6 = puVar8[2];
    piVar4[2] = iVar5;
    *(undefined1 *)(piVar4[1] + iVar3) = 10;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if ((uint)(*piVar4 - iVar5) < uVar6) {
        FUN_00edff4c(piVar4,iVar5,uVar6,1,1);
        iVar5 = piVar4[2];
      }
      FUN_016dd1aa(piVar4[1] + iVar5,uVar7,uVar6);
      iVar5 = iVar5 + uVar6;
      piVar4[2] = iVar5;
    }
  }
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar2) = 0x5d;
  piVar4[2] = iVar2 + 1;
  *(undefined1 *)(puVar8 + 4) = 1;
  return 0;
}

