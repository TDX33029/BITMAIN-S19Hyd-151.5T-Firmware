// FUN_0167a6f0 @ 0167a6f0 size=456 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_0167a6f0(int *param_1)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  
  iVar11 = param_1[3];
  iVar15 = param_1[5];
  uVar7 = (uint)*(ushort *)(iVar11 + 0x8a);
  uVar5 = (uint)*(ushort *)(iVar15 + 0x8a);
  iVar14 = uVar7 + 1;
  uVar8 = iVar14 + uVar5;
  if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar10 = *param_1;
  uVar13 = param_1[2];
  uVar6 = param_1[1];
  uVar2 = *(undefined8 *)param_1;
  uVar9 = (uint)*(ushort *)(iVar10 + 0x8a);
  iVar3 = iVar10 + uVar13 * 4;
  *(short *)(iVar11 + 0x8a) = (short)uVar8;
  puVar4 = (undefined4 *)(iVar3 + 0x5c);
  uVar12 = *puVar4;
  FUN_01bed864(puVar4,iVar3 + 0x60);
  *(undefined4 *)(iVar11 + 0x5c + uVar7 * 4) = uVar12;
  FUN_01bed4e2(iVar11 + 0x5c + iVar14 * 4,iVar15 + 0x5c,uVar5 << 2);
  puVar4 = (undefined4 *)(iVar10 + uVar13 * 8);
  uVar12 = *puVar4;
  uVar16 = puVar4[1];
  FUN_01bed864(puVar4,puVar4 + 2,(~uVar13 + uVar9) * 8);
  puVar4 = (undefined4 *)(iVar11 + uVar7 * 8);
  *puVar4 = uVar12;
  puVar4[1] = uVar16;
  FUN_01bed4e2(iVar11 + iVar14 * 8,iVar15,uVar5 << 3);
  iVar3 = iVar10 + (uVar13 + 1) * 4;
  FUN_01bed864(iVar3 + 0x8c,iVar3 + 0x90,(~uVar13 + uVar9) * 4);
  if (uVar13 + 1 < uVar9) {
    do {
      iVar3 = uVar13 * 4;
      uVar13 = uVar13 + 1;
      iVar3 = *(int *)(iVar10 + iVar3 + 0x90);
      *(short *)(iVar3 + 0x88) = (short)uVar13;
      *(int *)(iVar3 + 0x58) = iVar10;
    } while (uVar9 - 1 != uVar13);
  }
  *(short *)(iVar10 + 0x8a) = *(short *)(iVar10 + 0x8a) + -1;
  if (1 < uVar6) {
    iVar3 = uVar5 + 1;
    if (iVar3 != uVar8 - uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar11 + 0x8c + iVar14 * 4,iVar15 + 0x8c,iVar3 * 4);
    iVar14 = uVar7 + 0x24;
    do {
      iVar10 = *(int *)(iVar11 + iVar14 * 4);
      sVar1 = (short)iVar14;
      iVar14 = iVar14 + 1;
      iVar3 = iVar3 + -1;
      *(short *)(iVar10 + 0x88) = sVar1 + -0x23;
      *(int *)(iVar10 + 0x58) = iVar11;
    } while (iVar3 != 0);
  }
  thunk_FUN_01be4678(iVar15);
  return uVar2;
}

