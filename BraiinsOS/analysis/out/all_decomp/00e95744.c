// FUN_00e95744 @ 00e95744 size=620 calls_out=7 calls_in=4
// strings: secs_since_epoch | nanos_since_epoch

int FUN_00e95744(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_48;
  undefined4 *local_44;
  undefined4 local_40;
  uint local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_44 = (undefined4 *)0x0;
  local_48 = 0;
  local_40 = 0;
  FUN_015f3c24(local_38,param_1,&local_48);
  if ((local_38[0] & 1) != 0) {
    iVar2 = FUN_00e956c4(&DAT_003594c0,0x28);
    return iVar2;
  }
  piVar5 = (int *)*param_2;
  iVar2 = piVar5[2];
  iVar4 = *piVar5;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[3] = param_2[3] + 1;
  if (iVar4 == iVar2) {
    FUN_00edff4c(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x7b;
  piVar5[2] = iVar2 + 1;
  local_48 = 0x100;
  local_44 = param_2;
  iVar2 = FUN_00e5bdc8(&local_48,"secs_since_epoch",0x10,0x7b,local_30,local_2c);
  if (iVar2 == 0) {
    if ((char)local_48 == '\x01') {
      local_38[0] = 10;
      iVar2 = FUN_0157c50c(local_38,0,0);
      return iVar2;
    }
    iVar2 = FUN_00e5b648(&local_48,"nanos_since_epoch",0x11,local_28);
    puVar1 = local_44;
    if (iVar2 == 0) {
      if (((local_48 & 0xff00) != 0) && ((local_48 & 1) == 0)) {
        piVar5 = (int *)*local_44;
        iVar2 = local_44[3] + -1;
        local_44[3] = iVar2;
        if (*(char *)(local_44 + 4) == '\0') {
          iVar4 = piVar5[2];
        }
        else {
          iVar3 = piVar5[2];
          if (*piVar5 == iVar3) {
            FUN_00edff4c(piVar5,iVar3,1,1,1);
            iVar3 = piVar5[2];
          }
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          iVar4 = iVar3 + 1;
          *(undefined1 *)(piVar5[1] + iVar3) = 10;
          piVar5[2] = iVar4;
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            if ((uint)(*piVar5 - iVar4) < uVar7) {
              FUN_00edff4c(piVar5,iVar4,uVar7,1,1);
              iVar4 = piVar5[2];
            }
            FUN_016dd1aa(piVar5[1] + iVar4,uVar6,uVar7);
            iVar4 = iVar4 + uVar7;
            piVar5[2] = iVar4;
          }
        }
        if (*piVar5 == iVar4) {
          FUN_00edff4c(piVar5,iVar4,1,1,1);
          iVar4 = piVar5[2];
        }
        *(undefined1 *)(piVar5[1] + iVar4) = 0x7d;
        piVar5[2] = iVar4 + 1;
      }
      return 0;
    }
  }
  return iVar2;
}

