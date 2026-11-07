// FUN_00818c80 @ 00818c80 size=580 calls_out=10 calls_in=3
// strings: 

uint FUN_00818c80(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 uStack_21;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    param_1[4] = param_1[2];
    param_1[5] = *param_1;
    param_1[6] = param_1[1];
    param_1[7] = param_1[3];
    FUN_0080b7e8(param_1 + 8);
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0xf] = param_1[4] + 0xc;
  case 3:
    iVar3 = FUN_007d67b8(param_1 + 0xf,param_2);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0xe) = 3;
      return 1;
    }
    param_1[0xd] = iVar3;
    if (*(char *)(param_1 + 0x1d) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1c);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x13);
      }
      if (bVar9 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x14);
        if (param_1[0x15] != 0) {
          (**(code **)(param_1[0x15] + 0xc))(param_1[0x16]);
        }
      }
    }
    if (param_1[5] == 1) {
      uVar4 = *(int *)param_1[4] * param_1[6];
      if (0xff < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_21,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar4 = (uint)*(byte *)((int *)param_1[4] + 1);
    }
    uVar10 = (**(code **)(*(int *)(param_1[0xd] + 0x20) + 0x14))
                       (*(undefined4 *)(param_1[0xd] + 0x1c),param_1[5],uVar4,param_1[0xb],
                        param_1[0xc],param_1[9],param_1[10]);
    *(undefined8 *)(param_1 + 0xf) = uVar10;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864dac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864dac);
  case 4:
    uVar10 = *(undefined8 *)(param_1 + 0xf);
  }
  uVar4 = (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0xc))((int)uVar10,param_2);
  if ((uVar4 & 1) != 0) {
    uVar2 = 4;
    uVar4 = 1;
    goto LAB_00818e84;
  }
  uVar7 = param_1[0xf];
  puVar8 = (undefined4 *)param_1[0x10];
  pcVar5 = (code *)*puVar8;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar7);
  }
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(uVar7);
  }
  pcVar6 = (char *)param_1[0xd];
  if (*pcVar6 == '\0') {
    bVar9 = (bool)hasExclusiveAccess(pcVar6);
    if (!bVar9) goto LAB_00818e4c;
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00818e4c:
    FUN_01280da8(pcVar6);
  }
  FUN_0128236c(pcVar6);
  FUN_0163af68(pcVar6,1,pcVar6);
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  uVar2 = 1;
LAB_00818e84:
  *(undefined1 *)(param_1 + 0xe) = uVar2;
  return uVar4;
}

