// FUN_00e69848 @ 00e69848 size=1164 calls_out=8 calls_in=1
// strings: temp_ctrl_info | Manual | Automatic | hot_c | dangerous_c

int FUN_00e69848(char *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar2 = FUN_0157c50c(&local_30,0,0);
    return iVar2;
  }
  iVar2 = FUN_00e5b230(param_1,"temp_ctrl_info",0xe);
  if (iVar2 == 0) {
    if (*param_1 == '\x01') {
LAB_00e69bbc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
    }
    puVar6 = *(undefined4 **)(param_1 + 4);
    piVar5 = (int *)*puVar6;
    iVar2 = piVar5[2];
    if ((uint)(*piVar5 - iVar2) < 2) {
      FUN_00edff4c(piVar5,iVar2,2,1,1);
      iVar2 = piVar5[2];
    }
    iVar7 = *param_2;
    iVar8 = param_2[1];
    piVar5[2] = iVar2 + 2;
    *(undefined2 *)(piVar5[1] + iVar2) = 0x203a;
    if (iVar7 == 2 && iVar8 == 0) {
      piVar5 = (int *)*puVar6;
      iVar2 = piVar5[2];
      if ((uint)(*piVar5 - iVar2) < 4) {
        FUN_00edff4c(piVar5,iVar2,4,1,1);
        iVar2 = piVar5[2];
      }
      *(undefined4 *)(piVar5[1] + iVar2) = 0x6c6c756e;
      piVar5[2] = iVar2 + 4;
LAB_00e69908:
      *(undefined1 *)(puVar6 + 4) = 1;
      return 0;
    }
    piVar5 = (int *)*puVar6;
    iVar2 = piVar5[2];
    iVar7 = *piVar5;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[3] = puVar6[3] + 1;
    if (iVar7 == iVar2) {
      FUN_00edff4c(piVar5,iVar2,1,1,1);
      iVar2 = piVar5[2];
    }
    iVar7 = param_2[0xc];
    *(undefined1 *)(piVar5[1] + iVar2) = 0x7b;
    piVar5[2] = iVar2 + 1;
    local_38 = CONCAT22(local_38._2_2_,0x100);
    local_34 = puVar6;
    iVar2 = FUN_00e5b230(&local_38,&DAT_005675d0,4);
    puVar1 = local_34;
    if (iVar2 == 0) {
      if ((char)local_38 == '\x01') goto LAB_00e69bbc;
      piVar5 = (int *)*local_34;
      iVar2 = piVar5[2];
      if ((uint)(*piVar5 - iVar2) < 2) {
        FUN_00edff4c(piVar5,iVar2,2,1,1);
        iVar2 = piVar5[2];
      }
      piVar5[2] = iVar2 + 2;
      *(undefined2 *)(piVar5[1] + iVar2) = 0x203a;
      piVar5 = (int *)*puVar1;
      if ((char)iVar7 == '\0') {
        iVar2 = piVar5[2];
        if (*piVar5 == iVar2) {
          FUN_00edff4c(piVar5,iVar2,1,1,1);
          iVar2 = piVar5[2];
        }
        *(undefined1 *)(piVar5[1] + iVar2) = 0x22;
        pcVar3 = "Automatic";
        piVar5[2] = iVar2 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        uVar4 = 9;
      }
      else if ((char)iVar7 == '\x01') {
        iVar2 = piVar5[2];
        if (*piVar5 == iVar2) {
          FUN_00edff4c(piVar5,iVar2,1,1,1);
          iVar2 = piVar5[2];
        }
        *(undefined1 *)(piVar5[1] + iVar2) = 0x22;
        pcVar3 = "Manual";
        piVar5[2] = iVar2 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        uVar4 = 6;
      }
      else {
        iVar2 = piVar5[2];
        if (*piVar5 == iVar2) {
          FUN_00edff4c(piVar5,iVar2,1,1,1);
          iVar2 = piVar5[2];
        }
        *(undefined1 *)(piVar5[1] + iVar2) = 0x22;
        pcVar3 = &DAT_005699f0;
        piVar5[2] = iVar2 + 1;
        local_30 = CONCAT31(local_30._1_3_,4);
        uVar4 = 8;
      }
      FUN_00e57bb4(&local_30,piVar5,pcVar3,uVar4);
      if ((char)local_30 == '\x04') {
        iVar2 = piVar5[2];
        if (*piVar5 == iVar2) {
          FUN_00edff4c(piVar5,iVar2,1,1,1);
          iVar2 = piVar5[2];
        }
        *(undefined1 *)(piVar5[1] + iVar2) = 0x22;
        piVar5[2] = iVar2 + 1;
      }
      else {
        iVar2 = FUN_0157c4a0(local_30,local_2c);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      *(undefined1 *)(puVar1 + 4) = 1;
      iVar2 = FUN_00e687a8((int)*(undefined8 *)(param_2 + 2),&local_38,&DAT_0056a888,8);
      if (((iVar2 == 0) &&
          (iVar2 = FUN_00e687a8((int)*(undefined8 *)(param_2 + 6),&local_38,"hot_c",5,param_2[5],
                                param_2[4],param_2[5]), iVar2 == 0)) &&
         (iVar2 = FUN_00e687a8((int)*(undefined8 *)(param_2 + 10),&local_38,"dangerous_c",0xb,
                               param_2[9],param_2[8],param_2[9]), iVar2 == 0)) {
        local_30 = local_38;
        local_2c = local_34;
        FUN_00e5c7e0(&local_30);
        goto LAB_00e69908;
      }
    }
  }
  return iVar2;
}

