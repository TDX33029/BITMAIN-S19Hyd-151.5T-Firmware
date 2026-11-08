// FUN_01676cac @ 01676cac size=356 calls_out=7 calls_in=4
// strings: 

void FUN_01676cac(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = param_3 << 2;
    puVar5 = (uint *)(*(int *)(param_1 + 0x14) + 0x5c);
    iVar6 = *(int *)(param_1 + 0x18) * 0xc0;
    do {
      if (param_3 == 0) {
        iVar3 = 0;
        iVar2 = 4;
      }
      else {
        iVar2 = thunk_FUN_016d4a50(iVar1);
        iVar3 = param_3;
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,iVar1);
        }
      }
      local_30 = iVar3;
      local_2c = iVar2;
      FUN_016dd1aa(iVar2,param_2,iVar1);
      local_28 = param_3;
      FUN_0166e388(&local_30);
      iVar2 = local_2c;
      iVar3 = local_30;
      *(uint **)(local_2c + param_3 * 4) = puVar5 + 5;
      if (puVar5[-0x17] == 1) {
        if ((*puVar5 < 2) && (*(char *)((int)puVar5 + 0xd) != '\0')) {
          FUN_01676cac(puVar5 + -0x15,local_2c,param_3 + 1,param_4);
          goto LAB_01676dbc;
        }
        iVar7 = param_4[2];
        if (iVar7 == *param_4) {
          FUN_0166e4ac();
        }
        param_4[2] = iVar7 + 1;
        piVar4 = (int *)(param_4[1] + iVar7 * 0x10);
        *piVar4 = iVar3;
        piVar4[1] = iVar2;
        piVar4[2] = param_3 + 1;
        piVar4[3] = (int)(puVar5 + -0x15);
      }
      else {
LAB_01676dbc:
        if (local_30 != 0) {
          thunk_FUN_016d3fb4(iVar2);
        }
      }
      puVar5 = puVar5 + 0x30;
      iVar6 = iVar6 + -0xc0;
    } while (iVar6 != 0);
  }
  return;
}

