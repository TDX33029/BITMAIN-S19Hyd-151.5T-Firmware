// FUN_01528bf0 @ 01528bf0 size=644 calls_out=14 calls_in=1
// strings: oneOf | oneOf

void FUN_01528bf0(int *param_1,int param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_180 [56];
  int *local_148;
  int local_144;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int *local_d4;
  int local_d0;
  undefined1 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (*param_3 == '\x04') {
    FUN_01526248(auStack_180,param_2,"oneOf",5);
    local_f0 = *(int *)(param_3 + 0xc);
    if (local_f0 == 0) {
      local_e8 = 0;
      local_ec = 4;
      local_f0 = 0;
    }
    else {
      iVar4 = FUN_01298504(local_f0 * 0x14,4);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,local_f0 * 0x14);
      }
      iVar9 = *(int *)(param_3 + 8);
      iVar8 = 0;
      iVar7 = 0;
      iVar10 = local_f0 * 0x18;
      local_e8 = 0;
      local_ec = iVar4;
      do {
        FUN_015276e8(&local_e0,auStack_180,iVar7);
        uVar3 = FUN_016731b0(local_58,iVar9);
        FUN_0156aca8(&local_50,&local_e0,iVar9,uVar3);
        if (local_50 == 0) {
          *param_1 = 0;
          param_1[1] = local_4c;
          FUN_014ff9e0(&local_e0);
          FUN_0152785c(&local_f0);
          goto LAB_01528e48;
        }
        local_30 = local_48;
        iStack_2c = iStack_44;
        iStack_28 = iStack_40;
        local_34 = local_4c;
        local_38 = local_50;
        if (iVar7 == local_f0) {
          FUN_0155dc90(&local_f0);
          iVar4 = local_ec;
        }
        iVar7 = iVar7 + 1;
        piVar5 = (int *)(iVar4 + iVar8);
        *piVar5 = local_38;
        piVar5[1] = local_34;
        piVar5[2] = local_30;
        piVar5[3] = iStack_2c;
        piVar5[4] = iStack_28;
        local_e8 = iVar7;
        FUN_014ff9e0(&local_e0);
        iVar9 = iVar9 + 0x18;
        iVar8 = iVar8 + 0x14;
        iVar10 = iVar10 + -0x18;
      } while (iVar10 != 0);
    }
    do {
      iVar4 = *local_148;
      bVar2 = (bool)hasExclusiveAccess(local_148);
    } while (!bVar2);
    *local_148 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_01528e74:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1528e74);
      (*pcVar1)();
    }
    local_e0 = local_f0;
    iStack_dc = local_ec;
    iStack_d8 = local_e8;
    local_d4 = local_148;
    local_d0 = local_144;
    piVar5 = (int *)thunk_FUN_01be5118(0x14);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *piVar5 = local_e0;
    piVar5[1] = iStack_dc;
    piVar5[2] = iStack_d8;
    piVar5[3] = (int)local_d4;
    piVar5[4] = local_d0;
    *param_1 = (int)piVar5;
    param_1[1] = (int)&DAT_01cfb330;
LAB_01528e48:
    FUN_014ff9e0(auStack_180);
  }
  else {
    uVar11 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"oneOf",5)
    ;
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    piVar5 = (int *)uVar11;
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_01528e74;
    uVar11 = FUN_015321a0();
    iVar4 = FUN_015956e0(piVar5,uVar6,piVar5,uVar6,uVar11,param_3,1);
    *param_1 = 0;
    param_1[1] = iVar4;
  }
  return;
}

