// FUN_00eb8c6c @ 00eb8c6c size=440 calls_out=3 calls_in=2
// strings: 

void FUN_00eb8c6c(uint *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  iVar7 = *param_2;
  uVar4 = param_2[2];
  iVar5 = param_2[1];
  uVar2 = *(uint *)(iVar7 + 0x1c);
  uVar3 = *(uint *)(iVar7 + 0x20);
  local_38 = 0;
  local_40 = iVar5;
  local_3c = uVar4;
  local_34 = uVar4;
  if ((uVar2 == uVar3) && (*(uint *)(iVar7 + 0x14) <= uVar4)) {
    FUN_019e7bb8(&local_30,*(undefined4 *)(iVar7 + 0x18),param_3,&local_40);
    if ((char)local_30 != '\x05') {
      *(undefined4 *)(iVar7 + 0x1c) = 0;
      *(undefined4 *)(iVar7 + 0x20) = 0;
      uVar3 = local_30 & 0xff;
      local_20 = local_30;
      local_1c = local_2c;
LAB_00eb8da8:
      if (uVar3 == 4) {
        if (local_3c < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,local_38,local_3c,&DAT_01d2e4e0);
        }
        goto LAB_00eb8d00;
      }
      if (uVar3 != 5) {
        *param_1 = uVar3 | local_20 & 0xffffff00;
        param_1[1] = local_1c;
        return;
      }
    }
LAB_00eb8db8:
    uVar1 = 5;
  }
  else {
    if (uVar3 <= uVar2) {
      local_30 = *(uint *)(iVar7 + 0x10);
      local_2c = *(uint *)(iVar7 + 0x14);
      local_28 = 0;
      local_24 = local_2c;
      FUN_019e7bb8(&local_20,*(undefined4 *)(iVar7 + 0x18),param_3,&local_30);
      if ((char)local_20 == '\x05') goto LAB_00eb8db8;
      uVar3 = local_20 & 0xff;
      if (uVar3 != 4) goto LAB_00eb8da8;
      if (local_2c < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_28,local_2c,&DAT_01d2e4e0);
      }
      uVar2 = 0;
      *(undefined4 *)(iVar7 + 0x1c) = 0;
      *(uint *)(iVar7 + 0x20) = local_28;
      uVar3 = local_28;
    }
    if ((uVar3 < uVar2) || (*(uint *)(iVar7 + 0x14) < uVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4();
    }
    uVar6 = uVar3 - uVar2;
    if (uVar4 < uVar3 - uVar2) {
      uVar6 = uVar4;
    }
    FUN_01bed4e2(iVar5,*(int *)(iVar7 + 0x10) + uVar2,uVar6);
    uVar3 = *(int *)(iVar7 + 0x1c) + uVar6;
    if (*(uint *)(iVar7 + 0x20) < uVar3) {
      uVar3 = *(uint *)(iVar7 + 0x20);
    }
    *(uint *)(iVar7 + 0x1c) = uVar3;
    local_38 = uVar6;
LAB_00eb8d00:
    uVar1 = 4;
    param_1[1] = local_38;
  }
  *(undefined1 *)param_1 = uVar1;
  return;
}

