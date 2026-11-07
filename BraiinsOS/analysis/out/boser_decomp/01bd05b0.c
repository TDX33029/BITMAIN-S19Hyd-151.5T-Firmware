// FUN_01bd05b0 @ 01bd05b0 size=164 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01bd05b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar1 = FUN_01bd4ea8(param_2,0xc);
  uVar2 = 0;
  puVar7 = (uint *)&DAT_005642d4;
  iVar3 = 1;
  *param_1 = ~*param_2;
  do {
    uVar6 = param_2[iVar3];
    puVar7 = puVar7 + 1;
    uVar4 = *puVar7;
    uVar5 = uVar4 - uVar6;
    param_1[iVar3] = uVar5 - uVar2;
    iVar3 = iVar3 + 1;
    uVar2 = -(uint)(uVar5 < uVar2) - (uint)(uVar4 < uVar6) & 1;
  } while (iVar3 != 0xc);
  puVar7 = param_1 + -1;
  do {
    puVar7 = puVar7 + 1;
    *puVar7 = *puVar7 & ~uVar1;
  } while (param_1 + 0xb != puVar7);
  return 0;
}

