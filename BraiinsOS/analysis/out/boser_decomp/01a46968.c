// FUN_01a46968 @ 01a46968 size=936 calls_out=8 calls_in=2
// strings: basic string

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a46968(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  char *local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  int local_2c;
  char **local_28;
  
  iVar7 = *(int *)(param_2 + 0xc);
  if (iVar7 != 0) {
    pcVar6 = *(char **)(param_2 + 8);
    cVar1 = *pcVar6;
    *(char **)(param_2 + 8) = pcVar6 + 1;
    *(int *)(param_2 + 0xc) = iVar7 + -1;
    if (cVar1 == '\"') {
      local_80 = -0x80000000;
      puVar8 = (undefined4 *)((uint)&local_38 | 4);
      local_78 = 0;
      local_7c = 1;
      *puVar8 = &DAT_005b2300;
      puVar8[1] = 0x9207e5d;
      puVar8[2] = 0xff800021;
      local_50 = 0;
      local_4c = local_38;
      local_48 = local_34;
      local_44 = local_30;
      local_40 = local_2c;
      local_3c = 1;
      FUN_01a50a40(&local_70,&local_50,param_2);
      if (local_70 == 3) {
        iVar7 = 1;
        if (local_6c != -0x7fffffff) {
          local_80 = local_6c;
          *(int *)((uint)&local_80 | 4) = local_68;
          ((int *)((uint)&local_80 | 4))[1] = local_64;
          iVar7 = local_68;
        }
      }
      else {
        if (local_70 != 1) {
          iVar7 = 1;
          *param_1 = local_70;
          param_1[1] = local_6c;
          param_1[2] = local_68;
          param_1[3] = local_64;
          param_1[4] = local_60;
          param_1[5] = local_5c;
          goto LAB_01a46cf8;
        }
        *(char **)(param_2 + 8) = pcVar6 + 1;
        *(int *)(param_2 + 0xc) = iVar7 + -1;
        FUN_0134aee0(local_6c,local_68,4,0xc);
        FUN_012d40d0(local_60,local_5c);
        iVar7 = 1;
      }
      while( true ) {
        uVar9 = *(undefined4 *)(param_2 + 8);
        uVar10 = *(undefined4 *)(param_2 + 0xc);
        *puVar8 = &DAT_005b2300;
        puVar8[1] = 0x9207e5d;
        puVar8[2] = 0xff800021;
        local_50 = 0;
        local_4c = local_38;
        local_48 = local_34;
        local_44 = local_30;
        local_40 = local_2c;
        local_3c = 1;
        FUN_01a50a40(&local_70,&local_50,param_2);
        uVar5 = local_64;
        iVar4 = local_68;
        iVar3 = local_6c;
        if (local_70 != 3) break;
        if (local_6c == -0x7fffffff) goto LAB_01a46bd0;
        FUN_01a4a8e8(&local_80);
        if ((uint)(local_80 - local_78) < uVar5) {
          FUN_006520b4(&local_80,local_78,uVar5,1,1);
        }
        iVar2 = local_78;
        iVar7 = local_7c;
        FUN_01bed4e2(local_7c + local_78,iVar4,uVar5);
        local_78 = iVar2 + uVar5;
        if (iVar3 != -0x80000000) {
          FUN_0134bd64(iVar3,iVar4);
        }
      }
      if (local_70 != 1) {
        param_1[2] = local_68;
        param_1[3] = local_64;
        param_1[4] = local_60;
        param_1[5] = local_5c;
        *param_1 = local_70;
        param_1[1] = local_6c;
        goto LAB_01a46cf8;
      }
      *(undefined4 *)(param_2 + 8) = uVar9;
      *(undefined4 *)(param_2 + 0xc) = uVar10;
      FUN_0134aee0(local_6c,local_68,4,0xc);
      FUN_012d40d0(local_60,local_5c);
LAB_01a46bd0:
      local_58 = *(char **)(param_2 + 8);
      local_54 = *(int *)(param_2 + 0xc);
      if (local_54 == 0) {
LAB_01a46c04:
        local_40 = 0;
        local_44 = 0;
        local_4c = 0;
        local_50 = 2;
        local_28 = &local_58;
        local_34 = "basic string";
        local_48 = (char *)0x4;
        local_30 = 0xc;
        local_38 = 3;
        local_2c = param_2;
        FUN_01a5cbd0(&local_70,&local_50,&local_38);
        if (local_70 != 3) {
          FUN_01bed4e2((undefined2 *)((int)param_1 + 5),(int)&local_6c + 1,0x13);
          *(undefined1 *)(param_1 + 1) = (undefined1)local_6c;
          *param_1 = local_70;
LAB_01a46cf8:
          if (local_80 == -0x80000000) {
            return;
          }
          FUN_0134bd64(local_80,iVar7);
          return;
        }
      }
      else {
        cVar1 = *local_58;
        *(char **)(param_2 + 8) = local_58 + 1;
        *(int *)(param_2 + 0xc) = local_54 + -1;
        if (cVar1 != '\"') {
          *(char **)(param_2 + 8) = local_58;
          *(int *)(param_2 + 0xc) = local_54;
          goto LAB_01a46c04;
        }
      }
      param_1[1] = local_80;
      param_1[2] = local_7c;
      param_1[3] = local_78;
      iVar7 = 3;
      goto LAB_01a46a88;
    }
    *(char **)(param_2 + 8) = pcVar6;
    *(int *)(param_2 + 0xc) = iVar7;
  }
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined2 *)((int)param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar7 = 1;
  param_1[2] = 4;
LAB_01a46a88:
  *param_1 = iVar7;
  return;
}

