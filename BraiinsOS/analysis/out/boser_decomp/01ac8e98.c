// FUN_01ac8e98 @ 01ac8e98 size=372 calls_out=2 calls_in=2
// strings: 

void FUN_01ac8e98(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  
  pbVar9 = (byte *)param_1[5];
  uVar10 = param_1[6];
  uVar5 = param_1[8] + 1;
  if (param_1[8] != -1) {
    if (uVar5 < uVar10) {
      if ((char)pbVar9[uVar5] < -0x40) {
LAB_01ac8ec8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar9,uVar10,uVar5,uVar10,&DAT_01d2fcf8);
      }
    }
    else if (uVar5 != uVar10) goto LAB_01ac8ec8;
  }
  bVar11 = true;
  if ((uVar10 != uVar5) && (bVar11 = false, pbVar9[uVar5] != 0x2f)) {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  iVar3 = param_1[2];
  bVar11 = iVar3 == 0;
  if (bVar11) {
    iVar3 = *param_1;
  }
  if (!bVar11 || iVar3 != 0) {
    return;
  }
  if (uVar10 != 0) {
    uVar5 = 0;
    pbVar8 = pbVar9 + uVar10;
    do {
      pbVar6 = pbVar8 + -1;
      puVar4 = (undefined1 *)(int)(char)*pbVar6;
      if ((undefined1 *)0x7fffffff < puVar4) {
        pbVar6 = pbVar8 + -2;
        bVar1 = *pbVar6;
        if ((char)bVar1 < -0x40) {
          pbVar6 = pbVar8 + -3;
          bVar2 = *pbVar6;
          if ((char)bVar2 < -0x40) {
            pbVar6 = pbVar8 + -4;
            uVar7 = (int)(char)bVar2 & 0x3fU | (*pbVar6 & 7) << 6;
          }
          else {
            uVar7 = bVar2 & 0xf;
          }
          uVar7 = (int)(char)bVar1 & 0x3fU | uVar7 << 6;
        }
        else {
          uVar7 = bVar1 & 0x1f;
        }
        puVar4 = (undefined1 *)((uint)puVar4 & 0x3f | uVar7 << 6);
        if (puVar4 == &DAT_00110000) goto LAB_01ac8fc0;
      }
      if ((puVar4 != (undefined1 *)0x20) || (uVar5 = uVar5 + 1, pbVar8 = pbVar6, pbVar9 == pbVar6))
      goto LAB_01ac8fc0;
    } while( true );
  }
  uVar7 = 0;
  goto LAB_01ac9004;
LAB_01ac8fc0:
  uVar7 = uVar10 - uVar5;
  if (uVar10 < uVar5) {
    return;
  }
  if (((uVar10 != uVar5) && (uVar7 < uVar10)) && ((char)pbVar9[uVar7] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d2fa08);
  }
LAB_01ac9004:
  param_1[6] = uVar7;
  return;
}

