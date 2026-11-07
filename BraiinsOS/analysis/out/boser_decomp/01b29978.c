// FUN_01b29978 @ 01b29978 size=400 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_01b29978(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_r2;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint local_44 [9];
  
  iVar10 = param_1 + param_2 * 0x10;
  local_44[8] = DAT_01d53560;
  local_44[0] = *param_3;
  local_44[1] = param_3[1];
  local_44[2] = param_3[2];
  local_44[3] = param_3[3];
  local_44[4] = param_3[4];
  local_44[5] = param_3[5];
  local_44[6] = param_3[6];
  local_44[7] = param_3[7];
  FUN_01b252ec(local_44);
  puVar9 = local_44;
  do {
    uVar8 = *puVar9;
    uVar11 = puVar9[6];
    uVar6 = puVar9[2];
    uVar1 = puVar9[4];
    uVar7 = (uVar6 & 0xff) << 8;
    uVar2 = FUN_01b29930(uVar8 & 0xff | uVar11 << 0x18 | uVar7 | (uVar1 & 0xff) << 0x10,uVar7,
                         uVar11 & 0xff000000 | uVar8 >> 0x18 | (uVar6 >> 0x18) << 8 |
                         (uVar1 >> 0x18) << 0x10);
    uVar2 = FUN_01b29930((uVar8 & 0xffff) >> 8 | uVar6 & 0xff00 | (uVar11 >> 8) << 0x18 |
                         (uVar1 & 0xff00) << 8,uVar2);
    uVar3 = FUN_01b29930((uVar8 & 0xffffff) >> 0x10 | uVar1 & 0xff0000 | (uVar11 >> 0x10) << 0x18 |
                         uVar6 >> 8 & 0xff00);
    uVar4 = FUN_01b29930(extraout_r2);
    FUN_01b28704(param_1);
    FUN_01b28704(param_1 + 4,uVar2);
    FUN_01b28704(param_1 + 8,uVar3);
    iVar5 = param_1 + 0xc;
    param_1 = param_1 + 0x10;
    FUN_01b28704(iVar5,uVar4);
    puVar9 = puVar9 + 1;
  } while (iVar10 != param_1);
  if (local_44[8] != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

