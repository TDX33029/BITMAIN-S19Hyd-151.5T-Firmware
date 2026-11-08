// FUN_00e63424 @ 00e63424 size=1324 calls_out=11 calls_in=9
// strings: created_at | os_version | message_uuid | global_counter | local_counter

int FUN_00e63424(char *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar6 = (int *)*puVar7;
    iVar3 = piVar6[2];
    if (*piVar6 == iVar3) {
      FUN_00edff4c(piVar6,iVar3,1,1,1);
      iVar3 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar3) = 0x2c;
    piVar6[2] = iVar3 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_30,*puVar7,&DAT_0041118a,6);
  if ((char)local_30 != '\x04') {
LAB_00e63894:
    iVar3 = FUN_0157c4a0(local_30,local_2c);
    return iVar3;
  }
  piVar6 = (int *)*puVar7;
  iVar3 = piVar6[2];
  if (*piVar6 == iVar3) {
    FUN_00edff4c(piVar6,iVar3,1,1,1);
    iVar3 = piVar6[2];
  }
  bVar1 = *(byte *)(param_2 + 0x16);
  *(undefined1 *)(piVar6[1] + iVar3) = 0x3a;
  piVar6[2] = iVar3 + 1;
  piVar6 = (int *)*puVar7;
  iVar3 = piVar6[2];
  if (*piVar6 == iVar3) {
    FUN_00edff4c(piVar6,iVar3,1,1,1);
    iVar3 = piVar6[2];
  }
  uVar4 = param_2[2];
  *(undefined1 *)(piVar6[1] + iVar3) = 0x7b;
  piVar6[2] = iVar3 + 1;
  local_38 = CONCAT22(local_38._2_2_,0x100);
  local_34 = puVar7;
  iVar3 = FUN_00e65a20(&local_38,"created_at",10,0x7b,*param_2,param_2[1],uVar4);
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((char)local_38 != '\0') goto LAB_00e63874;
  iVar3 = FUN_00e647d0(&local_38,&DAT_00388d1f,9,param_2[0x11],param_2[0x12]);
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((char)local_38 != '\0') goto LAB_00e63874;
  iVar3 = FUN_00e647d0(&local_38,"os_version",10,param_2[0x14],param_2[0x15]);
  puVar7 = local_34;
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((char)local_38 != '\0') goto LAB_00e63874;
  uVar2 = *(undefined1 *)((int)param_2 + 0x69);
  if (local_38._1_1_ != '\x01') {
    piVar6 = (int *)*local_34;
    iVar3 = piVar6[2];
    if (*piVar6 == iVar3) {
      FUN_00edff4c(piVar6,iVar3,1,1,1);
      iVar3 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar3) = 0x2c;
    piVar6[2] = iVar3 + 1;
  }
  local_38._0_2_ = CONCAT11(2,(char)local_38);
  FUN_00e5d350(&local_30,*puVar7,&DAT_003b7c6a,0xc);
  if ((char)local_30 != '\x04') goto LAB_00e63894;
  piVar6 = (int *)*puVar7;
  iVar3 = piVar6[2];
  if (*piVar6 == iVar3) {
    FUN_00edff4c(piVar6,iVar3,1,1,1);
    iVar3 = piVar6[2];
  }
  *(undefined1 *)(piVar6[1] + iVar3) = 0x3a;
  piVar6[2] = iVar3 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    uVar4 = 0xb;
    puVar5 = &DAT_0035c466;
    break;
  case 1:
    uVar4 = 10;
    puVar5 = &DAT_0035c471;
    break;
  case 2:
    uVar4 = 8;
    puVar5 = &DAT_00569fa8;
    break;
  case 3:
    uVar4 = 7;
    puVar5 = &DAT_0035c47b;
    break;
  case 4:
    puVar5 = &DAT_00566fac;
    goto LAB_00e636ec;
  case 5:
    puVar5 = &DAT_0035c482;
    goto LAB_00e63748;
  case 6:
    uVar4 = 0xf;
    puVar5 = &DAT_0035c48b;
    break;
  case 7:
    puVar5 = &DAT_00568f3c;
LAB_00e636ec:
    uVar4 = 4;
    break;
  case 8:
    puVar5 = &DAT_0035c49a;
LAB_00e63748:
    uVar4 = 9;
    break;
  case 9:
    uVar4 = 0x13;
    puVar5 = &DAT_0035c4a3;
    break;
  case 10:
    uVar4 = 0x12;
    puVar5 = &DAT_0035c4b6;
  }
  FUN_00e5d350(&local_30,*puVar7,puVar5,uVar4);
  if (((((char)local_30 == '\x04') || (iVar3 = FUN_0157c4a0(local_30,local_2c), iVar3 == 0)) &&
      (iVar3 = FUN_00e6491c(&local_38,"message_uuid",0xc,param_2 + 4), iVar3 == 0)) &&
     (((bVar1 & 1) == 0 || (iVar3 = FUN_00ecf880(&local_38,param_2 + 0x16), iVar3 == 0)))) {
    if ((char)local_38 != '\0') {
LAB_00e63874:
      local_30 = 10;
      iVar3 = FUN_0157c50c(&local_30,0,0);
      return iVar3;
    }
    iVar3 = FUN_00e6491c(&local_38,&DAT_00569ec0,8,param_2 + 8);
    if (iVar3 == 0) {
      if ((char)local_38 != '\0') goto LAB_00e63874;
      iVar3 = FUN_00e62d70(&local_38,"global_counter",0xe,param_2[0xd],param_2[0xc],param_2[0xd]);
      if (iVar3 == 0) {
        if ((char)local_38 != '\0') goto LAB_00e63874;
        iVar3 = FUN_00e62d70(&local_38,"local_counter",0xd,param_2[0xf],param_2[0xe],param_2[0xf]);
        if (((iVar3 == 0) && (iVar3 = 0, (local_38 & 0xff00) != 0)) && ((local_38 & 1) == 0)) {
          FUN_00f1f6ac(*local_34,"}",1);
          return 0;
        }
      }
    }
  }
  return iVar3;
}

