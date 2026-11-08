// FUN_01ad1ef8 @ 01ad1ef8 size=724 calls_out=3 calls_in=2
// strings: assertion failed: count > 0 | internal error: entered unreachable code

void FUN_01ad1ef8(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_4b0 [376];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined1 auStack_328 [376];
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [380];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff40);
  }
  iVar6 = param_1[5];
  uVar9 = (uint)*(ushort *)(iVar6 + 0x10b2);
  uVar10 = param_2 + uVar9;
  if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a99,0x33,&DAT_01d30608);
  }
  iVar7 = param_1[3];
  uVar8 = (uint)*(ushort *)(iVar7 + 0x10b2);
  if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
  }
  iVar12 = uVar8 - param_2;
  *(ushort *)(iVar7 + 0x10b2) = (ushort)iVar12;
  *(ushort *)(iVar6 + 0x10b2) = (ushort)uVar10;
  iVar2 = iVar6 + 0x102c;
  FUN_01bed864(iVar2 + param_2 * 0xc,iVar2,uVar9 * 0xc);
  FUN_01bed864(param_2 * 0x178 + iVar6,iVar6,uVar9 * 0x178);
  iVar3 = iVar12 + 1;
  iVar5 = uVar8 - iVar3;
  if (iVar5 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
  }
  FUN_01bed4e2(iVar2,iVar7 + 0x102c + iVar3 * 0xc,iVar5 * 0xc);
  FUN_01bed4e2(iVar6,iVar3 * 0x178 + iVar7,iVar5 * 0x178);
  FUN_01bed4e2(auStack_4b0,iVar12 * 0x178 + iVar7,0x178);
  iVar13 = *param_1;
  iVar11 = param_1[2];
  iVar1 = iVar13 + iVar11 * 0xc;
  local_338 = *(undefined4 *)(iVar1 + 0x102c);
  uStack_334 = *(undefined4 *)(iVar1 + 0x1030);
  uStack_330 = *(undefined4 *)(iVar1 + 0x1034);
  FUN_01bed864((undefined4 *)(iVar1 + 0x102c),iVar7 + 0x102c + iVar12 * 0xc,0xc);
  iVar13 = iVar11 * 0x178 + iVar13;
  FUN_01bed4e2(auStack_328,iVar13,0x178);
  FUN_01bed4e2(iVar13,auStack_4b0,0x178);
  local_1b0 = local_338;
  uStack_1ac = uStack_334;
  uStack_1a8 = uStack_330;
  FUN_01bed4e2(auStack_1a0,auStack_328,0x178);
  puVar4 = (undefined4 *)(iVar2 + iVar5 * 0xc);
  *puVar4 = local_1b0;
  puVar4[1] = uStack_1ac;
  puVar4[2] = uStack_1a8;
  FUN_01bed4e2(iVar5 * 0x178 + iVar6,auStack_1a0,0x178);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_01ad21b4;
  }
  else {
    if (param_1[6] == 0) {
LAB_01ad21b4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30628);
    }
    iVar2 = iVar6 + 0x10b8;
    FUN_01bed864(iVar2 + param_2 * 4,iVar2,uVar9 * 4 + 4);
    FUN_01bed4e2(iVar2,iVar7 + iVar3 * 4 + 0x10b8,param_2 << 2);
    iVar7 = 0;
    do {
      iVar3 = *(int *)(iVar2 + iVar7 * 4);
      *(int *)(&DAT_00001028 + iVar3) = iVar6;
      *(short *)(&DAT_000010b0 + iVar3) = (short)iVar7;
      iVar7 = iVar7 + 1;
    } while (uVar10 + 1 != iVar7);
  }
  return;
}

