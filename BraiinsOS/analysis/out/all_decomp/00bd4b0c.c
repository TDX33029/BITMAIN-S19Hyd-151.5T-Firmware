// FUN_00bd4b0c @ 00bd4b0c size=280 calls_out=4 calls_in=2
// strings: 

longlong FUN_00bd4b0c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 unaff_r5;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[6]) {
  case '\0':
    iVar3 = *param_1;
    param_1[2] = iVar3;
    param_1[3] = param_1[1];
    uVar5 = (**(code **)(*(int *)(iVar3 + 0x15c) + 0x14))(*(undefined4 *)(iVar3 + 0x158),param_1[1])
    ;
    *(undefined8 *)(param_1 + 4) = uVar5;
    unaff_r5 = param_2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871840);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871840);
  case '\x03':
    uVar5 = *(undefined8 *)(param_1 + 4);
  }
  uVar6 = (**(code **)((int)((ulonglong)uVar5 >> 0x20) + 0xc))((int)uVar5,param_2);
  uVar1 = (uint)(uVar6 >> 0x20);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)(param_1 + 6) = 3;
    return CONCAT44(unaff_r5,1);
  }
  iVar3 = param_1[4];
  puVar4 = (undefined4 *)param_1[5];
  pcVar2 = (code *)*puVar4;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(iVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  if (uVar1 == 0) {
    *(int *)(*(int *)(param_1[2] + 400) + 8) = param_1[3];
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b3424(*(undefined4 *)(param_1[2] + 0x19c),param_1[3]);
    }
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return (ulonglong)uVar1 << 0x20;
}

