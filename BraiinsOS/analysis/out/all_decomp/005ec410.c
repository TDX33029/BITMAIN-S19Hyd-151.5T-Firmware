// FUN_005ec410 @ 005ec410 size=592 calls_out=2 calls_in=2
// strings: 

void FUN_005ec410(undefined4 *param_1,int param_2,uint param_3,byte param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_2 + 8);
  if (uVar7 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar7,&DAT_01856a28);
  }
  iVar4 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(iVar4 + param_3 * 0x14 + 4);
  if (iVar2 != 0) {
    uVar3 = iVar2 + (uint)*(byte *)(param_2 + (uint)param_4 + 0x48);
    if (*(uint *)(param_2 + 0x20) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,*(uint *)(param_2 + 0x20),&DAT_01856a38);
    }
    *(undefined4 *)(*(int *)(param_2 + 0x1c) + uVar3 * 4) = param_5;
  }
  uVar3 = *(uint *)(iVar4 + param_3 * 0x14);
  if (uVar3 == 0) {
    uVar6 = *(uint *)(param_2 + 0x14);
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x14);
    if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,uVar6,&DAT_01856a48);
    }
    iVar2 = *(int *)(param_2 + 0x10);
    pbVar5 = (byte *)(iVar2 + uVar3 * 9);
    bVar1 = *pbVar5;
    if (bVar1 <= param_4) {
      if (param_4 == bVar1) {
        *(undefined4 *)(pbVar5 + 1) = param_5;
        *param_1 = 3;
        return;
      }
      do {
        uVar7 = uVar3;
        uVar3 = *(uint *)(iVar2 + uVar7 * 9 + 5);
        if (uVar3 == 0) {
          uVar3 = 0;
          goto LAB_005ec548;
        }
        if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar3,uVar6,&DAT_01856a58);
        }
        pbVar5 = (byte *)(iVar2 + uVar3 * 9);
        bVar1 = *pbVar5;
      } while (bVar1 < param_4);
      if (bVar1 <= param_4) {
        *(undefined4 *)(pbVar5 + 1) = param_5;
        *param_1 = 3;
        return;
      }
LAB_005ec548:
      if (uVar6 == *(uint *)(param_2 + 0xc)) {
        FUN_005fd3dc(param_2 + 0xc);
        iVar2 = *(int *)(param_2 + 0x10);
      }
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      pbVar5 = (byte *)(iVar2 + uVar6 * 9);
      *pbVar5 = param_4;
      *(uint *)(pbVar5 + 5) = uVar3;
      *(undefined4 *)(pbVar5 + 1) = param_5;
      if (uVar6 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,uVar6 + 1,&DAT_01856a68);
      }
      *(uint *)(iVar2 + uVar7 * 9 + 5) = uVar6;
      *param_1 = 3;
      return;
    }
  }
  if (uVar6 == *(uint *)(param_2 + 0xc)) {
    FUN_005fd3dc(param_2 + 0xc);
    uVar7 = *(uint *)(param_2 + 8);
  }
  *(uint *)(param_2 + 0x14) = uVar6 + 1;
  pbVar5 = (byte *)(*(int *)(param_2 + 0x10) + uVar6 * 9);
  *pbVar5 = param_4;
  *(uint *)(pbVar5 + 5) = uVar3;
  *(undefined4 *)(pbVar5 + 1) = param_5;
  if (uVar7 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar7,&DAT_01856a78);
  }
  *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14) = uVar6;
  *param_1 = 3;
  return;
}

