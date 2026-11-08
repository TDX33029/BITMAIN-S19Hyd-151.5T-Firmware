// FUN_016b2cb0 @ 016b2cb0 size=488 calls_out=2 calls_in=2
// strings: 

void FUN_016b2cb0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  
  if (param_1[2] == 0) {
    uVar4 = param_1[6];
  }
  else {
    uVar4 = param_1[3];
    uVar5 = param_1[6];
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    else {
      if (((uVar4 != 0) && (uVar4 < uVar5)) && (*(char *)(param_1[5] + uVar4) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00418707,0x30,&DAT_018aed58);
      }
      param_1[6] = uVar4;
    }
  }
  pbVar10 = (byte *)param_1[5];
  uVar5 = param_1[8] + 1;
  param_1[2] = 0;
  if (param_1[8] != -1) {
    if (uVar5 < uVar4) {
      if ((char)pbVar10[uVar5] < -0x40) {
LAB_016b2d3c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar10,uVar4,uVar5,uVar4,&DAT_018af080);
      }
    }
    else if (uVar5 != uVar4) goto LAB_016b2d3c;
  }
  bVar3 = true;
  if ((uVar4 != uVar5) && (bVar3 = false, pbVar10[uVar5] != 0x2f)) {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    pbVar8 = pbVar10 + uVar4;
    do {
      pbVar7 = pbVar8 + -1;
      puVar6 = (undefined1 *)(int)(char)*pbVar7;
      if ((undefined1 *)0x7fffffff < puVar6) {
        pbVar7 = pbVar8 + -2;
        bVar1 = *pbVar7;
        if ((char)bVar1 < -0x40) {
          pbVar7 = pbVar8 + -3;
          bVar2 = *pbVar7;
          if ((char)bVar2 < -0x40) {
            pbVar7 = pbVar8 + -4;
            uVar9 = (int)(char)bVar2 & 0x3fU | (*pbVar7 & 7) << 6;
          }
          else {
            uVar9 = bVar2 & 0xf;
          }
          puVar6 = (undefined1 *)
                   ((uint)puVar6 & 0x3f | ((int)(char)bVar1 & 0x3fU | uVar9 << 6) << 6);
          if (puVar6 == &DAT_00110000) goto LAB_016b2e30;
        }
        else {
          puVar6 = (undefined1 *)((uint)puVar6 & 0x3f | (bVar1 & 0x1f) << 6);
          if (puVar6 == &DAT_00110000) goto LAB_016b2e30;
        }
      }
      if ((puVar6 != (undefined1 *)0x20) || (uVar5 = uVar5 + 1, pbVar8 = pbVar7, pbVar10 == pbVar7))
      goto LAB_016b2e30;
    } while( true );
  }
  uVar9 = 0;
  goto LAB_016b2e74;
LAB_016b2e30:
  uVar9 = uVar4 - uVar5;
  if (uVar4 < uVar5) {
    return;
  }
  if (((uVar4 != uVar5) && (uVar9 < uVar4)) && ((char)pbVar10[uVar9] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00418707,0x30,&DAT_018aeda8);
  }
LAB_016b2e74:
  param_1[6] = uVar9;
  return;
}

