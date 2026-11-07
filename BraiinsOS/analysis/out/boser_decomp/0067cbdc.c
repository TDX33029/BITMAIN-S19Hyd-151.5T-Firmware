// FUN_0067cbdc @ 0067cbdc size=340 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0067cbdc(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint **ppuVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *local_30;
  uint **local_2c;
  undefined1 *local_28;
  uint **local_24;
  undefined1 *local_20;
  uint *local_1c;
  
  ppuVar2 = &local_30;
  uVar6 = *param_1;
  if (uVar6 == 2) {
    iVar4 = param_2[1];
    uVar5 = *param_2;
    iVar1 = (**(code **)(iVar4 + 0xc))(uVar5,&DAT_0052e42c,2);
    if (iVar1 != 0) {
      return 1;
    }
    if (param_1[1] != 1) {
      return 0;
    }
    local_28 = &LAB_016cd65c;
LAB_0067ccd0:
    local_1c = param_1 + 2;
  }
  else {
    iVar4 = param_2[1];
    uVar5 = *param_2;
    iVar1 = (**(code **)(iVar4 + 0xc))(uVar5,&DAT_0052c2af,3);
    if (iVar1 != 0) {
      return 1;
    }
    local_1c = param_1 + 2;
    if ((uVar6 & 1) == 0) {
      if (param_1[2] == 0x80000000) {
        return 0;
      }
      local_28 = &LAB_0193a90c;
      goto LAB_0067ccd0;
    }
    if (param_1[2] != 0x80000000) {
      local_24 = &local_1c;
      puVar3 = &DAT_00571ec2;
      local_20 = &LAB_0193a90c;
      local_28 = &LAB_016cd65c;
      local_30 = param_1 + 1;
      goto LAB_0067ccdc;
    }
    local_28 = &LAB_016cd65c;
    local_1c = param_1 + 1;
  }
  puVar3 = &DAT_00571d95;
  ppuVar2 = &local_1c;
LAB_0067ccdc:
  local_2c = ppuVar2;
  uVar5 = FUN_012fa178(uVar5,iVar4,puVar3,&local_2c);
  return uVar5;
}

