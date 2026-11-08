// FUN_00f08210 @ 00f08210 size=492 calls_out=4 calls_in=3
// strings: $ref~! | description | summary

int FUN_00f08210(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint local_38;
  int *local_34;
  undefined4 local_30 [3];
  
  iVar6 = *param_2;
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar5 = "{";
  uVar4 = 1;
  iVar2 = *(int *)(param_1 + 0x20);
  do {
    uVar7 = *(uint *)(iVar6 + 4);
    uVar3 = uVar7 ^ 0x7fffffff;
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
    FUN_01284394(iVar6,pcVar5,uVar3);
    if (uVar7 == 0x7fffffff) goto LAB_00f083c8;
    pcVar5 = pcVar5 + uVar3;
    uVar4 = uVar4 - uVar3;
  } while (uVar4 != 0);
  local_38 = 0x100;
  local_34 = param_2;
  iVar6 = FUN_0096b5ec(&local_38,"$ref~!",4,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8));
  if (iVar6 != 0) {
    return iVar6;
  }
  if (iVar1 != 0) {
    if ((char)local_38 == '\x01') goto LAB_00f083e0;
    iVar1 = FUN_0096b5ec(&local_38,"description",0xb,*(undefined4 *)(param_1 + 0x10),iVar1);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (iVar2 != 0) {
    if ((char)local_38 == '\x01') {
LAB_00f083e0:
      local_30[0] = 10;
      iVar1 = FUN_01966fbc(local_30,0,0);
      return iVar1;
    }
    iVar1 = FUN_0096b5ec(&local_38,"summary",7,*(undefined4 *)(param_1 + 0x1c),iVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if ((local_38 & 0xff00) == 0) {
    return 0;
  }
  if ((local_38 & 1) != 0) {
    return 0;
  }
  uVar4 = 1;
  iVar1 = *local_34;
  pcVar5 = "}";
  while( true ) {
    uVar7 = *(uint *)(iVar1 + 4);
    uVar3 = uVar7 ^ 0x7fffffff;
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
    FUN_01284394(iVar1,pcVar5,uVar3);
    if (uVar7 == 0x7fffffff) break;
    pcVar5 = pcVar5 + uVar3;
    uVar4 = uVar4 - uVar3;
    if (uVar4 == 0) {
      return 0;
    }
  }
LAB_00f083c8:
  iVar1 = FUN_01966f50(2,&DAT_01d2e7b8);
  return iVar1;
}

