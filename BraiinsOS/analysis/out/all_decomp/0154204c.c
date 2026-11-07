// FUN_0154204c @ 0154204c size=1052 calls_out=13 calls_in=0
// strings: 

void FUN_0154204c(uint *param_1,uint param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint local_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined1 *local_c8;
  uint local_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  int local_a8;
  int *local_a4;
  undefined1 local_a0;
  undefined2 local_30;
  
  iVar4 = 1;
  if (0x80000000 < *param_4) {
    iVar4 = *param_4 + 0x7fffffff;
  }
  uVar1 = 1;
  if (iVar4 == 1) {
    puVar6 = param_4 + 3;
    if ((int)*puVar6 < 0) {
      uVar1 = *puVar6 ^ 0x80000000;
    }
    if (uVar1 == 0xf) {
      local_f0 = param_4[4];
      uStack_ec = param_4[5];
      uStack_e8 = param_4[6];
      uStack_e4 = param_4[7];
      local_e0 = param_4[8];
      local_dc = param_4[9];
      uStack_d8 = param_4[10];
      uStack_d4 = param_4[0xb];
      uStack_d0 = param_4[0xc];
      iVar5 = *param_3;
      iVar4 = FUN_01515df8(local_e0,local_dc);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar5 + 0x24c) + 1;
        if (*(int *)(iVar5 + 0x24c) == -1) {
          iVar4 = -1;
        }
        *(int *)(iVar5 + 0x24c) = iVar4;
        local_a8 = iVar5 + 0x38;
        local_a4 = (int *)0x0;
        if (*(int *)(iVar5 + 0x228) != -0x80000000) {
          local_a4 = (int *)(iVar5 + 0x228);
        }
        local_a0 = *(undefined1 *)(iVar5 + 0x259);
        FUN_01542558(&local_c8,param_2,&local_a8,&local_f0);
        if (local_c8 == (undefined1 *)0x80000029) {
          FUN_01542ff8(&local_f0);
          goto LAB_0154209c;
        }
      }
      else {
        local_a4 = (int *)0xd0001;
        local_a8 = -0x7fffffff;
        local_30 = 4;
        FUN_01525ed4(iVar5,&local_a8,*(char *)(iVar5 + 0x31) == '\x02');
        *(undefined1 *)(iVar5 + 0x255) = 1;
        local_c4 = CONCAT31(local_c4._1_3_,6);
        local_c8 = &DAT_8000001c;
      }
      *param_1 = (uint)local_c8;
      param_1[1] = local_c4;
      param_1[2] = uStack_c0;
      param_1[3] = uStack_bc;
      param_1[4] = local_b8;
      param_1[5] = uStack_b4;
      param_1[6] = uStack_b0;
      param_1[7] = uStack_ac;
      FUN_01542ff8(&local_f0);
    }
    else {
      if (uVar1 != 0x11) goto LAB_01542160;
      iVar4 = *param_3;
      if (*(char *)(iVar4 + 0x259) == '\x01') {
        local_a4 = (int *)0x10001;
        local_a8 = -0x7fffffff;
        local_30 = 4;
        FUN_01525ed4(iVar4,&local_a8,*(char *)(iVar4 + 0x31) == '\x02');
        uVar3 = 0x1c;
        *(undefined1 *)(iVar4 + 0x255) = 1;
        puVar2 = &DAT_8000001c;
      }
      else if (*(char *)(iVar4 + 0x251) == '\0') {
        local_a4 = (int *)0x10001;
        local_a8 = -0x7fffffff;
        local_30 = 4;
        FUN_01525ed4(iVar4,&local_a8,*(char *)(iVar4 + 0x31) == '\x02');
        uVar3 = 0x1b;
        *(undefined1 *)(iVar4 + 0x255) = 1;
        puVar2 = &DAT_8000001c;
      }
      else {
        if (*(char *)(iVar4 + 0x24a) != '\0') {
          uVar1 = param_4[4];
          *(char *)(iVar4 + 0x24a) = *(char *)(iVar4 + 0x24a) + -1;
          if ((char)uVar1 != '\0') {
            if ((char)uVar1 != '\x01') {
              local_a4 = (int *)0xd0001;
              local_a8 = -0x7fffffff;
              local_30 = 4;
              FUN_01525ed4(iVar4,&local_a8,*(char *)(iVar4 + 0x31) == '\x02');
              uVar3 = 8;
              *(undefined1 *)(iVar4 + 0x255) = 1;
              puVar2 = (undefined1 *)0x80000016;
              goto LAB_01542404;
            }
            if (*(int *)(iVar4 + 0x234) == -0x80000000) {
              FUN_01559340(param_2 + 0x40,iVar4);
            }
          }
          FUN_01557770(param_2 + 0x40,iVar4);
          goto LAB_0154209c;
        }
        puVar2 = &DAT_8000001c;
        uVar3 = 0x40;
      }
LAB_01542404:
      *(undefined1 *)(param_1 + 1) = uVar3;
      *param_1 = (uint)puVar2;
    }
    uVar1 = *param_4;
    iVar4 = 1;
    if (0x80000000 < uVar1) {
      iVar4 = uVar1 + 0x7fffffff;
    }
    if (iVar4 == 1) {
      if (*puVar6 != 0x8000000f) {
        FUN_015432d8(puVar6);
        uVar1 = *param_4;
      }
      if ((uVar1 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(param_4[1]);
      }
    }
    else if (iVar4 != 4) {
      FUN_015430a0(param_4);
    }
  }
  else {
    if (iVar4 == 4) {
      local_100 = param_4[1];
      uStack_fc = param_4[2];
      uStack_f8 = param_4[3];
      FUN_01527730(*param_3,&local_100);
LAB_0154209c:
      uVar1 = *param_4;
      param_1[2] = (uint)&DAT_018a7d10;
      iVar4 = 1;
      if (0x80000000 < uVar1) {
        iVar4 = uVar1 + 0x7fffffff;
      }
      *param_1 = 0x80000029;
      param_1[1] = param_2;
      if (iVar4 != 1) {
        if (iVar4 == 4) {
          return;
        }
        FUN_015430a0(param_4);
        return;
      }
      if (param_4[3] != 0x8000000f) {
        FUN_015432d8();
        uVar1 = *param_4;
      }
      if ((uVar1 & 0x7fffffff) == 0) {
        return;
      }
      param_2 = param_4[1];
      goto LAB_015421c4;
    }
LAB_01542160:
    FUN_016dd1aa(&local_a8,param_4,0x78);
    FUN_015622b4(&local_f0,&local_a8,&DAT_0056762c,2,&DAT_00567450,2);
    *param_1 = local_f0;
    param_1[1] = uStack_ec;
    param_1[2] = uStack_e8;
    param_1[3] = uStack_e4;
    param_1[4] = local_e0;
    param_1[5] = local_dc;
    param_1[6] = uStack_d8;
    param_1[7] = uStack_d4;
    FUN_015430a0(&local_a8);
  }
  FUN_01543148(param_2);
LAB_015421c4:
  thunk_FUN_016d3fb4(param_2);
  return;
}

