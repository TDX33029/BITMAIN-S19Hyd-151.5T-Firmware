// FUN_015237e8 @ 015237e8 size=800 calls_out=14 calls_in=1
// strings: allOf | allOf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015237e8(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_180 [144];
  int local_f0;
  int local_ec;
  int local_e8;
  undefined1 auStack_e0 [136];
  undefined1 local_58;
  int local_50;
  undefined *local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  undefined *local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (*param_4 == '\x04') {
    iVar9 = *(int *)(param_4 + 0xc);
    iVar10 = *(int *)(param_4 + 8);
    if (iVar9 == 1) {
      FUN_01526248(auStack_180,param_2,"allOf",5);
      FUN_015276e8(auStack_e0,auStack_180,0);
      uVar3 = FUN_016731b0(local_58,iVar10);
      FUN_0156aca8(&local_50,auStack_e0,iVar10,uVar3);
      if (local_50 == 0) {
        piVar4 = (int *)0x0;
        puVar8 = local_4c;
      }
      else {
        local_30 = local_48;
        iStack_2c = iStack_44;
        iStack_28 = iStack_40;
        local_38 = local_50;
        local_34 = local_4c;
        piVar4 = (int *)thunk_FUN_01be5118(0x14);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *piVar4 = local_38;
        piVar4[1] = (int)local_34;
        piVar4[2] = local_30;
        piVar4[3] = iStack_2c;
        piVar4[4] = iStack_28;
        puVar8 = &DAT_01cfb040;
      }
      FUN_014ff9e0(auStack_e0);
      FUN_014ff9e0(auStack_180);
      param_1[1] = piVar4;
      param_1[2] = puVar8;
    }
    else {
      FUN_01526248(auStack_180,param_2,"allOf",5);
      if (iVar9 == 0) {
        local_e8 = 0;
        local_ec = 4;
        local_f0 = 0;
      }
      else {
        iVar6 = FUN_01298504(iVar9 * 0x14,4);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,iVar9 * 0x14);
        }
        iVar11 = 0;
        iVar7 = 0;
        local_e8 = 0;
        iVar12 = iVar9 * 0x18;
        local_f0 = iVar9;
        local_ec = iVar6;
        do {
          FUN_015276e8(auStack_e0,auStack_180,iVar7);
          uVar3 = FUN_016731b0(local_58,iVar10);
          FUN_0156aca8(&local_50,auStack_e0,iVar10,uVar3);
          if (local_50 == 0) {
            FUN_014ff9e0(auStack_e0);
            FUN_0152785c(&local_f0);
            piVar4 = (int *)0x0;
            puVar8 = local_4c;
            goto LAB_01523ac0;
          }
          local_30 = local_48;
          iStack_2c = iStack_44;
          iStack_28 = iStack_40;
          local_38 = local_50;
          local_34 = local_4c;
          if (iVar7 == local_f0) {
            FUN_0155dc90(&local_f0);
            iVar6 = local_ec;
          }
          iVar7 = iVar7 + 1;
          piVar4 = (int *)(iVar6 + iVar11);
          *piVar4 = local_38;
          piVar4[1] = (int)local_34;
          piVar4[2] = local_30;
          piVar4[3] = iStack_2c;
          piVar4[4] = iStack_28;
          local_e8 = iVar7;
          FUN_014ff9e0(auStack_e0);
          iVar10 = iVar10 + 0x18;
          iVar11 = iVar11 + 0x14;
          iVar12 = iVar12 + -0x18;
        } while (iVar12 != 0);
      }
      piVar4 = (int *)thunk_FUN_01be5118(0xc);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *piVar4 = local_f0;
      piVar4[1] = local_ec;
      piVar4[2] = local_e8;
      puVar8 = &DAT_01cfb020;
LAB_01523ac0:
      FUN_014ff9e0(auStack_180);
      param_1[1] = piVar4;
      param_1[2] = puVar8;
    }
  }
  else {
    uVar13 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"allOf",5)
    ;
    uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
    piVar4 = (int *)uVar13;
    do {
      iVar9 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar9 + 1;
    if (iVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1523b0c);
      (*pcVar1)();
    }
    uVar13 = FUN_015321a0();
    uVar5 = FUN_015956e0(piVar4,uVar5,piVar4,uVar5,uVar13,param_4,1);
    param_1[1] = 0;
    param_1[2] = uVar5;
  }
  *param_1 = 1;
  return;
}

