// FUN_007327dc @ 007327dc size=380 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_007327dc(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar5 = *param_2;
  uVar6 = param_2[1];
  piVar3 = (int *)*param_1;
  if (iVar5 == 1) {
    uVar7 = param_2[2];
    uStack_34 = param_2[3];
    local_3c = uVar6;
  }
  else {
    local_40 = 0;
    FUN_01be0690(uVar6,0,0xf,0,&local_40);
    uVar1 = local_40;
    local_40 = 0;
    FUN_01be0690(uVar6,0,0xd,0,&local_40);
    uVar7 = local_40;
    local_40 = 0;
    FUN_01be0690(uVar6,0,0xf,0,&local_40);
    local_3c = uVar1 & 0xfffffffe;
    uStack_34 = local_40 & 0xfffffffe;
  }
  iVar4 = piVar3[2];
  local_30 = 0x80000000;
  local_40 = 1;
  uStack_38 = uVar7;
  if (iVar4 == *piVar3) {
    FUN_0126724c(piVar3);
  }
  puVar2 = (uint *)(piVar3[1] + iVar4 * 0x1c);
  *puVar2 = local_40;
  puVar2[1] = local_3c;
  puVar2[2] = uStack_38;
  puVar2[3] = uStack_34;
  puVar2[4] = local_30;
  puVar2[5] = uStack_2c;
  puVar2[6] = uStack_28;
  piVar3[2] = iVar4 + 1;
  if (iVar5 == 0) {
    local_40 = 0;
    FUN_01be0690(uVar6,0,0xf,0,&local_40);
    uVar6 = local_40 & 0xfffffffe;
  }
  else {
    uVar6 = param_2[3];
  }
  if (*(uint *)param_1[1] == uVar6) {
    iVar4 = piVar3[2] + 1;
    piVar3[2] = 0;
    iVar5 = piVar3[1];
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_00724b3c(iVar5);
      iVar5 = iVar5 + 0x1c;
    }
  }
  return 1;
}

