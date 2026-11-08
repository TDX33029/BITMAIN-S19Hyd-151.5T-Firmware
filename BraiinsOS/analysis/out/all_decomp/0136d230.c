// FUN_0136d230 @ 0136d230 size=424 calls_out=4 calls_in=2
// strings: 

longlong FUN_0136d230(int param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_40 [4];
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar7 = param_2[5];
  if (uVar7 < (uint)param_2[3]) {
    iVar8 = *param_2;
    uVar9 = param_2[1];
    bVar1 = *(byte *)(param_2[2] + uVar7);
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
        if (puVar4 == (undefined1 *)0x0) goto LAB_0136d3cc;
        *(uint *)(puVar4 + 4) = uVar7;
        puVar4[1] = bVar1;
        uVar2 = 0;
        goto LAB_0136d3b8;
      }
    }
    uVar7 = (uint)*(byte *)(param_1 + uVar6 + 0x1ac);
    if (iVar8 != 0) goto LAB_0136d2ec;
LAB_0136d328:
    if (1 < *(byte *)(param_1 + 0x2b0)) goto LAB_0136d39c;
    uVar9 = *(uint *)(param_1 + 0x1a8);
    if (uVar9 <= uVar7) goto LAB_0136d390;
  }
  else {
    iVar8 = *param_2;
    uVar9 = param_2[1];
    uVar7 = 2;
    if (iVar8 == 0) goto LAB_0136d328;
LAB_0136d2ec:
    if (iVar8 == 1) {
      if (*(char *)(param_1 + 0x2b0) == '\x01') goto LAB_0136d39c;
      uVar7 = *(int *)(param_1 + 0x2ac) + uVar7;
      uVar9 = *(uint *)(param_1 + 0x1a8);
      if (uVar9 <= uVar7) {
LAB_0136d390:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,uVar9,&DAT_018ae9d4);
      }
    }
    else {
      if (*(int *)(param_1 + 0x188) == 0) {
LAB_0136d39c:
        puVar4 = (undefined1 *)thunk_FUN_016d4a50(0xc);
        if (puVar4 == (undefined1 *)0x0) {
LAB_0136d3cc:
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        uVar2 = 3;
        *(int *)(puVar4 + 4) = iVar8;
        *(uint *)(puVar4 + 8) = uVar9;
LAB_0136d3b8:
        *puVar4 = uVar2;
        return CONCAT44(puVar4,1);
      }
      uVar6 = 0;
      if (*(uint *)(param_1 + 0x18c) <= uVar9) goto LAB_0136d34c;
      uVar7 = *(int *)(param_1 + 0x2ac) * (uVar9 + 2) + uVar7;
      uVar9 = *(uint *)(param_1 + 0x1a8);
      if (uVar9 <= uVar7) goto LAB_0136d390;
    }
  }
  uVar6 = *(uint *)(*(int *)(param_1 + 0x1a4) + uVar7 * 4);
LAB_0136d34c:
  return (ulonglong)uVar6 << 0x20;
}

