// FUN_00e602a8 @ 00e602a8 size=1032 calls_out=9 calls_in=0
// strings: tuner_mode | temperature_degrees

int FUN_00e602a8(char *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar2 = (int *)*puVar3;
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00edff4c(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x2c;
    piVar2[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_40,*puVar3,&DAT_00418440,7);
  if ((char)local_40 != '\x04') {
LAB_00e60574:
    iVar1 = FUN_0157c4a0(local_40,local_3c);
    return iVar1;
  }
  piVar2 = (int *)*puVar3;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  iVar4 = *param_2;
  puVar6 = (uint *)param_2[1];
  *(undefined1 *)(piVar2[1] + iVar1) = 0x3a;
  piVar2[2] = iVar1 + 1;
  puVar5 = (undefined1 *)param_2[2];
  piVar2 = (int *)*puVar3;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
  piVar2[2] = iVar1 + 1;
  local_48 = CONCAT22(local_48._2_2_,0x100);
  local_44 = puVar3;
  iVar1 = FUN_00e647d0(&local_48,"tuner_mode",10,*(undefined4 *)(iVar4 + 4),
                       *(undefined4 *)(iVar4 + 8));
  puVar3 = local_44;
  if (iVar1 == 0) {
    if ((char)local_48 != '\0') {
      local_40 = 10;
      iVar1 = FUN_0157c50c(&local_40,0,0);
      return iVar1;
    }
    uVar7 = *puVar6;
    if (local_48._1_1_ != '\x01') {
      piVar2 = (int *)*local_44;
      iVar1 = piVar2[2];
      if (*piVar2 == iVar1) {
        FUN_00edff4c(piVar2,iVar1,1,1,1);
        iVar1 = piVar2[2];
      }
      *(undefined1 *)(piVar2[1] + iVar1) = 0x2c;
      piVar2[2] = iVar1 + 1;
    }
    local_48._0_2_ = CONCAT11(2,(char)local_48);
    FUN_00e5d350(&local_40,*puVar3,"temperature_degrees",0x13);
    if ((char)local_40 != '\x04') goto LAB_00e60574;
    piVar2 = (int *)*puVar3;
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00edff4c(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x3a;
    piVar2[2] = iVar1 + 1;
    piVar2 = (int *)*puVar3;
    if ((uVar7 & 0x7fffffff) < 0x7f800000) {
      iVar1 = FUN_016d14cc(uVar7,&local_40);
      uVar7 = iVar1 - (int)&local_40;
      iVar1 = piVar2[2];
      if ((uint)(*piVar2 - iVar1) < uVar7) {
        FUN_00edff4c(piVar2,iVar1,uVar7,1,1);
        iVar1 = piVar2[2];
      }
      FUN_016dd1aa(piVar2[1] + iVar1,&local_40,uVar7);
      iVar1 = iVar1 + uVar7;
    }
    else {
      iVar1 = piVar2[2];
      if ((uint)(*piVar2 - iVar1) < 4) {
        FUN_00edff4c(piVar2,iVar1,4,1,1);
        iVar1 = piVar2[2];
      }
      *(undefined4 *)(piVar2[1] + iVar1) = 0x6c6c756e;
      iVar1 = iVar1 + 4;
    }
    piVar2[2] = iVar1;
    iVar1 = FUN_00e63084(&local_48,*puVar5);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (((local_48 & 0xff00) != 0) && ((local_48 & 1) == 0)) {
        piVar2 = (int *)*local_44;
        iVar1 = piVar2[2];
        if (*piVar2 == iVar1) {
          FUN_00edff4c(piVar2,iVar1,1,1,1);
          iVar1 = piVar2[2];
        }
        *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
        piVar2[2] = iVar1 + 1;
        return 0;
      }
    }
  }
  return iVar1;
}

