// FUN_00e953fc @ 00e953fc size=564 calls_out=5 calls_in=4
// strings: nanos

int FUN_00e953fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_34;
  undefined4 *local_30;
  undefined4 local_2c [3];
  
  piVar4 = (int *)*param_4;
  *(undefined1 *)(param_4 + 4) = 0;
  iVar2 = piVar4[2];
  param_4[3] = param_4[3] + 1;
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar2) = 0x7b;
  piVar4[2] = iVar2 + 1;
  local_34 = 0x100;
  local_30 = param_4;
  iVar2 = FUN_00e5bdc8(&local_34,&DAT_005688f0,4,param_4,param_1,param_2);
  if (iVar2 == 0) {
    if ((char)local_34 == '\x01') {
      local_2c[0] = 10;
      iVar2 = FUN_0157c50c(local_2c,0,0);
      return iVar2;
    }
    iVar2 = FUN_00e5b648(&local_34,"nanos",5,param_3);
    puVar1 = local_30;
    if (((iVar2 == 0) && (iVar2 = 0, (local_34 & 0xff00) != 0)) && ((local_34 & 1) == 0)) {
      piVar4 = (int *)*local_30;
      iVar2 = local_30[3] + -1;
      local_30[3] = iVar2;
      if (*(char *)(local_30 + 4) == '\0') {
        iVar5 = piVar4[2];
      }
      else {
        iVar3 = piVar4[2];
        if (*piVar4 == iVar3) {
          FUN_00edff4c(piVar4,iVar3,1,1,1);
          iVar3 = piVar4[2];
        }
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        iVar5 = iVar3 + 1;
        piVar4[2] = iVar5;
        *(undefined1 *)(piVar4[1] + iVar3) = 10;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          if ((uint)(*piVar4 - iVar5) < uVar7) {
            FUN_00edff4c(piVar4,iVar5,uVar7,1,1);
            iVar5 = piVar4[2];
          }
          FUN_016dd1aa(piVar4[1] + iVar5,uVar6,uVar7);
          iVar5 = iVar5 + uVar7;
          piVar4[2] = iVar5;
        }
      }
      if (*piVar4 == iVar5) {
        FUN_00edff4c(piVar4,iVar5,1,1,1);
        iVar5 = piVar4[2];
      }
      *(undefined1 *)(piVar4[1] + iVar5) = 0x7d;
      piVar4[2] = iVar5 + 1;
      return 0;
    }
  }
  return iVar2;
}

