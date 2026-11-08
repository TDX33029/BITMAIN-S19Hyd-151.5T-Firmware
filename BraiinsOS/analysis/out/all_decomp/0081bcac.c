// FUN_0081bcac @ 0081bcac size=652 calls_out=11 calls_in=1
// strings: 

uint FUN_0081bcac(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined1 uStack_21;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    iVar3 = param_1[2];
    puVar6 = (uint *)param_1[3];
    param_1[5] = *param_1;
    param_1[6] = param_1[1];
    param_1[7] = puVar6;
    param_1[4] = iVar3;
    uVar7 = *puVar6;
    uVar4 = puVar6[1];
    puVar6 = (uint *)FUN_016d38c8(4,1);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    param_1[8] = 4;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0xf] = iVar3 + 0xc;
    param_1[0xb] = 0x10;
    param_1[9] = puVar6;
    param_1[10] = 4;
    param_1[0xc] = 4;
    *puVar6 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18 & 0x7f | ((byte)uVar4 & 1) << 7;
  case 3:
    iVar3 = FUN_007d67b8(param_1 + 0xf,param_2);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0xe) = 3;
      return 1;
    }
    param_1[0xd] = iVar3;
    if (*(char *)(param_1 + 0x1d) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1c);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x13);
      }
      if (bVar11 && cVar1 == '\x04') {
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
    uVar12 = (**(code **)(*(int *)(param_1[0xd] + 0x20) + 0x14))
                       (*(undefined4 *)(param_1[0xd] + 0x1c),param_1[5],uVar4,param_1[0xb],
                        param_1[0xc],param_1[9],param_1[10]);
    *(undefined8 *)(param_1 + 0xf) = uVar12;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864dac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864dac);
  case 4:
    uVar12 = *(undefined8 *)(param_1 + 0xf);
  }
  uVar4 = (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0xc))((int)uVar12,param_2);
  if ((uVar4 & 1) != 0) {
    uVar2 = 4;
    uVar4 = 1;
    goto LAB_0081beec;
  }
  uVar9 = param_1[0xf];
  puVar10 = (undefined4 *)param_1[0x10];
  pcVar5 = (code *)*puVar10;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar9);
  }
  if (puVar10[1] != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  pcVar8 = (char *)param_1[0xd];
  if (*pcVar8 == '\0') {
    bVar11 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar11) goto LAB_0081beb4;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0081beb4:
    FUN_01280da8(pcVar8);
  }
  FUN_0128236c(pcVar8);
  FUN_0163af68(pcVar8,1,pcVar8);
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  uVar2 = 1;
LAB_0081beec:
  *(undefined1 *)(param_1 + 0xe) = uVar2;
  return uVar4;
}

