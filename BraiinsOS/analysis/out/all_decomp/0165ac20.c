// FUN_0165ac20 @ 0165ac20 size=464 calls_out=8 calls_in=1
// strings: 

void FUN_0165ac20(void)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int local_30;
  byte local_2c;
  undefined4 *local_28;
  
  if (DAT_018d90f8 != 0) {
    iVar11 = DAT_018d90f8 * 0x1c;
    uVar9 = DAT_018d90f8;
    do {
      iVar11 = iVar11 + -0x1c;
      uVar9 = uVar9 - 1;
      if (DAT_018d90f8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar9,DAT_018d90f8,&DAT_018ad334);
      }
      FUN_016525a4(&local_30,DAT_018d90f4 + iVar11);
      bVar3 = local_2c;
      iVar2 = local_30;
      if (local_30 != 0 || (local_2c & 1) != 0) {
        if (DAT_018d90f8 <= uVar9) {
          FUN_006028e8(uVar9);
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xfdee,0x165adec);
          (*pcVar6)();
        }
        uVar14 = DAT_018d90f8 - 1;
        iVar5 = DAT_018d90f4 + iVar11;
        iVar7 = *(int *)(iVar5 + 0x18);
        iVar8 = *(int *)(iVar5 + 0xc);
        iVar12 = *(int *)(iVar5 + 0x10);
        iVar10 = *(int *)(iVar5 + 0x14);
        FUN_016dd52c(iVar5,DAT_018d90f4 + uVar14 * 0x1c,0x1c);
        DAT_018d90f8 = uVar14;
        if (iVar8 != -1) {
          FUN_016dffb2(iVar8);
        }
        if (iVar12 != -1) {
          FUN_016dffb2(iVar12);
        }
        if (iVar10 != -1) {
          FUN_016dffb2(iVar10);
        }
        if (iVar7 != -1) {
          FUN_016dffb2();
        }
        puVar4 = local_28;
        if ((iVar2 != 0) && (bVar3 == 3)) {
          uVar13 = *local_28;
          puVar15 = (undefined4 *)local_28[1];
          pcVar6 = (code *)*puVar15;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar13);
          }
          if (puVar15[1] != 0) {
            thunk_FUN_016d3fb4(uVar13);
          }
          thunk_FUN_016d3fb4(puVar4);
        }
      }
    } while (uVar9 != 0);
  }
  FUN_01282570(&DAT_018d90ec);
  if (DAT_018d90ec != '\x01') {
    ClearExclusiveLocal();
    FUN_01280a5c(&DAT_018d90ec);
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18d90ec);
  } while (!bVar1);
  DAT_018d90ec = 0;
  return;
}

