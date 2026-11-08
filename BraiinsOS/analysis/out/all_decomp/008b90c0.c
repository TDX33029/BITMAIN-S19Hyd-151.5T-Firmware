// FUN_008b90c0 @ 008b90c0 size=316 calls_out=3 calls_in=1
// strings: 

void FUN_008b90c0(undefined4 *param_1,short *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  short *psVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_3 < 0xb) {
    *param_1 = 0x80000000;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  uVar6 = 2;
  if (*param_2 != 0x55aa) {
LAB_008b91d4:
    *(undefined1 *)(param_1 + 1) = uVar6;
    *param_1 = 0x80000000;
    return;
  }
  bVar2 = *(byte *)(param_2 + 5);
  sVar3 = param_2[3];
  bVar1 = *(byte *)((int)param_2 + 7);
  uVar8 = (int)(char)bVar2 & 0x1f;
  psVar7 = param_2 + 1;
  uVar10 = *(undefined4 *)psVar7;
  if ((char)bVar2 < 0) {
    uVar4 = FUN_008b8f10(psVar7,8,6,0);
    uVar6 = 1;
    if ((uVar4 & 0xff) != uVar8) goto LAB_008b91d4;
    uVar9 = 8;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,8);
    }
    uVar10 = *(undefined4 *)psVar7;
    puVar5[1] = *(undefined4 *)(param_2 + 3);
    *puVar5 = uVar10;
  }
  else {
    uVar4 = FUN_008b8f10(psVar7,8,3,0);
    uVar6 = 1;
    if ((uVar4 & 0xff) != uVar8) goto LAB_008b91d4;
    uVar9 = 4;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    *puVar5 = uVar10;
  }
  param_1[1] = puVar5;
  param_1[2] = uVar9;
  param_1[3] = (uint)bVar1;
  param_1[5] = 0xb;
  *(char *)((int)param_1 + 0x11) = (char)sVar3;
  *(undefined1 *)(param_1 + 4) = 1;
  *param_1 = uVar9;
  *(byte *)((int)param_1 + 0x12) = bVar2 >> 7;
  return;
}

