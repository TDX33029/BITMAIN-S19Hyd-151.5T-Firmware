// FUN_0125fb68 @ 0125fb68 size=408 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_0125fb68(int *param_1)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar10 = param_1[3];
  iVar5 = param_1[5];
  uVar16 = (uint)*(ushort *)(iVar10 + 0x5e);
  uVar12 = (uint)*(ushort *)(iVar5 + 0x5e);
  iVar9 = uVar16 + 1;
  uVar11 = iVar9 + uVar12;
  if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar13 = *param_1;
  uVar14 = param_1[2];
  uVar8 = param_1[1];
  iVar3 = param_1[4];
  uVar15 = (uint)*(ushort *)(iVar13 + 0x5e);
  *(short *)(iVar10 + 0x5e) = (short)uVar11;
  puVar4 = (undefined4 *)(iVar13 + uVar14 * 8);
  uVar6 = *puVar4;
  uVar1 = *(undefined1 *)(puVar4 + 1);
  FUN_01bed864(puVar4,puVar4 + 2,(~uVar14 + uVar15) * 8);
  puVar4 = (undefined4 *)(iVar10 + uVar16 * 8);
  *puVar4 = uVar6;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  FUN_01bed4e2(iVar10 + iVar9 * 8,iVar5,uVar12 << 3);
  iVar7 = iVar13 + (uVar14 + 1) * 4;
  FUN_01bed864(iVar7 + 0x60,iVar7 + 100,(~uVar14 + uVar15) * 4);
  if (uVar14 + 1 < uVar15) {
    do {
      iVar7 = uVar14 * 4;
      uVar14 = uVar14 + 1;
      iVar7 = *(int *)(iVar13 + iVar7 + 100);
      *(short *)(iVar7 + 0x5c) = (short)uVar14;
      *(int *)(iVar7 + 0x58) = iVar13;
    } while (uVar15 - 1 != uVar14);
  }
  *(short *)(iVar13 + 0x5e) = *(short *)(iVar13 + 0x5e) + -1;
  if (1 < uVar8) {
    iVar7 = uVar12 + 1;
    if (iVar7 != uVar11 - uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar10 + 0x60 + iVar9 * 4,iVar5 + 0x60,iVar7 * 4);
    iVar9 = uVar16 + 0x19;
    do {
      iVar13 = *(int *)(iVar10 + iVar9 * 4);
      sVar2 = (short)iVar9;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + -1;
      *(short *)(iVar13 + 0x5c) = sVar2 + -0x18;
      *(int *)(iVar13 + 0x58) = iVar10;
    } while (iVar7 != 0);
  }
  thunk_FUN_01be4678(iVar5);
  return CONCAT44(iVar3,iVar10);
}

