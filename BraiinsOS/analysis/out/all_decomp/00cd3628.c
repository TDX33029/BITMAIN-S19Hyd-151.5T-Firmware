// FUN_00cd3628 @ 00cd3628 size=1108 calls_out=12 calls_in=1
// strings: estimated_power | fan_pwm

int FUN_00cd3628(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  piVar4 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar4;
  if (param_1[1] != '\x01') {
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 0x2c;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*piVar4;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_30,piVar2,param_2,param_3);
  if ((char)local_30 == '\x04') {
    piVar2 = (int *)*piVar4;
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 0x3a;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*piVar4;
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    iVar5 = *(int *)(param_4 + 0x48);
    iVar6 = *(int *)(param_4 + 0x4c);
    *(undefined1 *)(piVar2[1] + iVar3) = 0x7b;
    piVar2[2] = iVar3 + 1;
    local_38 = CONCAT22(local_38._2_2_,0x200);
    local_34 = piVar4;
    FUN_00cd2b24(&local_30,*piVar4,&DAT_0035459b,0xe);
    if ((char)local_30 == '\x04') {
      piVar2 = (int *)*piVar4;
      iVar3 = piVar2[2];
      if (*piVar2 == iVar3) {
        FUN_00d653ec(piVar2,iVar3,1,1,1);
        iVar3 = piVar2[2];
      }
      *(undefined1 *)(piVar2[1] + iVar3) = 0x3a;
      piVar2[2] = piVar2[2] + 1;
      piVar2 = (int *)*piVar4;
      iVar3 = piVar2[2];
      if (*piVar2 == iVar3) {
        FUN_00d653ec(piVar2,iVar3,1,1,1);
        iVar3 = piVar2[2];
      }
      *(undefined1 *)(piVar2[1] + iVar3) = 0x5b;
      iVar3 = piVar2[2] + 1;
      piVar2[2] = iVar3;
      if (iVar6 == 0) {
        iVar1 = *piVar2;
LAB_00cd37b4:
        if (iVar1 == iVar3) {
          FUN_00d653ec(piVar2,iVar3,1,1,1);
          iVar3 = piVar2[2];
        }
        *(undefined1 *)(piVar2[1] + iVar3) = 0x5d;
        piVar2[2] = piVar2[2] + 1;
        iVar3 = FUN_00cd2de4(&local_38,param_4);
        if (iVar3 == 0) {
          if ((char)local_38 != '\0') {
LAB_00cd3960:
            local_30 = 10;
            iVar3 = FUN_0157c50c(&local_30,0,0);
            return iVar3;
          }
          iVar3 = FUN_00cd3218((int)*(undefined8 *)(param_4 + 0x28),&local_38,&DAT_003545a9,0x11);
          if (iVar3 == 0) {
            if ((char)local_38 != '\0') goto LAB_00cd3960;
            uVar7 = FUN_00cd3218((int)*(undefined8 *)(param_4 + 0x30),&local_38,"estimated_power",
                                 0xf);
            iVar3 = (int)uVar7;
            if (((iVar3 == 0) &&
                (iVar3 = FUN_00c0309c(&local_38,(int)((ulonglong)uVar7 >> 0x20),
                                      *(undefined4 *)(param_4 + 0x18),
                                      *(undefined4 *)(param_4 + 0x1c),
                                      *(undefined4 *)(param_4 + 0x20)), iVar3 == 0)) &&
               (iVar3 = FUN_00c0326c(&local_38,param_4 + 0x38), iVar3 == 0)) {
              if ((char)local_38 != '\0') goto LAB_00cd3960;
              iVar3 = FUN_00cd2f2c(&local_38,"fan_pwm",7,*(undefined4 *)(param_4 + 0x50));
              if (((iVar3 == 0) && (iVar3 = 0, (local_38 & 0xff00) != 0)) && ((local_38 & 1) == 0))
              {
                FUN_00cde0e0(*local_34,"}",1);
                return 0;
              }
            }
          }
        }
      }
      else {
        iVar3 = FUN_00c02530(iVar5,piVar4);
        if (iVar3 == 0) {
          iVar6 = iVar6 * 0x48;
          do {
            iVar6 = iVar6 + -0x48;
            iVar5 = iVar5 + 0x48;
            piVar2 = (int *)*piVar4;
            iVar1 = *piVar2;
            iVar3 = piVar2[2];
            if (iVar6 == 0) goto LAB_00cd37b4;
            if (iVar1 == iVar3) {
              FUN_00d653ec(piVar2,iVar3,1,1,1);
              iVar3 = piVar2[2];
            }
            *(undefined1 *)(piVar2[1] + iVar3) = 0x2c;
            piVar2[2] = piVar2[2] + 1;
            iVar3 = FUN_00c02530(iVar5,piVar4);
          } while (iVar3 == 0);
        }
      }
      return iVar3;
    }
  }
  iVar3 = FUN_0157c4a0(local_30,local_2c);
  return iVar3;
}

