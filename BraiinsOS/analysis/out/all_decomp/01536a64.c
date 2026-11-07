// FUN_01536a64 @ 01536a64 size=760 calls_out=8 calls_in=0
// strings: 

void FUN_01536a64(undefined4 *param_1,uint *param_2,int *param_3,uint *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint local_160;
  uint local_15c;
  undefined1 auStack_158 [4];
  undefined1 auStack_154 [92];
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined1 auStack_d4 [116];
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  if ((undefined1 *)*param_4 == &DAT_80000004) {
    iVar4 = *param_3;
    if (*(char *)(iVar4 + 0x251) != '\0') {
      *(undefined1 *)(iVar4 + 0x32) = 2;
      uVar6 = param_2[0x40];
      FUN_016dd1aa(auStack_d4,param_2 + 0x23,0x74);
      FUN_016dd1aa(auStack_158,param_2 + 2,0x60);
      local_f8 = param_2[0x1a];
      uStack_f4 = param_2[0x1b];
      uStack_f0 = param_2[0x1c];
      uStack_ec = param_2[0x1d];
      local_e8 = param_2[0x1e];
      uStack_e4 = param_2[0x1f];
      uStack_e0 = param_2[0x20];
      uStack_dc = param_2[0x21];
      uStack_d8 = param_2[0x22];
      local_5c = param_2[0x41];
      uStack_58 = param_2[0x42];
      uStack_54 = param_2[0x43];
      uStack_50 = param_2[0x44];
      uStack_4c = param_2[0x45];
      local_2c = (undefined1)param_2[0x4d];
      local_48 = param_2[0x46];
      uStack_44 = param_2[0x47];
      uStack_40 = param_2[0x48];
      local_3c = param_2[0x49];
      uStack_38 = param_2[0x4a];
      uStack_34 = param_2[0x4b];
      uStack_30 = param_2[0x4c];
      local_160 = *param_2;
      local_15c = param_2[1];
      local_2b = *(undefined1 *)((int)param_2 + 0x135);
      local_60 = uVar6;
      iVar4 = thunk_FUN_016d4a50(0x138);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x138);
      }
      FUN_016dd1aa(iVar4,&local_160,0x138);
      uVar6 = *param_4;
      param_1[2] = &PTR_FUN_018a7ad0;
      iVar2 = 1;
      if (0x80000000 < uVar6) {
        iVar2 = uVar6 + 0x7fffffff;
      }
      *param_1 = 0x80000029;
      param_1[1] = iVar4;
      switch(iVar2) {
      case 0:
      case 3:
        break;
      case 1:
        FUN_015396bc(param_4 + 3);
        if (*param_4 != 0x80000000 && *param_4 != 0) {
LAB_01536d5c:
          thunk_FUN_016d3fb4(param_4[1]);
          thunk_FUN_016d3fb4(param_2);
          return;
        }
        break;
      default:
        param_4 = param_4 + 1;
        if (*param_4 != 0x80000000 && *param_4 != 0) goto LAB_01536d5c;
      }
      goto switchD_01536b7c_caseD_0;
    }
    local_15c = 0x10001;
    local_160 = 0x80000001;
    local_e8 = CONCAT22(local_e8._2_2_,4);
    FUN_01525ed4(iVar4,&local_160,*(char *)(iVar4 + 0x31) == '\x02');
    iVar2 = 1;
    *(undefined1 *)(iVar4 + 0x255) = 1;
    *(undefined1 *)(param_1 + 1) = 0x1b;
    uVar6 = *param_4;
    *param_1 = &DAT_8000001c;
    if (0x80000000 < uVar6) {
      iVar2 = uVar6 + 0x7fffffff;
    }
    switch(iVar2) {
    case 0:
    case 3:
      break;
    case 1:
      FUN_015396bc(param_4 + 3);
      if (*param_4 != 0x80000000 && *param_4 != 0) {
LAB_01536d08:
        uVar6 = param_4[1];
LAB_01536d30:
        thunk_FUN_016d3fb4(uVar6);
      }
      break;
    default:
      param_4 = param_4 + 1;
      if (*param_4 != 0x80000000 && *param_4 != 0) goto LAB_01536d08;
    }
  }
  else {
    puVar5 = &local_160;
    FUN_016dd1aa(puVar5,param_4,0x78);
    uVar6 = local_160;
    puVar3 = (undefined2 *)thunk_FUN_016d4a50(2);
    if (puVar3 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,2);
    }
    iVar4 = 1;
    param_1[1] = 1;
    param_1[3] = 1;
    if (0x80000000 < uVar6) {
      iVar4 = uVar6 + 0x7fffffff;
    }
    *param_1 = &DAT_80000013;
    uVar1 = (&UNK_00422668)[iVar4];
    param_1[2] = puVar3;
    *puVar3 = 0;
    *(undefined1 *)(param_1 + 4) = uVar1;
    uVar6 = local_15c;
    switch(iVar4) {
    case 0:
    case 3:
      break;
    case 1:
      FUN_015396bc(auStack_154);
      uVar6 = local_160;
      if (local_160 != 0x80000000) {
LAB_01536d24:
        if (uVar6 != 0) {
          uVar6 = puVar5[1];
          goto LAB_01536d30;
        }
      }
      break;
    case 2:
      if (local_15c != 0x80000000) {
        puVar5 = (uint *)((uint)puVar5 | 4);
        goto LAB_01536d24;
      }
      break;
    default:
      if (local_15c != 0x80000000) {
        puVar5 = (uint *)((uint)&local_160 | 4);
        goto LAB_01536d24;
      }
    }
  }
  FUN_01537388(param_2);
switchD_01536b7c_caseD_0:
  thunk_FUN_016d3fb4(param_2);
  return;
}

