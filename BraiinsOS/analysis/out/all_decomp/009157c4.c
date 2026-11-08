// FUN_009157c4 @ 009157c4 size=1016 calls_out=7 calls_in=1
// strings: tuner_modes | hashrate_target | power_target

int FUN_009157c4(char *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar2 = FUN_0157c50c(&local_30,0,0);
    return iVar2;
  }
  iVar2 = FUN_00947ca4(param_1,"tuner_modes",0xb);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar9 = *(undefined4 **)(param_1 + 4);
  piVar5 = (int *)*puVar9;
  iVar2 = piVar5[2];
  if ((uint)(*piVar5 - iVar2) < 2) {
    FUN_00933680(piVar5,iVar2,2,1,1);
    iVar2 = piVar5[2];
  }
  piVar5[2] = iVar2 + 2;
  *(undefined2 *)(piVar5[1] + iVar2) = 0x203a;
  piVar5 = (int *)*puVar9;
  iVar6 = puVar9[3];
  *(undefined1 *)(puVar9 + 4) = 0;
  puVar9[3] = iVar6 + 1;
  iVar2 = piVar5[2];
  if (*piVar5 == iVar2) {
    FUN_00933680(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x5b;
  piVar5[2] = iVar2 + 1;
  if (param_3 == 0) {
    puVar9[3] = iVar6;
    iVar2 = piVar5[2];
  }
  else {
    pcVar10 = param_2 + param_3;
    bVar1 = true;
    do {
      piVar5 = (int *)*puVar9;
      if (bVar1) {
        iVar2 = piVar5[2];
        if (*piVar5 == iVar2) {
          FUN_00933680(piVar5,iVar2,1,1,1);
          iVar2 = piVar5[2];
        }
        iVar6 = iVar2 + 1;
        *(undefined1 *)(piVar5[1] + iVar2) = 10;
      }
      else {
        iVar2 = piVar5[2];
        if ((uint)(*piVar5 - iVar2) < 2) {
          FUN_00933680(piVar5,iVar2,2,1,1);
          iVar2 = piVar5[2];
        }
        iVar6 = iVar2 + 2;
        *(undefined2 *)(piVar5[1] + iVar2) = 0xa2c;
      }
      iVar2 = puVar9[3];
      uVar8 = puVar9[1];
      uVar7 = puVar9[2];
      piVar5[2] = iVar6;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if ((uint)(*piVar5 - iVar6) < uVar7) {
          FUN_00933680(piVar5,iVar6,uVar7,1,1);
          iVar6 = piVar5[2];
        }
        FUN_016dd1aa(piVar5[1] + iVar6,uVar8,uVar7);
        iVar6 = iVar6 + uVar7;
        piVar5[2] = iVar6;
      }
      if (*param_2 == '\x01') {
        uVar8 = 0xf;
        pcVar4 = "hashrate_target";
      }
      else {
        uVar8 = 0xc;
        pcVar4 = "power_target";
      }
      FUN_00947e44(&local_30,*puVar9,pcVar4,uVar8);
      if (((char)local_30 != '\x04') && (iVar2 = FUN_0157c4a0(local_30,local_2c), iVar2 != 0)) {
        return iVar2;
      }
      param_2 = param_2 + 1;
      *(undefined1 *)(puVar9 + 4) = 1;
      bVar1 = false;
    } while (param_2 != pcVar10);
    piVar5 = (int *)*puVar9;
    iVar3 = piVar5[2];
    iVar6 = puVar9[3] + -1;
    iVar2 = *piVar5;
    puVar9[3] = iVar6;
    if (iVar2 == iVar3) {
      FUN_00933680(piVar5,iVar3,1,1,1);
      iVar3 = piVar5[2];
    }
    iVar2 = iVar3 + 1;
    uVar8 = puVar9[1];
    uVar7 = puVar9[2];
    *(undefined1 *)(piVar5[1] + iVar3) = 10;
    piVar5[2] = iVar2;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if ((uint)(*piVar5 - iVar2) < uVar7) {
        FUN_00933680(piVar5,iVar2,uVar7,1,1);
        iVar2 = piVar5[2];
      }
      FUN_016dd1aa(piVar5[1] + iVar2,uVar8,uVar7);
      iVar2 = iVar2 + uVar7;
      piVar5[2] = iVar2;
    }
  }
  if (*piVar5 == iVar2) {
    FUN_00933680(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x5d;
  piVar5[2] = iVar2 + 1;
  *(undefined1 *)(puVar9 + 4) = 1;
  return 0;
}

