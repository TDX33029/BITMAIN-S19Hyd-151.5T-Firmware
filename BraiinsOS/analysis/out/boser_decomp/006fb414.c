// FUN_006fb414 @ 006fb414 size=676 calls_out=6 calls_in=14
// strings: internal error: entered unreachable code

void FUN_006fb414(int *param_1,int param_2,byte *param_3,uint param_4,undefined4 *param_5,
                 uint param_6,uint param_7)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  
  if (param_5 == (undefined4 *)0x0) {
    bVar11 = *(int *)(param_2 + 0x10) == 0;
    pcVar2 = (char *)0x0;
    if (!bVar11) {
      pcVar2 = (char *)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x10) * 0x14 + -0x14);
      bVar11 = pcVar2 == (char *)0x0;
    }
    uVar5 = 0;
    if (!bVar11) {
      iVar9 = 8;
      if (*pcVar2 != '\0') {
        iVar9 = 0x10;
      }
      uVar8 = *(uint *)(pcVar2 + iVar9);
      if (uVar8 != 0) {
        if (uVar8 < param_4) {
          if ((char)param_3[uVar8] < -0x40) goto LAB_006fb660;
          uVar5 = uVar8;
        }
        else {
          uVar5 = param_4;
          if (uVar8 != param_4) {
LAB_006fb660:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(param_3,param_4,0,uVar8,&DAT_01c06320);
          }
        }
      }
    }
    puVar3 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    iVar10 = 1;
    iVar9 = 0;
    *puVar3 = 0;
    local_28 = 1;
    local_30 = 1;
    local_2c = puVar3;
    if (uVar5 != 0) {
      pbVar4 = param_3;
      do {
        puVar6 = (undefined1 *)(uint)*pbVar4;
        pbVar1 = pbVar4 + 1;
        if ((uint)(int)(char)*pbVar4 < 0x80000000) {
LAB_006fb518:
          pbVar4 = pbVar1;
          iVar9 = iVar9 + 1;
          if (puVar6 == (undefined1 *)0xa) {
            if (iVar10 == local_30) {
              FUN_01a54b48(&local_30);
              puVar3 = local_2c;
            }
            puVar3[iVar10] = iVar9;
            iVar10 = iVar10 + 1;
            local_28 = iVar10;
          }
        }
        else {
          if (puVar6 < (undefined1 *)0xe0) {
            puVar6 = (undefined1 *)(pbVar4[1] & 0x3f | ((uint)puVar6 & 0x1f) << 6);
            pbVar4 = pbVar4 + 2;
          }
          else {
            uVar8 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
            if (puVar6 < (undefined1 *)0xf0) {
              puVar6 = (undefined1 *)(uVar8 | ((uint)puVar6 & 0x1f) << 0xc);
              pbVar4 = pbVar4 + 3;
            }
            else {
              puVar6 = (undefined1 *)(pbVar4[3] & 0x3f | uVar8 << 6 | ((uint)puVar6 & 7) << 0x12);
              if (puVar6 == &DAT_00110000) break;
              pbVar4 = pbVar4 + 4;
            }
          }
          if (puVar6 < (undefined1 *)0x80) {
            pbVar1 = pbVar4;
            goto LAB_006fb518;
          }
          iVar7 = 4;
          if (puVar6 < (undefined1 *)0x10000) {
            iVar7 = 3;
          }
          if (puVar6 < (undefined1 *)0x800) {
            iVar7 = 2;
          }
          iVar9 = iVar7 + iVar9;
        }
      } while (pbVar4 != param_3 + uVar5);
    }
    puVar3 = local_2c;
    iVar9 = local_30;
    param_5 = (undefined4 *)thunk_FUN_01be5118(0x14);
    if (param_5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *param_5 = 1;
    param_5[1] = 1;
    param_5[2] = iVar9;
    param_5[3] = puVar3;
    param_5[4] = iVar10;
  }
  iVar9 = 0;
  if (param_6 < param_7) {
    uVar5 = param_6;
    do {
      if (*(uint *)(param_2 + 0x10) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,*(uint *)(param_2 + 0x10),&DAT_01c06330);
      }
      pcVar2 = (char *)(*(int *)(param_2 + 0xc) + uVar5 * 0x14);
      if (*pcVar2 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06340);
      }
      iVar9 = iVar9 + 1;
      uVar5 = *(int *)(pcVar2 + 4) + 1;
    } while (uVar5 < param_7);
  }
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  param_1[2] = param_4;
  param_1[3] = (int)param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = iVar9;
  return;
}

