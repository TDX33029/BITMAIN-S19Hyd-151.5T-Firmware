// FUN_018cd5c4 @ 018cd5c4 size=1268 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_018cd5c4(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  undefined4 *puVar6;
  undefined1 ***pppuVar7;
  undefined1 ***pppuVar8;
  undefined1 **local_54;
  undefined4 ***local_50;
  code *local_4c;
  undefined4 ***local_48;
  undefined1 *local_44;
  undefined1 ***local_40;
  undefined4 *local_3c;
  undefined1 ***local_38;
  int local_30;
  int *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    pppuVar7 = *(undefined1 ****)(param_1 + 0xc);
    local_54 = (undefined1 **)(param_1 + 1);
    uVar1 = 0;
    iVar4 = (int)pppuVar7 * 0xc;
    if ((undefined1 ***)0xaaaaaaa < pppuVar7) {
LAB_018cd7bc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar1,iVar4);
    }
    iVar5 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      local_3c = (undefined4 *)&SUB_00000004;
      local_40 = (undefined1 ***)0x0;
    }
    else {
      uVar1 = 4;
      local_3c = (undefined4 *)FUN_01298504(iVar4,4);
      local_40 = pppuVar7;
      if (local_3c == (undefined4 *)0x0) goto LAB_018cd7bc;
    }
    local_38 = (undefined1 ***)0x0;
    pppuVar8 = (undefined1 ***)0x0;
    if (pppuVar7 != (undefined1 ***)0x0) {
      pppuVar8 = (undefined1 ***)0x0;
      puVar6 = local_3c;
      do {
        local_28 = &LAB_018d2cc4;
        local_2c = &local_30;
        local_30 = iVar5;
        FUN_00664898(&local_50,&DAT_00590e5f,&local_2c);
        pppuVar8 = (undefined1 ***)((int)pppuVar8 + 1);
        iVar5 = iVar5 + 2;
        *puVar6 = local_50;
        puVar6[1] = local_4c;
        puVar6[2] = local_48;
        puVar6 = puVar6 + 3;
      } while (pppuVar7 != pppuVar8);
      pppuVar8 = pppuVar7;
    }
    local_50 = (undefined4 ***)local_40;
    local_4c = (code *)local_3c;
    local_48 = (undefined4 ***)pppuVar8;
    local_38 = pppuVar8;
    FUN_018c9750(&local_40,local_3c,pppuVar8,&DAT_0056d994,4);
    FUN_006a41c0(&local_50);
    local_44 = &LAB_00632348;
    local_4c = (code *)&LAB_018d2cc4;
    local_50 = (undefined4 ***)&local_54;
    local_48 = &local_40;
    uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_005b4b64,&local_50);
    goto LAB_018cdaf4;
  case 1:
    pppuVar7 = *(undefined1 ****)(param_1 + 0xc);
    local_54 = (undefined1 **)(param_1 + 1);
    uVar1 = 0;
    iVar4 = (int)pppuVar7 * 0xc;
    if ((undefined1 ***)0xaaaaaaa < pppuVar7) goto LAB_018cd7bc;
    iVar5 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
      local_3c = (undefined4 *)&SUB_00000004;
      local_40 = (undefined1 ***)0x0;
    }
    else {
      uVar1 = 4;
      local_3c = (undefined4 *)FUN_01298504(iVar4,4);
      local_40 = pppuVar7;
      if (local_3c == (undefined4 *)0x0) goto LAB_018cd7bc;
    }
    local_38 = (undefined1 ***)0x0;
    pppuVar8 = (undefined1 ***)0x0;
    if (pppuVar7 != (undefined1 ***)0x0) {
      pppuVar8 = (undefined1 ***)0x0;
      puVar6 = local_3c;
      do {
        local_28 = &LAB_018d577c;
        local_2c = &local_30;
        local_30 = iVar5;
        FUN_00664898(&local_50,&DAT_00590e5f,&local_2c);
        pppuVar8 = (undefined1 ***)((int)pppuVar8 + 1);
        iVar5 = iVar5 + 2;
        *puVar6 = local_50;
        puVar6[1] = local_4c;
        puVar6[2] = local_48;
        puVar6 = puVar6 + 3;
      } while (pppuVar7 != pppuVar8);
      pppuVar8 = pppuVar7;
    }
    local_50 = (undefined4 ***)local_40;
    local_4c = (code *)local_3c;
    local_48 = (undefined4 ***)pppuVar8;
    local_38 = pppuVar8;
    FUN_018c9750(&local_40,local_3c,pppuVar8,&DAT_0056d994,4);
    FUN_006a41c0(&local_50);
    local_44 = &LAB_00632348;
    local_4c = (code *)&LAB_018d577c;
    local_50 = (undefined4 ***)&local_54;
    local_48 = &local_40;
    uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_00595dcb,&local_50);
