// FUN_01602574 @ 01602574 size=404 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01602574(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  iVar7 = *param_2;
  uVar8 = param_2[1];
  piVar4 = (int *)*param_1;
  if (iVar7 == 1) {
    uVar6 = param_2[2];
    local_34 = param_2[3];
    local_3c = uVar8;
  }
  else {
    local_40 = 0;
    FUN_018430e4(uVar8,0,0xf,0,&local_40);
    uVar1 = local_40;
    local_40 = 0;
    FUN_018430e4(uVar8,0,0xd,0,&local_40);
    uVar6 = local_40;
    local_40 = 0;
    FUN_018430e4(uVar8,0,0xf,0,&local_40);
    local_3c = uVar1 & 0xfffffffe;
    local_34 = local_40 & 0xfffffffe;
  }
  iVar5 = piVar4[2];
  local_28 = 0;
  uStack_30 = 0;
  uStack_2c = 4;
  local_40 = 1;
  local_38 = uVar6;
  if (iVar5 == *piVar4) {
    FUN_0160271c(piVar4);
  }
  puVar3 = (uint *)(piVar4[1] + iVar5 * 0x1c);
  *puVar3 = local_40;
  puVar3[1] = local_3c;
  puVar3[2] = local_38;
  puVar3[3] = local_34;
  puVar3[4] = uStack_30;
  puVar3[5] = uStack_2c;
  puVar3[6] = local_28;
  piVar4[2] = iVar5 + 1;
  if (iVar7 == 0) {
    local_40 = 0;
    FUN_018430e4(uVar8,0,0xf,0,&local_40);
    local_40 = local_40 & 0xfffffffe;
  }
  else {
    local_40 = param_2[3];
  }
  if ((*(uint *)param_1[1] == local_40) && (piVar2 = (int *)param_1[2], *piVar2 == 0)) {
    iVar7 = piVar4[2];
    *piVar2 = 1;
    piVar2[1] = iVar7;
    return 1;
  }
  return 1;
}

