// FUN_0096b424 @ 0096b424 size=428 calls_out=6 calls_in=4
// strings: a UUID string | internal error: entered unreachable code

undefined4
FUN_0096b424(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar5 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar6 = 1;
    iVar3 = *piVar5;
    pcVar2 = ",";
    do {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_0096b5a0;
      pcVar2 = pcVar2 + uVar4;
      uVar6 = uVar6 - uVar4;
    } while (uVar6 != 0);
  }
  iVar3 = *piVar5;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_50,iVar3,param_2,param_3);
  if ((char)local_50 == '\x04') {
    uVar6 = 1;
    iVar3 = *piVar5;
    pcVar2 = ":";
    while( true ) {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar7 == 0x7fffffff) break;
      pcVar2 = pcVar2 + uVar4;
      uVar6 = uVar6 - uVar4;
      if (uVar6 == 0) {
        uVar8 = FUN_01415f98(&local_50,extraout_r1,param_5,param_6);
        FUN_00a5208c(&local_58,*piVar5,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
        if ((char)local_58 == '\x04') {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_01966f50(local_58,local_54);
        }
        return uVar1;
      }
    }
LAB_0096b5a0:
    local_50 = 2;
    local_4c = &DAT_01d2e7b8;
  }
  uVar1 = FUN_01966f50(local_50,local_4c);
  return uVar1;
}

