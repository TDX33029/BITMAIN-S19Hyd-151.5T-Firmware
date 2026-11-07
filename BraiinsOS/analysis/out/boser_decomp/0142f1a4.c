// FUN_0142f1a4 @ 0142f1a4 size=284 calls_out=2 calls_in=2
// strings: 

uint FUN_0142f1a4(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  ushort uVar13;
  bool bVar14;
  
  piVar12 = (int *)*param_1;
  bVar1 = *(byte *)((int)param_1 + 0x1a);
  uVar11 = piVar12[10];
  uVar9 = param_1[5];
  uVar13 = *(ushort *)(param_1 + 6);
  iVar4 = FUN_0141c310(piVar12,uVar13);
  uVar5 = 0;
  if (iVar4 == 0) {
    iVar4 = piVar12[6];
    uVar8 = piVar12[7];
    uVar6 = uVar11 & 0xffff;
    while( true ) {
      do {
        uVar10 = uVar9;
        uVar9 = 0;
      } while (uVar8 <= uVar10);
      puVar7 = (ushort *)(iVar4 + uVar10 * 4);
      uVar2 = *puVar7;
      if (uVar2 == 0xffff) break;
      *puVar7 = (ushort)uVar6;
      uVar3 = puVar7[1];
      uVar5 = uVar5 + 1;
      puVar7[1] = uVar13;
      uVar6 = (uint)uVar2;
      uVar9 = uVar10 + 1;
      uVar13 = uVar3;
    }
    *puVar7 = (ushort)uVar6;
    puVar7[1] = uVar13;
    bVar14 = false;
    if ((uVar5 < 0x80 & (bVar1 ^ 1)) == 0) {
      bVar14 = *piVar12 == 0 && piVar12[1] == 0;
    }
    if (bVar14) {
      *piVar12 = 1;
      piVar12[1] = 0;
    }
    if ((uint)piVar12[10] <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar11,piVar12[10],&DAT_01cf54d8);
    }
    uVar5 = uVar11 * 0x34 + piVar12[9] + 0xc;
  }
  return uVar5;
}

