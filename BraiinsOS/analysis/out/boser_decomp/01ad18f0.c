// FUN_01ad18f0 @ 01ad18f0 size=596 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_01ad18f0(int *param_1)

{
  undefined8 uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  iVar13 = param_1[3];
  iVar7 = param_1[5];
  uVar10 = (uint)*(ushort *)(iVar13 + 0x5b2);
  uVar8 = (uint)*(ushort *)(iVar7 + 0x5b2);
  iVar9 = uVar10 + 1;
  uVar5 = iVar9 + uVar8;
  if (0xb < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar15 = *param_1;
  uVar14 = param_1[2];
  uVar11 = param_1[1];
  uVar1 = *(undefined8 *)param_1;
  puVar2 = (ushort *)(iVar15 + 0x5b2);
  uVar12 = (uint)*puVar2;
  *(ushort *)(iVar13 + 0x5b2) = (ushort)uVar5;
  iVar3 = iVar15 + uVar14 * 0xc;
  iVar6 = ~uVar14 + uVar12;
  local_a0 = *(undefined4 *)(iVar3 + 0x52c);
  uStack_9c = *(undefined4 *)(iVar3 + 0x530);
  uStack_98 = *(undefined4 *)(iVar3 + 0x534);
  FUN_01bed864((undefined4 *)(iVar3 + 0x52c),iVar3 + 0x538,iVar6 * 0xc);
  puVar4 = (undefined4 *)(iVar13 + 0x52c + uVar10 * 0xc);
  *puVar4 = local_a0;
  puVar4[1] = uStack_9c;
  puVar4[2] = uStack_98;
  FUN_01bed4e2(iVar13 + 0x52c + iVar9 * 0xc,iVar7 + 0x52c,uVar8 * 0xc);
  iVar3 = iVar15 + uVar14 * 0x78;
  FUN_01bed4e2(&local_a0,iVar3,0x78);
  FUN_01bed864(iVar3,iVar3 + 0x78,iVar6 * 0x78);
  FUN_01bed4e2(iVar13 + uVar10 * 0x78,&local_a0,0x78);
  FUN_01bed4e2(iVar13 + iVar9 * 0x78,iVar7,uVar8 * 0x78);
  iVar3 = iVar15 + (uVar14 + 1) * 4;
  FUN_01bed864(iVar3 + 0x5b8,iVar3 + 0x5bc,iVar6 * 4);
  if (uVar14 + 1 < uVar12) {
    do {
      iVar3 = *(int *)(iVar15 + 0x5bc + uVar14 * 4);
      uVar14 = uVar14 + 1;
      *(short *)(iVar3 + 0x5b0) = (short)uVar14;
      *(int *)(iVar3 + 0x528) = iVar15;
    } while (uVar12 - 1 != uVar14);
  }
  *puVar2 = *puVar2 - 1;
  if (1 < uVar11) {
    iVar3 = uVar8 + 1;
    if (iVar3 != uVar5 - uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar13 + 0x5b8 + iVar9 * 4,iVar7 + 0x5b8,iVar3 * 4);
    do {
      iVar9 = *(int *)(iVar13 + 0x5bc + uVar10 * 4);
      uVar10 = uVar10 + 1;
      iVar3 = iVar3 + -1;
      *(short *)(iVar9 + 0x5b0) = (short)uVar10;
      *(int *)(iVar9 + 0x528) = iVar13;
    } while (iVar3 != 0);
  }
  thunk_FUN_01be4678(iVar7);
  return uVar1;
}

