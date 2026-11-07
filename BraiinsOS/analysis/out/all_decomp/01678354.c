// FUN_01678354 @ 01678354 size=264 calls_out=2 calls_in=1
// strings: 

void FUN_01678354(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int unaff_r6;
  int iVar7;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  
  uVar6 = *(uint *)(param_2 + 0xc);
  iVar4 = 4;
  iVar3 = 1;
  if (uVar6 != 0) {
    pbVar5 = *(byte **)(param_2 + 8);
    iVar7 = uVar6 - 1;
    bVar1 = *pbVar5;
    *(byte **)(param_2 + 8) = pbVar5 + 1;
    *(int *)(param_2 + 0xc) = iVar7;
    if ((bVar1 & 0xdf) == 0x45) {
      if (iVar7 == 0) {
LAB_016783b8:
        *(byte **)(param_2 + 8) = pbVar5 + 1;
        *(int *)(param_2 + 0xc) = iVar7;
      }
      else {
        bVar1 = pbVar5[1];
        *(byte **)(param_2 + 8) = pbVar5 + 2;
        *(uint *)(param_2 + 0xc) = uVar6 - 2;
        if (bVar1 != 0x2b && bVar1 != 0x2d) goto LAB_016783b8;
      }
      FUN_01678464(&local_38);
      if (local_38 == 3) {
        iVar3 = *(int *)(param_2 + 8);
        *(byte **)(param_2 + 8) = pbVar5;
        *(uint *)(param_2 + 0xc) = uVar6;
        uVar2 = iVar3 - (int)pbVar5;
        if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
        }
        param_1[2] = uVar2;
        *(byte **)(param_2 + 8) = pbVar5 + uVar2;
        *(uint *)(param_2 + 0xc) = uVar6 - uVar2;
        *param_1 = 3;
        param_1[1] = (int)pbVar5;
        return;
      }
      iVar3 = local_38;
      iVar4 = iStack_30;
      goto LAB_01678430;
    }
    *(byte **)(param_2 + 8) = pbVar5;
    *(uint *)(param_2 + 0xc) = uVar6;
  }
  iStack_34 = 0;
  iStack_2c = 0;
  local_28 = 0;
  local_24 = unaff_r6;
LAB_01678430:
  *param_1 = iVar3;
  param_1[1] = iStack_34;
  param_1[2] = iVar4;
  param_1[3] = iStack_2c;
  param_1[4] = local_28;
  param_1[5] = local_24;
  return;
}

