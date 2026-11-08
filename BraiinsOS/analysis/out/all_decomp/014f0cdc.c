// FUN_014f0cdc @ 014f0cdc size=560 calls_out=4 calls_in=1
// strings: 

void FUN_014f0cdc(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pbVar9 = (byte *)param_2[4];
  pbVar7 = (byte *)param_2[6];
  bVar4 = *(byte *)((int)param_2 + 0x1d);
  pbVar11 = (byte *)param_2[1];
  iVar1 = param_2[2];
  pbVar8 = (byte *)*param_2;
  do {
    pbVar6 = pbVar8;
    if ((bVar4 & 1) != 0) goto LAB_014f0ea0;
    pbVar3 = pbVar7;
    pbVar10 = pbVar9;
    if (pbVar9 == (byte *)param_2[5]) {
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
      if (*(char *)(param_2 + 7) != '\0') goto LAB_014f0e94;
LAB_014f0d58:
      bVar4 = 1;
      pbVar3 = pbVar11;
      pbVar8 = pbVar6;
      if (pbVar11 == pbVar6) {
LAB_014f0ea0:
        *param_1 = 0x80000000;
        return;
      }
    }
    else {
      do {
        pbVar9 = pbVar10 + 1;
        uVar5 = (uint)*pbVar10;
        if (0x7fffffff < (uint)(int)(char)*pbVar10) {
          if (uVar5 < 0xe0) {
            uVar5 = pbVar10[1] & 0x3f | (uVar5 & 0x1f) << 6;
            pbVar9 = pbVar10 + 2;
          }
          else {
            uVar2 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
            if (uVar5 < 0xf0) {
              uVar5 = uVar2 | (uVar5 & 0x1f) << 0xc;
              pbVar9 = pbVar10 + 3;
            }
            else {
              pbVar9 = pbVar10 + 4;
              uVar5 = pbVar10[3] & 0x3f | uVar2 << 6 | (uVar5 & 7) << 0x12;
            }
          }
        }
        pbVar8 = pbVar9 + ((int)pbVar3 - (int)pbVar10);
        pbVar7 = pbVar8;
        if ((uVar5 - 9 < 0x18) && ((1 << (uVar5 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_014f0d18:
          param_2[6] = pbVar8;
          bVar4 = 0;
          param_2[4] = pbVar9;
          *param_2 = pbVar8;
          goto LAB_014f0d2c;
        }
        if (0x7f < uVar5) {
          uVar2 = uVar5 >> 8;
          if (uVar2 < 0x20) {
            if (uVar2 == 0) {
              bVar4 = (&DAT_0041951b)[uVar5 & 0xff] & 1;
joined_r0x014f0d80:
              if (bVar4 != 0) goto LAB_014f0d18;
            }
            else if ((uVar2 == 0x16) && (uVar5 == 0x1680)) goto LAB_014f0d18;
          }
          else {
            if (uVar2 == 0x20) {
              bVar4 = (&DAT_0041951b)[uVar5 & 0xff] & 2;
              goto joined_r0x014f0d80;
            }
            if (uVar2 == 0x30 && uVar5 == 0x3000) goto LAB_014f0d18;
          }
        }
        pbVar3 = pbVar8;
        pbVar10 = pbVar9;
      } while (pbVar9 != (byte *)param_2[5]);
      param_2[6] = pbVar8;
      param_2[4] = pbVar9;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
      if (*(char *)(param_2 + 7) == '\0') goto LAB_014f0d58;
LAB_014f0e94:
      bVar4 = 1;
      pbVar3 = pbVar11;
      pbVar8 = pbVar6;
    }
LAB_014f0d2c:
    if (pbVar3 != pbVar6) {
      uVar5 = (int)pbVar3 - (int)pbVar6;
      if (0x7fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00600c10();
      }
      uVar2 = thunk_FUN_016d4a50(uVar5);
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar5);
      }
      FUN_016dd1aa(uVar2,pbVar6 + iVar1,uVar5);
      *param_1 = uVar5;
      param_1[1] = uVar2;
      param_1[2] = uVar5;
      return;
    }
  } while( true );
}

