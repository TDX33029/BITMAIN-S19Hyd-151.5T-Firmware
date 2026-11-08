// FUN_016a1584 @ 016a1584 size=344 calls_out=6 calls_in=2
// strings: 

void FUN_016a1584(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_28;
  uint local_24;
  uint uStack_20;
  uint local_1c;
  
  uVar11 = thunk_FUN_016de0ee(param_1,param_2,0x2a8);
  iVar4 = (int)((ulonglong)uVar11 >> 0x20);
  puVar2 = (uint *)((int)uVar11 + extraout_r2);
  if ((*puVar2 & 1) == 0) {
    FUN_0162b20c(&local_28,puVar2);
  }
  else {
    local_28 = puVar2[1];
    local_24 = puVar2[2];
    uStack_20 = puVar2[3];
    local_1c = puVar2[4];
  }
  iVar5 = *(int *)(iVar4 + 0xc + local_24 * 4);
  DataMemoryBarrier(0xb);
  if ((iVar5 != 0) && (puVar2 = (uint *)(iVar5 + local_1c * 0x14), (char)puVar2[4] != '\0')) {
    uVar3 = *puVar2;
    if (0x7ffffffe < uVar3) {
      FUN_00fb71b0(&DAT_018ae458,iVar4);
      *puVar2 = *puVar2 - 1;
                    /* WARNING: Subroutine does not return */
      FUN_01842e60();
    }
    uVar7 = puVar2[2];
    *puVar2 = uVar3 + 1;
    iVar6 = uVar7 + puVar2[3] * 0x10;
    iVar5 = puVar2[3] << 4;
    do {
      if (iVar5 == 0) goto LAB_016a168c;
      pcVar1 = (char *)(iVar6 + -8);
      iVar5 = iVar5 + -0x10;
      iVar6 = iVar6 + -0x10;
    } while (*pcVar1 != '\0');
    FUN_016a4f80(&local_28,iVar4,*(int *)(uVar7 + iVar5) + -1);
    if (local_28 != 0) {
      uVar10 = *(undefined4 *)(uVar7 + iVar5);
      uVar8 = ((undefined4 *)(uVar7 + iVar5))[1];
      uVar9 = *(undefined4 *)(local_28 + 0x30);
      local_38 = local_28;
      uStack_34 = local_24;
      uStack_30 = uStack_20;
      FUN_016a50fc(&local_38);
      uVar3 = *puVar2;
      *param_1 = 0;
      param_1[1] = uVar9;
      param_1[2] = uVar10;
      param_1[3] = uVar8;
      *puVar2 = uVar3 - 1;
      return;
    }
    uVar3 = *puVar2 - 1;
LAB_016a168c:
    *puVar2 = uVar3;
  }
  *param_1 = 1;
  return;
}

