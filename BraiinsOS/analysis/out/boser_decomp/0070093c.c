// FUN_0070093c @ 0070093c size=444 calls_out=3 calls_in=12
// strings: 

undefined8 FUN_0070093c(undefined4 *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  
  if (*(uint *)(param_2 + 0x10) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,*(uint *)(param_2 + 0x10),&DAT_01c062d0);
  }
  iVar4 = 8;
  pcVar1 = (char *)(*(int *)(param_2 + 0xc) + param_3 * 0x14);
  if (*pcVar1 != '\0') {
    iVar4 = 0x10;
  }
  iVar4 = *(int *)(pcVar1 + iVar4);
  uVar2 = FUN_006fb3b4(param_2,param_3);
  if (*(uint *)(param_2 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_2 + 0x10),&DAT_01c062d0);
  }
  pbVar3 = (byte *)*param_1;
  uVar2 = param_1[1];
  uVar5 = iVar4 - param_1[2];
  if (uVar5 == 0) {
    iVar10 = param_1[3];
    iVar11 = param_1[4];
  }
  else {
    if (uVar5 < uVar2) {
      if ((char)pbVar3[uVar5] < -0x40) {
LAB_007009c0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar3,uVar2,0,uVar5,&DAT_01c06520);
      }
    }
    else if (uVar2 != uVar5) goto LAB_007009c0;
    iVar10 = param_1[3];
    iVar11 = param_1[4];
    pbVar7 = pbVar3;
    do {
      pbVar8 = pbVar7 + 1;
      puVar9 = (undefined1 *)(uint)*pbVar7;
      if (0x7fffffff < (uint)(int)(char)*pbVar7) {
        if (puVar9 < (undefined1 *)0xe0) {
          puVar9 = (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar9 & 0x1f) << 6);
          pbVar8 = pbVar7 + 2;
        }
        else {
          uVar6 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
          if (puVar9 < (undefined1 *)0xf0) {
            puVar9 = (undefined1 *)(uVar6 | ((uint)puVar9 & 0x1f) << 0xc);
            pbVar8 = pbVar7 + 3;
          }
          else {
            puVar9 = (undefined1 *)(pbVar7[3] & 0x3f | uVar6 << 6 | ((uint)puVar9 & 7) << 0x12);
            pbVar8 = pbVar7 + 4;
          }
        }
      }
      if (puVar9 == (undefined1 *)0xa) {
        iVar10 = iVar10 + 1;
        param_1[3] = iVar10;
LAB_00700a7c:
        iVar11 = 1;
      }
      else {
        if (puVar9 == (undefined1 *)0xd) goto LAB_00700a7c;
        if (puVar9 == &DAT_00110000) break;
        iVar11 = iVar11 + 1;
      }
      param_1[4] = iVar11;
      pbVar7 = pbVar8;
    } while (pbVar8 != pbVar3 + uVar5);
    param_1[2] = iVar4;
    if (uVar5 < uVar2) {
      if ((char)pbVar3[uVar5] < -0x40) {
LAB_00700aa4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar3,uVar2,uVar5,uVar2,&DAT_01c06530);
      }
    }
    else if (uVar2 != uVar5) goto LAB_00700aa4;
  }
  *param_1 = pbVar3 + uVar5;
  param_1[1] = uVar2 - uVar5;
  return CONCAT44(iVar11,iVar10);
}

