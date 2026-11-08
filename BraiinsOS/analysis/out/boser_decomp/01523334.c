// FUN_01523334 @ 01523334 size=920 calls_out=14 calls_in=1
// strings: anyOf | anyOf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01523334(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

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
  int local_188;
  undefined *local_184;
  int local_180;
  undefined *local_17c;
  int iStack_178;
  int *local_174;
  int local_170;
  undefined1 auStack_168 [56];
  int *local_130;
  int local_12c;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int *local_bc;
  int local_b8;
  undefined1 local_40;
  int local_38;
  undefined *local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (*param_4 == '\x04') {
    iVar9 = *(int *)(param_4 + 0xc);
    iVar10 = *(int *)(param_4 + 8);
    if (iVar9 == 1) {
      FUN_01526248(auStack_168,param_2,"anyOf",5);
      FUN_015276e8(&local_c8,auStack_168,0);
      uVar3 = FUN_016731b0(local_40,iVar10);
      FUN_0156aca8(&local_188,&local_c8,iVar10,uVar3);
      if (local_188 == 0) {
        piVar4 = (int *)0x0;
        puVar8 = local_184;
      }
      else {
        local_38 = local_180;
        local_34 = local_17c;
        local_30 = iStack_178;
        do {
          iVar9 = *local_130;
          bVar2 = (bool)hasExclusiveAccess(local_130);
        } while (!bVar2);
        *local_130 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_015236d0;
        local_170 = local_12c;
        local_174 = local_130;
        piVar4 = (int *)thunk_FUN_01be5118(0x1c);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x1c);
        }
        *piVar4 = local_188;
        piVar4[1] = (int)local_184;
        piVar4[2] = local_180;
        piVar4[3] = (int)local_17c;
        piVar4[4] = iStack_178;
        piVar4[5] = (int)local_174;
        piVar4[6] = local_170;
        puVar8 = &DAT_01cfb080;
      }
      FUN_014ff9e0(&local_c8);
      FUN_014ff9e0(auStack_168);
      param_1[1] = piVar4;
      param_1[2] = puVar8;
    }
    else {
      FUN_01526248(auStack_168,param_2,"anyOf",5);
      if (iVar9 == 0) {
        local_d0 = 0;
        local_d4 = 4;
        local_d8 = 0;
      }
      else {
        iVar6 = FUN_01298504(iVar9 * 0x14,4);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,iVar9 * 0x14);
        }
        iVar11 = 0;
        iVar7 = 0;
        local_d0 = 0;
        iVar12 = iVar9 * 0x18;
        local_d8 = iVar9;
        local_d4 = iVar6;
        do {
          FUN_015276e8(&local_c8,auStack_168,iVar7);
          uVar3 = FUN_016731b0(local_40,iVar10);
          FUN_0156aca8(&local_38,&local_c8,iVar10,uVar3);
          if (local_38 == 0) {
            FUN_014ff9e0(&local_c8);
            FUN_0152785c(&local_d8);
            piVar4 = (int *)0x0;
            puVar8 = local_34;
            goto LAB_01523688;
          }
          local_180 = local_30;
          local_17c = (undefined *)iStack_2c;
          iStack_178 = iStack_28;
          local_188 = local_38;
          local_184 = local_34;
          if (iVar7 == local_d8) {
            FUN_0155dc90(&local_d8);
            iVar6 = local_d4;
          }
          iVar7 = iVar7 + 1;
          piVar4 = (int *)(iVar6 + iVar11);
          *piVar4 = local_188;
          piVar4[1] = (int)local_184;
          piVar4[2] = local_180;
          piVar4[3] = (int)local_17c;
          piVar4[4] = iStack_178;
          local_d0 = iVar7;
          FUN_014ff9e0(&local_c8);
          iVar10 = iVar10 + 0x18;
          iVar11 = iVar11 + 0x14;
          iVar12 = iVar12 + -0x18;
        } while (iVar12 != 0);
      }
      do {
        iVar9 = *local_130;
        bVar2 = (bool)hasExclusiveAccess(local_130);
      } while (!bVar2);
      *local_130 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_015236d0;
      local_c8 = local_d8;
      iStack_c4 = local_d4;
      iStack_c0 = local_d0;
      local_bc = local_130;
      local_b8 = local_12c;
      piVar4 = (int *)thunk_FUN_01be5118(0x14);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x14);
      }
      *piVar4 = local_c8;
      piVar4[1] = iStack_c4;
      piVar4[2] = iStack_c0;
      piVar4[3] = (int)local_bc;
      piVar4[4] = local_b8;
      puVar8 = &DAT_01cfb060;
LAB_01523688:
      FUN_014ff9e0(auStack_168);
      param_1[1] = piVar4;
      param_1[2] = puVar8;
    }
  }
  else {
    uVar13 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"anyOf",5)
    ;
    uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
    piVar4 = (int *)uVar13;
    do {
      iVar9 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_015236d0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15236d0);
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

