// FUN_01bcfe90 @ 01bcfe90 size=336 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01bcfe90(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_bc [12];
  uint local_8c [12];
  uint local_5c [12];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bcfd28(local_bc,param_2,&PTR_01d3b2b0,0);
  FUN_01bcfd28(local_8c);
  FUN_01bcfd28(local_5c);
  puVar8 = (uint *)(param_2 + -4);
  uVar4 = 0;
  do {
    uVar4 = uVar4 + 1;
    uVar1 = (int)((uVar4 ^ param_3) - 1 & ~(uVar4 ^ param_3)) >> 0x1f;
    puVar2 = local_8c;
    puVar3 = local_5c;
    puVar5 = local_bc;
    puVar9 = puVar8;
    do {
      puVar10 = puVar9 + 1;
      uVar6 = *puVar2;
      *puVar5 = (*puVar10 ^ *puVar5) & uVar1 ^ *puVar5;
      uVar7 = *puVar3;
      *puVar2 = (puVar9[0xd] ^ uVar6) & uVar1 ^ uVar6;
      *puVar3 = (puVar9[0x19] ^ uVar7) & uVar1 ^ uVar7;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
      puVar9 = puVar10;
    } while (puVar8 + 0xc != puVar10);
    puVar8 = puVar8 + 0x24;
  } while (uVar4 != 0x10);
  FUN_01bcfd44(param_1,local_bc);
  FUN_01bcfd44(param_1 + 0x30,local_8c);
  FUN_01bcfd44(param_1 + 0x60,local_5c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

