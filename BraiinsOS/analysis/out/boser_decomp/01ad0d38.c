// FUN_01ad0d38 @ 01ad0d38 size=704 calls_out=3 calls_in=2
// strings: assertion failed: count > 0 | internal error: entered unreachable code

void FUN_01ad0d38(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_120 [72];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [72];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [76];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff40);
  }
  iVar4 = param_1[5];
  uVar13 = (uint)*(ushort *)(iVar4 + 0x3a2);
  uVar9 = param_2 + uVar13;
  if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a99,0x33,&DAT_01d30608);
  }
  iVar11 = param_1[3];
  uVar5 = (uint)*(ushort *)(iVar11 + 0x3a2);
  if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
  }
  iVar3 = iVar4 + 0x31c;
  iVar8 = uVar5 - param_2;
  *(ushort *)(iVar11 + 0x3a2) = (ushort)iVar8;
  *(ushort *)(iVar4 + 0x3a2) = (ushort)uVar9;
  FUN_01bed864(iVar3 + param_2 * 0xc,iVar3,uVar13 * 0xc);
  FUN_01bed864(iVar4 + param_2 * 0x48,iVar4,uVar13 * 0x48);
  iVar7 = iVar8 + 1;
  iVar6 = uVar5 - iVar7;
  if (iVar6 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
  }
  FUN_01bed4e2(iVar3,iVar11 + 0x31c + iVar7 * 0xc,iVar6 * 0xc);
  FUN_01bed4e2(iVar4,iVar11 + iVar7 * 0x48,iVar6 * 0x48);
  FUN_01bed4e2(auStack_120,iVar11 + iVar8 * 0x48,0x48);
  iVar12 = param_1[2];
  iVar10 = *param_1;
  iVar1 = iVar10 + iVar12 * 0xc;
  local_d8 = *(undefined4 *)(iVar1 + 0x31c);
  uStack_d4 = *(undefined4 *)(iVar1 + 800);
  uStack_d0 = *(undefined4 *)(iVar1 + 0x324);
  FUN_01bed864((undefined4 *)(iVar1 + 0x31c),iVar11 + 0x31c + iVar8 * 0xc,0xc);
  iVar10 = iVar10 + iVar12 * 0x48;
  FUN_01bed4e2(auStack_c8,iVar10,0x48);
  FUN_01bed4e2(iVar10,auStack_120,0x48);
  local_80 = local_d8;
  uStack_7c = uStack_d4;
  uStack_78 = uStack_d0;
  FUN_01bed4e2(auStack_70,auStack_c8,0x48);
  puVar2 = (undefined4 *)(iVar3 + iVar6 * 0xc);
  *puVar2 = local_80;
  puVar2[1] = uStack_7c;
  puVar2[2] = uStack_78;
  FUN_01bed4e2(iVar4 + iVar6 * 0x48,auStack_70,0x48);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_01ad0fe0;
  }
  else {
    if (param_1[6] == 0) {
LAB_01ad0fe0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30628);
    }
    iVar3 = iVar4 + 0x3a8;
    FUN_01bed864(iVar3 + param_2 * 4,iVar3,uVar13 * 4 + 4);
    FUN_01bed4e2(iVar3,iVar11 + iVar7 * 4 + 0x3a8,param_2 << 2);
    iVar11 = 0;
    do {
      iVar3 = *(int *)(iVar4 + iVar11 * 4 + 0x3a8);
      *(short *)(iVar3 + 0x3a0) = (short)iVar11;
      iVar11 = iVar11 + 1;
      *(int *)(iVar3 + 0x318) = iVar4;
    } while (uVar9 + 1 != iVar11);
  }
  return;
}

