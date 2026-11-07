// FUN_01a479d4 @ 01a479d4 size=356 calls_out=4 calls_in=1
// strings: 

void FUN_01a479d4(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  
  uVar6 = *(uint *)(param_2 + 0xc);
  pbVar7 = *(byte **)(param_2 + 8);
  local_3c = 0x2d2b4565;
  if (uVar6 != 0) {
    pbVar8 = pbVar7 + 1;
    bVar2 = *pbVar7;
    iVar4 = uVar6 - 1;
    *(byte **)(param_2 + 8) = pbVar8;
    *(int *)(param_2 + 0xc) = iVar4;
    if ((bVar2 & 0xdf) == 0x45) {
      if (iVar4 == 0) {
LAB_01a47a9c:
        *(byte **)(param_2 + 8) = pbVar8;
        *(int *)(param_2 + 0xc) = iVar4;
        FUN_0134aee0(0,4,4,0xc);
        FUN_012d40d0(0);
      }
      else {
        *(uint *)(param_2 + 0xc) = uVar6 - 2;
        bVar2 = *pbVar8;
        iVar5 = 0;
        *(byte **)(param_2 + 8) = pbVar7 + 2;
        do {
          if (iVar5 == 2) {
            *(byte **)(param_2 + 8) = pbVar8;
            *(int *)(param_2 + 0xc) = iVar4;
            goto LAB_01a47a9c;
          }
          pbVar1 = (byte *)(((uint)&local_3c | 2) + iVar5);
          iVar5 = iVar5 + 1;
        } while (bVar2 != *pbVar1);
      }
      FUN_01a47b40(&local_38,param_2);
      if (local_38 == 3) {
        iVar4 = *(int *)(param_2 + 8);
        *(byte **)(param_2 + 8) = pbVar7;
        uVar3 = iVar4 - (int)pbVar7;
        *(uint *)(param_2 + 0xc) = uVar6;
        if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2c054);
        }
        *(byte **)(param_2 + 8) = pbVar7 + uVar3;
        *(uint *)(param_2 + 0xc) = uVar6 - uVar3;
        *param_1 = 3;
        param_1[1] = (int)pbVar7;
        param_1[2] = uVar3;
        return;
      }
      goto LAB_01a47a84;
    }
    *(byte **)(param_2 + 8) = pbVar7;
    *(uint *)(param_2 + 0xc) = uVar6;
  }
  local_34 = 0;
  iStack_30 = 4;
  local_38 = 1;
  iStack_2c = 0;
  iStack_28 = 0;
  local_24 = 0;
LAB_01a47a84:
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = iStack_30;
  param_1[3] = iStack_2c;
  param_1[4] = iStack_28;
  param_1[5] = local_24;
  return;
}

