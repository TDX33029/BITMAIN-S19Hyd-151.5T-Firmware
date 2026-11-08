// FUN_0182c99c @ 0182c99c size=300 calls_out=2 calls_in=2
// strings: size overflows MAX_SIZE

void FUN_0182c99c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  bool bVar15;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar13 = (int *)*param_2;
  local_48 = param_2[1];
  uStack_44 = param_2[2];
  uStack_40 = param_2[3];
  uStack_3c = param_2[4];
  bVar1 = *(byte *)((int)param_2 + 0x1a);
  uVar12 = piVar13[10];
  uVar14 = param_2[5];
  uVar11 = *(ushort *)(param_2 + 6);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uStack_28 = param_3[4];
  iVar5 = FUN_0141c310(piVar13,uVar11,&local_48);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&local_38,&DAT_01d2f38c,&DAT_01d1e474);
  }
  iVar5 = piVar13[6];
  uVar9 = piVar13[7];
  uVar6 = 0;
  uVar7 = uVar12 & 0xffff;
  uVar4 = uVar14;
  while( true ) {
    do {
      uVar10 = uVar4;
      uVar4 = 0;
    } while (uVar9 <= uVar10);
    puVar8 = (ushort *)(iVar5 + uVar10 * 4);
    uVar2 = *puVar8;
    if (uVar2 == 0xffff) break;
    *puVar8 = (ushort)uVar7;
    uVar3 = puVar8[1];
    uVar6 = uVar6 + 1;
    puVar8[1] = uVar11;
    uVar7 = (uint)uVar2;
    uVar4 = uVar10 + 1;
    uVar11 = uVar3;
  }
  *puVar8 = (ushort)uVar7;
  puVar8[1] = uVar11;
  bVar15 = false;
  if ((uVar6 < 0x80 & (bVar1 ^ 1)) == 0) {
    bVar15 = *piVar13 == 0 && piVar13[1] == 0;
  }
  if (bVar15) {
    *piVar13 = 1;
    piVar13[1] = 0;
  }
  *param_1 = piVar13;
  param_1[1] = uVar14;
  param_1[2] = uVar12;
  return;
}

