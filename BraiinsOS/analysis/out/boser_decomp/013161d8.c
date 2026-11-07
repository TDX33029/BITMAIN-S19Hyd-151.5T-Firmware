// FUN_013161d8 @ 013161d8 size=400 calls_out=4 calls_in=1
// strings: 

void FUN_013161d8(int *param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_31;
  int local_30;
  undefined2 *local_2c;
  int local_28;
  
  uVar7 = (uint)*(ushort *)(param_2 + 0xe);
  local_31 = 1;
  if (uVar7 < *(ushort *)(param_2 + 0xc)) {
LAB_01316344:
    *param_1 = 0;
    param_1[1] = 2;
    param_1[2] = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    do {
      uVar6 = uVar4;
      uVar5 = uVar6 & 0xffff;
      if (uVar7 <= uVar5) {
        iVar1 = FUN_01316074(param_2,&local_31,uVar7);
        uVar4 = uVar7;
        uVar6 = uVar7;
        if (iVar1 == 0) goto LAB_01316344;
        break;
      }
      iVar1 = FUN_01316074(param_2,&local_31,uVar6);
      uVar4 = uVar6 + 1;
    } while (iVar1 == 0);
    puVar2 = (undefined2 *)thunk_FUN_01be5118(8);
    if (puVar2 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(2,8);
    }
    *puVar2 = (short)uVar6;
    local_28 = 1;
    local_30 = 4;
    local_2c = puVar2;
    if (uVar5 < uVar7) {
      while (iVar1 = local_28, (uVar4 & 0xffff) <= uVar7) {
        do {
          uVar6 = uVar4;
          uVar5 = uVar6 & 0xffff;
          if (uVar7 <= uVar5) {
            iVar3 = FUN_01316074(param_2,&local_31,uVar7);
            uVar4 = uVar7;
            uVar6 = uVar7;
            if (iVar3 == 0) goto LAB_01316330;
            break;
          }
          iVar3 = FUN_01316074(param_2,&local_31,uVar6);
          uVar4 = uVar6 + 1;
        } while (iVar3 == 0);
        if (iVar1 == local_30) {
          FUN_006520b4(&local_30,iVar1,1,2,2);
          puVar2 = local_2c;
        }
        local_28 = iVar1 + 1;
        puVar2[iVar1] = (short)uVar6;
        if (uVar7 <= uVar5) break;
      }
    }
LAB_01316330:
    *param_1 = local_30;
    param_1[1] = (int)local_2c;
    param_1[2] = local_28;
  }
  return;
}

