// FUN_00ebeb78 @ 00ebeb78 size=620 calls_out=6 calls_in=9
// strings: a UUID string

undefined4 FUN_00ebeb78(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  ulonglong in_d0;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  
  if (*param_1 != '\0') {
    local_48 = 10;
    uVar1 = FUN_01966fbc(&local_48,0,0);
    return uVar1;
  }
  piVar8 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar2 = 1;
    iVar4 = *piVar8;
    pcVar6 = ",";
    do {
      uVar7 = *(uint *)(iVar4 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      FUN_01284394(iVar4,pcVar6,uVar5);
      if (uVar7 == 0x7fffffff) goto LAB_00ebedc4;
      pcVar6 = pcVar6 + uVar5;
      uVar2 = uVar2 - uVar5;
    } while (uVar2 != 0);
  }
  iVar4 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_48,iVar4,param_2,param_3);
  if ((char)local_48 == '\x04') {
    uVar2 = 1;
    iVar4 = *piVar8;
    pcVar6 = ":";
    do {
      uVar7 = *(uint *)(iVar4 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      FUN_01284394(iVar4,pcVar6,uVar5);
      if (uVar7 == 0x7fffffff) goto LAB_00ebedc4;
      pcVar6 = pcVar6 + uVar5;
      uVar2 = uVar2 - uVar5;
    } while (uVar2 != 0);
    uVar2 = (uint)(in_d0 >> 0x20);
    if ((int)in_d0 == 0 && (in_d0 & 0xfffff00000000) == 0) {
      if ((int)in_d0 != 0 || (uVar2 & 0x7fffffff) != 0x7ff00000) goto LAB_00ebed24;
    }
    else if ((uVar2 & 0x7fffffff) < 0x7ff00000) {
LAB_00ebed24:
      iVar4 = FUN_01afb0f8(&local_48);
      FUN_00a5208c(&local_50,*piVar8,&local_48,iVar4 - (int)&local_48);
      if ((char)local_50 == '\x04') {
        return 0;
      }
      uVar1 = FUN_01966f50(local_50,local_4c);
      return uVar1;
    }
    uVar2 = 4;
    iVar4 = *piVar8;
    puVar3 = &DAT_0056d030;
    while( true ) {
      uVar7 = *(uint *)(iVar4 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      FUN_01284394(iVar4,puVar3,uVar5);
      if (uVar7 == 0x7fffffff) break;
      puVar3 = puVar3 + uVar5;
      uVar2 = uVar2 - uVar5;
      if (uVar2 == 0) {
        return 0;
      }
    }
    local_48 = 2;
    local_44 = &DAT_01d2e7b8;
  }
LAB_00ebedd0:
  uVar1 = FUN_01966f50(local_48,local_44);
  return uVar1;
LAB_00ebedc4:
  local_48 = 2;
  local_44 = &DAT_01d2e7b8;
  goto LAB_00ebedd0;
}

