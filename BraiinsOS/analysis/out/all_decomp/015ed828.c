// FUN_015ed828 @ 015ed828 size=2812 calls_out=14 calls_in=22
// strings: Error | strerror_r failure

undefined4 FUN_015ed828(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  int **ppiVar11;
  bool bVar12;
  undefined4 local_bc;
  int *local_b8;
  char local_b4;
  char local_b3;
  int ***local_b0;
  undefined *local_ac;
  int ***local_a8;
  int local_a4;
  int **local_2c;
  int local_28;
  int **local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_bc = *(undefined4 *)(param_1 + 4);
    local_b4 = (**(code **)(param_2[1] + 0xc))(*param_2,"Os",2);
    local_b3 = '\0';
    local_b8 = param_2;
    FUN_00fb2258(&local_b8,&DAT_00568e58,4,&local_bc,FUN_015ee4a4);
    uVar3 = FUN_015e6e98(local_bc);
    piVar2 = local_b8;
    iVar5 = 1;
    if (local_b4 == '\0') {
      if ((*(byte *)((int)local_b8 + 10) & 0x80) == 0) {
        puVar7 = &DAT_0041950f;
        if (local_b3 == '\0') {
          puVar7 = &DAT_00414a79;
        }
        uVar6 = 3;
        if (local_b3 != '\0') {
          uVar6 = 2;
        }
        iVar4 = (**(code **)(local_b8[1] + 0xc))(*local_b8,puVar7,uVar6);
        if (((iVar4 == 0) &&
            (iVar4 = (**(code **)(piVar2[1] + 0xc))(*piVar2,&DAT_005691b4,4), iVar4 == 0)) &&
           (iVar4 = (**(code **)(piVar2[1] + 0xc))(*piVar2,&DAT_00414a7c,2), iVar4 == 0)) {
          iVar5 = FUN_015ee464(uVar3,*piVar2,piVar2[1]);
        }
      }
      else if ((local_b3 != '\0') ||
              (iVar4 = (**(code **)(local_b8[1] + 0xc))(*local_b8,&DAT_00414a7e,3), iVar4 == 0)) {
        local_a8 = &local_2c;
        local_b0 = (int ***)*piVar2;
        local_ac = (undefined *)piVar2[1];
        local_2c = (int **)CONCAT31(local_2c._1_3_,1);
        iVar4 = FUN_00fb1f64(&local_b0,&DAT_005691b4,4);
        if ((iVar4 == 0) &&
           ((iVar4 = FUN_00fb1f64(&local_b0,&DAT_00414a7c,2), iVar4 == 0 &&
            (iVar4 = FUN_015ee464(uVar3,&local_b0,&DAT_01880dc4), iVar4 == 0)))) {
          iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a81,2);
        }
      }
    }
    uVar6 = local_bc;
    FUN_016dd606(&local_b0,0,0x80);
    iVar4 = FUN_016dd866(uVar6,&local_b0,0x80);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("strerror_r failure",0x25,&DAT_018aac4c);
    }
    uVar6 = FUN_016dd8a2(&local_b0);
    FUN_006008c8(&local_2c,&local_b0,uVar6);
    if (local_2c == (int **)&DAT_80000000) {
      if (local_24 == (int **)0x0) {
        iVar4 = 1;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(local_24);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_24);
        }
      }
      FUN_016dd1aa(iVar4,local_28,local_24);
      ppiVar11 = local_24;
      local_28 = iVar4;
      if (iVar5 == 0) goto LAB_015ee004;
