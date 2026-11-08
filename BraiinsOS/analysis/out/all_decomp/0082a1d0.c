// FUN_0082a1d0 @ 0082a1d0 size=724 calls_out=12 calls_in=1
// strings: 

uint FUN_0082a1d0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x16)) {
  case 0:
    param_1[9] = *param_1;
    param_1[8] = param_1[7];
    param_1[10] = param_1[1];
    iVar4 = 0;
    param_1[0xb] = param_1[2];
    param_1[0xc] = param_1[3];
    param_1[0xd] = param_1[4];
    param_1[0xe] = param_1[5];
    param_1[0xf] = param_1[6];
    iVar7 = param_1[0xd];
    if (iVar7 < 0) {
LAB_0082a234:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(iVar4,iVar7);
    }
    uVar9 = param_1[0xc];
    uVar12 = param_1[0xe];
    uVar10 = param_1[0xf];
    if (iVar7 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar7);
      iVar4 = iVar7;
      if (iVar3 == 0) {
        iVar4 = 1;
        goto LAB_0082a234;
      }
    }
    param_1[0x10] = iVar4;
    param_1[0x11] = iVar3;
    FUN_016dd1aa(iVar3,uVar9,iVar7);
    param_1[0x12] = iVar7;
    param_1[0x13] = uVar12;
    param_1[0x14] = uVar10;
    *(undefined1 *)(param_1 + 0x25) = 0;
    param_1[0x17] = param_1[8] + 0xc;
  case 3:
    iVar4 = FUN_007d67b8(param_1 + 0x17);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x16) = 3;
      return 1;
    }
    param_1[0x15] = iVar4;
    if (*(char *)(param_1 + 0x25) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x24);
      bVar13 = cVar1 == '\x03';
      if (bVar13) {
        cVar1 = *(char *)(param_1 + 0x1b);
      }
      if (bVar13 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x1c);
        if (param_1[0x1d] != 0) {
          (**(code **)(param_1[0x1d] + 0xc))(param_1[0x1e]);
        }
      }
    }
    if (param_1[9] == 1) {
      uVar5 = *(int *)param_1[8] * param_1[10];
      if (0xff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar5 = (uint)*(byte *)((int *)param_1[8] + 1);
    }
    uVar14 = (**(code **)(*(int *)(param_1[0x15] + 0x20) + 0x14))
                       (*(undefined4 *)(param_1[0x15] + 0x1c),param_1[9],uVar5,param_1[0x13],
                        param_1[0x14],param_1[0x11],param_1[0x12]);
    *(undefined8 *)(param_1 + 0x17) = uVar14;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864dac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864dac);
  case 4:
    uVar14 = *(undefined8 *)(param_1 + 0x17);
  }
  uVar5 = (**(code **)((int)((ulonglong)uVar14 >> 0x20) + 0xc))((int)uVar14,param_2);
  if ((uVar5 & 1) != 0) {
    uVar2 = 4;
    uVar5 = 1;
    goto LAB_0082a468;
  }
  uVar9 = param_1[0x17];
  puVar11 = (undefined4 *)param_1[0x18];
  pcVar6 = (code *)*puVar11;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar9);
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  pcVar8 = (char *)param_1[0x15];
  if (*pcVar8 == '\0') {
    bVar13 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar13) goto LAB_0082a41c;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0082a41c:
    FUN_01280da8(pcVar8);
  }
  FUN_0128236c(pcVar8);
  FUN_0163af68(pcVar8,1,pcVar8);
  if (param_1[0x10] != 0) {
    thunk_FUN_016d3fb4(param_1[0x11]);
  }
  if (param_1[0xb] != 0) {
    thunk_FUN_016d3fb4(param_1[0xc]);
  }
  uVar2 = 1;
LAB_0082a468:
  *(undefined1 *)(param_1 + 0x16) = uVar2;
  return uVar5;
}

