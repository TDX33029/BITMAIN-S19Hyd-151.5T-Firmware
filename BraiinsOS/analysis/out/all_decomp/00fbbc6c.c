// FUN_00fbbc6c @ 00fbbc6c size=400 calls_out=3 calls_in=1
// strings: 

void FUN_00fbbc6c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int local_440 [256];
  uint local_40;
  code *local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar2 = *param_1;
  DataMemoryBarrier(0xb);
  uVar4 = *(uint *)((uVar2 & 0xfffffffc) + 0x408);
  DataMemoryBarrier(0xb);
  piVar8 = (int *)(uVar4 & 0xfffffffc);
  if (piVar8 == (int *)0x0) {
LAB_00fbbdd0:
    thunk_FUN_016d3fb4(*param_1 & 0xfffffffc);
    return;
  }
  puVar9 = param_1 + 8;
LAB_00fbbcdc:
  if (*param_1 == uVar2) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar4;
        if (uVar2 != *puVar9) goto LAB_00fbbd40;
        if (*puVar9 != uVar2) goto LAB_00fbbd3c;
        DataMemoryBarrier(0xb);
        goto LAB_00fbbd24;
      }
    } while (*param_1 == uVar2);
  }
  ClearExclusiveLocal();
  goto LAB_00fbbcc0;
  while (*puVar9 == uVar2) {
LAB_00fbbd24:
    bVar1 = (bool)hasExclusiveAccess(puVar9);
    if (bVar1) {
      *puVar9 = uVar4;
      goto LAB_00fbbd40;
    }
  }
LAB_00fbbd3c:
  ClearExclusiveLocal();
LAB_00fbbd40:
  thunk_FUN_016d3fb4();
  iVar7 = *piVar8;
  local_440[0] = iVar7;
  FUN_016dd1aa(local_440 + 1,piVar8 + 1,0x404);
  if (iVar7 == 0) goto LAB_00fbbdd0;
  if (0x40 < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_40,0x40,&DAT_018813d4);
  }
  if (local_40 != 0) {
    piVar8 = local_440;
    iVar7 = local_40 << 4;
    do {
      pcVar3 = (code *)*piVar8;
      iVar10 = piVar8[1];
      iVar5 = piVar8[2];
      iVar6 = piVar8[3];
      piVar8[3] = 0;
      *piVar8 = (int)&DAT_01040efc;
      piVar8[1] = 0;
      piVar8[2] = 0;
      local_38 = pcVar3;
      local_34 = iVar10;
      local_30 = iVar5;
      local_2c = iVar6;
      (*pcVar3)((uint)&local_38 | 4);
      piVar8 = piVar8 + 4;
      iVar7 = iVar7 + -0x10;
    } while (iVar7 != 0);
  }
LAB_00fbbcc0:
  uVar2 = *param_1;
  DataMemoryBarrier(0xb);
  uVar4 = *(uint *)((uVar2 & 0xfffffffc) + 0x408);
  DataMemoryBarrier(0xb);
  piVar8 = (int *)(uVar4 & 0xfffffffc);
  if (piVar8 == (int *)0x0) goto LAB_00fbbdd0;
  goto LAB_00fbbcdc;
}

