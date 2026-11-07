// FUN_00bbb5a8 @ 00bbb5a8 size=408 calls_out=6 calls_in=3
// strings: 

longlong FUN_00bbb5a8(undefined4 *param_1,undefined4 param_2)

{
  int extraout_r1;
  uint uVar1;
  code *pcVar2;
  code *unaff_r5;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 10)) {
  case 0:
    iVar3 = param_1[2];
    uVar7 = *param_1;
    uVar4 = param_1[1];
    iVar5 = param_1[3];
    param_1[4] = iVar3;
    param_1[5] = uVar7;
    param_1[6] = uVar4;
    if (*(int *)(iVar3 + 0x18) != 0) {
      if (*(int *)(iVar3 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_01875e98);
      }
      FUN_0184606c(iVar5);
      iVar5 = iVar5 - extraout_r1;
    }
    param_1[7] = iVar5;
    unaff_r5 = *(code **)(*(int *)(iVar3 + 0x15c) + 0x10);
    uVar8 = (*unaff_r5)(*(undefined4 *)(iVar3 + 0x158),uVar7,uVar4,iVar5);
    *(undefined8 *)(param_1 + 8) = uVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875ea8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875ea8);
  case 3:
    uVar8 = *(undefined8 *)(param_1 + 8);
  }
  uVar9 = (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0xc))((int)uVar8,param_2);
  uVar1 = (uint)(uVar9 >> 0x20);
  if ((uVar9 & 1) != 0) {
    *(undefined1 *)(param_1 + 10) = 3;
    return CONCAT44(unaff_r5,1);
  }
  uVar4 = param_1[8];
  puVar6 = (undefined4 *)param_1[9];
  pcVar2 = (code *)*puVar6;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar4);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar4);
  }
  iVar3 = DAT_018d7ef8;
  if (uVar1 == 0) {
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      uVar4 = param_1[7];
      uVar7 = *(undefined4 *)(param_1[4] + 0x19c);
      if (param_1[5] == 1) {
        FUN_009b0ac4(uVar7,param_1[6],uVar4);
      }
      else if (DAT_018d7ef8 != 0) {
        iVar5 = 0;
        do {
          FUN_009b0ac4(uVar7,iVar5,uVar4);
          iVar5 = iVar5 + 1;
        } while (iVar3 != iVar5);
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 1;
  return (ulonglong)uVar1 << 0x20;
}

