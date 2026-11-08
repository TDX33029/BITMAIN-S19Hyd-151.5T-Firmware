// FUN_0191e8a0 @ 0191e8a0 size=884 calls_out=14 calls_in=0
// strings: 

void FUN_0191e8a0(uint *param_1,uint param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined2 local_30;
  
  iVar2 = 1;
  if (0x80000000 < *param_4) {
    iVar2 = *param_4 + 0x7fffffff;
  }
  uVar1 = 1;
  if (iVar2 == 1) {
    puVar8 = param_4 + 3;
    if ((int)*puVar8 < 0) {
      uVar1 = *puVar8 ^ 0x80000000;
    }
    if (uVar1 == 0xf) {
      local_a8 = (undefined1 *)param_4[4];
      local_a4 = param_4[5];
      uStack_a0 = param_4[6];
      uStack_9c = param_4[7];
      local_98 = param_4[8];
      uStack_94 = param_4[9];
      uStack_90 = param_4[10];
      uStack_8c = param_4[0xb];
      uStack_88 = param_4[0xc];
      FUN_0191ecdc(&local_c8,param_2,*param_3);
      if (local_c8 == 0x80000029) {
        FUN_0191eda4(&local_a8);
        goto LAB_0191e904;
      }
      puVar3 = (uint *)((uint)&local_c8 | 4);
      uVar1 = puVar3[1];
      uVar6 = puVar3[2];
      param_1[1] = *puVar3;
      param_1[2] = uVar1;
      param_1[3] = uVar6;
      uVar1 = puVar3[4];
      uVar6 = puVar3[5];
      uVar7 = puVar3[6];
      param_1[4] = puVar3[3];
      param_1[5] = uVar1;
      param_1[6] = uVar6;
      param_1[7] = uVar7;
      *param_1 = local_c8;
      FUN_0191eda4(&local_a8);
    }
    else {
      if (uVar1 != 0x11) goto LAB_0191e9c4;
      iVar2 = *param_3;
      if (*(char *)(iVar2 + 0x259) == '\x01') {
        local_30 = 4;
        local_a4 = 0x10001;
        local_a8 = (undefined1 *)0x80000001;
        FUN_018f1fc4(iVar2,&local_a8,*(char *)(iVar2 + 0x31) == '\x02');
        puVar5 = &DAT_8000001c;
        *(undefined1 *)(iVar2 + 0x255) = 1;
        uVar4 = 0x1c;
      }
      else {
        uVar1 = param_4[4];
        FUN_018f3128(&local_a8,iVar2);
        puVar5 = local_a8;
        if (local_a8 == (undefined1 *)0x80000029) {
          if (*(char *)(iVar2 + 0x24a) != '\0') {
            *(char *)(iVar2 + 0x24a) = *(char *)(iVar2 + 0x24a) + -1;
            if ((char)uVar1 != '\0') {
              if ((char)uVar1 != '\x01') {
                local_30 = 4;
                local_a4 = 0xd0001;
                local_a8 = (undefined1 *)0x80000001;
                FUN_018f1fc4(iVar2,&local_a8,*(char *)(iVar2 + 0x31) == '\x02');
                puVar5 = &DAT_80000016;
                *(undefined1 *)(iVar2 + 0x255) = 1;
                uVar4 = 8;
                goto LAB_0191eba8;
              }
              if (*(int *)(iVar2 + 0x234) == -0x80000000) {
                FUN_018ff0c4(param_2 + 0x40,iVar2);
              }
            }
            FUN_018febd4(param_2 + 0x40,iVar2);
LAB_0191e904:
            uVar1 = *param_4;
            param_1[2] = (uint)&DAT_01d25370;
            iVar2 = 1;
            if (0x80000000 < uVar1) {
              iVar2 = uVar1 + 0x7fffffff;
            }
            *param_1 = 0x80000029;
            param_1[1] = param_2;
            if (iVar2 != 1) {
              if (iVar2 == 4) {
                return;
              }
              FUN_0191edf0(param_4);
              return;
            }
            if (param_4[3] != 0x8000000f) {
              FUN_0191eea4(param_4 + 3);
              uVar1 = *param_4;
            }
            if (uVar1 == 0x80000000) {
              return;
            }
            FUN_0134bd64(uVar1,param_4[1]);
            return;
          }
          puVar5 = &DAT_8000001c;
          uVar4 = 0x40;
        }
        else {
          uVar4 = (undefined1)local_a4;
          FUN_01bed4e2(&local_c8,(uint)&local_a8 | 5,0x1b);
        }
      }
LAB_0191eba8:
      *(undefined1 *)(param_1 + 1) = uVar4;
      FUN_01bed4e2((int)param_1 + 5,&local_c8,0x1b);
      *param_1 = (uint)puVar5;
    }
    uVar1 = *param_4;
    iVar2 = 1;
    if (0x80000000 < uVar1) {
      iVar2 = uVar1 + 0x7fffffff;
    }
    if (iVar2 == 1) {
      if (*puVar8 != 0x8000000f) {
        FUN_0191eea4(puVar8);
        uVar1 = *param_4;
      }
      if (uVar1 != 0x80000000) {
        FUN_0134bd64(uVar1,param_4[1]);
      }
    }
    else if (iVar2 != 4) {
      FUN_0191edf0(param_4);
    }
  }
  else {
    if (iVar2 == 4) {
      iVar2 = *param_3;
      FUN_01935918(&local_a8);
      FUN_01914ee4(iVar2 + 0x1d8,&local_a8);
      goto LAB_0191e904;
    }
LAB_0191e9c4:
    FUN_01bed4e2(&local_a8,param_4,0x78);
    FUN_0191d9a0(&local_c8,&local_a8,&DAT_0056d3c0,2,&DAT_0056d1a0,2);
    *param_1 = local_c8;
    param_1[1] = uStack_c4;
    param_1[2] = uStack_c0;
    param_1[3] = uStack_bc;
    param_1[4] = local_b8;
    param_1[5] = uStack_b4;
    param_1[6] = uStack_b0;
    param_1[7] = uStack_ac;
    FUN_0191edf0(&local_a8);
  }
  FUN_0191ee78(param_2);
  return;
}

