// function @ 00c02530  size=1356  volt_strings=1
// strings: paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended | chip_params_setstruct Profile with 4 elementsstruct Registry with 2 elementsstruct ChainProfile with 4 elementsstruct Configuration with 3 elementsstruct MultiConfiguration with 7 elementsstruct McrDatastruct McrData with 4 elements | inner | voltage | origin

int FUN_00c02530(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar3 = (int *)*param_2;
  iVar2 = piVar3[2];
  if (*piVar3 == iVar2) {
    FUN_00d653ec(piVar3,iVar2,1,1,1);
    iVar2 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar2) = 0x7b;
  piVar3[2] = iVar2 + 1;
  local_40 = CONCAT22(local_40._2_2_,0x200);
  local_3c = param_2;
  FUN_00cd2b24(&local_30,*param_2,
               "paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended"
               ,6);
  if ((char)local_30 != '\x04') {
    iVar2 = FUN_0157c4a0(local_30,local_2c);
    return iVar2;
  }
  piVar3 = (int *)*param_2;
  iVar2 = piVar3[2];
  if (*piVar3 == iVar2) {
    FUN_00d653ec(piVar3,iVar2,1,1,1);
    iVar2 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
  piVar3[2] = piVar3[2] + 1;
  piVar3 = (int *)*param_2;
  iVar2 = piVar3[2];
  if (*piVar3 == iVar2) {
    FUN_00d653ec(piVar3,iVar2,1,1,1);
    iVar2 = piVar3[2];
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar5 = *(int *)(param_1 + 0x40);
  *(undefined1 *)(piVar3[1] + iVar2) = 0x7b;
  piVar3[2] = iVar2 + 1;
  local_38 = CONCAT22(local_38._2_2_,0x200);
  local_34 = param_2;
  FUN_00cd2b24(&local_30,*param_2,
               "chip_params_setstruct Profile with 4 elementsstruct Registry with 2 elementsstruct ChainProfile with 4 elementsstruct Configuration with 3 elementsstruct MultiConfiguration with 7 elementsstruct McrDatastruct McrData with 4 elements"
               ,0xf);
  if ((char)local_30 == '\x04') {
    piVar3 = (int *)*param_2;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00d653ec(piVar3,iVar2,1,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
    piVar3[2] = piVar3[2] + 1;
    piVar3 = (int *)*param_2;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00d653ec(piVar3,iVar2,1,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x7b;
    piVar3[2] = iVar2 + 1;
    FUN_00cd2b24(&local_30,*param_2,"inner",5);
    if ((char)local_30 == '\x04') {
      piVar3 = (int *)*param_2;
      iVar2 = piVar3[2];
      if (*piVar3 == iVar2) {
        FUN_00d653ec(piVar3,iVar2,1,1,1);
        iVar2 = piVar3[2];
      }
      *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
      piVar3[2] = piVar3[2] + 1;
      piVar3 = (int *)*param_2;
      iVar2 = piVar3[2];
      if (*piVar3 == iVar2) {
        FUN_00d653ec(piVar3,iVar2,1,1,1);
        iVar2 = piVar3[2];
      }
      *(undefined1 *)(piVar3[1] + iVar2) = 0x5b;
      iVar2 = piVar3[2] + 1;
      piVar3[2] = iVar2;
      if (iVar5 == 0) {
        iVar1 = *piVar3;
LAB_00c02794:
        if (iVar1 == iVar2) {
          FUN_00d653ec(piVar3,iVar2,1,1,1);
          iVar2 = piVar3[2];
        }
        *(undefined1 *)(piVar3[1] + iVar2) = 0x5d;
        piVar3[2] = piVar3[2] + 1;
        piVar3 = (int *)*param_2;
        iVar2 = piVar3[2];
        if (*piVar3 == iVar2) {
          FUN_00d653ec(piVar3,iVar2,1,1,1);
          iVar2 = piVar3[2];
        }
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        *(undefined1 *)(piVar3[1] + iVar2) = 0x7d;
        piVar3[2] = iVar2 + 1;
        iVar2 = FUN_00cd4d78((int)uVar6,&local_38,"voltage",7);
        if (iVar2 == 0) {
          if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
            piVar3 = (int *)*local_34;
            iVar2 = piVar3[2];
            if (*piVar3 == iVar2) {
              FUN_00d653ec(piVar3,iVar2,1,1,1);
              iVar2 = piVar3[2];
            }
            *(undefined1 *)(piVar3[1] + iVar2) = 0x7d;
            piVar3[2] = iVar2 + 1;
          }
          iVar2 = FUN_00cd2de4(&local_40,param_1);
          if (iVar2 == 0) {
            if ((char)local_40 != '\0') {
              local_30 = 10;
              iVar2 = FUN_0157c50c(&local_30,0,0);
              return iVar2;
            }
            iVar2 = FUN_00cd440c(&local_40,"origin",param_1 + 0x18);
            if (((iVar2 == 0) && (iVar2 = 0, (local_40 & 0xff00) != 0)) && ((local_40 & 1) == 0)) {
              piVar3 = (int *)*local_3c;
              iVar2 = piVar3[2];
              if (*piVar3 == iVar2) {
                FUN_00d653ec(piVar3,iVar2,1,1,1);
                iVar2 = piVar3[2];
              }
              *(undefined1 *)(piVar3[1] + iVar2) = 0x7d;
              piVar3[2] = iVar2 + 1;
              return 0;
            }
          }
        }
      }
      else {
        iVar2 = FUN_00c4e204(iVar4,param_2);
        if (iVar2 == 0) {
          iVar5 = iVar5 * 0x18;
          do {
            iVar5 = iVar5 + -0x18;
            iVar4 = iVar4 + 0x18;
            piVar3 = (int *)*param_2;
            iVar1 = *piVar3;
            iVar2 = piVar3[2];
            if (iVar5 == 0) goto LAB_00c02794;
            if (iVar1 == iVar2) {
              FUN_00d653ec(piVar3,iVar2,1,1,1);
              iVar2 = piVar3[2];
            }
            *(undefined1 *)(piVar3[1] + iVar2) = 0x2c;
            piVar3[2] = piVar3[2] + 1;
            iVar2 = FUN_00c4e204(iVar4,param_2);
          } while (iVar2 == 0);
        }
      }
      return iVar2;
    }
  }
  iVar2 = FUN_0157c4a0(local_30,local_2c);
  return iVar2;
}

