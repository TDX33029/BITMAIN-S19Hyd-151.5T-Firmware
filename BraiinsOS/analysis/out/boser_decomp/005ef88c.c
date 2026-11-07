// FUN_005ef88c @ 005ef88c size=356 calls_out=1 calls_in=0
// strings: IpBroadcast | Reset | IpBroadcast | Reset

undefined4 FUN_005ef88c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  pcVar6 = (char *)*param_1;
  if (*pcVar6 == '\x01') {
    uVar7 = *param_2;
    iVar8 = param_2[1];
    uVar4 = 8;
    pcVar5 = *(code **)(iVar8 + 0xc);
    puVar3 = &DAT_005711a0;
  }
  else {
    uVar7 = *param_2;
    iVar8 = param_2[1];
    uVar4 = 7;
    pcVar5 = *(code **)(iVar8 + 0xc);
    puVar3 = &DAT_003ae159;
  }
  iVar1 = (*pcVar5)(uVar7,puVar3,uVar4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar8 = (*pcVar5)(uVar7,"(",1);
    if (iVar8 != 0) {
      return 1;
    }
    pcVar2 = "Reset";
    uVar4 = 5;
    if (pcVar6[1] != '\0') {
      uVar4 = 0xb;
      pcVar2 = "IpBroadcast";
    }
    iVar8 = (*pcVar5)(uVar7,pcVar2,uVar4);
  }
  else {
    iVar1 = (*pcVar5)(uVar7,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    pcVar2 = "Reset";
    uVar4 = 5;
    if (pcVar6[1] != '\0') {
      uVar4 = 0xb;
      pcVar2 = "IpBroadcast";
    }
    local_21 = 1;
    local_30 = uVar7;
    local_2c = iVar8;
    iVar8 = FUN_01302620(&local_30,pcVar2,uVar4);
    if (iVar8 != 0) {
      return 1;
    }
    iVar8 = FUN_01302620(&local_30,&DAT_005312e2,2);
  }
  uVar4 = 1;
  if (iVar8 == 0) {
    uVar4 = (*pcVar5)(uVar7,&DAT_0053341b,1);
  }
  return uVar4;
}

