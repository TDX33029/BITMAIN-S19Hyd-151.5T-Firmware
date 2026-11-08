// FUN_0168a174 @ 0168a174 size=412 calls_out=8 calls_in=3
// strings: 

void FUN_0168a174(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = param_3 << 2;
    puVar6 = (uint *)(*(int *)(param_1 + 0x1c) + 0x5c);
    iVar7 = *(int *)(param_1 + 0x20) * 0xc0;
    iVar2 = param_3 + 1;
    do {
      if (param_3 == 0) {
        iVar5 = 0;
        iVar4 = 4;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(iVar1);
        iVar5 = param_3;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,iVar1);
        }
      }
      local_30 = iVar5;
      local_2c = iVar4;
      FUN_016dd1aa(iVar4,param_2,iVar1);
      local_28 = param_3;
      FUN_0166e388(&local_30);
      iVar4 = local_2c;
      iVar5 = local_30;
      *(uint **)(local_2c + param_3 * 4) = puVar6 + 5;
      if (puVar6[-0x17] == 1) {
        if (*puVar6 < 2) {
          if (*(char *)((int)puVar6 + 0xd) != '\0') {
            FUN_01676cac(puVar6 + -0x15,local_2c,iVar2,param_4);
            goto LAB_0168a2a4;
          }
          iVar8 = param_4[2];
          if (iVar8 == *param_4) {
            FUN_0166e4ac(param_4);
          }
        }
        else {
          iVar8 = param_4[2];
          if (iVar8 == *param_4) {
            FUN_0166e4ac(param_4);
          }
        }
        param_4[2] = iVar8 + 1;
        piVar3 = (int *)(param_4[1] + iVar8 * 0x10);
        *piVar3 = iVar5;
        piVar3[1] = iVar4;
        piVar3[2] = iVar2;
        piVar3[3] = (int)(puVar6 + -0x15);
      }
      else {
        if ((puVar6[-0x17] == 2) && (*(char *)((int)puVar6 + 9) != '\0')) {
          FUN_0168a174(puVar6 + -0x15,local_2c,iVar2,param_4);
        }
LAB_0168a2a4:
        if (local_30 != 0) {
          thunk_FUN_016d3fb4(iVar4);
        }
      }
      puVar6 = puVar6 + 0x30;
      iVar7 = iVar7 + -0xc0;
    } while (iVar7 != 0);
  }
  return;
}

