// FUN_011de778 @ 011de778 size=1760 calls_out=5 calls_in=1
// strings: Parse | base.;

byte FUN_011de778(int *param_1,int *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  int *local_4c;
  int *local_48;
  byte local_44;
  byte local_43;
  int *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int **local_30;
  undefined *local_2c;
  int **local_28;
  int local_24;
  
  if (*param_1 == -0x80000000) {
    local_4c = param_1 + 4;
    iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"Parse",5);
    bVar3 = 1;
    local_48 = param_2;
    if (iVar4 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a79,3);
        bVar3 = 1;
        if (iVar4 == 0) {
          iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003cd59d,3);
          bVar3 = 1;
          if (iVar4 == 0) {
            iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
            bVar3 = 1;
            if (iVar4 == 0) {
              iVar4 = FUN_00faa4e8(param_1[2],param_1[3],*param_2,param_2[1]);
              goto joined_r0x011dec14;
            }
          }
        }
      }
      else {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7e,3);
        bVar3 = 1;
        if (iVar4 == 0) {
          local_28 = &local_40;
          local_30 = (int **)*param_2;
          local_2c = (undefined *)param_2[1];
          local_40 = (int *)CONCAT31(local_40._1_3_,1);
          iVar4 = FUN_00fb1f64(&local_30,&DAT_003cd59d,3);
          if (((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar4 == 0)) &&
             (iVar4 = FUN_00faa4e8(param_1[2],param_1[3],&local_30,&DAT_01880dc4), iVar4 == 0)) {
            iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
            local_43 = 1;
            local_44 = (byte)iVar4;
joined_r0x011dec14:
            bVar3 = 1;
            if (iVar4 == 0) {
              bVar3 = 1;
              if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                bVar3 = 1;
                if (iVar4 == 0) {
                  iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003cd5a0,0xc);
                  bVar3 = 1;
                  if (iVar4 == 0) {
                    iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
                    bVar3 = 1;
                    if (iVar4 == 0) {
                      bVar3 = FUN_00a7420c((char)param_1[6],param_2);
                    }
                  }
                }
              }
              else {
                local_40 = (int *)*param_2;
                local_3c = param_2[1];
                local_38 = &local_31;
                local_28 = (int **)param_2[2];
                local_24 = param_2[3];
                local_30 = &local_40;
                local_31 = 1;
                local_2c = &DAT_01880dc4;
                iVar4 = FUN_00fb1f64(local_30,&DAT_003cd5a0,0xc);
                if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2), iVar4 == 0)) {
                  if ((char)param_1[6] == '\x01') {
                    uVar9 = 4;
                    puVar8 = &DAT_00568b2c;
                  }
                  else {
                    uVar9 = 5;
                    puVar8 = &DAT_00414fdc;
                  }
                  iVar4 = FUN_00faace8(&local_30,puVar8,uVar9);
                  if (iVar4 == 0) {
                    bVar3 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
                  }
                  else {
                    bVar3 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    local_43 = 1;
    local_44 = bVar3;
    FUN_00fb2258(&local_48,&DAT_00418447,5,&local_4c,FUN_011ce984);
    bVar3 = local_43 | local_44;
    if (local_43 != 1 || (local_44 & 1) != 0) {
LAB_011de80c:
      return bVar3 & 1;
    }
    if ((*(byte *)((int)local_48 + 10) & 0x80) != 0) {
      iVar4 = *local_48;
      iVar6 = local_48[1];
      goto LAB_011ded44;
    }
    iVar4 = *local_48;
    iVar6 = local_48[1];
  }
  else {
    iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003cd5ac,7);
    bVar3 = 1;
    uVar2 = 1;
    local_40 = param_2;
    if (iVar4 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a79,3);
        uVar2 = 1;
        if (iVar4 == 0) {
          iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003cd59d,3);
          uVar2 = 1;
          if (iVar4 == 0) {
            iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
            uVar2 = 1;
            if (iVar4 == 0) {
              uVar2 = FUN_00faa4e8(param_1[1],param_1[2],*param_2,param_2[1]);
            }
          }
        }
      }
      else {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7e,3);
        uVar2 = 1;
        if (iVar4 == 0) {
          local_28 = &local_48;
          local_30 = (int **)*param_2;
          local_2c = (undefined *)param_2[1];
          local_48 = (int *)CONCAT31(local_48._1_3_,1);
          iVar4 = FUN_00fb1f64(&local_30,&DAT_003cd59d,3);
          if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar4 == 0)) {
            iVar4 = FUN_00faa4e8(param_1[1],param_1[2],&local_30,&DAT_01880dc4);
            if (iVar4 == 0) {
              uVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
      }
    }
    local_3c = CONCAT22(local_3c._2_2_,0x100);
    local_3c = CONCAT31(local_3c._1_3_,uVar2);
    FUN_00fb2258(&local_40,"base.,",4,param_1 + 3,FUN_011dcc98);
    piVar1 = local_40;
    if ((char)local_3c != '\0') goto LAB_011de80c;
    if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
      puVar5 = &DAT_0041950f;
      if (local_3c._1_1_ == '\0') {
        puVar5 = &DAT_00414a79;
      }
      uVar9 = 3;
      if (local_3c._1_1_ != '\0') {
        uVar9 = 2;
      }
      iVar4 = (**(code **)(local_40[1] + 0xc))(*local_40,puVar5,uVar9);
      if (((iVar4 != 0) ||
          (iVar4 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00418447,5), iVar4 != 0)) ||
         (iVar4 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2), iVar4 != 0))
      goto LAB_011de80c;
      iVar4 = (**(code **)(piVar1[1] + 0xc))
                        (*piVar1,*(undefined4 *)(&DAT_018b22c8 + (uint)*(byte *)(param_1 + 0xd) * 4)
                         ,*(undefined4 *)(&DAT_00420478 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      if ((local_3c._1_1_ == '\0') &&
         (iVar4 = (**(code **)(local_40[1] + 0xc))(*local_40,&DAT_00414a7e,3), iVar4 != 0))
      goto LAB_011de80c;
      local_28 = &local_48;
      bVar3 = 1;
      local_30 = (int **)*piVar1;
      local_2c = (undefined *)piVar1[1];
      local_48 = (int *)CONCAT31(local_48._1_3_,1);
      iVar4 = FUN_00fb1f64(&local_30,&DAT_00418447,5);
      if ((iVar4 != 0) ||
         ((iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar4 != 0 ||
          (iVar4 = FUN_00fb1f64(&local_30,
                                *(undefined4 *)(&DAT_018b22d4 + (uint)*(byte *)(param_1 + 0xd) * 4),
                                *(undefined4 *)(&DAT_00420484 + (uint)*(byte *)(param_1 + 0xd) * 4))
          , iVar4 != 0)))) goto LAB_011de80c;
      iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    }
    bVar3 = 1;
    if (iVar4 != 0) goto LAB_011de80c;
    if ((*(byte *)((int)piVar1 + 10) & 0x80) != 0) {
      iVar4 = *piVar1;
      iVar6 = piVar1[1];
LAB_011ded44:
      pcVar10 = *(code **)(iVar6 + 0xc);
      uVar9 = 1;
      pcVar7 = "}";
      goto LAB_011ded54;
    }
    iVar4 = *piVar1;
    iVar6 = piVar1[1];
  }
  pcVar10 = *(code **)(iVar6 + 0xc);
  uVar9 = 2;
  pcVar7 = " }";
LAB_011ded54:
  bVar3 = (*pcVar10)(iVar4,pcVar7,uVar9);
  return bVar3 & 1;
}

