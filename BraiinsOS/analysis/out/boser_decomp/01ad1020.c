// FUN_01ad1020 @ 01ad1020 size=584 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_01ad1020(int *param_1)

{
  short sVar1;
  undefined8 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  iVar16 = param_1[3];
  iVar15 = param_1[5];
  uVar11 = (uint)*(ushort *)(iVar16 + 0x3a2);
  uVar7 = (uint)*(ushort *)(iVar15 + 0x3a2);
  iVar10 = uVar11 + 1;
  uVar8 = iVar10 + uVar7;
  if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar9 = *param_1;
  uVar14 = param_1[2];
  uVar12 = param_1[1];
  uVar2 = *(undefined8 *)param_1;
  puVar3 = (ushort *)(iVar9 + 0x3a2);
  uVar13 = (uint)*puVar3;
  *(ushort *)(iVar16 + 0x3a2) = (ushort)uVar8;
  iVar6 = ~uVar14 + uVar13;
  iVar4 = iVar9 + uVar14 * 0xc;
  local_70 = *(undefined4 *)(iVar4 + 0x31c);
  uStack_6c = *(undefined4 *)(iVar4 + 800);
  uStack_68 = *(undefined4 *)(iVar4 + 0x324);
  FUN_01bed864((undefined4 *)(iVar4 + 0x31c),iVar4 + 0x328,iVar6 * 0xc);
  puVar5 = (undefined4 *)(iVar16 + 0x31c + uVar11 * 0xc);
  *puVar5 = local_70;
  puVar5[1] = uStack_6c;
  puVar5[2] = uStack_68;
  FUN_01bed4e2(iVar16 + 0x31c + iVar10 * 0xc,iVar15 + 0x31c,uVar7 * 0xc);
  iVar4 = iVar9 + uVar14 * 0x48;
  FUN_01bed4e2(&local_70,iVar4,0x48);
  FUN_01bed864(iVar4,iVar4 + 0x48,iVar6 * 0x48);
  FUN_01bed4e2(iVar16 + uVar11 * 0x48,&local_70,0x48);
  FUN_01bed4e2(iVar16 + iVar10 * 0x48,iVar15,uVar7 * 0x48);
  iVar4 = iVar9 + (uVar14 + 1) * 4;
  FUN_01bed864(iVar4 + 0x3a8,iVar4 + 0x3ac,iVar6 * 4);
  if (uVar14 + 1 < uVar13) {
    do {
      iVar4 = uVar14 * 4;
      uVar14 = uVar14 + 1;
      iVar4 = *(int *)(iVar9 + iVar4 + 0x3ac);
      *(short *)(iVar4 + 0x3a0) = (short)uVar14;
      *(int *)(iVar4 + 0x318) = iVar9;
    } while (uVar13 - 1 != uVar14);
  }
  *puVar3 = *puVar3 - 1;
  if (1 < uVar12) {
    iVar4 = uVar7 + 1;
    if (iVar4 != uVar8 - uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar16 + 0x3a8 + iVar10 * 4,iVar15 + 0x3a8,iVar4 * 4);
    iVar10 = uVar11 + 0xeb;
    do {
      iVar6 = *(int *)(iVar16 + iVar10 * 4);
      sVar1 = (short)iVar10;
      iVar10 = iVar10 + 1;
      iVar4 = iVar4 + -1;
      *(short *)(iVar6 + 0x3a0) = sVar1 + -0xea;
      *(int *)(iVar6 + 0x318) = iVar16;
    } while (iVar4 != 0);
  }
  thunk_FUN_01be4678(iVar15);
  return uVar2;
}

