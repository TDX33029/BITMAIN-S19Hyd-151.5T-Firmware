// FUN_00e61e58 @ 00e61e58 size=1776 calls_out=6 calls_in=2
// strings: 

int FUN_00e61e58(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = FUN_00e5b230();
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar10 = *(undefined4 **)(param_1 + 4);
  piVar6 = (int *)*puVar10;
  iVar2 = piVar6[2];
  if ((uint)(*piVar6 - iVar2) < 2) {
    FUN_00edff4c(piVar6,iVar2,2,1,1);
    iVar2 = piVar6[2];
  }
  piVar6[2] = iVar2 + 2;
  *(undefined2 *)(piVar6[1] + iVar2) = 0x203a;
  piVar6 = (int *)*puVar10;
  iVar7 = puVar10[3];
  *(undefined1 *)(puVar10 + 4) = 0;
  iVar2 = iVar7 + 1;
  iVar4 = piVar6[2];
  puVar10[3] = iVar2;
  if (*piVar6 == iVar4) {
    FUN_00edff4c(piVar6,iVar4,1,1,1);
    iVar4 = piVar6[2];
  }
  iVar9 = iVar4 + 1;
  piVar6[2] = iVar9;
  *(undefined1 *)(piVar6[1] + iVar4) = 0x5b;
  if (param_5 == 0) {
    puVar10[3] = iVar7;
    goto LAB_00e623b8;
  }
  uVar12 = puVar10[1];
  uVar13 = puVar10[2];
  if (iVar2 == 0) {
    uVar11 = *(undefined4 *)(param_4 + 4);
    uVar5 = *(undefined4 *)(param_4 + 8);
    if (*piVar6 == iVar9) {
      FUN_00edff4c(piVar6,iVar9,1,1,1);
      iVar9 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar9) = 10;
    iVar9 = iVar9 + 1;
    piVar6[2] = iVar9;
    if (*piVar6 == iVar9) {
      FUN_00edff4c(piVar6,iVar9,1,1,1);
      iVar9 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar9) = 0x22;
    piVar6[2] = iVar9 + 1;
    local_30 = CONCAT31(local_30._1_3_,4);
    FUN_00e57bb4(&local_30,piVar6,uVar11,uVar5);
    if ((char)local_30 != '\x04') {
LAB_00e623f0:
      iVar2 = FUN_0157c4a0(local_30,local_2c);
      return iVar2;
    }
    iVar2 = piVar6[2];
    if (*piVar6 == iVar2) {
      FUN_00edff4c(piVar6,iVar2,1,1,1);
      iVar2 = piVar6[2];
    }
    iVar9 = iVar2 + 1;
    piVar6[2] = iVar9;
    *(undefined1 *)(piVar6[1] + iVar2) = 0x22;
    *(undefined1 *)(puVar10 + 4) = 1;
    if (param_5 != 1) {
      puVar8 = (undefined4 *)(param_4 + 0x10);
      iVar2 = param_5 * 0xc + -0xc;
      do {
        uVar11 = *puVar8;
        uVar5 = puVar8[1];
        if ((uint)(*piVar6 - iVar9) < 2) {
          FUN_00edff4c(piVar6,iVar9,2,1,1);
          iVar4 = piVar6[2];
          iVar9 = iVar4;
        }
        else {
          iVar4 = piVar6[2];
        }
        iVar4 = iVar4 + 2;
        piVar6[2] = iVar4;
        *(undefined2 *)(piVar6[1] + iVar9) = 0xa2c;
        if (*piVar6 == iVar4) {
          FUN_00edff4c(piVar6,iVar4,1,1,1);
          iVar4 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar4) = 0x22;
        piVar6[2] = iVar4 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        FUN_00e57bb4(&local_30,piVar6,uVar11,uVar5);
        if ((char)local_30 != '\x04') goto LAB_00e623f0;
        iVar4 = piVar6[2];
        if (*piVar6 == iVar4) {
          FUN_00edff4c(piVar6,iVar4,1,1,1);
          iVar4 = piVar6[2];
        }
        iVar9 = iVar4 + 1;
        puVar8 = puVar8 + 3;
        iVar2 = iVar2 + -0xc;
        piVar6[2] = iVar9;
        *(undefined1 *)(piVar6[1] + iVar4) = 0x22;
        *(undefined1 *)(puVar10 + 4) = 1;
      } while (iVar2 != 0);
      goto LAB_00e62328;
    }
    iVar2 = *piVar6;
    puVar10[3] = iVar7;
    if (iVar2 == iVar9) {
      FUN_00edff4c(piVar6,iVar9,1,1,1);
      iVar2 = piVar6[2];
      iVar9 = iVar2;
    }
    else {
      iVar2 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar9) = 10;
    iVar9 = iVar2 + 1;
    piVar6[2] = iVar9;
  }
  else {
    iVar4 = param_4 + param_5 * 0xc;
    bVar1 = true;
    do {
      uVar11 = *(undefined4 *)(param_4 + 4);
      uVar5 = *(undefined4 *)(param_4 + 8);
      if (bVar1) {
        if (*piVar6 == iVar9) {
          FUN_00edff4c(piVar6,iVar9,1,1,1);
          iVar3 = piVar6[2];
          iVar9 = iVar3;
        }
        else {
          iVar3 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar9) = 10;
        iVar3 = iVar3 + 1;
      }
      else {
        if ((uint)(*piVar6 - iVar9) < 2) {
          FUN_00edff4c(piVar6,iVar9,2,1,1);
          iVar9 = piVar6[2];
        }
        iVar3 = iVar9 + 2;
        *(undefined2 *)(piVar6[1] + iVar9) = 0xa2c;
      }
      param_4 = param_4 + 0xc;
      piVar6[2] = iVar3;
      iVar9 = iVar2;
      do {
        if ((uint)(*piVar6 - iVar3) < uVar13) {
          FUN_00edff4c(piVar6,iVar3,uVar13,1,1);
          iVar3 = piVar6[2];
        }
        FUN_016dd1aa(piVar6[1] + iVar3,uVar12,uVar13);
        iVar3 = iVar3 + uVar13;
        iVar9 = iVar9 + -1;
        piVar6[2] = iVar3;
      } while (iVar9 != 0);
      if (*piVar6 == iVar3) {
        FUN_00edff4c(piVar6,iVar3,1,1,1);
        iVar3 = piVar6[2];
      }
      *(undefined1 *)(piVar6[1] + iVar3) = 0x22;
      piVar6[2] = iVar3 + 1;
      local_30 = CONCAT31(local_30._1_3_,4);
      FUN_00e57bb4(&local_30,piVar6,uVar11,uVar5);
      if ((char)local_30 != '\x04') goto LAB_00e623f0;
      iVar3 = piVar6[2];
      if (*piVar6 == iVar3) {
        FUN_00edff4c(piVar6,iVar3,1,1,1);
        iVar3 = piVar6[2];
      }
      iVar9 = iVar3 + 1;
      piVar6[2] = iVar9;
      *(undefined1 *)(piVar6[1] + iVar3) = 0x22;
      *(undefined1 *)(puVar10 + 4) = 1;
      bVar1 = false;
    } while (param_4 != iVar4);
LAB_00e62328:
    iVar2 = *piVar6;
    puVar10[3] = iVar7;
    if (iVar2 == iVar9) {
      FUN_00edff4c(piVar6,iVar9,1,1,1);
      iVar2 = piVar6[2];
      iVar9 = iVar2;
    }
    else {
      iVar2 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar9) = 10;
    iVar9 = iVar2 + 1;
    piVar6[2] = iVar9;
    if (iVar7 == 0) goto LAB_00e623b8;
  }
  do {
    if ((uint)(*piVar6 - iVar9) < uVar13) {
      FUN_00edff4c(piVar6,iVar9,uVar13,1,1);
      iVar9 = piVar6[2];
    }
    FUN_016dd1aa(piVar6[1] + iVar9,uVar12,uVar13);
    iVar9 = iVar9 + uVar13;
    iVar7 = iVar7 + -1;
    piVar6[2] = iVar9;
  } while (iVar7 != 0);
LAB_00e623b8:
  if (*piVar6 == iVar9) {
    FUN_00edff4c(piVar6,iVar9,1,1,1);
    iVar2 = piVar6[2];
    iVar9 = iVar2;
  }
  else {
    iVar2 = piVar6[2];
  }
  piVar6[2] = iVar2 + 1;
  *(undefined1 *)(piVar6[1] + iVar9) = 0x5d;
  *(undefined1 *)(puVar10 + 4) = 1;
  return 0;
}

