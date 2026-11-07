// FUN_015094bc @ 015094bc size=324 calls_out=3 calls_in=2
// strings: 

void FUN_015094bc(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  FUN_0152d84c(&local_30,&DAT_018a76b0,param_2);
  uVar2 = local_2c;
  if ((char)local_30 != '\x18') {
    *(char *)(param_1 + 1) = (char)local_30;
    *(undefined1 *)((int)param_1 + 7) = local_30._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_30._1_2_;
    param_1[2] = local_2c;
    param_1[3] = local_28;
    *param_1 = 1;
    return;
  }
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  if (uVar7 - uVar8 < local_2c) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  uVar3 = uVar8 + local_2c;
  param_2[2] = uVar3;
  if ((CARRY4(uVar8,local_2c)) || (uVar7 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar8,uVar3,uVar7,&DAT_018a78f8);
  }
  iVar4 = *param_2;
  uVar7 = 1;
  bVar9 = local_2c != 0;
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (bVar9) {
    do {
      uVar3 = local_28;
      bVar1 = *(byte *)(iVar4 + uVar8 + local_28);
      bVar6 = bVar1;
      if (2 < bVar1) {
        bVar6 = 3;
      }
      if (local_28 == local_30) {
        FUN_0154e058(&local_30);
        uVar7 = local_2c;
      }
      local_28 = uVar3 + 1;
      pbVar5 = (byte *)(uVar7 + uVar3 * 2);
      *pbVar5 = bVar6;
      pbVar5[1] = bVar1;
    } while (uVar2 != local_28);
  }
  *param_1 = 0;
  param_1[1] = local_30;
  param_1[2] = local_2c;
  param_1[3] = local_28;
  return;
}

