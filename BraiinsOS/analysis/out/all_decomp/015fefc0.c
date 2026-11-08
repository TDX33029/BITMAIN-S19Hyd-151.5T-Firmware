// FUN_015fefc0 @ 015fefc0 size=844 calls_out=13 calls_in=1
// strings: 

void FUN_015fefc0(undefined4 *param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 local_30;
  int local_2c;
  
  uVar10 = *param_3;
  if (uVar10 == 0) {
LAB_015ff014:
    uVar7 = param_3[2];
    if (uVar7 != 0) {
      uVar4 = param_3[3];
      do {
        iVar1 = FUN_016dffea(uVar4,1);
        if (iVar1 != -1) goto LAB_015ff04c;
        piVar2 = (int *)FUN_016d2bc8();
        iVar1 = *piVar2;
      } while (iVar1 == 4);
      goto LAB_015ff084;
    }
LAB_015ff04c:
    uVar4 = param_3[4];
    if (uVar4 != 0) {
      uVar8 = param_3[5];
      do {
        iVar1 = FUN_016dffea(uVar8,2);
        if (iVar1 != -1) goto LAB_015ff09c;
        piVar2 = (int *)FUN_016d2bc8();
        iVar1 = *piVar2;
      } while (iVar1 == 4);
      goto LAB_015ff084;
    }
LAB_015ff09c:
    iVar1 = param_2[0x1c];
    if (((iVar1 == 0) || (iVar3 = FUN_016d387c(param_2[0x1d],iVar1), iVar3 != -1)) &&
       ((param_2[2] == 0 || (iVar3 = FUN_016e029c(param_2[3]), iVar3 != -1)))) {
      if (*param_2 == 0) {
LAB_015ff140:
        if (((param_2[0x1a] != 0) && (iVar1 = FUN_016d370c(), iVar1 == -1)) ||
           ((param_2[0x18] != 0 && (iVar1 = FUN_016dffa4(), iVar1 == -1)))) goto LAB_015ff22c;
        if ((param_2[4] == 0) || (iVar1 = FUN_016e02a8(0,param_2[5]), iVar1 != -1)) {
          if ((*(char *)((int)param_2 + 0x7a) == '\x01') && (iVar1 = FUN_016e02b6(), iVar1 == -1))
          goto LAB_015ff22c;
          iVar1 = FUN_016da752(0xd,0);
          if (iVar1 != -1) {
            puVar9 = param_4;
            if (param_2[0x11] != 0) {
              puVar9 = (undefined4 *)param_2[0x10];
              puVar5 = puVar9 + param_2[0x11] * 2;
              do {
                (**(code **)(puVar9[1] + 0x10))(&local_30,*puVar9);
                if ((char)local_30 != '\x04') {
                  *param_1 = local_30;
                  param_1[1] = local_2c;
                  goto LAB_015ff240;
                }
                puVar9 = puVar9 + 2;
              } while (puVar9 != puVar5);
            }
            if (param_4 != (undefined4 *)0x0) {
              puVar9 = DAT_018dda24;
              DAT_018dda24 = (undefined4 *)param_4[1];
            }
            FUN_016d9c88(param_2[0x16],param_2[0xd]);
            puVar5 = (undefined4 *)FUN_016d2bc8();
            uVar6 = *puVar5;
            *(undefined1 *)param_1 = 0;
            param_1[1] = uVar6;
            if (param_4 != (undefined4 *)0x0) {
              DAT_018dda24 = puVar9;
            }
            if (1 < uVar10) {
              FUN_016dffb2(param_3[1]);
            }
            if (1 < uVar7) {
              FUN_016dffb2(param_3[3]);
            }
            goto joined_r0x015ff2f8;
          }
        }
        puVar9 = (undefined4 *)FUN_016d2bc8();
        uVar6 = *puVar9;
        *(undefined1 *)param_1 = 0;
        goto LAB_015ff23c;
      }
      iVar3 = param_2[1];
      if ((iVar1 != 0) || (iVar1 = FUN_016d387c(0,0), iVar1 != -1)) {
LAB_015ff12c:
        iVar1 = FUN_016e02c4(iVar3);
        if (iVar1 == -1) goto LAB_015ff22c;
        goto LAB_015ff140;
      }
      piVar2 = (int *)FUN_016d2bc8();
      local_2c = *piVar2;
      local_30 = 0;
      if (local_2c == 1) {
        FUN_015bf4a0(&local_30);
        goto LAB_015ff12c;
      }
      *param_1 = 0;
      param_1[1] = local_2c;
    }
    else {
LAB_015ff22c:
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar9;
      *(undefined1 *)param_1 = 0;
LAB_015ff23c:
      param_1[1] = uVar6;
    }
  }
  else {
    uVar7 = param_3[1];
    do {
      iVar1 = FUN_016dffea(uVar7,0);
      if (iVar1 != -1) goto LAB_015ff014;
      piVar2 = (int *)FUN_016d2bc8();
      iVar1 = *piVar2;
    } while (iVar1 == 4);
LAB_015ff084:
    param_1[1] = iVar1;
    *(undefined1 *)((int)param_1 + 3) = 0;
    *(undefined2 *)((int)param_1 + 1) = 0;
    *(undefined1 *)param_1 = 0;
  }
LAB_015ff240:
  if (1 < uVar10) {
    FUN_016dffb2(param_3[1]);
  }
  if (1 < param_3[2]) {
    FUN_016dffb2(param_3[3]);
  }
  uVar4 = param_3[4];
joined_r0x015ff2f8:
  if (1 < uVar4) {
    FUN_016dffb2(param_3[5]);
  }
  return;
}