LAB_015ee0f8:
      uVar6 = 1;
    }
    else {
      ppiVar11 = local_2c;
      iVar4 = local_28;
      if (iVar5 != 0) goto LAB_015ee0f8;
LAB_015ee004:
      piVar2 = local_b8;
      local_28 = iVar4;
      if ((*(byte *)((int)local_b8 + 10) & 0x80) == 0) {
        iVar5 = (**(code **)(local_b8[1] + 0xc))(*local_b8,&DAT_0041950f,2);
        if (((iVar5 == 0) &&
            (iVar5 = (**(code **)(piVar2[1] + 0xc))(*piVar2,&DAT_00418440,7), iVar5 == 0)) &&
           (iVar5 = (**(code **)(piVar2[1] + 0xc))(*piVar2,&DAT_00414a7c,2), iVar5 == 0)) {
          iVar5 = FUN_00faa4e8(iVar4,local_24,*piVar2,piVar2[1]);
          goto LAB_015ee134;
        }
        goto LAB_015ee0f8;
      }
      local_b0 = (int ***)*local_b8;
      local_ac = (undefined *)local_b8[1];
      local_2c = (int **)CONCAT31(local_2c._1_3_,1);
      local_a8 = &local_2c;
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00418440,7);
      if (((iVar5 != 0) || (iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a7c,2), iVar5 != 0)) ||
         (iVar5 = FUN_00faa4e8(iVar4,local_24,&local_b0,&DAT_01880dc4), iVar5 != 0))
      goto LAB_015ee0f8;
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a81,2);
LAB_015ee134:
      uVar6 = 1;
      if (iVar5 == 0) {
        bVar12 = (local_b8[2] & 0x800000U) != 0;
        pcVar8 = " }";
        if (bVar12) {
          pcVar8 = "}";
        }
        uVar6 = 1;
        if (!bVar12) {
          uVar6 = 2;
        }
        uVar6 = (**(code **)(local_b8[1] + 0xc))(*local_b8,pcVar8,uVar6);
      }
    }
    if (ppiVar11 != (int **)0x0) {
      thunk_FUN_016d3fb4(local_28);
    }
    break;
  case 1:
    uVar10 = (uint)(byte)param_1[1];
    iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568264,4);
    uVar6 = 1;
    if (iVar5 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = (**(code **)(param_2[1] + 0xc))
                          (*param_2,(&PTR_DAT_018b531c)[uVar10],
                           *(undefined4 *)(&DAT_00424098 + uVar10 * 4));
      }
      else {
        iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
        if (iVar5 != 0) {
          return 1;
        }
        local_a8 = &local_2c;
        local_2c = (int **)CONCAT31(local_2c._1_3_,1);
        local_b0 = (int ***)*param_2;
        local_ac = (undefined *)param_2[1];
        iVar5 = FUN_00fb1f64(&local_b0,(&PTR_DAT_018b53c4)[uVar10],
                             *(undefined4 *)(&DAT_00424140 + uVar10 * 4));
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a81,2);
      }
      uVar6 = 1;
      if (iVar5 == 0) {
        uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
        return uVar6;
      }
    }
    break;
  case 2:
    puVar9 = *(undefined4 **)(param_1 + 4);
    iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,"Error",5);
    if (iVar5 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a79,3);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005691b4,4);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_015ee464(*(undefined1 *)(puVar9 + 2),*param_2,param_2[1]);
      if (iVar5 != 0) {
        return 1;
      }
    }
    else {
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7e,3);
      if (iVar5 != 0) {
        return 1;
      }
      local_a8 = &local_2c;
      local_b0 = (int ***)*param_2;
      local_ac = (undefined *)param_2[1];
      local_2c = (int **)CONCAT31(local_2c._1_3_,1);
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_005691b4,4);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a7c,2);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_015ee464(*(undefined1 *)(puVar9 + 2),&local_b0,&DAT_01880dc4);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a81,2);
      if (iVar5 != 0) {
        return 1;
      }
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (((iVar5 != 0) ||
          (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418440,7), iVar5 != 0)) ||
         (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar5 != 0)) {
        return 1;
      }
      iVar5 = FUN_00faa4e8(*puVar9,puVar9[1],*param_2,param_2[1]);
    }
    else {
      local_b0 = (int ***)*param_2;
      local_ac = (undefined *)param_2[1];
      local_a8 = &local_2c;
      local_2c = (int **)CONCAT31(local_2c._1_3_,1);
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00418440,7);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a7c,2);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00faa4e8(*puVar9,puVar9[1],&local_b0,&DAT_01880dc4);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a81,2);
    }
    uVar6 = 1;
    if (iVar5 == 0) {
      bVar1 = *(byte *)((int)param_2 + 10);
      goto LAB_015ee2c8;
    }
    break;
  case 3:
    puVar9 = *(undefined4 **)(param_1 + 4);
    iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041481a,6);
    if (iVar5 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a79,3);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005691b4,4);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_015ee464(*(undefined1 *)(puVar9 + 2),*param_2,param_2[1]);
      if (iVar5 != 0) {
        return 1;
      }
    }
    else {
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7e,3);
      if (iVar5 != 0) {
        return 1;
      }
      local_a8 = &local_2c;
      local_b0 = (int ***)*param_2;
      local_ac = (undefined *)param_2[1];
      local_2c = (int **)CONCAT31(local_2c._1_3_,1);
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_005691b4,4);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a7c,2);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_015ee464(*(undefined1 *)(puVar9 + 2),&local_b0,&DAT_01880dc4);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_b0,&DAT_00414a81,2);
      if (iVar5 != 0) {
        return 1;
      }
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418447,5);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(puVar9[1] + 0xc))(*puVar9,param_2);
    }
    else {
      local_a8 = (int ***)param_2[2];
      local_a4 = param_2[3];
      local_2c = (int **)*param_2;
      local_28 = param_2[1];
      local_b0 = &local_2c;
      local_b8 = (int *)CONCAT31(local_b8._1_3_,1);
      local_24 = &local_b8;
      local_ac = &DAT_01880dc4;
      iVar5 = FUN_00fb1f64(local_b0,&DAT_00418447,5);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_00fb1f64(&local_2c,&DAT_00414a7c,2);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(puVar9[1] + 0xc))(*puVar9,&local_b0);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = (**(code **)(local_ac + 0xc))(local_b0,&DAT_00414a81,2);
    }
    if (iVar5 != 0) {
      return 1;
    }
    bVar1 = *(byte *)((int)param_2 + 10);
LAB_015ee2c8:
    if ((bVar1 & 0x80) == 0) {
      uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2," }",2);
      return uVar6;
    }
    uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
    return uVar6;
  }
  return uVar6;
}

