// FUN_010b082c @ 010b082c size=428 calls_out=2 calls_in=2
// strings: 

int FUN_010b082c(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ushort uVar14;
  uint uVar15;
  int *piVar16;
  bool bVar17;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar16 = (int *)*param_1;
  iVar7 = param_1[1];
  uVar11 = param_1[5];
  uVar15 = piVar16[10];
  bVar1 = *(byte *)((int)param_1 + 0x1a);
  uVar14 = *(ushort *)(param_1 + 6);
  uVar9 = param_1[2];
  uVar13 = param_1[3];
  local_5c = param_1[4];
  if (uVar15 >> 0xf != 0) {
    (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 0x10))(&local_5c,uVar9,uVar13);
    }
    return 0;
  }
  local_38 = param_1[1];
  uStack_34 = param_1[2];
  uStack_30 = param_1[3];
  local_2c = param_1[4];
  local_4c = *param_2;
  local_48 = param_2[1];
  iStack_44 = param_2[2];
  iStack_40 = param_2[3];
  iStack_3c = param_2[4];
  uVar10 = 0;
  local_58 = 0;
  local_28 = CONCAT22(local_28._2_2_,uVar14);
  if (uVar15 == piVar16[8]) {
    FUN_0102ce78();
  }
  puVar4 = (undefined4 *)(uVar15 * 0x34 + piVar16[9]);
  *puVar4 = local_58;
  puVar4[1] = uStack_54;
  puVar4[2] = uStack_50;
  puVar4[3] = local_4c;
  puVar4[4] = local_48;
  puVar4[5] = iStack_44;
  puVar4[6] = iStack_40;
  puVar4[7] = iStack_3c;
  puVar4[8] = local_38;
  puVar4[9] = uStack_34;
  puVar4[10] = uStack_30;
  puVar4[0xb] = local_2c;
  puVar4[0xc] = local_28;
  piVar16[10] = uVar15 + 1;
  iVar7 = piVar16[6];
  uVar6 = piVar16[7];
  uVar8 = uVar15;
  while( true ) {
    do {
      uVar12 = uVar11;
      uVar11 = 0;
    } while (uVar6 <= uVar12);
    puVar5 = (ushort *)(iVar7 + uVar12 * 4);
    uVar2 = *puVar5;
    if (uVar2 == 0xffff) break;
    *puVar5 = (ushort)uVar8;
    uVar3 = puVar5[1];
    uVar10 = uVar10 + 1;
    puVar5[1] = uVar14;
    uVar8 = (uint)uVar2;
    uVar11 = uVar12 + 1;
    uVar14 = uVar3;
  }
  puVar5[1] = uVar14;
  *puVar5 = (ushort)uVar8;
  bVar17 = false;
  if ((bVar1 | 0x7f < uVar10) == 1) {
    bVar17 = *piVar16 == 0 && piVar16[1] == 0;
  }
  if (bVar17) {
    *piVar16 = 1;
    piVar16[1] = 0;
  }
  if ((uint)piVar16[10] <= uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar15,piVar16[10],&DAT_018a64f4);
  }
  return uVar15 * 0x34 + piVar16[9] + 0xc;
}

