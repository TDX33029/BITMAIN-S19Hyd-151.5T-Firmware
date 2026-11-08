// FUN_0135d440 @ 0135d440 size=768 calls_out=5 calls_in=0
// strings: Syntax( deadlock 

undefined4 FUN_0135d440(int ******param_1,undefined4 *param_2)

{
  int *******pppppppiVar1;
  int iVar2;
  int *******pppppppiVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *****pppppiVar6;
  int ******ppppppiVar7;
  int *******pppppppiVar8;
  int iVar9;
  int ******local_44;
  int *******local_40;
  undefined4 *local_3c;
  int *******local_38;
  int *******local_30;
  undefined4 *local_2c;
  int *******local_28;
  undefined4 local_24;
  
  if (*param_1 != (int *****)0x80000000) {
    iVar2 = 0;
    local_28 = (int *******)0x0;
    local_2c = (undefined4 *)0x1;
    local_30 = (int *******)0x0;
    local_44 = param_1;
    FUN_0135c828(&local_30,0,0x4f,1,1);
    pppppppiVar1 = local_28;
    do {
      pppppppiVar8 = (int *******)((int)pppppppiVar1 + iVar2);
      pppppppiVar3 = pppppppiVar8;
      if (pppppppiVar8 == local_30) {
        FUN_0135c828(&local_30,pppppppiVar8,1,1,1);
        pppppppiVar3 = local_28;
      }
      iVar2 = iVar2 + 1;
      *(undefined1 *)((int)local_2c + (int)pppppppiVar3) = 0x7e;
      local_38 = (int *******)((int)pppppppiVar8 + 1);
      local_28 = local_38;
    } while (iVar2 != 0x4f);
    uVar4 = *param_2;
    iVar9 = param_2[1];
    pcVar5 = *(code **)(iVar9 + 0xc);
    local_40 = local_30;
    local_3c = local_2c;
    iVar2 = (*pcVar5)(uVar4,"Syntax(\ndeadlock\n",8);
    if (iVar2 == 0) {
      local_2c = &DAT_006043a8;
      local_30 = (int *******)&local_40;
      iVar2 = FUN_00fa948c(uVar4,iVar9,&DAT_00580c3b,&local_30);
      if (iVar2 == 0) {
        local_30 = &local_44;
        local_2c = (undefined4 *)&LAB_01110b14;
        iVar2 = FUN_00fa948c(uVar4,iVar9,&DAT_00580c3b,&local_30);
        if (iVar2 == 0) {
          local_2c = &DAT_006043a8;
          local_30 = (int *******)&local_40;
          iVar2 = FUN_00fa948c(uVar4,iVar9,&DAT_00580c3b,&local_30);
          if ((iVar2 == 0) && (iVar2 = (*pcVar5)(uVar4,&DAT_00418e07,1), iVar2 == 0)) {
            if (local_40 != (int *******)0x0) {
              thunk_FUN_016d3fb4(local_3c);
            }
            return 0;
          }
        }
      }
    }
    if (local_40 != (int *******)0x0) {
      thunk_FUN_016d3fb4(local_3c);
    }
    return 1;
  }
  ppppppiVar7 = (int ******)*param_2;
  iVar9 = param_2[1];
  pppppiVar6 = param_1[1];
  pcVar5 = *(code **)(iVar9 + 0xc);
  iVar2 = (*pcVar5)(ppppppiVar7,&DAT_003cd5e1,0xe);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(ppppppiVar7,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_005ff634(pppppiVar6,param_2);
    }
    else {
      iVar2 = (*pcVar5)(ppppppiVar7,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_44;
      local_2c = (undefined4 *)&DAT_01880dc4;
      local_30 = (int *******)&local_40;
      local_28 = (int *******)param_2[2];
      local_24 = param_2[3];
      local_44 = (int ******)CONCAT31(local_44._1_3_,1);
      local_40 = (int *******)ppppppiVar7;
      local_3c = (undefined4 *)iVar9;
      iVar2 = FUN_005ff634(pppppiVar6,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)((int)local_2c + 0xc))(local_30,&DAT_00414a81,2);
    }
    if (iVar2 == 0) {
      uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar4;
    }
  }
  return 1;
}

