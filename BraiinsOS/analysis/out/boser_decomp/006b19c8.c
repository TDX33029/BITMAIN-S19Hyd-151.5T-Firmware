// FUN_006b19c8 @ 006b19c8 size=588 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_006b19c8(int *param_1)

{
  short sVar1;
  undefined8 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  
  iVar13 = param_1[3];
  iVar8 = param_1[5];
  uVar15 = (uint)*(ushort *)(iVar13 + 0x81a);
  uVar16 = (uint)*(ushort *)(iVar8 + 0x81a);
  iVar9 = uVar15 + 1;
  uVar6 = iVar9 + uVar16;
  if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar10 = *param_1;
  uVar11 = param_1[1];
  uVar2 = *(undefined8 *)param_1;
  uVar14 = param_1[2];
  puVar3 = (ushort *)(iVar10 + 0x81a);
  uVar12 = (uint)*puVar3;
  *(ushort *)(iVar13 + 0x81a) = (ushort)uVar6;
  iVar4 = iVar10 + uVar14 * 0xc;
  iVar7 = ~uVar14 + uVar12;
  local_d8 = *(undefined4 *)(iVar4 + 0x794);
  uStack_d4 = *(undefined4 *)(iVar4 + 0x798);
  uStack_d0 = *(undefined4 *)(iVar4 + 0x79c);
  FUN_01bed864((undefined4 *)(iVar4 + 0x794),iVar4 + 0x7a0,iVar7 * 0xc);
  puVar5 = (undefined4 *)(iVar13 + 0x794 + uVar15 * 0xc);
  *puVar5 = local_d8;
  puVar5[1] = uStack_d4;
  puVar5[2] = uStack_d0;
  FUN_01bed4e2(iVar13 + 0x794 + iVar9 * 0xc,iVar8 + 0x794,uVar16 * 0xc);
  iVar4 = uVar14 * 0xb0 + iVar10;
  FUN_01bed4e2(&local_d8,iVar4,0xb0);
  FUN_01bed864(iVar4,iVar4 + 0xb0,iVar7 * 0xb0);
  FUN_01bed4e2(uVar15 * 0xb0 + iVar13,&local_d8,0xb0);
  FUN_01bed4e2(iVar9 * 0xb0 + iVar13,iVar8,uVar16 * 0xb0);
  iVar4 = iVar10 + (uVar14 + 1) * 4;
  FUN_01bed864(iVar4 + 0x820,iVar4 + 0x824,iVar7 * 4);
  if (uVar14 + 1 < uVar12) {
    iVar4 = uVar14 + 0x209;
    do {
      iVar7 = *(int *)(iVar10 + iVar4 * 4);
      sVar1 = (short)iVar4;
      iVar4 = iVar4 + 1;
      *(short *)(iVar7 + 0x818) = sVar1 + -0x208;
      *(int *)(iVar7 + 0x790) = iVar10;
    } while (iVar4 - uVar12 != 0x208);
  }
  *puVar3 = *puVar3 - 1;
  if (1 < uVar11) {
    iVar4 = uVar16 + 1;
    if (iVar4 != uVar6 - uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar13 + 0x820 + iVar9 * 4,iVar8 + 0x820,iVar4 * 4);
    iVar9 = uVar15 + 0x209;
    do {
      iVar7 = *(int *)(iVar13 + iVar9 * 4);
      sVar1 = (short)iVar9;
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
      *(short *)(iVar7 + 0x818) = sVar1 + -0x208;
      *(int *)(iVar7 + 0x790) = iVar13;
    } while (iVar4 != 0);
  }
  thunk_FUN_01be4678(iVar8);
  return uVar2;
}

