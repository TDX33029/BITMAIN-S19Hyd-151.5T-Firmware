// FUN_01ad21f4 @ 01ad21f4 size=576 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_01ad21f4(int *param_1)

{
  undefined8 uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  
  iVar12 = param_1[3];
  iVar15 = param_1[5];
  uVar9 = (uint)*(ushort *)(iVar12 + 0x10b2);
  uVar6 = (uint)*(ushort *)(iVar15 + 0x10b2);
  iVar8 = uVar9 + 1;
  uVar7 = iVar8 + uVar6;
  if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar14 = *param_1;
  uVar13 = param_1[2];
  uVar10 = param_1[1];
  uVar1 = *(undefined8 *)param_1;
  puVar2 = (ushort *)(iVar14 + 0x10b2);
  uVar11 = (uint)*puVar2;
  *(ushort *)(iVar12 + 0x10b2) = (ushort)uVar7;
  iVar3 = iVar14 + uVar13 * 0xc;
  iVar5 = ~uVar13 + uVar11;
  local_1a0 = *(undefined4 *)(iVar3 + 0x102c);
  uStack_19c = *(undefined4 *)(iVar3 + 0x1030);
  uStack_198 = *(undefined4 *)(iVar3 + 0x1034);
  FUN_01bed864((undefined4 *)(iVar3 + 0x102c),iVar3 + 0x1038,iVar5 * 0xc);
  puVar4 = (undefined4 *)(iVar12 + 0x102c + uVar9 * 0xc);
  *puVar4 = local_1a0;
  puVar4[1] = uStack_19c;
  puVar4[2] = uStack_198;
  FUN_01bed4e2(iVar12 + 0x102c + iVar8 * 0xc,iVar15 + 0x102c,uVar6 * 0xc);
  iVar3 = uVar13 * 0x178 + iVar14;
  FUN_01bed4e2(&local_1a0,iVar3,0x178);
  FUN_01bed864(iVar3,iVar3 + 0x178,iVar5 * 0x178);
  FUN_01bed4e2(uVar9 * 0x178 + iVar12,&local_1a0,0x178);
  FUN_01bed4e2(iVar8 * 0x178 + iVar12,iVar15,uVar6 * 0x178);
  iVar3 = iVar14 + (uVar13 + 1) * 4;
  FUN_01bed864(iVar3 + 0x10b8,iVar3 + 0x10bc,iVar5 * 4);
  if (uVar13 + 1 < uVar11) {
    do {
      iVar3 = *(int *)(iVar14 + 0x10bc + uVar13 * 4);
      uVar13 = uVar13 + 1;
      *(int *)(&DAT_00001028 + iVar3) = iVar14;
      *(short *)(&DAT_000010b0 + iVar3) = (short)uVar13;
    } while (uVar11 - 1 != uVar13);
  }
  *puVar2 = *puVar2 - 1;
  if (1 < uVar10) {
    iVar3 = uVar6 + 1;
    if (iVar3 != uVar7 - uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar12 + 0x10b8 + iVar8 * 4,iVar15 + 0x10b8,iVar3 * 4);
    do {
      iVar8 = *(int *)(iVar12 + 0x10bc + uVar9 * 4);
      uVar9 = uVar9 + 1;
      iVar3 = iVar3 + -1;
      *(int *)(&DAT_00001028 + iVar8) = iVar12;
      *(short *)(&DAT_000010b0 + iVar8) = (short)uVar9;
    } while (iVar3 != 0);
  }
  thunk_FUN_01be4678(iVar15);
  return uVar1;
}

