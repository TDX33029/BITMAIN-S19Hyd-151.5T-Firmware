// FUN_00ebe9c0 @ 00ebe9c0 size=420 calls_out=6 calls_in=8
// strings: a UUID string

undefined4 FUN_00ebe9c0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  
  if (*param_1 == '\0') {
    piVar7 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar5 = 1;
      iVar3 = *piVar7;
      pcVar2 = ",";
      do {
        uVar6 = *(uint *)(iVar3 + 4);
        uVar4 = uVar6 ^ 0x7fffffff;
        if (uVar5 < uVar4) {
          uVar4 = uVar5;
        }
        FUN_01284394(iVar3,pcVar2,uVar4);
        if (uVar6 == 0x7fffffff) goto LAB_00ebeb4c;
        pcVar2 = pcVar2 + uVar4;
        uVar5 = uVar5 - uVar4;
      } while (uVar5 != 0);
    }
    iVar3 = *piVar7;
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_50,iVar3,param_2,param_3);
    if ((char)local_50 != '\x04') goto LAB_00ebeb58;
    uVar5 = 1;
    iVar3 = *piVar7;
    pcVar2 = ":";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ebeb4c;
      pcVar2 = pcVar2 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    uVar8 = FUN_019ce0bc(&local_50,param_4);
    FUN_00a5208c(&local_58,*piVar7,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if ((char)local_58 == '\x04') {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_01966f50(local_58,local_54);
    }
  }
  else {
    local_50 = 10;
    uVar1 = FUN_01966fbc(&local_50,0,0);
  }
  return uVar1;
LAB_00ebeb4c:
  local_50 = 2;
  local_4c = &DAT_01d2e7b8;
LAB_00ebeb58:
  uVar1 = FUN_01966f50(local_50,local_4c);
  return uVar1;
}

