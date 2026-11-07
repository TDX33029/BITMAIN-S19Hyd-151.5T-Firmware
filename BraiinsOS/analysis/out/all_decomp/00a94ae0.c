// FUN_00a94ae0 @ 00a94ae0 size=416 calls_out=9 calls_in=0
// strings: 

longlong FUN_00a94ae0(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_r6;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_30;
  uint local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    unaff_r6 = *param_1;
    param_1[1] = unaff_r6;
    iVar3 = thunk_FUN_016d4a50(0x358);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x358);
    }
    *(undefined1 *)(iVar3 + 0x350) = 0;
    puVar4 = &DAT_0186dcf8;
    *(undefined4 *)(iVar3 + 0x348) = unaff_r6;
    param_1[3] = iVar3;
    param_1[4] = &DAT_0186dcf8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186dd38);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186dd38);
  case 3:
    iVar3 = param_1[3];
    puVar4 = (undefined4 *)param_1[4];
    break;
  case 4:
    iVar3 = param_1[3];
    puVar4 = (undefined4 *)param_1[4];
    goto LAB_00a94bd8;
  }
  uVar7 = (*(code *)puVar4[3])(iVar3,param_2);
  uVar6 = (uint)(uVar7 >> 0x20);
  if ((uVar7 & 1) != 0) {
    uVar1 = 3;
LAB_00a94bfc:
    *(undefined1 *)(param_1 + 2) = uVar1;
    return CONCAT44(unaff_r6,1);
  }
  uVar5 = param_1[3];
  puVar4 = (undefined4 *)param_1[4];
  pcVar2 = (code *)*puVar4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar5);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  if (uVar6 == 0) {
    unaff_r6 = param_1[1];
    iVar3 = thunk_FUN_016d4a50(0x338);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x338);
    }
    *(undefined4 *)(iVar3 + 0x330) = unaff_r6;
    puVar4 = &DAT_0186dd48;
    *(undefined1 *)(iVar3 + 0x334) = 0;
    param_1[3] = iVar3;
    param_1[4] = &DAT_0186dd48;
LAB_00a94bd8:
    (*(code *)puVar4[3])(&local_30,iVar3,param_2);
    if (local_30 == 2) {
      uVar1 = 4;
      goto LAB_00a94bfc;
    }
    puVar4 = (undefined4 *)param_1[4];
    uVar5 = param_1[3];
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    uVar6 = 0;
    if ((local_30 & 1) != 0) {
      uVar6 = local_2c;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return (ulonglong)uVar6 << 0x20;
}

