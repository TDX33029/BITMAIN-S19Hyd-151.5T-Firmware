// FUN_00c022b0 @ 00c022b0 size=620 calls_out=7 calls_in=1
// strings: power_limit | fingerprintIssueIssueWildIodefLLQULDAUDHUN3U

int FUN_00c022b0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar4 = (int *)*param_2;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00d653ec(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  uVar3 = *(undefined4 *)((int)param_1 + 0x14);
  *(undefined1 *)(piVar4[1] + iVar2) = 0x7b;
  piVar4[2] = iVar2 + 1;
  local_30 = CONCAT22(local_30._2_2_,0x100);
  local_2c = param_2;
  iVar2 = FUN_00cd2f2c(&local_30,&DAT_00354573,9,uVar3);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((char)local_30 == '\0') {
    iVar2 = FUN_00cd2f2c(&local_30,&DAT_0035457c,0x1f,*(undefined4 *)(param_1 + 3));
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)local_30 == '\0') {
      iVar2 = FUN_00cd3ed8((int)*param_1,&local_30,"power_limit",0xb);
      puVar1 = local_2c;
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((char)local_30 == '\0') {
        uVar3 = *(undefined4 *)((int)param_1 + 0xc);
        uVar5 = *(undefined4 *)(param_1 + 2);
        piVar4 = (int *)*local_2c;
        if (local_30._1_1_ != '\x01') {
          iVar2 = piVar4[2];
          if (*piVar4 == iVar2) {
            FUN_00d653ec(piVar4,iVar2,1,1,1);
            iVar2 = piVar4[2];
          }
          *(undefined1 *)(piVar4[1] + iVar2) = 0x2c;
          piVar4[2] = piVar4[2] + 1;
          piVar4 = (int *)*puVar1;
        }
        local_30._0_2_ = CONCAT11(2,(char)local_30);
        FUN_00cd2b24(&local_28,piVar4,"fingerprintIssueIssueWildIodefLLQULDAUDHUN3U",0xb);
        if ((char)local_28 == '\x04') {
          piVar4 = (int *)*puVar1;
          iVar2 = piVar4[2];
          if (*piVar4 == iVar2) {
            FUN_00d653ec(piVar4,iVar2,1,1,1);
            iVar2 = piVar4[2];
          }
          *(undefined1 *)(piVar4[1] + iVar2) = 0x3a;
          piVar4[2] = piVar4[2] + 1;
          FUN_00cd2b24(&local_28,*puVar1,uVar3,uVar5);
          if ((char)local_28 == '\x04') {
            if ((local_30 & 0xff00) == 0) {
              return 0;
            }
            if ((local_30 & 1) == 0) {
              FUN_00cde0e0(*puVar1,"}",1);
              return 0;
            }
            return 0;
          }
        }
        iVar2 = FUN_0157c4a0(local_28,local_24);
        return iVar2;
      }
    }
  }
  local_28 = 10;
  iVar2 = FUN_0157c50c(&local_28,0,0);
  return iVar2;
}

