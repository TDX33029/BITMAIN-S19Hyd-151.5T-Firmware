// FUN_0107d010 @ 0107d010 size=324 calls_out=9 calls_in=5
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0107d0d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0107d010(int *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;
  double dVar10;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = param_1[1];
  DataMemoryBarrier(0xb);
  iVar4 = *param_1;
  pcVar3 = (char *)(iVar4 + 8);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0107d050;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar3);
LAB_0107d050:
  dVar8 = (double)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_0128236c(pcVar3);
  puVar5 = *(undefined1 **)(iVar4 + 0x18);
  if (puVar5 != &DAT_3b9aca00) {
    uVar6 = *(undefined4 *)(iVar4 + 0x10);
    uVar7 = *(undefined4 *)(iVar4 + 0x14);
    FUN_015f3b0c(&local_38,1);
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = local_30;
    local_48 = uVar6;
    local_44 = uVar7;
    local_40 = puVar5;
    FUN_015f3c24(&local_38,&local_58,&local_48);
    dVar10 = (double)FUN_01845f30(local_30,local_2c);
    dVar9 = (double)VectorUnsignedToFloat(local_28,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = dVar9 / 1000000000.0 + dVar10;
    FUN_016d5578(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),0);
    FUN_016d5330(SUB84(dVar10 / -180.0,0));
    dVar10 = dVar10 / -180.0;
    if ((local_38 & 1) != 0) {
      dVar10 = 0.9944598480048967;
    }
    dVar8 = dVar10 * dVar8;
  }
  FUN_01282570(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_0107d134;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar3);
LAB_0107d134:
  return SUB84(dVar8,0);
}

