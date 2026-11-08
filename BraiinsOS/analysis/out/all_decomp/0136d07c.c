// FUN_0136d07c @ 0136d07c size=428 calls_out=4 calls_in=3
// strings: 

longlong FUN_0136d07c(int param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_40 [4];
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2[4] == 0) {
LAB_0136d134:
    iVar7 = *param_2;
    uVar9 = param_2[1];
    uVar8 = 2;
    if (iVar7 == 0) goto LAB_0136d1a8;
LAB_0136d144:
    if (iVar7 == 1) {
      if (*(char *)(param_1 + 0x2b0) != '\x01') {
        uVar8 = *(int *)(param_1 + 0x2ac) + uVar8;
        goto LAB_0136d1b4;
      }
      goto LAB_0136d1d8;
    }
    if (*(int *)(param_1 + 0x188) == 0) goto LAB_0136d1d8;
    uVar6 = 0;
    if (*(uint *)(param_1 + 0x18c) <= uVar9) goto LAB_0136d1cc;
    uVar8 = *(int *)(param_1 + 0x2ac) * (uVar9 + 2) + uVar8;
  }
  else {
    uVar8 = param_2[4] - 1;
    if ((uint)param_2[3] <= uVar8) goto LAB_0136d134;
    iVar7 = *param_2;
    uVar9 = param_2[1];
    bVar1 = *(byte *)(param_2[2] + uVar8);
    uVar6 = (uint)bVar1;
    iVar3 = thunk_FUN_016dd50a(param_1 + 0x20,"",0x20);
    if (iVar3 != 0) {
      puVar5 = (uint *)(param_1 + 0x20 + (bVar1 >> 3 & 0xfffffff0));
      local_40[0] = *puVar5;
      local_40[1] = puVar5[1];
      local_40[2] = puVar5[2];
      local_40[3] = puVar5[3];
      uStack_30 = 0;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      if ((local_40[(uVar6 & 0x7f) >> 5] >> (uVar6 & 0x1f) & 1) != 0) {
        puVar4 = (undefined1 *)thunk_FUN_016d4a50(0xc);
        if (puVar4 == (undefined1 *)0x0) goto LAB_0136d20c;
        *(uint *)(puVar4 + 4) = uVar8;
        puVar4[1] = bVar1;
        uVar2 = 0;
        goto LAB_0136d1f8;
      }
    }
    uVar8 = (uint)*(byte *)(param_1 + uVar6 + 0x1ac);
    if (iVar7 != 0) goto LAB_0136d144;
LAB_0136d1a8:
    if (1 < *(byte *)(param_1 + 0x2b0)) {
LAB_0136d1d8:
      puVar4 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar4 == (undefined1 *)0x0) {
LAB_0136d20c:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      uVar2 = 3;
      *(int *)(puVar4 + 4) = iVar7;
      *(uint *)(puVar4 + 8) = uVar9;
LAB_0136d1f8:
      *puVar4 = uVar2;
      return CONCAT44(puVar4,1);
    }
  }
LAB_0136d1b4:
  if (*(uint *)(param_1 + 0x1a8) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar8,*(uint *)(param_1 + 0x1a8),&DAT_018ae9d4);
  }
  uVar6 = *(uint *)(*(int *)(param_1 + 0x1a4) + uVar8 * 4);
LAB_0136d1cc:
  return (ulonglong)uVar6 << 0x20;
}

