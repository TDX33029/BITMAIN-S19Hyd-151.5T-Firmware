// FUN_00d57e68 @ 00d57e68 size=556 calls_out=6 calls_in=2
// strings: seconds | nanos

int FUN_00d57e68(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 extraout_r1;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_60;
  int *local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  
  uVar2 = 1;
  iVar1 = *param_4;
  pcVar3 = "{";
  do {
    uVar5 = *(uint *)(iVar1 + 4);
    uVar4 = uVar5 ^ 0x7fffffff;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    FUN_01284394(iVar1,pcVar3,uVar4);
    if (uVar5 == 0x7fffffff) goto LAB_00d5805c;
    pcVar3 = pcVar3 + uVar4;
    uVar2 = uVar2 - uVar4;
  } while (uVar2 != 0);
  local_60 = 0x200;
  local_5c = param_4;
  FUN_0096b2b0(&local_50,iVar1,"seconds",7);
  if ((char)local_50 == '\x04') {
    uVar2 = 1;
    iVar1 = *param_4;
    pcVar3 = ":";
    do {
      uVar5 = *(uint *)(iVar1 + 4);
      uVar4 = uVar5 ^ 0x7fffffff;
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      FUN_01284394(iVar1,pcVar3,uVar4);
      if (uVar5 == 0x7fffffff) goto LAB_00d5805c;
      pcVar3 = pcVar3 + uVar4;
      uVar2 = uVar2 - uVar4;
    } while (uVar2 != 0);
    uVar7 = FUN_0196bd9c(&local_50,extraout_r1,param_1,param_2);
    FUN_00a5208c(&local_58,*param_4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    if ((char)local_58 == '\x04') {
      iVar1 = FUN_00ec44f0(&local_60,"nanos",5,param_3);
      if (((iVar1 == 0) && (iVar1 = 0, (local_60 & 0xff00) != 0)) && ((local_60 & 1) == 0)) {
        uVar2 = 1;
        iVar6 = *local_5c;
        pcVar3 = "}";
        do {
          uVar5 = *(uint *)(iVar6 + 4);
          uVar4 = uVar5 ^ 0x7fffffff;
          if (uVar2 < uVar4) {
            uVar4 = uVar2;
          }
          FUN_01284394(iVar6,pcVar3,uVar4);
          if (uVar5 == 0x7fffffff) {
            local_58 = 2;
            local_54 = &DAT_01d2e7b8;
            goto LAB_00d58088;
          }
          pcVar3 = pcVar3 + uVar4;
          uVar2 = uVar2 - uVar4;
        } while (uVar2 != 0);
      }
    }
    else {
LAB_00d58088:
      iVar1 = FUN_01966f50(local_58,local_54);
    }
    return iVar1;
  }
LAB_00d58074:
  iVar1 = FUN_01966f50(local_50,local_4c);
  return iVar1;
LAB_00d5805c:
  local_50 = 2;
  local_4c = &DAT_01d2e7b8;
  goto LAB_00d58074;
}