LAB_018cdaf4:
    FUN_0134bd64(local_40,local_3c);
    return uVar1;
  case 2:
    local_40 = (undefined1 ***)(param_1 + 4);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_4c = (code *)&LAB_018cca04;
    puVar2 = &DAT_005bcbdf;
    break;
  case 3:
    uVar1 = *param_2;
    uVar3 = 0x19;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_0052112b;
    goto LAB_018cd8c0;
  case 4:
    uVar1 = *param_2;
    uVar3 = 0x2b;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_00521144;
    goto LAB_018cd8c0;
  case 5:
    uVar1 = *param_2;
    uVar3 = 0x1d;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_0052116f;
    goto LAB_018cd8c0;
  case 6:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_0052118c;
    goto LAB_018cd824;
  case 7:
    local_40 = (undefined1 ***)(param_1 + 1);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_4c = FUN_018cd0a4;
    puVar2 = &DAT_0057356b;
    break;
  case 8:
    local_40 = (undefined1 ***)(param_1 + 1);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_4c = FUN_018cd058;
    puVar2 = &DAT_00584cc5;
    break;
  case 9:
    local_40 = (undefined1 ***)(param_1 + 1);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_4c = (code *)&LAB_018d2dbc;
    puVar2 = &DAT_00590a24;
    break;
  case 10:
    local_40 = (undefined1 ***)(param_1 + 4);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_4c = (code *)&LAB_018ccd90;
    puVar2 = &DAT_005a0660;
    break;
  case 0xb:
    local_40 = (undefined1 ***)(param_1 + 1);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_4c = FUN_018cd374;
    puVar2 = &DAT_00599263;
    break;
  case 0xc:
    local_40 = (undefined1 ***)(param_1 + 4);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_4c = (code *)&LAB_018cc734;
    puVar2 = &DAT_005bb473;
    break;
  case 0xd:
    local_40 = (undefined1 ***)(param_1 + 4);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_4c = (code *)&LAB_0193a90c;
    puVar2 = &DAT_0057954b;
    break;
  case 0xe:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005211a2;
    goto LAB_018cd750;
  case 0xf:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005211bc;
LAB_018cd750:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x1a;
    goto LAB_018cd8c0;
  case 0x10:
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar2 = &UNK_005211d6;
LAB_018cd824:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
    uVar3 = 0x16;
    goto LAB_018cd8c0;
  case 0x11:
    uVar1 = *param_2;
    uVar3 = 0x1c;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_005211ec;
    goto LAB_018cd8c0;
  case 0x12:
    uVar1 = *param_2;
    uVar3 = 0x27;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_00521208;
    goto LAB_018cd8c0;
  case 0x13:
    uVar1 = *param_2;
    uVar3 = 0x35;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar2 = &UNK_0052122f;
LAB_018cd8c0:
                    /* WARNING: Could not recover jumptable at 0x018cd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,puVar2,uVar3);
    return uVar1;
  }
  local_50 = &local_40;
  uVar1 = FUN_012fa178(uVar1,uVar3,puVar2,&local_50);
  return uVar1;
}

