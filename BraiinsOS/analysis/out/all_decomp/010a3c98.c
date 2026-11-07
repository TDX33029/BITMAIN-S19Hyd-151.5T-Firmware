// FUN_010a3c98 @ 010a3c98 size=568 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_010a3c98(byte *param_1,undefined4 *param_2)

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
    local_24 = (code *)&DAT_010a5e28;
    local_28 = &local_30;
    local_30 = param_1;
    iVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_005858a4,&local_28);
    if (iVar2 != 0) {
      return 1;
    }
  }
  bVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_30 = param_1 + 8;
    local_24 = FUN_010a61bc;
    local_28 = &local_30;
    iVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_28);
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
    local_2c = 0;
    local_30 = (byte *)0x1;
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x28);
    pbVar3 = *(byte **)(param_1 + 0x1c);
    if (uVar6 != 0xffff) {
      if (uVar6 == 0) {
        if (pbVar3 == (byte *)0x0) goto LAB_010a3ea4;
        local_2c = 1;
        local_30 = &DAT_00418645;
        goto LAB_010a3ddc;
      }
      if (uVar6 < local_2c) {
        if ((char)pbVar3[uVar6] < -0x40) {
LAB_010a3ea4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar3,local_2c,0,uVar6,&DAT_01884334);
        }
        local_2c = uVar6;
      }
      else if ((pbVar3 == (byte *)0x0) || (local_2c != uVar6)) goto LAB_010a3ea4;
    }
    local_30 = pbVar3;
    if (local_2c == 0) {
      local_30 = &DAT_00418645;
    }
    if (local_2c < 2) {
      local_2c = 1;
    }
  }
LAB_010a3ddc:
  uVar8 = *param_2;
  uVar7 = param_2[1];
  local_24 = (code *)&DAT_0157d360;
  local_28 = &local_30;
  iVar2 = FUN_00fa948c(uVar8,uVar7,&DAT_00590e71,&local_28);
  uVar4 = 1;
  if (iVar2 == 0) {
    uVar4 = 0;
    if (*(ushort *)(param_1 + 0x28) != 0xffff) {
      uVar6 = *(uint *)(param_1 + 0x20);
      uVar5 = *(ushort *)(param_1 + 0x28) + 1;
      iVar2 = *(int *)(param_1 + 0x1c);
      if (uVar5 < uVar6) {
        if (*(char *)(iVar2 + uVar5) < -0x40) {
LAB_010a3eb8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar2,uVar6,uVar5,uVar6,&DAT_01884344);
        }
        local_2c = uVar6 - uVar5;
      }
      else {
        if (uVar6 != uVar5) goto LAB_010a3eb8;
        local_2c = 0;
      }
      local_30 = (byte *)(iVar2 + uVar5);
      local_24 = (code *)&DAT_0157d360;
      local_28 = &local_30;
      uVar4 = FUN_00fa948c(uVar8,uVar7,&DAT_0059497e,&local_28);
    }
  }
  return uVar4;
}

