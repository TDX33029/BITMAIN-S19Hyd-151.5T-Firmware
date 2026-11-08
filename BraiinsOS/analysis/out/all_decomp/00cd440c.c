// FUN_00cd440c @ 00cd440c size=1060 calls_out=10 calls_in=3
// strings: tuning_started | a Display implementation returned an error unexpectedly

int FUN_00cd440c(char *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_44;
  int *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 uStack_19;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  piVar6 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar6;
  if (param_1[1] != '\x01') {
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 0x2c;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*piVar6;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_30,piVar2,param_2,6);
  if ((char)local_30 != '\x04') {
LAB_00cd46e8:
    iVar3 = FUN_0157c4a0(local_30,local_2c);
    return iVar3;
  }
  piVar2 = (int *)*piVar6;
  iVar3 = piVar2[2];
  if (*piVar2 == iVar3) {
    FUN_00d653ec(piVar2,iVar3,1,1,1);
    iVar3 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar3) = 0x3a;
  piVar2[2] = piVar2[2] + 1;
  piVar2 = (int *)*piVar6;
  iVar3 = piVar2[2];
  if (*piVar2 == iVar3) {
    FUN_00d653ec(piVar2,iVar3,1,1,1);
    iVar3 = piVar2[2];
  }
  uVar4 = *(undefined4 *)(param_3 + 0x10);
  *(undefined1 *)(piVar2[1] + iVar3) = 0x7b;
  piVar2[2] = iVar3 + 1;
  local_44 = CONCAT22(local_44._2_2_,0x100);
  local_40 = piVar6;
  iVar3 = FUN_00cd2f2c(&local_44,&DAT_00567b50,4,uVar4);
  if (iVar3 == 0) {
    if ((char)local_44 != '\0') {
LAB_00cd46c8:
      local_30 = (int *)0xa;
      iVar3 = FUN_0157c50c(&local_30,0,0);
      return iVar3;
    }
    iVar3 = FUN_00cd3370(&local_44,"tuning_started",0xe,param_3);
    piVar2 = local_40;
    if (iVar3 == 0) {
      if ((char)local_44 != '\0') goto LAB_00cd46c8;
      piVar6 = (int *)*local_40;
      if (local_44._1_1_ != '\x01') {
        iVar3 = piVar6[2];
        if (*piVar6 == iVar3) {
          FUN_00d653ec(piVar6,iVar3,1,1,1);
          iVar3 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar3) = 0x2c;
        piVar6[2] = piVar6[2] + 1;
        piVar6 = (int *)*piVar2;
      }
      local_44._0_2_ = CONCAT11(2,(char)local_44);
      FUN_00cd2b24(&local_30,piVar6,&DAT_00357135,0xf);
      if ((char)local_30 != '\x04') goto LAB_00cd46e8;
      piVar6 = (int *)*piVar2;
      iVar3 = piVar6[2];
      if (*piVar6 == iVar3) {
        FUN_00d653ec(piVar6,iVar3,1,1,1);
        iVar3 = piVar6[2];
      }
      *(undefined1 *)(piVar6[1] + iVar3) = 0x3a;
      piVar6[2] = piVar6[2] + 1;
      iVar5 = *piVar2;
      local_34 = 0;
      local_2c = &DAT_01870f94;
      local_30 = &local_3c;
      local_3c = 0;
      local_24 = 0;
      local_38 = 1;
      local_28 = &DAT_60000020;
      iVar3 = FUN_00baea48(param_3 + 0x14,&local_30);
      uVar4 = local_38;
      iVar1 = local_3c;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_19,
                     &DAT_01870fac,&DAT_018af130);
      }
      FUN_00cd2b24(&local_30,iVar5,local_38,local_34);
      iVar3 = 0;
      if (((uint)local_30 & 0xff) != 4) {
        iVar3 = FUN_0157c4a0(local_30,local_2c);
      }
      if (iVar1 != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
        if (((local_44 & 0xff00) != 0) && ((local_44 & 1) == 0)) {
          piVar2 = (int *)*piVar2;
          iVar3 = piVar2[2];
          if (*piVar2 == iVar3) {
            FUN_00d653ec(piVar2,iVar3,1,1,1);
            iVar3 = piVar2[2];
          }
          *(undefined1 *)(piVar2[1] + iVar3) = 0x7d;
          piVar2[2] = iVar3 + 1;
          return 0;
        }
      }
    }
  }
  return iVar3;
}

