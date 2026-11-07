// FUN_00f9a3e0 @ 00f9a3e0 size=404 calls_out=4 calls_in=4
// strings: 

void FUN_00f9a3e0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  
  pbVar8 = (byte *)param_1[1];
  iVar6 = 0;
  iVar9 = 1;
  if (param_1[2] != 0) {
    pbVar3 = pbVar8 + param_1[2];
    do {
      pbVar4 = pbVar3 + -1;
      uVar5 = (uint)(char)*pbVar4;
      if (0x7fffffff < uVar5) {
        pbVar4 = pbVar3 + -2;
        bVar1 = *pbVar4;
        if ((char)bVar1 < -0x40) {
          pbVar4 = pbVar3 + -3;
          bVar2 = *pbVar4;
          if ((char)bVar2 < -0x40) {
            pbVar4 = pbVar3 + -4;
            uVar7 = (int)(char)bVar2 & 0x3fU | (*pbVar4 & 7) << 6;
          }
          else {
            uVar7 = bVar2 & 0xf;
          }
          uVar7 = (int)(char)bVar1 & 0x3fU | uVar7 << 6;
        }
        else {
          uVar7 = bVar1 & 0x1f;
        }
        uVar5 = uVar5 & 0x3f | uVar7 << 6;
      }
      if ((4 < uVar5 - 9) && (uVar5 != 0x20)) {
        if (0x7f < uVar5) {
          uVar7 = uVar5 >> 8;
          if (uVar7 < 0x20) {
            if (uVar7 == 0) {
              bVar1 = (&DAT_0041951b)[uVar5 & 0xff] & 1;
              goto joined_r0x00f9a4e8;
            }
            if ((uVar7 == 0x16) && (uVar5 == 0x1680)) goto LAB_00f9a424;
          }
          else if (uVar7 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar5 & 0xff] & 2;
joined_r0x00f9a4e8:
            if (bVar1 != 0) goto LAB_00f9a424;
          }
          else if (uVar7 == 0x30 && uVar5 == 0x3000) goto LAB_00f9a424;
        }
        iVar6 = (int)pbVar3 - (int)pbVar8;
        if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,iVar6);
        }
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar9 = thunk_FUN_016d4a50(iVar6);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar6);
          }
        }
        break;
      }
LAB_00f9a424:
      pbVar3 = pbVar4;
    } while (pbVar8 != pbVar4);
  }
  FUN_016dd1aa(iVar9,pbVar8,iVar6);
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(pbVar8);
  }
  *param_1 = iVar6;
  param_1[1] = iVar9;
  param_1[2] = iVar6;
  return;
}

