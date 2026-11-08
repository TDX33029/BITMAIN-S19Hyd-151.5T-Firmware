// FUN_01a47b40 @ 01a47b40 size=308 calls_out=2 calls_in=2
// strings: digit

void FUN_01a47b40(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_40 [4];
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  int local_30;
  byte local_2c;
  uint3 local_2b;
  int local_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  
  pbVar5 = *(byte **)(param_2 + 8);
  uVar7 = *(uint *)(param_2 + 0xc);
  local_34 = 5;
  local_3c = 2;
  local_38 = "digit";
  local_40[0] = 0x5f;
  iVar2 = 1;
  iVar3 = 4;
  if (uVar7 == 0) {
LAB_01a47c0c:
    iStack_24 = 0;
    iStack_20 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    bVar1 = *pbVar5;
    *(byte **)(param_2 + 8) = pbVar5 + 1;
    *(uint *)(param_2 + 0xc) = uVar7 - 1;
    if (9 < bVar1 - 0x30) {
      *(byte **)(param_2 + 8) = pbVar5;
      *(uint *)(param_2 + 0xc) = uVar7;
      goto LAB_01a47c0c;
    }
    FUN_01a465ac(&local_30,local_40,param_2);
    if (local_30 == 3) {
      iVar2 = *(int *)(param_2 + 8);
      *(byte **)(param_2 + 8) = pbVar5;
      *(uint *)(param_2 + 0xc) = uVar7;
      uVar4 = iVar2 - (int)pbVar5;
      if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2c054);
      }
      iVar2 = 3;
      param_1[1] = (int)pbVar5;
      *(byte **)(param_2 + 8) = pbVar5 + uVar4;
      *(uint *)(param_2 + 0xc) = uVar7 - uVar4;
      param_1[2] = uVar4;
      goto LAB_01a47c30;
    }
    uVar6 = (uint)local_2c;
    uVar4 = (uint)local_2b << 8;
    iVar2 = local_30;
    iVar3 = local_28;
    uVar7 = uStack_1c;
  }
  param_1[1] = uVar4 | uVar6;
  param_1[2] = iVar3;
  param_1[3] = iStack_24;
  param_1[4] = iStack_20;
  param_1[5] = uVar7;
  if (iVar2 == 1) {
    iVar2 = 2;
  }
LAB_01a47c30:
  *param_1 = iVar2;
  return;
}

