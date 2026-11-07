// FUN_01669e10 @ 01669e10 size=912 calls_out=3 calls_in=1
// strings: 

void FUN_01669e10(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int *local_94;
  int *local_90;
  uint local_8c;
  int *local_84;
  int *local_80;
  int *local_7c;
  uint local_78;
  int *local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  uint local_60;
  int *local_5c;
  char *local_58;
  int local_54;
  int local_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  uint uStack_40;
  int *piStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  char **local_28;
  
  cVar1 = *param_2;
  iVar12 = *(int *)(param_3 + 0xc);
  do {
    pcVar11 = *(char **)(param_3 + 8);
    FUN_016794d0(&local_50,param_3);
    piVar6 = piStack_3c;
    uVar5 = uStack_40;
    piVar4 = piStack_48;
    piVar3 = piStack_4c;
    if (local_50 == 3) {
      iVar13 = 3;
LAB_01669ef8:
      local_90 = local_80;
      uVar9 = (uint)local_84 >> 0x10;
      local_8c = local_78;
      piVar8 = (int *)((uint)local_84 >> 8);
      local_94 = local_74;
      piVar7 = local_7c;
      piVar10 = local_84;
    }
    else {
      local_84 = piStack_4c;
      local_80 = piStack_48;
      local_7c = piStack_44;
      local_78 = uStack_40;
      local_74 = piStack_3c;
      iVar13 = local_50;
      if (local_50 != 1) goto LAB_01669ef8;
      *(char **)(param_3 + 8) = pcVar11;
      *(int *)(param_3 + 0xc) = iVar12;
      if (iVar12 == 0) {
LAB_01669f34:
        local_90 = (int *)&DAT_00000004;
        piVar10 = (int *)0x0;
        piVar8 = (int *)0x0;
        piVar7 = (int *)0x0;
        uVar9 = 0;
        local_8c = 0;
LAB_01669f50:
        if (piVar3 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar4);
        }
        if (uVar5 == 0) goto LAB_0166a130;
        if ((code *)*piVar6 != (code *)0x0) {
          (*(code *)*piVar6)(uVar5);
        }
        iVar13 = 1;
        if (piVar6[1] == 0) goto LAB_0166a130;
LAB_01669fac:
        thunk_FUN_016d3fb4(uVar5);
      }
      else {
        cVar2 = *pcVar11;
        *(char **)(param_3 + 8) = pcVar11 + 1;
        *(int *)(param_3 + 0xc) = iVar12 + -1;
        if (cVar1 != cVar2) {
          *(char **)(param_3 + 8) = pcVar11;
          *(int *)(param_3 + 0xc) = iVar12;
          goto LAB_01669f34;
        }
        local_58 = pcVar11 + 1;
        local_54 = iVar12 + -1;
        FUN_016794d0(&local_70,param_3);
        if (local_70 != 3) {
          if (local_70 == 1) {
            local_70 = 2;
          }
          local_28 = &local_58;
          local_38 = *(undefined4 *)(param_2 + 4);
          uStack_34 = *(undefined4 *)(param_2 + 8);
          uStack_30 = *(undefined4 *)(param_2 + 0xc);
          iStack_2c = param_3;
          FUN_00953084(&local_50,&local_70,&local_38);
          local_70 = local_50;
          local_6c = piStack_4c;
          local_68 = piStack_48;
          local_64 = piStack_44;
          local_60 = uStack_40;
          local_5c = piStack_3c;
          piVar7 = piStack_48;
          piVar8 = piStack_44;
          uVar9 = uStack_40;
          piVar10 = piStack_3c;
          if (local_50 == 3) goto LAB_0166a030;
          piVar10 = (int *)((uint)piStack_4c & 0xff);
          piVar8 = (int *)((uint)piStack_4c >> 8 & 0xff);
          uVar9 = (uint)piStack_4c >> 0x10;
          local_94 = piStack_3c;
          local_8c = uStack_40;
          local_90 = piStack_48;
          piVar7 = piStack_44;
          iVar13 = local_50;
          if (local_50 != 1) goto LAB_0166a034;
          goto LAB_01669f50;
        }
        piVar7 = piVar6;
        piVar8 = &local_70;
        uVar9 = uVar5;
        piVar10 = piVar6;
LAB_0166a030:
        iVar13 = 3;
LAB_0166a034:
        if (piVar3 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar4);
        }
        if (uVar5 != 0) {
          if ((code *)*piVar6 != (code *)0x0) {
            (*(code *)*piVar6)(uVar5);
          }
          if (piVar6[1] == 0) goto LAB_01669fb4;
          goto LAB_01669fac;
        }
      }
    }
LAB_01669fb4:
    if (iVar13 != 3) {
      if (iVar13 != 1) {
        param_1[1] = uVar9 << 0x10 | ((uint)piVar8 & 0xff) << 8 | (uint)piVar10 & 0xff;
        param_1[2] = (int)local_90;
        param_1[4] = local_8c;
        *param_1 = iVar13;
        param_1[3] = (int)piVar7;
        param_1[5] = (int)local_94;
        return;
      }
LAB_0166a130:
      *(char **)(param_3 + 8) = pcVar11;
      *(int *)(param_3 + 0xc) = iVar12;
      *param_1 = 3;
      if (((uVar9 & 0xffff) != 0 || ((uint)piVar8 & 0xff) != 0) || ((uint)piVar10 & 0xff) != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      if (local_8c == 0) {
        return;
      }
      if ((code *)*local_94 != (code *)0x0) {
        (*(code *)*local_94)(local_8c);
      }
      if (local_94[1] == 0) {
        return;
      }
      thunk_FUN_016d3fb4(local_8c);
      return;
    }
    bVar14 = *(int *)(param_3 + 0xc) == iVar12;
    iVar12 = *(int *)(param_3 + 0xc);
    if (bVar14) {
      param_1[1] = 0;
      param_1[2] = 4;
      *param_1 = 2;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
  } while( true );
}

