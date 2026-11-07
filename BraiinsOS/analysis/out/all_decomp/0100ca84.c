// FUN_0100ca84 @ 0100ca84 size=620 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_0100ca84(uint *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 local_20;
  byte local_1c;
  
  pcVar5 = "";
  if ((char)param_1[10] == '\0') {
    pcVar5 = "";
  }
  if (param_2 == '\0') {
    uVar7 = param_1[9];
    FUN_0100c21c(&local_20,param_1 + 7,pcVar5);
    uVar1 = (uint)local_1c;
    if (uVar1 != 3) goto LAB_0100ccb8;
  }
  else if (param_2 == '\x01') {
    uVar7 = param_1[9];
    FUN_0100c21c(&local_20,param_1 + 7,pcVar5);
    uVar1 = (uint)local_1c;
    if (uVar1 != 3) goto LAB_0100ccb8;
    if ((char)local_20 == '\x01') {
      if (param_1[8] <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,param_1[8],&DAT_018821f4);
      }
      if (*(char *)(param_1[7] + uVar7) != '/') goto LAB_0100cb8c;
    }
  }
  else {
    puVar6 = param_1 + 7;
    puVar4 = &DAT_003785da;
    if ((char)param_1[10] == '\0') {
      puVar4 = &DAT_003784d7;
    }
    FUN_0100c21c(&local_20,puVar6,puVar4);
    uVar1 = (uint)local_1c;
    if (uVar1 != 3) goto LAB_0100ccb8;
    uVar7 = param_1[9];
    if ((uVar7 < param_1[8]) && (*(char *)(*puVar6 + uVar7) == ':')) {
LAB_0100cb8c:
      return CONCAT44(1,uVar7);
    }
    FUN_0100c21c(&local_20,puVar6,pcVar5);
    uVar1 = (uint)local_1c;
    if (uVar1 != 3) goto LAB_0100ccb8;
    uVar7 = 0;
  }
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  *param_1 = uVar7;
  param_1[1] = uVar2;
  if (uVar1 < uVar2) {
LAB_0100ccc8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,uVar1,uVar1,&DAT_01882234);
  }
  if (uVar1 != uVar2) {
    puVar6 = param_1 + 7;
    if (*(char *)(*puVar6 + uVar2) == '?') {
      param_1[9] = uVar2 + 1;
      pcVar5 = "";
      if ((char)param_1[10] != '\0') {
        pcVar5 = "";
      }
      FUN_0100c21c(&local_20,puVar6,pcVar5);
      uVar1 = (uint)local_1c;
      if (uVar1 != 3) goto LAB_0100ccb8;
      uVar2 = param_1[9];
      uVar1 = param_1[8];
      param_1[3] = uVar2;
    }
    if (uVar1 < uVar2) goto LAB_0100ccc8;
    if (uVar1 != uVar2) {
      if (*(char *)(*puVar6 + uVar2) == '#') {
        param_1[9] = uVar2 + 1;
        pcVar5 = "";
        if ((char)param_1[10] != '\0') {
          pcVar5 = "";
        }
        FUN_0100c21c(&local_20,puVar6,pcVar5);
        uVar1 = (uint)local_1c;
        if (uVar1 != 3) {
LAB_0100ccb8:
          return CONCAT44(uVar1,local_20);
        }
        uVar1 = param_1[8];
        uVar2 = param_1[9];
      }
      goto LAB_0100cc4c;
    }
  }
  uVar1 = uVar2;
LAB_0100cc4c:
  uVar3 = 3;
  if (uVar2 < uVar1) {
    uVar3 = 1;
  }
  return CONCAT44(uVar3,uVar2);
}

