// FUN_0061d7c4 @ 0061d7c4 size=520 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0061d7c4(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar7 = *param_2;
  uVar8 = param_2[1];
  piVar4 = (int *)*param_1;
  if (iVar7 == 1) {
    uVar10 = param_2[2];
    uStack_34 = param_2[3];
    local_3c = uVar8;
  }
  else {
    local_40 = 0;
    FUN_018430e4(uVar8,0,0xf,0,&local_40);
    uVar1 = local_40;
    local_40 = 0;
    FUN_018430e4(uVar8,0,0xd,0,&local_40);
    uVar10 = local_40;
    local_40 = 0;
    FUN_018430e4(uVar8,0,0xf,0,&local_40);
    local_3c = uVar1 & 0xfffffffe;
    uStack_34 = local_40 & 0xfffffffe;
  }
  iVar5 = piVar4[2];
  local_30 = 0x80000000;
  local_40 = 1;
  uStack_38 = uVar10;
  if (iVar5 == *piVar4) {
    FUN_0061ccf8(piVar4);
  }
  puVar3 = (uint *)(piVar4[1] + iVar5 * 0x1c);
  *puVar3 = local_40;
  puVar3[1] = local_3c;
  puVar3[2] = uStack_38;
  puVar3[3] = uStack_34;
  puVar3[4] = local_30;
  puVar3[5] = uStack_2c;
  puVar3[6] = uStack_28;
  piVar4[2] = iVar5 + 1;
  if (iVar7 == 0) {
    local_40 = 0;
    FUN_018430e4(uVar8,0,0xf,0,&local_40);
    uVar8 = local_40 & 0xfffffffe;
  }
  else {
    uVar8 = param_2[3];
  }
  if (*(uint *)param_1[1] == uVar8) {
    iVar5 = piVar4[1];
    iVar9 = piVar4[2];
    iVar7 = 0;
    piVar4[2] = 0;
    if (iVar9 != 0) {
      do {
        iVar11 = iVar5 + iVar7 * 0x1c;
        iVar2 = *(int *)(iVar11 + 0x10);
        if (iVar2 != -0x80000000) {
          iVar6 = *(int *)(iVar11 + 0x18);
          if (iVar6 != 0) {
            puVar3 = (uint *)(*(int *)(iVar11 + 0x14) + 0x18);
            do {
              if ((*puVar3 & 0x7fffffff) == 0) {
                uVar8 = puVar3[3];
              }
              else {
                thunk_FUN_016d3fb4(puVar3[1]);
                uVar8 = puVar3[3];
              }
              if ((uVar8 & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(puVar3[4]);
              }
              puVar3 = puVar3 + 0xc;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar2 = *(int *)(iVar11 + 0x10);
          }
          if (iVar2 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x14));
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar9);
    }
  }
  return 1;
}

