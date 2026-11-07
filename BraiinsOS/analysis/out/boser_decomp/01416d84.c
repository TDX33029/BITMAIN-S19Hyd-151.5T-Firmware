// FUN_01416d84 @ 01416d84 size=260 calls_out=0 calls_in=1
// strings: 

void FUN_01416d84(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  pbVar9 = (byte *)param_2[1];
  if ((byte *)param_2[2] < pbVar9) {
    bVar3 = false;
    pbVar4 = (byte *)param_2[2];
    do {
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar6 = (uint)bVar1;
      if (uVar6 < 0xd) {
        if (uVar6 != 9) {
          if (uVar6 == 10) {
            iVar7 = *param_2;
            param_2[2] = (int)pbVar5;
LAB_01416e48:
            iVar8 = (int)pbVar4 - iVar7;
            if (bVar3) {
              iVar7 = 1;
              iVar8 = 0;
            }
            *param_2 = (int)pbVar5;
            uVar2 = 0;
            *(int *)(param_1 + 4) = iVar7;
            *(int *)(param_1 + 8) = iVar8;
            goto LAB_01416e10;
          }
LAB_01416dd0:
          if ((-1 < (char)bVar1) && (0x5d < uVar6 - 0x21)) {
            param_2[2] = (int)pbVar5;
            param_1[1] = 3;
            goto LAB_01416e80;
          }
        }
      }
      else if (uVar6 != 0x20) {
        if (uVar6 != 0xd) goto LAB_01416dd0;
        param_2[2] = (int)pbVar5;
        if (pbVar9 <= pbVar5) goto LAB_01416e08;
        bVar1 = pbVar4[1];
        pbVar5 = pbVar4 + 2;
        param_2[2] = (int)pbVar5;
        if (bVar1 == 10) {
          iVar7 = *param_2;
          goto LAB_01416e48;
        }
        param_1[1] = 3;
LAB_01416e80:
        uVar2 = 1;
        goto LAB_01416e10;
      }
      bVar3 = (bool)((char)bVar1 < '\0' | bVar3);
      pbVar4 = pbVar5;
    } while (pbVar5 != pbVar9);
    param_2[2] = (int)pbVar9;
  }
LAB_01416e08:
  uVar2 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
LAB_01416e10:
  *param_1 = uVar2;
  return;
}

