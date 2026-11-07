// FUN_01411f40 @ 01411f40 size=536 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01411f40(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *local_30;
  uint local_2c;
  byte **local_28;
  code *local_24;
  
  if (*param_1 != 0) {
    local_24 = (code *)&DAT_01410c5c;
    local_28 = &local_30;
    local_30 = param_1;
    iVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_0058715e,&local_28);
    if (iVar2 != 0) {
      return 1;
    }
  }
  bVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_30 = param_1 + 8;
    local_24 = FUN_0140ce74;
    local_28 = &local_30;
    iVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_28);
    bVar1 = 1;
    if (iVar2 != 0) {
      return 1;
    }
  }
  local_2c = *(uint *)(param_1 + 0x20);
  if (local_2c == 0) {
    bVar1 = *param_1;
  }
  if (local_2c == 0 && bVar1 == 0) {
    local_30 = (byte *)0x1;
    local_2c = 0;
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x28);
    pbVar3 = *(byte **)(param_1 + 0x1c);
    if (uVar6 != 0xffff) {
      if (uVar6 == 0) {
        local_2c = 1;
        local_30 = &DAT_005327c4;
        goto LAB_01412070;
      }
      if (uVar6 < local_2c) {
        if ((char)pbVar3[uVar6] < -0x40) {
LAB_01412144:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(pbVar3,local_2c,0,uVar6,&DAT_01cf4084);
        }
        local_2c = uVar6;
      }
      else if (local_2c != uVar6) goto LAB_01412144;
    }
    local_30 = pbVar3;
    if (local_2c == 0) {
      local_30 = &DAT_005327c4;
    }
    if (local_2c < 2) {
      local_2c = 1;
    }
  }
LAB_01412070:
  uVar8 = *param_2;
  uVar7 = param_2[1];
  local_24 = (code *)&LAB_018a13b8;
  local_28 = &local_30;
  iVar2 = FUN_012fa178(uVar8,uVar7,&DAT_00590e5f,&local_28);
  uVar4 = 1;
  if (iVar2 == 0) {
    uVar4 = 0;
    if (*(ushort *)(param_1 + 0x28) != 0xffff) {
      uVar6 = *(uint *)(param_1 + 0x20);
      uVar5 = *(ushort *)(param_1 + 0x28) + 1;
      if (uVar5 < uVar6) {
        if ((char)*(byte *)(*(int *)(param_1 + 0x1c) + uVar5) < -0x40) {
LAB_014120ec:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514();
        }
      }
      else if (uVar6 != uVar5) goto LAB_014120ec;
      local_2c = uVar6 - uVar5;
      local_24 = (code *)&LAB_018a13b8;
      local_30 = (byte *)(*(int *)(param_1 + 0x1c) + uVar5);
      local_28 = &local_30;
      uVar4 = FUN_012fa178(uVar8,uVar7,&DAT_00593c40,&local_28);
    }
  }
  return uVar4;
}

