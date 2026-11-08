// FUN_009a7944 @ 009a7944 size=584 calls_out=3 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009a7944(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int *local_34;
  undefined1 local_30;
  undefined4 uStack_2c;
  undefined3 uStack_28;
  
  piVar10 = (int *)(param_2 + 8);
  do {
    if (*piVar10 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar10);
      goto LAB_009a7970;
    }
    bVar17 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar17);
  *piVar10 = 1;
  DataMemoryBarrier(0xb);
LAB_009a7970:
  uVar11 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_2 + 0xc);
  }
  else {
    uVar11 = FUN_015bf3f8();
    uVar11 = uVar11 ^ 1;
    cVar1 = *(char *)(param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_30 = (undefined1)uVar11;
    local_34 = piVar10;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0035005e,0x1a,&local_34,&DAT_018698ec,&DAT_0186986c);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar16 = *(undefined4 *)(param_2 + 0x5c);
  uVar13 = *(undefined4 *)(param_2 + 0x38);
  uVar14 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined1 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  uVar22 = *(undefined4 *)(param_2 + 0x3c);
  uVar18 = *(undefined4 *)(param_2 + 0x40);
  bVar17 = *(char *)(param_2 + 0x54) != '\0';
  uVar19 = *(undefined4 *)(param_2 + 0x44);
  uVar20 = *(undefined4 *)(param_2 + 0x48);
  uVar21 = *(undefined4 *)(param_2 + 0x4c);
  uVar23 = *(undefined4 *)(param_2 + 0x50);
  uVar12 = *(undefined4 *)(param_2 + 0x14);
  uVar15 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined4 *)(param_2 + 0x2c);
  if (!bVar17) {
    uStack_28 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x58) >> 8);
    uStack_2c = *(undefined4 *)(param_2 + 0x55);
  }
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = uVar12;
  param_1[2] = uVar15;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[6] = uVar7;
  param_1[8] = uVar9;
  uVar3 = *(undefined1 *)(param_2 + 100);
  uVar5 = *(undefined4 *)(param_2 + 0x60);
  param_1[7] = uVar8;
  *(undefined4 *)((int)param_1 + 0x45) = uStack_2c;
  param_1[0x13] = uVar16;
  param_1[0xb] = uVar22;
  param_1[0xc] = uVar18;
  param_1[0xd] = uVar19;
  param_1[0xe] = uVar20;
  param_1[0xf] = uVar21;
  param_1[0x10] = uVar23;
  param_1[10] = uVar13;
  *(undefined1 *)(param_1 + 9) = uVar2;
  param_1[5] = uVar14;
  *(bool *)(param_1 + 0x11) = bVar17;
  param_1[0x14] = uVar5;
  *(undefined1 *)(param_1 + 0x15) = uVar3;
  param_1[0x12] = CONCAT31(uStack_28,uStack_2c._3_1_);
  if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar10;
    bVar17 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar17);
  *piVar10 = 0;
  if (iVar4 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar10,0x81,1,param_5);
    return;
  }
  return;
}

