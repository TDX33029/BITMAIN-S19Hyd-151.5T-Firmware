// FUN_0155d3dc @ 0155d3dc size=832 calls_out=18 calls_in=0
// strings: 

void FUN_0155d3dc(undefined2 *param_1,int *param_2,undefined2 param_3,undefined4 *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int local_2c;
  int local_28;
  
  if (*param_2 == 0) goto LAB_0155d600;
  if (*param_2 == 1) {
    iVar8 = param_2[3];
    iVar7 = param_2[2];
    FUN_016e1d94(&local_50,iVar7,iVar8);
    local_2c = local_50;
    local_28 = local_4c;
    iVar3 = FUN_016ea208(&local_2c);
    bVar1 = false;
    if (iVar3 == 0) {
      iVar3 = 0xf;
    }
    else {
      iVar4 = FUN_0173a71c();
      if (iVar4 == 0x198) {
        bVar1 = true;
      }
      else {
        FUN_01739ee4(iVar3);
        iVar3 = 0xe;
      }
    }
    puVar9 = (undefined4 *)*param_4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)*puVar9) {
    case 0:
      iVar4 = FUN_0172c154();
      break;
    case 1:
      iVar4 = FUN_0172c1a0();
      break;
    case 2:
      iVar4 = FUN_0172c1ec();
      break;
    case 3:
      iVar4 = FUN_0172c238();
    }
    iVar5 = iVar3;
    bVar2 = bVar1;
    if (iVar4 == 0) {
joined_r0x0155d5dc:
      iVar3 = iVar5;
      if (!bVar2) {
LAB_0155d600:
        *param_1 = 0xe;
        return;
      }
    }
    else {
      FUN_016e1d94(&local_50,iVar7,iVar8);
      local_2c = local_50;
      local_28 = local_4c;
      iVar7 = FUN_016e911c(&local_2c,iVar4);
      if (iVar7 == 0) {
        bVar2 = false;
        iVar5 = 0xf;
      }
      else {
        iVar5 = FUN_01739ea4();
        bVar2 = false;
        if (iVar5 == 0) {
LAB_0155d618:
          iVar5 = 0xf;
        }
        else {
          iVar8 = FUN_0173aba4(iVar5,iVar7);
          if (iVar8 != 1) {
            FUN_01739ee4(iVar5);
            goto LAB_0155d618;
          }
          bVar2 = true;
        }
        FUN_0172c984(iVar7);
      }
      if (!bVar1) goto joined_r0x0155d5dc;
      if (bVar2) {
        FUN_01739ee4(iVar5);
      }
    }
    iVar8 = *(int *)(&DAT_00564600 + (uint)*(byte *)*puVar9 * 4);
    iVar7 = FUN_0173acc0(iVar3);
    if (((iVar7 == 0) || (iVar7 = FUN_0172ca8c(), iVar7 == 0)) ||
       (iVar7 = FUN_0172c684(), iVar7 != iVar8)) goto LAB_0155d708;
    FUN_00606334(&local_50,iVar3,param_4);
  }
  else {
    FUN_016e1d94(&local_50,param_2[2],param_2[3]);
    local_2c = local_50;
    local_28 = local_4c;
    iVar3 = FUN_016ea208(&local_2c);
    if (iVar3 == 0) goto LAB_0155d600;
    iVar7 = FUN_0173a71c();
    if (iVar7 != 0x198) goto LAB_0155d708;
    iVar8 = *(int *)(&DAT_00564600 + (uint)**(byte **)*param_4 * 4);
    iVar7 = FUN_0173acc0(iVar3);
    if (((iVar7 == 0) || (iVar7 = FUN_0172ca8c(), iVar7 == 0)) ||
       (iVar7 = FUN_0172c684(), iVar7 != iVar8)) goto LAB_0155d708;
    FUN_00606334(&local_50,iVar3,param_4);
  }
  iStack_38 = local_44;
  if (local_50 != 0) {
    local_44 = local_50;
    local_40 = local_4c;
    iStack_3c = (int)local_48;
    local_4c = 1;
    local_50 = 1;
    local_48 = param_4;
    local_34 = iVar3;
    piVar6 = (int *)thunk_FUN_016d4a50(0x20);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *piVar6 = local_50;
    piVar6[1] = local_4c;
    piVar6[2] = (int)local_48;
    piVar6[3] = local_44;
    piVar6[4] = local_40;
    piVar6[5] = iStack_3c;
    piVar6[6] = iStack_38;
    piVar6[7] = local_34;
    *(int **)(param_1 + 2) = piVar6;
    *param_1 = param_3;
    return;
  }
LAB_0155d708:
  FUN_01739ee4(iVar3);
  *param_1 = 0xe;
  return;
}

